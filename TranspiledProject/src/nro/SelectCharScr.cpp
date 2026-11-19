#include "nro/SelectCharScr.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "lib/input/TField.h"
#include "lib/network/Session_ME.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/Menu.h"
#include "nro/StaticObj.h"
#include "java/io/InputStream.h"
#include "nro/Paint.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/SelectCharScr.h"
#include "lib/image/MyStream.h"
#include "nro/PartImage.h"
#include "java/io/FilterInputStream.h"
#include "nro/mScreen.h"
#include "com/nro/GameMain.h"
#include "nro/Command.h"
#include "java/lang/Throwable.h"
#include "nro/TileMap.h"
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "nro/ServerListScreen.h"
#include "nro/BgItem.h"
#include "nro/ServerScr.h"
#include "java/util/Hashtable.h"
#include "lib/mGraphics.h"
#include "nro/InfoDlg.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "nro/mHashTable.h"
#include "nro/MapTemplate.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/Rms.h"
#include "nro/LoginScr.h"
#include "nro/Char.h"

extern "C" {

jobject SF_nro_SelectCharScr_instance;
jbool SF_nro_SelectCharScr_isWait;
jobject SF_nro_SelectCharScr_d;
jint SF_nro_SelectCharScr_indexGender;
jint SF_nro_SelectCharScr_f;
jint SF_nro_SelectCharScr_g;
jobject SF_nro_SelectCharScr_h;
jobject SF_nro_SelectCharScr_i;
jobject SF_nro_SelectCharScr_j;

void mark_nro_SelectCharScr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_SelectCharScr_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SelectCharScr_instance)->clazz)->markFunction)((jobject) SF_nro_SelectCharScr_instance, mark, depth + 1);
		if (SF_nro_SelectCharScr_d)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SelectCharScr_d)->clazz)->markFunction)((jobject) SF_nro_SelectCharScr_d, mark, depth + 1);
		if (SF_nro_SelectCharScr_h)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SelectCharScr_h)->clazz)->markFunction)((jobject) SF_nro_SelectCharScr_h, mark, depth + 1);
		if (SF_nro_SelectCharScr_i)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SelectCharScr_i)->clazz)->markFunction)((jobject) SF_nro_SelectCharScr_i, mark, depth + 1);
		if (SF_nro_SelectCharScr_j)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_SelectCharScr_j)->clazz)->markFunction)((jobject) SF_nro_SelectCharScr_j, mark, depth + 1);
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
	auto self = (nro_SelectCharScr *) object;
	if (self->F_cmdSelectSv)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdSelectSv)->clazz)->markFunction)((jobject) self->F_cmdSelectSv, mark, depth + 1);
	if (self->F_bgID)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bgID)->clazz)->markFunction)((jobject) self->F_bgID, mark, depth + 1);
}

jobject SM_nro_SelectCharScr_gI_R_nro_SelectCharScr(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SelectCharScr(ctx);
	{
	LINE_NUMBER(35);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(36);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_SelectCharScr);
	init_nro_SelectCharScr(ctx, sp[0].o);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(39);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_nro_SelectCharScr_a_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:a", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SelectCharScr(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	frame[1].i = (jint(0));
	}
label_15:;
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_16;
	}
	{
	LINE_NUMBER(44);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/mymap/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(45);
	frame[3].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(47);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(48);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmw;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[3].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jchar(temp1));
	LINE_NUMBER(49);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmh;
	jint temp2 = frame[1].i;
	jint temp3 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[3].o));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (jchar(temp3));
	LINE_NUMBER(50);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_maps;
	jint temp4 = frame[1].i;
	jint temp5 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[3].o));
	sp[1].o = (jobject) createArray(ctx, &class_int, temp5);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	LINE_NUMBER(52);
	frame[4].i = (jint(0));
	}
label_23:;
	{
	jint temp0 = frame[4].i;
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmw;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmh;
	if (temp0 >= (temp1 * ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))))) goto label_24;
	}
	{
	LINE_NUMBER(53);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_maps;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[3].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(52);
	INST_IINC(4, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(56);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_types;
	jint temp0 = frame[1].i;
	clinit_nro_MapTemplate(ctx);
	sp[1].o = (jobject)SF_nro_MapTemplate_maps;
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->length));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(58);
	if ((frame[3].o) == nullptr) goto label_27;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(60);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(63);
	goto label_27;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[4].o = sp[0].o;
	LINE_NUMBER(62);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	LINE_NUMBER(63);
	goto label_27;
	}
label_6:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(58);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_30;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(60);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(63);
	goto label_30;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[6].o = sp[0].o;
	LINE_NUMBER(62);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[6].o));
	}
label_30:;
	{
	LINE_NUMBER(65);
	throwException(ctx, (frame[5].o));	}
label_27:;
	{
	LINE_NUMBER(43);
	INST_IINC(1, 1);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_nro_SelectCharScr_getActiveField_R_lib_input_TField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:getActiveField", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) goto label_1;
	}
	clinit_nro_SelectCharScr(ctx);
	(sp++)->o = SF_nro_SelectCharScr_d;
	goto label_2;
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_nro_SelectCharScr_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:switchToMe", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_isContinueToLogin = (jint(0));
	LINE_NUMBER(76);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu = (jint(0));
	LINE_NUMBER(77);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(78);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(79);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(3)));
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = temp0;
	LINE_NUMBER(80);
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(3)));
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = temp1;
	LINE_NUMBER(81);
	M_nro_SelectCharScr_doChangeMap(ctx, (frame[0].o));
	LINE_NUMBER(82);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(83);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(84);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_char_name;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(85);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_12;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isPC;
	if ((--sp)->i == 0) goto label_9;
label_12:;
	{
	LINE_NUMBER(86);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_g = (jint(0));
	LINE_NUMBER(87);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(88);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(92);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_15;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_ServerListScreen(ctx);
	sp[2].o = (jobject)SF_nro_ServerListScreen_nameServer;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect))), (frame[0].o), (10018), (jobject(nullptr)));
	((nro_SelectCharScr *) NULL_CHECK(sp[0].o))->F_cmdSelectSv = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (jint(1));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (jint(3));
	}
label_15:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_SelectCharScr_doChangeMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:doChangeMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_maps;
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)))))->length));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_maps = sp[0].o;
	LINE_NUMBER(103);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_maps;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)))))->length)) goto label_3;
	}
	{
	LINE_NUMBER(104);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_maps;
	jint temp0 = frame[1].i;
	clinit_nro_MapTemplate(ctx);
	sp[1].o = (jobject)SF_nro_MapTemplate_maps;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))), (frame[1].i)));
	LINE_NUMBER(103);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(107);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_types;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_types = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)));
	LINE_NUMBER(108);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_pxh;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_pxh = ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)));
	LINE_NUMBER(109);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_pxw;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_pxw = ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)));
	LINE_NUMBER(110);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_pxw;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tileID = ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)));
	LINE_NUMBER(111);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmw;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tmw = ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)));
	LINE_NUMBER(112);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_tmh;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tmh = ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_bgID;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tileID = (((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))) + (jint(1)));
	LINE_NUMBER(114);
	SM_nro_TileMap_loadMainTile(ctx);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_bgID;
	SM_main_GameCanvas_loadBG_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))));
	LINE_NUMBER(116);
	SM_nro_GameScr_SetNum_int_int(ctx, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_SelectCharScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:<init>", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SelectCharScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(119);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	((nro_SelectCharScr *) NULL_CHECK(sp[0].o))->F_bgID = (jref) sp[1].o;
	LINE_NUMBER(28);
	((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cx = (168);
	LINE_NUMBER(29);
	((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cy = (350);
	LINE_NUMBER(30);
	((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_dy = (45);
	LINE_NUMBER(120);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(121);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	}
label_18:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	LINE_NUMBER(125);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_29;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(3)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (39);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (40);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (41);
	frame[1].o = sp[0].o;
	LINE_NUMBER(127);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_29;
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(129);
	frame[2].i = (jint(0));
	}
label_32:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_15;
	}
	{
	LINE_NUMBER(130);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/mymap/mapTable"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(131);
	frame[4].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(133);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(135);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	jint temp1 = frame[2].i;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"MapTemplate.vCurrItem[a] "_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(137);
	frame[6].i = (jint(0));
	}
label_38:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(139);
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[4].o));
	frame[8].i = temp1;
	LINE_NUMBER(140);
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[4].o));
	frame[9].i = temp2;
	LINE_NUMBER(141);
	sp[0].o = (jobject)SM_nro_TileMap_getBIById_int_R_nro_BgItem(ctx, (frame[7].i));
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_nro_TileMap_getBIById_int_R_nro_BgItem(ctx, (frame[7].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(144);
	clinit_nro_BgItem(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_BgItem);
	init_nro_BgItem(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	((nro_BgItem *) NULL_CHECK(sp[0].o))->F_id = (frame[7].i);
	LINE_NUMBER(145);
	((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage = ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_idImage);
	LINE_NUMBER(146);
	((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_dx = ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_dx);
	LINE_NUMBER(147);
	((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_dy = ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_dy);
	LINE_NUMBER(148);
	((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_x = ((frame[8].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size));
	LINE_NUMBER(149);
	((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_y = ((frame[9].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size));
	LINE_NUMBER(150);
	((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_layer = ((jint)((nro_BgItem *) NULL_CHECK((frame[10].o)))->F_layer);
	LINE_NUMBER(151);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[11].o));
	LINE_NUMBER(152);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage));
	jint temp0 = (jint)((func_nro_mHashTable_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_55;
	}
	{
	LINE_NUMBER(153);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(155);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bgItem"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_59;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(ctx, (frame[13].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[13].o)))->length));
	frame[12].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(159);
	if ((frame[12].o) == nullptr) goto label_61;
	}
	{
	LINE_NUMBER(160);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[12].o));
	goto label_63;
	}
label_61:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(-2013265920));
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createRGBImage_Array1_int_int_int_boolean_R_javax_microedition_lcdui_Image(ctx, sp[0].o, (jint(1)), (jint(1)), (jint(1)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getBgTemplate_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getBgTemplate_short])(ctx, sp[0].o, ((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage));
	LINE_NUMBER(178);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_imgNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[12].o));
	}
label_63:;
	{
	LINE_NUMBER(181);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_vKeysLast;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_55:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage));
	jint temp0 = (jint)SM_nro_BgItem_isExistKeyLast_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_43;
	}
	{
	LINE_NUMBER(185);
	clinit_nro_BgItem(ctx);
	sp[0].o = (jobject)SF_nro_BgItem_vKeysNew;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_idImage));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_43:;
	{
	LINE_NUMBER(137);
	INST_IINC(6, 1);
	goto label_38;
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(190);
	if ((frame[4].o) == nullptr) goto label_67;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(192);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(195);
	goto label_67;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(193);
	frame[5].o = sp[0].o;
	LINE_NUMBER(194);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	LINE_NUMBER(195);
	goto label_67;
	}
label_6:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(190);
	INST_ASTORE(14);
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_70;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(192);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(195);
	goto label_70;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(193);
	frame[15].o = sp[0].o;
	LINE_NUMBER(194);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[15].o));
	}
label_70:;
	{
	LINE_NUMBER(197);
	throwException(ctx, (frame[14].o));	}
label_67:;
	{
	LINE_NUMBER(129);
	INST_IINC(2, 1);
	goto label_32;
	}
label_15:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(201);
	goto label_29;
label_16:;
	{
	sp -= 1;
	LINE_NUMBER(199);
	frame[2].o = sp[0].o;
	LINE_NUMBER(200);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_29:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(3)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (39);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (40);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (41);
	SM_nro_SelectCharScr_a_Array1_byte(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(208);
	goto label_73;
label_20:;
	{
	sp -= 1;
	LINE_NUMBER(206);
	frame[1].o = sp[0].o;
	LINE_NUMBER(207);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_73:;
	{
	LINE_NUMBER(210);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) > (200)) goto label_75;
	}
	{
	LINE_NUMBER(211);
	SM_nro_GameScr_setPopupSize_int_int(ctx, (128), (100));
	LINE_NUMBER(212);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_popupY = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (128)) / (jint(2)));
	LINE_NUMBER(213);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_popupX = (10);
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	((nro_SelectCharScr *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_SelectCharScr *) NULL_CHECK(sp[0].o))->F_cy) + (15));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((nro_SelectCharScr *) NULL_CHECK(sp[0].o))->F_dy = (((jint)((nro_SelectCharScr *) NULL_CHECK(sp[0].o))->F_dy) - (15));
	}
label_75:;
	{
	LINE_NUMBER(218);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = (jint(1));
	LINE_NUMBER(219);
	clinit_lib_input_TField(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[0].o);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_d = sp[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[1].o))->F_tfUser;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = ((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(220);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) >= (200)) goto label_83;
	}
	{
	LINE_NUMBER(221);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (60);
	}
label_83:;
	{
	LINE_NUMBER(224);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = (26);
	LINE_NUMBER(225);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) >= (200)) goto label_86;
	}
	{
	LINE_NUMBER(226);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupY) + (45));
	LINE_NUMBER(227);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (12));
	goto label_89;
	}
label_86:;
	{
	LINE_NUMBER(229);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	clinit_nro_SelectCharScr(ctx);
	sp[1].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (temp0 - (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_width) / (jint(2))));
	LINE_NUMBER(230);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (35);
	}
label_89:;
	{
	LINE_NUMBER(233);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_91;
	}
	{
	LINE_NUMBER(234);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	}
label_91:;
	{
	LINE_NUMBER(237);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(238);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_char_name;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(239);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == 0) goto label_95;
	}
	{
	LINE_NUMBER(240);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[1].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[1].o))->F_tfUser;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[2].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[2].o))->F_tfUser;
	sp[2].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[2].o);
	jint temp1 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, temp1);
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_95:;
	{
	LINE_NUMBER(243);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = (jint(1));
	LINE_NUMBER(244);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = (jint(0));
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_NEWCHAR;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (8000), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_BACK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (8001), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(247);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_101;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	clinit_nro_SelectCharScr(ctx);
	sp[1].o = (jobject)SF_nro_SelectCharScr_d;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	}
label_101:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_SelectCharScr_keyPress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:keyPress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(254);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_SelectCharScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	((nro_SelectCharScr *) NULL_CHECK(sp[0].o))->F_o = (((jint)((nro_SelectCharScr *) NULL_CHECK(sp[0].o))->F_o) + (jint(1)));
	LINE_NUMBER(259);
	if (((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_o) <= (30)) goto label_2;
	}
	{
	LINE_NUMBER(260);
	((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_o = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(263);
	if ((((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_o) % (15)) >= (jint(5))) goto label_4;
	}
	{
	LINE_NUMBER(264);
	((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p = (jint(0));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(266);
	((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p = (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(269);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(274);
	if ((clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) == 0) goto label_10;
	}
	{
	LINE_NUMBER(275);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	}
label_10:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_SelectCharScr_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:updateKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_1;
	}
	{
	jint temp0 = (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) - (jint(1));
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_g = temp0;
	if (temp0 >= 0) goto label_1;
	}
	{
	LINE_NUMBER(282);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_MENUME;
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_g = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(285);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_3;
	}
	{
	jint temp0 = (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) + (jint(1));
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_g = temp0;
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_MENUME;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(286);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_g = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(289);
	if ((clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) != 0) goto label_5;
	}
	{
	LINE_NUMBER(290);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_7;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	clinit_nro_SelectCharScr(ctx);
	sp[1].o = (jobject)SF_nro_SelectCharScr_d;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(294);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(297);
	if ((clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(298);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) == 0) goto label_11;
	}
	{
	LINE_NUMBER(299);
	jint temp0 = (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender) - (jint(1));
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = temp0;
	if (temp0 >= 0) goto label_13;
	}
	{
	LINE_NUMBER(300);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_MENUGENDER;
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(303);
	M_nro_SelectCharScr_doChangeMap(ctx, (frame[0].o));
	}
label_11:;
	{
	LINE_NUMBER(306);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) == 0) goto label_15;
	}
	{
	LINE_NUMBER(307);
	jint temp0 = (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender) + (jint(1));
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = temp0;
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_MENUGENDER;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_17;
	}
	{
	LINE_NUMBER(308);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(311);
	M_nro_SelectCharScr_doChangeMap(ctx, (frame[0].o));
	}
label_15:;
	{
	LINE_NUMBER(314);
	((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_right = (jref) (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(317);
	if ((clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) != (jint(2))) goto label_19;
	}
	{
	LINE_NUMBER(318);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) == 0) goto label_21;
	}
	{
	jint temp0 = (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_f) - (jint(1));
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = temp0;
	if (temp0 >= 0) goto label_21;
	}
	{
	LINE_NUMBER(319);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_hairStyleName;
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length) - (jint(1)));
	}
label_21:;
	{
	LINE_NUMBER(322);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) == 0) goto label_23;
	}
	{
	jint temp0 = (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_f) + (jint(1));
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = temp0;
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_hairStyleName;
	if (temp0 <= ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length) - (jint(1)))) goto label_23;
	}
	{
	LINE_NUMBER(323);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(326);
	((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_right = (jref) (jobject(nullptr));
	}
label_19:;
	{
	LINE_NUMBER(329);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_25;
	}
	{
	LINE_NUMBER(330);
	frame[1].i = (110);
	LINE_NUMBER(331);
	frame[2].i = (60);
	LINE_NUMBER(332);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) <= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_29;
	}
	{
	LINE_NUMBER(333);
	frame[1].i = (100);
	LINE_NUMBER(334);
	frame[2].i = (40);
	}
label_29:;
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (117)), (15), (234), (80));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(338);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_g = (jint(0));
	LINE_NUMBER(339);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	}
label_32:;
	{
	LINE_NUMBER(343);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (117)), ((frame[1].i) - (30)), (234), ((frame[2].i) + (jint(5))));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(344);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_g = (jint(1));
	LINE_NUMBER(345);
	frame[3].i = (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender);
	LINE_NUMBER(346);
	jint temp0 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) - (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (117))) / (78);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = temp0;
	if (temp0 >= 0) goto label_39;
	}
	{
	LINE_NUMBER(347);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = (jint(0));
	}
label_39:;
	{
	LINE_NUMBER(350);
	clinit_nro_SelectCharScr(ctx);
	jint temp0 = (jint)SF_nro_SelectCharScr_indexGender;
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_MENUGENDER;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_41;
	}
	{
	LINE_NUMBER(351);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_MENUGENDER;
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_indexGender = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_41:;
	{
	LINE_NUMBER(354);
	if ((frame[3].i) == (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)) goto label_35;
	}
	{
	LINE_NUMBER(355);
	M_nro_SelectCharScr_doChangeMap(ctx, (frame[0].o));
	}
label_35:;
	{
	LINE_NUMBER(359);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (117)), ((((frame[1].i) - (30)) + (frame[2].i)) + (jint(5))), (234), (65));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(360);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_g = (jint(2));
	LINE_NUMBER(361);
	frame[3].i = (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_f);
	LINE_NUMBER(362);
	jint temp0 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) - (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (117))) / (78);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = temp0;
	if (temp0 >= 0) goto label_47;
	}
	{
	LINE_NUMBER(363);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = (jint(0));
	}
label_47:;
	{
	LINE_NUMBER(366);
	clinit_nro_SelectCharScr(ctx);
	jint temp0 = (jint)SF_nro_SelectCharScr_f;
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_hairStyleName;
	if (temp0 <= ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length) - (jint(1)))) goto label_49;
	}
	{
	LINE_NUMBER(367);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_hairStyleName;
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_f = ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length) - (jint(1)));
	}
label_49:;
	{
	LINE_NUMBER(370);
	if ((frame[3].i) == (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g)) goto label_25;
	}
	{
	LINE_NUMBER(371);
	M_nro_SelectCharScr_doChangeMap(ctx, (frame[0].o));
	}
label_25:;
	{
	LINE_NUMBER(376);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(377);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(378);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_SelectCharScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:paint", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_1;
	}
	{
	LINE_NUMBER(383);
	SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(384);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)));
	LINE_NUMBER(386);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_5;
	}
	{
	LINE_NUMBER(387);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(389);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))), (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_BgItem, sp[0].o);
	frame[3].o = sp[0].o;
	if (((jint)((nro_BgItem *) NULL_CHECK(sp[0].o))->F_idImage) == (jint(-1))) goto label_10;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[3].o)))->F_layer) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(390);
	((func_nro_BgItem_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_BgItem_paint_lib_mGraphics])(ctx, (frame[3].o), (frame[1].o));
	}
label_10:;
	{
	LINE_NUMBER(387);
	INST_IINC(2, 1);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(395);
	SM_nro_TileMap_paintTilemap_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(396);
	frame[3].i = (30);
	LINE_NUMBER(397);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) != (128)) goto label_14;
	}
	{
	LINE_NUMBER(398);
	frame[3].i = (20);
	}
label_14:;
	{
	LINE_NUMBER(401);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_h;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))), (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_f)));
	LINE_NUMBER(402);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_i;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)));
	LINE_NUMBER(403);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_j;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)));
	LINE_NUMBER(404);
	sp[0].o = frame[1].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_bong;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_dy)), (jint(3)));
	LINE_NUMBER(405);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(406);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(407);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(408);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp1 = (jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(0)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = temp2 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(0)))), (jint(0))))))))->F_dx);
	jint temp4 = (jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp5 = temp4 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp3, ((temp5 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(0)))), (jint(0))))))))->F_dy)) + ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(409);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[8].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp6 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(1)))), (jint(0))))))))->F_id;
	jint temp7 = (jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp8 = temp7 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(1)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[8].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp9 = temp8 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(1)))), (jint(0))))))))->F_dx);
	jint temp10 = (jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp11 = temp10 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(1)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[8].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp6, temp9, ((temp11 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(1)))), (jint(0))))))))->F_dy)) + ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(410);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[9].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp12 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(2)))), (jint(0))))))))->F_id;
	jint temp13 = (jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp14 = temp13 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(2)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[9].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp15 = temp14 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(2)))), (jint(0))))))))->F_dx);
	jint temp16 = (jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp17 = temp16 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(2)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[9].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp12, temp15, ((temp17 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_p))), (jint(2)))), (jint(0))))))))->F_dy)) + ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(412);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_26;
	}
	{
	LINE_NUMBER(413);
	frame[10].i = (jint(0));
	}
label_28:;
	{
	jint temp0 = frame[10].i;
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))));
	if (temp0 >= temp1) goto label_26;
	}
	{
	LINE_NUMBER(415);
	clinit_nro_MapTemplate(ctx);
	sp[0].o = (jobject)SF_nro_MapTemplate_vCurrItem;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))), (frame[10].i));
	sp[0].o = checkCast(ctx, &class_nro_BgItem, sp[0].o);
	frame[11].o = sp[0].o;
	if (((jint)((nro_BgItem *) NULL_CHECK(sp[0].o))->F_idImage) == (jint(-1))) goto label_31;
	}
	{
	if (((jint)((nro_BgItem *) NULL_CHECK((frame[11].o)))->F_layer) != (jint(3))) goto label_31;
	}
	{
	LINE_NUMBER(416);
	((func_nro_BgItem_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_nro_BgItem_paint_lib_mGraphics])(ctx, (frame[11].o), (frame[1].o));
	}
label_31:;
	{
	LINE_NUMBER(413);
	INST_IINC(10, 1);
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(421);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(422);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) >= (200)) goto label_34;
	}
	{
	LINE_NUMBER(423);
	SM_nro_Paint_paintFrame_int_int_int_int_lib_mGraphics(ctx, (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupY), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupW), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupH), (frame[1].o));
	LINE_NUMBER(424);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp1 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(0)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = temp2 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(0)))), (jint(0))))))))->F_dx);
	jint temp4 = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (30)) + ((frame[3].i) * (jint(3)));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp5 = temp4 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp3, ((temp5 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(0)))), (jint(0))))))))->F_dy)) + ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(425);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[8].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp6 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(1)))), (jint(0))))))))->F_id;
	jint temp7 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp8 = temp7 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(1)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[8].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp9 = temp8 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(1)))), (jint(0))))))))->F_dx);
	jint temp10 = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (30)) + ((frame[3].i) * (jint(3)));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp11 = temp10 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(1)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[8].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp6, temp9, ((temp11 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(1)))), (jint(0))))))))->F_dy)) + ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(426);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[9].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp12 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(2)))), (jint(0))))))))->F_id;
	jint temp13 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp14 = temp13 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(2)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[9].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp15 = temp14 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(2)))), (jint(0))))))))->F_dx);
	jint temp16 = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (30)) + ((frame[3].i) * (jint(3)));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp17 = temp16 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(2)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[9].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp12, temp15, ((temp17 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(2)))), (jint(0))))))))->F_dy)) + ((jint)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(428);
	frame[10].i = (jint(0));
	}
label_40:;
	{
	jint temp0 = frame[10].i;
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_MENUME;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_41;
	}
	{
	LINE_NUMBER(429);
	if ((clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) != (frame[10].i)) goto label_43;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_arrow;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 13;
	jint temp3 = 16;
	jint temp4 = jint(2);
	jint temp5 = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupY) + (10);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp[6].i = temp4;
	sp[7].i = temp5;
	sp += 8;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (7)) <= (jint(3))) goto label_45;
	}
	INST_ICONST(1);
	goto label_46;
label_45:;
	INST_ICONST(0);
label_46:;
	{
	sp -= 9;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, (sp[7].i + sp[8].i), (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (35)) + ((frame[10].i) * (frame[3].i))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	LINE_NUMBER(431);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_arrow;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 13;
	jint temp3 = 16;
	jint temp4 = jint(0);
	jint temp5 = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupY) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupW)) - (10);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp[6].i = temp4;
	sp[7].i = temp5;
	sp += 8;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (7)) <= (jint(3))) goto label_48;
	}
	INST_ICONST(1);
	goto label_49;
label_48:;
	INST_ICONST(0);
label_49:;
	{
	sp -= 9;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, (sp[7].i - sp[8].i), (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (35)) + ((frame[10].i) * (frame[3].i))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_43:;
	{
	LINE_NUMBER(434);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_MENUME;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[10].i))), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupY) + (20)), (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (30)) + ((frame[10].i) * (frame[3].i))), (jint(0)));
	LINE_NUMBER(428);
	INST_IINC(10, 1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(437);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_MENUGENDER;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupY) + (70)), (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (30)) + ((frame[3].i) * (jint(1)))), (jint(0)));
	LINE_NUMBER(438);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_hairStyleName;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))), (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_f))), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupY) + (55)), (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_popupX) + (30)) + ((frame[3].i) * (jint(2)))), (jint(0)));
	goto label_52;
	}
label_34:;
	{
	LINE_NUMBER(440);
	frame[11].i = (110);
	LINE_NUMBER(441);
	frame[12].i = (60);
	LINE_NUMBER(442);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) <= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_55;
	}
	{
	LINE_NUMBER(443);
	frame[11].i = (100);
	LINE_NUMBER(444);
	frame[12].i = (45);
	}
label_55:;
	{
	LINE_NUMBER(447);
	frame[2].i = (jint(0));
	}
label_58:;
	{
	if ((frame[2].i) >= (jint(3))) goto label_59;
	}
	{
	LINE_NUMBER(448);
	if ((frame[2].i) == (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender)) goto label_61;
	}
	{
	LINE_NUMBER(449);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgLbtn;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (78)) + ((frame[2].i) * (78))), (frame[11].i), (jint(3)));
	goto label_63;
	}
label_61:;
	{
	LINE_NUMBER(451);
	if ((clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) != (jint(1))) goto label_64;
	}
	{
	LINE_NUMBER(452);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_arrow;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 13;
	jint temp3 = 16;
	jint temp4 = jint(4);
	jint temp5 = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (78)) + ((frame[2].i) * (78));
	jint temp6 = (frame[11].i) - (20);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp[6].i = temp4;
	sp[7].i = temp5;
	sp[8].i = temp6;
	sp += 9;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (7)) <= (jint(3))) goto label_66;
	}
	INST_ICONST(1);
	goto label_67;
label_66:;
	INST_ICONST(0);
label_67:;
	{
	sp -= 10;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (sp[8].i + sp[9].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_64:;
	{
	LINE_NUMBER(455);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgLbtnFocus;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (78)) + ((frame[2].i) * (78))), (frame[11].i), (jint(3)));
	}
label_63:;
	{
	LINE_NUMBER(458);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_MENUGENDER;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))), ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (78)) + ((frame[2].i) * (78))), ((frame[11].i) - (jint(5))), (jint(2)));
	LINE_NUMBER(447);
	INST_IINC(2, 1);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(461);
	frame[2].i = (jint(0));
	}
label_69:;
	{
	if ((frame[2].i) >= (jint(3))) goto label_70;
	}
	{
	LINE_NUMBER(462);
	if ((frame[2].i) == (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_f)) goto label_72;
	}
	{
	LINE_NUMBER(463);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgLbtn;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (78)) + ((frame[2].i) * (78))), ((frame[11].i) + (frame[12].i)), (jint(3)));
	goto label_74;
	}
label_72:;
	{
	LINE_NUMBER(465);
	if ((clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) != (jint(2))) goto label_75;
	}
	{
	LINE_NUMBER(466);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_arrow;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 13;
	jint temp3 = 16;
	jint temp4 = jint(4);
	jint temp5 = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (78)) + ((frame[2].i) * (78));
	jint temp6 = ((frame[11].i) + (frame[12].i)) - (20);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp[6].i = temp4;
	sp[7].i = temp5;
	sp[8].i = temp6;
	sp += 9;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (7)) <= (jint(3))) goto label_77;
	}
	INST_ICONST(1);
	goto label_78;
label_77:;
	INST_ICONST(0);
label_78:;
	{
	sp -= 10;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (sp[8].i + sp[9].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_75:;
	{
	LINE_NUMBER(469);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgLbtnFocus;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (78)) + ((frame[2].i) * (78))), ((frame[11].i) + (frame[12].i)), (jint(3)));
	}
label_74:;
	{
	LINE_NUMBER(472);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_hairStyleName;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))), (frame[2].i))), ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (78)) + ((frame[2].i) * (78))), (((frame[11].i) + (frame[12].i)) - (jint(5))), (jint(2)));
	LINE_NUMBER(461);
	INST_IINC(2, 1);
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(475);
	if ((clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_g) != 0) goto label_52;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_arrow;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 13;
	jint temp3 = 16;
	jint temp4 = jint(4);
	jint temp5 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	jint temp6 = 20;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp[6].i = temp4;
	sp[7].i = temp5;
	sp[8].i = temp6;
	sp += 9;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (7)) <= (jint(3))) goto label_81;
	}
	INST_ICONST(1);
	goto label_82;
label_81:;
	INST_ICONST(0);
label_82:;
	{
	sp -= 10;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (sp[8].i + sp[9].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_52:;
	{
	LINE_NUMBER(480);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(481);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	if (sp[0].o == nullptr) goto label_85;
	}
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((nro_SelectCharScr *) NULL_CHECK((frame[0].o)))->F_cmdSelectSv;
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_85:;
	{
	LINE_NUMBER(486);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(488);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_SelectCharScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:perform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(491);
	switch((frame[1].i)) {
		case 8000: goto label_1;
		case 8001: goto label_2;
		case 10018: goto label_3;
		case 10019: goto label_4;
		case 10020: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(493);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(494);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_char_name_blank;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(496);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= (jint(5))) goto label_10;
	}
	{
	LINE_NUMBER(497);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_char_name_short;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(500);
	clinit_nro_SelectCharScr(ctx);
	sp[0].o = (jobject)SF_nro_SelectCharScr_d;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= (15)) goto label_13;
	}
	{
	LINE_NUMBER(501);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_char_name_long;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(505);
	SM_nro_InfoDlg_showWait(ctx);
	LINE_NUMBER(506);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	clinit_nro_SelectCharScr(ctx);
	sp[1].o = (jobject)SF_nro_SelectCharScr_d;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	clinit_nro_SelectCharScr(ctx);
	jint temp0 = (jint)SF_nro_SelectCharScr_indexGender;
	clinit_nro_SelectCharScr(ctx);
	sp[2].o = (jobject)SF_nro_SelectCharScr_h;
	((func_nro_Service_selectCharToPlay_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_selectCharToPlay_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_indexGender))), (clinit_nro_SelectCharScr(ctx), (jint)SF_nro_SelectCharScr_f))));
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(510);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (((jint)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_isLogin2) == 0) goto label_18;
	}
	{
	LINE_NUMBER(511);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_note;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_YES;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (10019), (jobject(nullptr)));
	clinit_nro_Command(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_NO;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[2].o, sp[3].o, (frame[0].o), (10020), (jobject(nullptr)));
	SM_main_GameCanvas_startYesNoDlg_java_lang_String_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(516);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(519);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, (jint(-1)), (jint(1)));
	LINE_NUMBER(520);
	clinit_nro_ServerScr(ctx);
	SF_nro_ServerScr_isShowSv_HaveChar = (jint(0));
	LINE_NUMBER(521);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	((func_nro_ServerScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerScr_switchToMe])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(523);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(526);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(527);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(530);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_SelectCharScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SelectCharScr:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SelectCharScr(ctx);
	{
	LINE_NUMBER(18);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_isWait = (jint(0));
	LINE_NUMBER(24);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (31);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (32);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (28);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_h = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (8);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_i = sp[0].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (7);
	clinit_nro_SelectCharScr(ctx);
	SF_nro_SelectCharScr_j = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_SelectCharScr[] {
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
	(void *) M_nro_SelectCharScr_switchToMe,
	(void *) M_nro_SelectCharScr_keyPress_int,
	(void *) M_nro_SelectCharScr_update,
	(void *) M_nro_SelectCharScr_updateKey,
	(void *) M_nro_SelectCharScr_paint_lib_mGraphics,
	(void *) M_nro_SelectCharScr_perform_int_java_lang_Object,
	(void *) M_nro_SelectCharScr_getActiveField_R_lib_input_TField,
	(void *) M_nro_SelectCharScr_doChangeMap,
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
	{ "getActiveField", "()Llib/input/TField;" },
	{ "doChangeMap", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "instance", &class_nro_SelectCharScr, (intptr_t) &SF_nro_SelectCharScr_instance, "Lnro/SelectCharScr;", 9 },
	{ "isWait", &class_boolean, (intptr_t) &SF_nro_SelectCharScr_isWait, "Z", 9 },
	{ "cmdSelectSv", &class_nro_Command, offsetof(nro_SelectCharScr, F_cmdSelectSv), "Lnro/Command;", 2 },
	{ "d", &class_lib_input_TField, (intptr_t) &SF_nro_SelectCharScr_d, "Llib/input/TField;", 10 },
	{ "indexGender", &class_int, (intptr_t) &SF_nro_SelectCharScr_indexGender, "I", 10 },
	{ "f", &class_int, (intptr_t) &SF_nro_SelectCharScr_f, "I", 10 },
	{ "g", &class_int, (intptr_t) &SF_nro_SelectCharScr_g, "I", 10 },
	{ "h", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_SelectCharScr_h, "[[I", 10 },
	{ "i", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_SelectCharScr_i, "[I", 10 },
	{ "j", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_SelectCharScr_j, "[I", 10 },
	{ "bgID", getArrayClass(&class_int, 1), offsetof(nro_SelectCharScr, F_bgID), "[I", 2 },
	{ "cx", &class_int, offsetof(nro_SelectCharScr, F_cx), "I", 2 },
	{ "cy", &class_int, offsetof(nro_SelectCharScr, F_cy), "I", 2 },
	{ "dy", &class_int, offsetof(nro_SelectCharScr, F_dy), "I", 2 },
	{ "o", &class_int, offsetof(nro_SelectCharScr, F_o), "I", 2 },
	{ "p", &class_int, offsetof(nro_SelectCharScr, F_p), "I", 2 },
};

static MethodMetadata methods[] {
	{ "gI", (intptr_t) SM_nro_SelectCharScr_gI_R_nro_SelectCharScr, 0, "()Lnro/SelectCharScr;", 9 },
	{ "a", (intptr_t) SM_nro_SelectCharScr_a_Array1_byte, 0, "([B)V", 10 },
	{ "getActiveField", (intptr_t) M_nro_SelectCharScr_getActiveField_R_lib_input_TField, VTABLE_nro_SelectCharScr_getActiveField_R_lib_input_TField, "()Llib/input/TField;", 1 },
	{ "switchToMe", (intptr_t) M_nro_SelectCharScr_switchToMe, VTABLE_nro_SelectCharScr_switchToMe, "()V", 17 },
	{ "doChangeMap", (intptr_t) M_nro_SelectCharScr_doChangeMap, VTABLE_nro_SelectCharScr_doChangeMap, "()V", 2 },
	{ "<init>", (intptr_t) init_nro_SelectCharScr, 0, "()V", 1 },
	{ "keyPress", (intptr_t) M_nro_SelectCharScr_keyPress_int, VTABLE_nro_SelectCharScr_keyPress_int, "(I)V", 17 },
	{ "update", (intptr_t) M_nro_SelectCharScr_update, VTABLE_nro_SelectCharScr_update, "()V", 17 },
	{ "updateKey", (intptr_t) M_nro_SelectCharScr_updateKey, VTABLE_nro_SelectCharScr_updateKey, "()V", 17 },
	{ "paint", (intptr_t) M_nro_SelectCharScr_paint_lib_mGraphics, VTABLE_nro_SelectCharScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "perform", (intptr_t) M_nro_SelectCharScr_perform_int_java_lang_Object, VTABLE_nro_SelectCharScr_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_SelectCharScr, 0, "()V", 8 },
};

Class class_nro_SelectCharScr{
		.nativeName = (intptr_t) "nro/SelectCharScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_SelectCharScr),
		.classVtable = (intptr_t) vtable_nro_SelectCharScr,
		.staticInitializer = (intptr_t) clinit_nro_SelectCharScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_SelectCharScr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_SelectCharScr = registerClass(&class_nro_SelectCharScr);

}

