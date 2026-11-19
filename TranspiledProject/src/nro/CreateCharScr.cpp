#include "nro/CreateCharScr.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/Menu.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/image/MyStream.h"
#include "java/io/FilterInputStream.h"
#include "nro/Controller.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "java/lang/Throwable.h"
#include "nro/TileMap.h"
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "nro/BgItem.h"
#include "nro/ServerListScreen.h"
#include "nro/ServerScr.h"
#include "java/util/Hashtable.h"
#include "lib/mGraphics.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "nro/mHashTable.h"
#include "nro/CreateCharScr.h"
#include "nro/MapTemplate.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Small.h"
#include "nro/Rms.h"
#include "nro/Char.h"

extern "C" {

jbool SF_nro_CreateCharScr_isCreateChar;

void mark_nro_CreateCharScr(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_mScreen(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_CreateCharScr *) object;
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
	if (self->F_cmdSelectSv)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdSelectSv)->clazz)->markFunction)((jobject) self->F_cmdSelectSv, mark, depth + 1);
	if (self->F_bgID)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bgID)->clazz)->markFunction)((jobject) self->F_bgID, mark, depth + 1);
	if (self->F_i)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_i)->clazz)->markFunction)((jobject) self->F_i, mark, depth + 1);
}

void clinit_nro_CreateCharScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
}

void SM_nro_CreateCharScr_loadMapTableFromResource_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CreateCharScr:loadMapTableFromResource", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_CreateCharScr(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(27);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_19;
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(29);
	frame[1].i = (jint(0));
	}
label_20:;
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_15;
	}
	{
	LINE_NUMBER(30);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/mymap/mapTable"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(31);
	frame[3].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(33);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(35);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	jint temp1 = frame[1].i;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"MapTemplate.vCurrItem[a] "_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(37);
	frame[5].i = (jint(0));
	}
label_26:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(38);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[3].o));
	frame[6].i = temp0;
	LINE_NUMBER(39);
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[3].o));
	frame[7].i = temp1;
	LINE_NUMBER(40);
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[3].o));
	frame[8].i = temp2;
	LINE_NUMBER(41);
	sp[0].o = (jobject)SM_nro_TileMap_getBIById_int_R_nro_BgItem(ctx, (frame[6].i));
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_nro_TileMap_getBIById_int_R_nro_BgItem(ctx, (frame[6].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(44);
	clinit_nro_BgItem(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_BgItem);
	init_nro_BgItem(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	((nro_BgItem *) NULL_CHECK(sp[0].o))->F_id = (frame[6].i);
	LINE_NUMBER(45);
	((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage = ((jint)((nro_BgItem *) NULL_CHECK((frame[9].o)))->F_idImage);
	LINE_NUMBER(46);
	((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_dx = ((jint)((nro_BgItem *) NULL_CHECK((frame[9].o)))->F_dx);
	LINE_NUMBER(47);
	((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_dy = ((jint)((nro_BgItem *) NULL_CHECK((frame[9].o)))->F_dy);
	LINE_NUMBER(48);
	((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_x = ((frame[7].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size));
	LINE_NUMBER(49);
	((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_y = ((frame[8].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size));
	LINE_NUMBER(50);
	((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_layer = ((jint)((nro_BgItem *) NULL_CHECK((frame[9].o)))->F_layer);
	LINE_NUMBER(51);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[10].o));
	LINE_NUMBER(52);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage));
	jint temp0 = (jint)((func_nro_mHashTable_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_43;
	}
	{
	LINE_NUMBER(53);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(55);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bgItem"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(ctx, (frame[12].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[12].o)))->length));
	frame[11].o = sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(59);
	if ((frame[11].o) == nullptr) goto label_49;
	}
	{
	LINE_NUMBER(60);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[11].o));
	goto label_51;
	}
label_49:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(-2013265920));
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createRGBImage_Array1_int_int_int_boolean_R_javax_microedition_lcdui_Image(ctx, sp[0].o, (jint(1)), (jint(1)), (jint(1)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getBgTemplate_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getBgTemplate_short])(ctx, sp[0].o, ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage));
	LINE_NUMBER(78);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[11].o));
	}
label_51:;
	{
	LINE_NUMBER(81);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_vKeysLast;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_43:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage));
	jint temp0 = (jint)SM_nro_BgItem_isExistKeyLast_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_31;
	}
	{
	LINE_NUMBER(85);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_vKeysNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(37);
	INST_IINC(5, 1);
	goto label_26;
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(90);
	if ((frame[3].o) == nullptr) goto label_55;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(92);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(95);
	goto label_55;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(93);
	frame[4].o = sp[0].o;
	LINE_NUMBER(94);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	LINE_NUMBER(95);
	goto label_55;
	}
label_6:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(90);
	INST_ASTORE(13);
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_58;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(92);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(95);
	goto label_58;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(93);
	frame[14].o = sp[0].o;
	LINE_NUMBER(94);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[14].o));
	}
label_58:;
	{
	LINE_NUMBER(97);
	throwException(ctx, (frame[13].o));	}
label_55:;
	{
	LINE_NUMBER(29);
	INST_IINC(1, 1);
	goto label_20;
	}
label_15:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(102);
	goto label_19;
label_16:;
	{
	sp -= 1;
	LINE_NUMBER(100);
	frame[1].o = sp[0].o;
	LINE_NUMBER(101);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_19:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_nro_CreateCharScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CreateCharScr:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_CreateCharScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(106);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_dy = (45);
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_bgID = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_i = (jref) sp[1].o;
	LINE_NUMBER(24);
	((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(108);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_23;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(3)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (39);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (40);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (41);
	frame[1].o = sp[0].o;
	LINE_NUMBER(111);
	frame[2].i = (jint(0));
	}
label_26:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_23;
	}
	{
	LINE_NUMBER(112);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/mymap/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(113);
	frame[4].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(115);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(116);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmw;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jchar(temp1));
	LINE_NUMBER(117);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmh;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (jchar(temp3));
	LINE_NUMBER(118);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_maps;
	jint temp4 = frame[2].i;
	jint temp5 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[4].o));
	sp[1].o = (jobject) createArray(ctx, &class_int, temp5);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	LINE_NUMBER(120);
	frame[5].i = (jint(0));
	}
label_33:;
	{
	jint temp0 = frame[5].i;
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmw;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i));
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmh;
	if (temp0 >= (temp1 * ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))))) goto label_34;
	}
	{
	LINE_NUMBER(121);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_maps;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(120);
	INST_IINC(5, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(124);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_types;
	jint temp0 = frame[2].i;
	clinit_nro_MapTemplate(ctx);
	sp[1].o = (jobject)SF_nro_MapTemplate_maps;
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->length));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(126);
	if ((frame[4].o) == nullptr) goto label_37;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(128);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(131);
	goto label_37;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(129);
	frame[5].o = sp[0].o;
	LINE_NUMBER(130);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	LINE_NUMBER(131);
	goto label_37;
	}
label_6:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(126);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_40;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(128);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(131);
	goto label_40;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(129);
	frame[7].o = sp[0].o;
	LINE_NUMBER(130);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[7].o));
	}
label_40:;
	{
	LINE_NUMBER(133);
	throwException(ctx, (frame[6].o));	}
label_37:;
	{
	LINE_NUMBER(111);
	INST_IINC(2, 1);
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(3)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (39);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (40);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (41);
	SM_nro_CreateCharScr_loadMapTableFromResource_Array1_byte(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(139);
	goto label_42;
label_16:;
	LINE_NUMBER(138);
	INST_ASTORE(1);
label_42:;
	{
	LINE_NUMBER(141);
	((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cx = (168);
	LINE_NUMBER(142);
	((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cy = (350);
	LINE_NUMBER(143);
	sp[0].o = (jobject)createArray(ctx, &class_nro_Small, (32000));
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_imgNew = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (32000));
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_newSmallVersion = sp[0].o;
	LINE_NUMBER(145);
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_maxSmall = (32000);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_CreateCharScr_SetInfoChar_nro_Char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CreateCharScr:SetInfoChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_nro_Char(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[1].o);
	((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_b = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cgender;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cgender = temp0;
	((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_c = temp0;
	LINE_NUMBER(151);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_head = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_head);
	LINE_NUMBER(152);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_headICON = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_headICON);
	LINE_NUMBER(153);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_body = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_body);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_leg = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_leg);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_bag = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_bag);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cName;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cName = (jref) sp[1].o;
	LINE_NUMBER(157);
	((func_nro_CreateCharScr_switchToMe) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_CreateCharScr_switchToMe])(ctx, (frame[0].o));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_CreateCharScr_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CreateCharScr:switchToMe", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu = (jint(0));
	LINE_NUMBER(162);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(163);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_readPart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_readPart])(ctx, sp[0].o);
	LINE_NUMBER(164);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(165);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(166);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_maps;
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_c)))))->length));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_maps = sp[0].o;
	LINE_NUMBER(168);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_maps;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c)))))->length)) goto label_8;
	}
	{
	LINE_NUMBER(169);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_maps;
	jint temp0 = frame[2].i;
	clinit_nro_MapTemplate(ctx);
	sp[1].o = (jobject)SF_nro_MapTemplate_maps;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c))), (frame[2].i)));
	LINE_NUMBER(168);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(172);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_types;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_types = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c)));
	LINE_NUMBER(173);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_pxh;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_pxh = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c)));
	LINE_NUMBER(174);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_pxw;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_pxw = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c)));
	LINE_NUMBER(175);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_pxw;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tileID = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c)));
	LINE_NUMBER(176);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmw;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tmw = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c)));
	LINE_NUMBER(177);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmh;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tmh = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c)));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_bgID;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tileID = (((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c))) + (jint(1)));
	LINE_NUMBER(179);
	SM_nro_TileMap_loadMainTile(ctx);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_bgID;
	SM_main_GameCanvas_loadBG_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_c))));
	LINE_NUMBER(181);
	SM_nro_GameScr_SetNum_int_int(ctx, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_cx), ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[1].o)))->F_cy));
	LINE_NUMBER(182);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_SELECT;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (100), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_BACK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (101), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_nameServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))), (frame[0].o), (102), (jobject(nullptr)));
	((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_cmdSelectSv = (jref) sp[1].o;
	LINE_NUMBER(186);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (jint(1));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (jint(3));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_CreateCharScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CreateCharScr:paint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isDisconnected) == 0) goto label_1;
	}
	{
	LINE_NUMBER(192);
	if ((clinit_nro_CreateCharScr(ctx), (jint)SF_nro_CreateCharScr_isCreateChar) != 0) goto label_1;
	}
	{
	LINE_NUMBER(193);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_1;
	}
	{
	LINE_NUMBER(194);
	SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(195);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)));
	LINE_NUMBER(197);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_c))))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_c))));
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(199);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_c))))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_c))), (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_BgItem, sp[0].o);
	frame[3].o = sp[0].o;
	if (((jint)((nro_BgItem *) NULL_CHECK(sp[0].o))->F_idImage) == (jint(-1))) goto label_11;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[3].o)))->F_layer) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(200);
	((func_nro_BgItem_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_BgItem_paint_lib_mGraphics])(ctx, (frame[3].o), (frame[1].o));
	}
label_11:;
	{
	LINE_NUMBER(197);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(204);
	SM_nro_TileMap_paintTilemap_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(205);
	sp[0].o = frame[1].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_bong;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw)), ((((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_dy)) + (jint(1))), (jint(3)));
	LINE_NUMBER(206);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	sp[1].o = frame[1].o;
	jint temp0 = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw);
	jint temp1 = ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_dy);
	jint temp2 = jint(1);
	sp[2].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_i;
	((func_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[2].o, ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cp1))), (jint(1)));
	LINE_NUMBER(208);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_b;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_cName;
	jint temp3 = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw);
	jint temp4 = ((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cy) - (15);
	jint temp5 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_greySmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp3, temp4, temp5, sp[3].o);
	}
label_15:;
	{
	LINE_NUMBER(211);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(212);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(217);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CreateCharScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CreateCharScr:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	M_nro_mScreen_update(ctx, (frame[0].o));
	LINE_NUMBER(221);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(222);
	clinit_nro_CreateCharScr(ctx);
	SF_nro_CreateCharScr_isCreateChar = (jint(1));
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(224);
	if (((jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cp1) <= (50)) goto label_6;
	}
	{
	LINE_NUMBER(225);
	SM_nro_ServerListScreen_ConnectIP(ctx);
	LINE_NUMBER(226);
	((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(230);
	clinit_nro_CreateCharScr(ctx);
	SF_nro_CreateCharScr_isCreateChar = (jint(0));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_CreateCharScr *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(232);
	jint temp0 = (jint)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cp1;
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_i;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(233);
	((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((nro_CreateCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_CreateCharScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CreateCharScr:perform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(244);
	switch((frame[1].i)) {
		case 100: goto label_1;
		case 101: goto label_2;
		case 102: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(246);
	SM_nro_ServerListScreen_Login_New(ctx);
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(249);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(252);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, (jint(-1)), (jint(1)));
	LINE_NUMBER(253);
	clinit_nro_ServerScr(ctx);
	SF_nro_ServerScr_isShowSv_HaveChar = (jint(0));
	LINE_NUMBER(254);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	((func_nro_ServerScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerScr_switchToMe])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_CreateCharScr[] {
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
	(void *) M_nro_CreateCharScr_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_CreateCharScr_update,
	(void *) M_nro_mScreen_updateKey,
	(void *) M_nro_CreateCharScr_paint_lib_mGraphics,
	(void *) M_nro_CreateCharScr_perform_int_java_lang_Object,
	(void *) M_nro_CreateCharScr_SetInfoChar_nro_Char,
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
	{ "switchToMe", "()V" },
	{ "keyPress", "(I)V" },
	{ "update", "()V" },
	{ "updateKey", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "perform", "(ILjava/lang/Object;)V" },
	{ "SetInfoChar", "(Lnro/Char;)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "isCreateChar", &class_boolean, (intptr_t) &SF_nro_CreateCharScr_isCreateChar, "Z", 9 },
	{ "b", &class_nro_Char, offsetof(nro_CreateCharScr, F_b), "Lnro/Char;", 2 },
	{ "c", &class_int, offsetof(nro_CreateCharScr, F_c), "I", 2 },
	{ "cx", &class_int, offsetof(nro_CreateCharScr, F_cx), "I", 2 },
	{ "cy", &class_int, offsetof(nro_CreateCharScr, F_cy), "I", 2 },
	{ "dy", &class_int, offsetof(nro_CreateCharScr, F_dy), "I", 2 },
	{ "cmdSelectSv", &class_nro_Command, offsetof(nro_CreateCharScr, F_cmdSelectSv), "Lnro/Command;", 2 },
	{ "bgID", getArrayClass(&class_int, 1), offsetof(nro_CreateCharScr, F_bgID), "[I", 2 },
	{ "i", getArrayClass(&class_int, 1), offsetof(nro_CreateCharScr, F_i), "[I", 2 },
	{ "cp1", &class_int, offsetof(nro_CreateCharScr, F_cp1), "I", 2 },
};

static MethodMetadata methods[] {
	{ "loadMapTableFromResource", (intptr_t) SM_nro_CreateCharScr_loadMapTableFromResource_Array1_byte, 0, "([B)V", 10 },
	{ "<init>", (intptr_t) init_nro_CreateCharScr, 0, "()V", 1 },
	{ "SetInfoChar", (intptr_t) M_nro_CreateCharScr_SetInfoChar_nro_Char, VTABLE_nro_CreateCharScr_SetInfoChar_nro_Char, "(Lnro/Char;)V", 17 },
	{ "switchToMe", (intptr_t) M_nro_CreateCharScr_switchToMe, VTABLE_nro_CreateCharScr_switchToMe, "()V", 17 },
	{ "paint", (intptr_t) M_nro_CreateCharScr_paint_lib_mGraphics, VTABLE_nro_CreateCharScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_CreateCharScr_update, VTABLE_nro_CreateCharScr_update, "()V", 17 },
	{ "perform", (intptr_t) M_nro_CreateCharScr_perform_int_java_lang_Object, VTABLE_nro_CreateCharScr_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
};

Class class_nro_CreateCharScr{
		.nativeName = (intptr_t) "nro/CreateCharScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_CreateCharScr),
		.classVtable = (intptr_t) vtable_nro_CreateCharScr,
		.staticInitializer = (intptr_t) clinit_nro_CreateCharScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_CreateCharScr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_CreateCharScr = registerClass(&class_nro_CreateCharScr);

}

