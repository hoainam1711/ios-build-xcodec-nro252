#include "nro/BgItem.h"
#include "nro/GameScr.h"
#include "nro/BgItem.h"
#include "java/util/Hashtable.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "nro/mHashTable.h"
#include "main/GameCanvas.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "java/util/Enumeration.h"
#include "nro/Char.h"
#include "nro/TileMap.h"

extern "C" {

jobject SF_nro_BgItem_imgNew;
jobject SF_nro_BgItem_vKeysNew;
jobject SF_nro_BgItem_vKeysLast;
jobject SF_nro_BgItem_newSmallVersion;
jobject SF_nro_BgItem_idNotBlend;

void mark_nro_BgItem(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_BgItem_imgNew)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BgItem_imgNew)->clazz)->markFunction)((jobject) SF_nro_BgItem_imgNew, mark, depth + 1);
		if (SF_nro_BgItem_vKeysNew)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BgItem_vKeysNew)->clazz)->markFunction)((jobject) SF_nro_BgItem_vKeysNew, mark, depth + 1);
		if (SF_nro_BgItem_vKeysLast)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BgItem_vKeysLast)->clazz)->markFunction)((jobject) SF_nro_BgItem_vKeysLast, mark, depth + 1);
		if (SF_nro_BgItem_newSmallVersion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BgItem_newSmallVersion)->clazz)->markFunction)((jobject) SF_nro_BgItem_newSmallVersion, mark, depth + 1);
		if (SF_nro_BgItem_idNotBlend)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BgItem_idNotBlend)->clazz)->markFunction)((jobject) SF_nro_BgItem_idNotBlend, mark, depth + 1);
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
	auto self = (nro_BgItem *) object;
	if (self->F_tileX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tileX)->clazz)->markFunction)((jobject) self->F_tileX, mark, depth + 1);
	if (self->F_tileY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tileY)->clazz)->markFunction)((jobject) self->F_tileY, mark, depth + 1);
}

void init_nro_BgItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BgItem:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BgItem(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX = (jint(0));
	LINE_NUMBER(24);
	((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_BgItem_clearHashTable(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BgItem:clearHashTable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BgItem(ctx);
	{
	LINE_NUMBER(28);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(29);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[0].o = (jobject)((func_nro_mHashTable_elements_R_java_util_Enumeration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_elements_R_java_util_Enumeration])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(32);
	if ((isInstance(ctx, (frame[1].o), &class_javax_microedition_lcdui_Image)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(33);
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, (checkCast(ctx, &class_javax_microedition_lcdui_Image, (frame[1].o))));
	}
label_7:;
	LINE_NUMBER(35);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(36);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	((func_nro_mHashTable_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_clear])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(38);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_vKeysNew;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(39);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_vKeysLast;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_BgItem_putBgImage_java_lang_String_javax_microedition_lcdui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BgItem:putBgImage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BgItem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(43);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(44);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(45);
	if ((isInstance(ctx, (frame[2].o), &class_javax_microedition_lcdui_Image)) == 0) goto label_4;
	}
	{
	if ((frame[2].o) == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(46);
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, (checkCast(ctx, &class_javax_microedition_lcdui_Image, (frame[2].o))));
	}
label_4:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_BgItem_removeBgImage_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BgItem:removeBgImage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BgItem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(51);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(52);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[0].o = (jobject)((func_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(53);
	if ((isInstance(ctx, (frame[1].o), &class_javax_microedition_lcdui_Image)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(54);
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, (checkCast(ctx, &class_javax_microedition_lcdui_Image, (frame[1].o))));
	}
label_3:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_BgItem_isExistKeyLast_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BgItem:isExistKeyLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BgItem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_vKeysNew;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(60);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_vKeysNew;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(59);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_nro_BgItem_isNotBlend_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BgItem:isNotBlend", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_idNotBlend;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(70);
	jint temp0 = (jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage;
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_idNotBlend;
	if (temp0 != ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)))) goto label_4;
	}
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(69);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_nro_BgItem_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BgItem:paint", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_1;
	}
	{
	LINE_NUMBER(80);
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) != (279)) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_tMabuEff) >= (110)) goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(81);
	frame[2].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx);
	LINE_NUMBER(82);
	frame[3].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy);
	LINE_NUMBER(84);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage));
	sp[0].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_javax_microedition_lcdui_Image, sp[0].o);
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(85);
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) != (96)) goto label_8;
	}
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(89);
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_layer) != (jint(4))) goto label_10;
	}
	{
	LINE_NUMBER(90);
	((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX = (((-(frame[2].i)) / (jint(2))) + (100));
	}
label_10:;
	{
	LINE_NUMBER(93);
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) != (28)) goto label_12;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_layer) != (jint(3))) goto label_12;
	}
	{
	LINE_NUMBER(94);
	((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX = (((-(frame[2].i)) / (jint(3))) + (200));
	}
label_12:;
	{
	LINE_NUMBER(97);
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (67)) goto label_14;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (68)) goto label_14;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (69)) goto label_14;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) != (70)) goto label_15;
	}
label_14:;
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_layer) != (jint(3))) goto label_15;
	}
	{
	LINE_NUMBER(98);
	((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX = (((-(frame[2].i)) / (jint(3))) + (200));
	}
label_15:;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)M_nro_BgItem_isNotBlend_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_layer) >= (jint(4))) goto label_17;
	}
	{
	LINE_NUMBER(102);
	((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX = ((-((frame[2].i) >> (jint(4)))) + (50));
	LINE_NUMBER(103);
	((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY = (((frame[3].i) >> (jint(5))) - (15));
	}
label_17:;
	{
	LINE_NUMBER(106);
	frame[5].i = ((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dx)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX));
	LINE_NUMBER(107);
	frame[6].i = ((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dy)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY));
	LINE_NUMBER(108);
	jint temp0 = ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dx);
	jint temp1 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[4].o));
	if (((temp0 + temp1) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX)) < (frame[2].i)) goto label_22;
	}
	{
	if (((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dx)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX)) > ((frame[2].i) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_22;
	}
	{
	jint temp0 = (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dy)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY);
	jint temp1 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, (frame[4].o));
	if ((temp0 + temp1) < (frame[3].i)) goto label_22;
	}
	{
	if (((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dy)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY)) > ((frame[3].i) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h))) goto label_22;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = frame[1].o;
	sp[1].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, (frame[4].o));
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, (frame[4].o));
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_trans), ((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dx)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX)), ((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dy)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY)), (jint(0)));
	LINE_NUMBER(110);
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) != (11)) goto label_22;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (122)) goto label_22;
	}
	{
	LINE_NUMBER(111);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (frame[5].i), ((frame[6].i) + (24)), (48), (14));
	LINE_NUMBER(113);
	frame[7].i = (jint(0));
	}
label_27:;
	{
	if ((frame[7].i) >= (jint(2))) goto label_28;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_imgWaterfall;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (8)) >> (jint(2))) * (24)), (24), (24), (jint(0)), ((frame[5].i) + ((frame[7].i) * (24))), ((frame[6].i) + (24)), (jint(0)));
	LINE_NUMBER(113);
	INST_IINC(7, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(117);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH));
	}
label_22:;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)SM_nro_TileMap_isMapDouble_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) <= (137)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (156)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (159)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (157)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (165)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (167)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (168)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (169)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (170)) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) == (238)) goto label_1;
	}
	{
	if (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - ((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dx)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX))) < (frame[2].i)) goto label_1;
	}
	{
	clinit_nro_TileMap(ctx);
	jint temp0 = (jint)SF_nro_TileMap_pxw;
	jint temp1 = (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dx)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX);
	jint temp2 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[4].o));
	if ((temp0 - (temp1 + temp2)) > ((frame[2].i) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_1;
	}
	{
	jint temp0 = (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dy)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY);
	jint temp1 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, (frame[4].o));
	if ((temp0 + temp1) < (frame[3].i)) goto label_1;
	}
	{
	if (((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dy)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY)) > ((frame[3].i) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h))) goto label_1;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) < (241)) goto label_31;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_idImage) < (266)) goto label_1;
	}
label_31:;
	{
	LINE_NUMBER(122);
	sp[0].o = frame[1].o;
	sp[1].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, (frame[4].o));
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, (frame[4].o));
	jint temp4 = jint(2);
	jint temp5 = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - ((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dx)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transX));
	jint temp6 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, (frame[4].o));
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, (temp5 - temp6), ((((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_dy)) + ((jint)((nro_BgItem *) NULL_CHECK((frame[0].o)))->F_transY)), (jint(0)));
	}
label_1:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_BgItem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BgItem:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BgItem(ctx);
	{
	LINE_NUMBER(19);
	clinit_nro_mHashTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_mHashTable);
	init_nro_mHashTable_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"imgNew BgItem"_j))));
	clinit_nro_BgItem(ctx);
	SF_nro_BgItem_imgNew = sp[0].o;
	LINE_NUMBER(20);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vKeyNews"_j))));
	clinit_nro_BgItem(ctx);
	SF_nro_BgItem_vKeysNew = sp[0].o;
	LINE_NUMBER(21);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vKeyLast"_j))));
	clinit_nro_BgItem(ctx);
	SF_nro_BgItem_vKeysLast = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject) createArray(ctx, &class_int, (18));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (79);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (80);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (81);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (85);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (86);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (90);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (91);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (92);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (99);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (100);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (101);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (102);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (103);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (104);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (105);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (106);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (107);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (108);
	clinit_nro_BgItem(ctx);
	SF_nro_BgItem_idNotBlend = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_BgItem[] {
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
	(void *) M_nro_BgItem_isNotBlend_R_boolean,
	(void *) M_nro_BgItem_paint_lib_mGraphics,
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
	{ "isNotBlend", "()Z" },
	{ "paint", "(Llib/mGraphics;)V" },
};

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(nro_BgItem, F_id), "I", 1 },
	{ "trans", &class_int, offsetof(nro_BgItem, F_trans), "I", 1 },
	{ "idImage", &class_short, offsetof(nro_BgItem, F_idImage), "S", 1 },
	{ "x", &class_int, offsetof(nro_BgItem, F_x), "I", 1 },
	{ "y", &class_int, offsetof(nro_BgItem, F_y), "I", 1 },
	{ "dx", &class_int, offsetof(nro_BgItem, F_dx), "I", 1 },
	{ "dy", &class_int, offsetof(nro_BgItem, F_dy), "I", 1 },
	{ "layer", &class_byte, offsetof(nro_BgItem, F_layer), "B", 1 },
	{ "tileX", getArrayClass(&class_int, 1), offsetof(nro_BgItem, F_tileX), "[I", 1 },
	{ "tileY", getArrayClass(&class_int, 1), offsetof(nro_BgItem, F_tileY), "[I", 1 },
	{ "imgNew", &class_nro_mHashTable, (intptr_t) &SF_nro_BgItem_imgNew, "Lnro/mHashTable;", 9 },
	{ "vKeysNew", &class_nro_MyVector, (intptr_t) &SF_nro_BgItem_vKeysNew, "Lnro/MyVector;", 9 },
	{ "vKeysLast", &class_nro_MyVector, (intptr_t) &SF_nro_BgItem_vKeysLast, "Lnro/MyVector;", 9 },
	{ "newSmallVersion", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_BgItem_newSmallVersion, "[B", 9 },
	{ "transX", &class_int, offsetof(nro_BgItem, F_transX), "I", 2 },
	{ "transY", &class_int, offsetof(nro_BgItem, F_transY), "I", 2 },
	{ "idNotBlend", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_BgItem_idNotBlend, "[I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_BgItem, 0, "()V", 1 },
	{ "clearHashTable", (intptr_t) SM_nro_BgItem_clearHashTable, 0, "()V", 9 },
	{ "putBgImage", (intptr_t) SM_nro_BgItem_putBgImage_java_lang_String_javax_microedition_lcdui_Image, 0, "(Ljava/lang/String;Ljavax/microedition/lcdui/Image;)V", 9 },
	{ "removeBgImage", (intptr_t) SM_nro_BgItem_removeBgImage_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "isExistKeyLast", (intptr_t) SM_nro_BgItem_isExistKeyLast_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "isNotBlend", (intptr_t) M_nro_BgItem_isNotBlend_R_boolean, VTABLE_nro_BgItem_isNotBlend_R_boolean, "()Z", 2 },
	{ "paint", (intptr_t) M_nro_BgItem_paint_lib_mGraphics, VTABLE_nro_BgItem_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_BgItem, 0, "()V", 8 },
};

Class class_nro_BgItem{
		.nativeName = (intptr_t) "nro/BgItem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_BgItem),
		.classVtable = (intptr_t) vtable_nro_BgItem,
		.staticInitializer = (intptr_t) clinit_nro_BgItem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_BgItem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_BgItem = registerClass(&class_nro_BgItem);

}

