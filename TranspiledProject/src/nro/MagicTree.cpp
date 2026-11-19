#include "nro/MagicTree.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/EffectCharPaint.h"
#include "nro/StaticObj.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Mob.h"
#include "nro/ItemObject.h"
#include "lib/sound/SoundMn.h"
#include "nro/PopUp.h"
#include "nro/Command.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "lib/mGraphics.h"
#include "nro/ServerEffect.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/Npc.h"
#include "nro/MagicTree.h"
#include "nro/NinjaUtil.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_MagicTree_pea;
jbool SF_nro_MagicTree_isPaint;

void mark_nro_MagicTree(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_MagicTree_pea)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MagicTree_pea)->clazz)->markFunction)((jobject) SF_nro_MagicTree_pea, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_Npc(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_MagicTree *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_peaPostionX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_peaPostionX)->clazz)->markFunction)((jobject) self->F_peaPostionX, mark, depth + 1);
	if (self->F_peaPostionY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_peaPostionY)->clazz)->markFunction)((jobject) self->F_peaPostionY, mark, depth + 1);
	if (self->F_p)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p)->clazz)->markFunction)((jobject) self->F_p, mark, depth + 1);
}

void init_nro_MagicTree_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MagicTree:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MagicTree(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(32);
	init_nro_Npc_int_int_int_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_PopUp);
	init_nro_PopUp_java_lang_String_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (jint(0)), (jint(0)));
	((nro_MagicTree *) NULL_CHECK(sp[0].o))->F_p = (jref) sp[1].o;
	LINE_NUMBER(29);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_delay = (jint(0));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (frame[0].o), (jint(1)), (jobject(nullptr)));
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	SM_nro_PopUp_addPopUp_nro_PopUp(ctx, sp[0].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MagicTree_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MagicTree:paint", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id) == 0) goto label_5;
	}
	{
	LINE_NUMBER(39);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[1].o), ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(0)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = 9;
	jint temp3 = 6;
	jint temp4 = jint(0);
	jint temp5 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp6 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp5, ((temp6 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(4))))) - (jint(1))), (33));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(43);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_SmallImage(ctx);
	sp[3].o = (jobject)SF_nro_SmallImage_smallImg;
	jint temp2 = (temp1 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(4))))) - (20);
	jint temp3 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp2, temp3, sp[3].o);
	goto label_0;
	}
label_8:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(46);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_SmallImage(ctx);
	sp[3].o = (jobject)SF_nro_SmallImage_smallImg;
	jint temp2 = (temp1 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(4))))) - (17);
	jint temp3 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp2, temp3, sp[3].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(50);
	frame[2].i = (jint(0));
	}
label_13:;
	{
	if ((frame[2].i) >= ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas)) goto label_1;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = frame[1].o;
	clinit_nro_MagicTree(ctx);
	sp[1].o = (jobject)SF_nro_MagicTree_pea;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[2].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_peaPostionX;
	jint temp1 = temp0 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i)));
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	jint temp2 = temp1 - (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(3)))) / (jint(2)));
	jint temp3 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[2].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_peaPostionY;
	jint temp4 = temp3 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i)));
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp2, (temp4 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(4))))), (jint(0)));
	LINE_NUMBER(50);
	INST_IINC(2, 1);
	goto label_13;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(54);
	goto label_16;
label_2:;
	LINE_NUMBER(53);
	INST_ASTORE(2);
label_16:;
	{
	LINE_NUMBER(56);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) != 0) goto label_5;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_idImg;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_dy);
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (15);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, (temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_where)), (jint(0)), (jint(3)));
	LINE_NUMBER(58);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_indexEffTask = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_indexEffTask) + (jint(1)));
	LINE_NUMBER(60);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(61);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask = (jint(0));
	}
label_5:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_MagicTree_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MagicTree:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isPaint = (clinit_nro_MagicTree(ctx), (jint)SF_nro_MagicTree_isPaint);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_MagicTree *) NULL_CHECK(sp[0].o))->F_cur = temp0;
	LINE_NUMBER(72);
	if ((longCompare((((jlong)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_cur) - ((jlong)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(1000ll)))) < 0) goto label_3;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	((nro_MagicTree *) NULL_CHECK(sp[0].o))->F_seconds = (((jint)((nro_MagicTree *) NULL_CHECK(sp[0].o))->F_seconds) - (jint(1)));
	LINE_NUMBER(74);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_last = ((jlong)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_cur);
	LINE_NUMBER(75);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(76);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(80);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdate) != 0) goto label_8;
	}
	{
	LINE_NUMBER(81);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas) >= ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_maxPeas)) goto label_10;
	}
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds) != 0) goto label_10;
	}
	{
	LINE_NUMBER(82);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_waitToUpdate = (jint(1));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(84);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds) != 0) goto label_10;
	}
	{
	LINE_NUMBER(85);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdate = (jint(0));
	LINE_NUMBER(86);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_waitToUpdate = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(89);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_waitToUpdate) == 0) goto label_14;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	((nro_MagicTree *) NULL_CHECK(sp[0].o))->F_delay = (((jint)((nro_MagicTree *) NULL_CHECK(sp[0].o))->F_delay) + (jint(1)));
	LINE_NUMBER(91);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_delay) != (20)) goto label_14;
	}
	{
	LINE_NUMBER(92);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_delay = (jint(0));
	LINE_NUMBER(93);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_waitToUpdate = (jint(0));
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getMagicTree_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getMagicTree_byte])(ctx, sp[0].o, (jint(2)));
	}
label_14:;
	{
	LINE_NUMBER(98);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdateTree) == 0) goto label_20;
	}
	{
	LINE_NUMBER(99);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdateTree = (jint(0));
	LINE_NUMBER(100);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds) < 0) goto label_23;
	}
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas) < ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_maxPeas)) goto label_24;
	}
label_23:;
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds) < 0) goto label_25;
	}
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdate) != 0) goto label_24;
	}
label_25:;
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isPeasEffect) != 0) goto label_24;
	}
	{
	LINE_NUMBER(101);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas) != ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_maxPeas)) goto label_20;
	}
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdate) != 0) goto label_20;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	jint temp0 = jint(0);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_can_harvest;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_maxPeas));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (20);
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	((func_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp2, (temp3 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(4))))));
	goto label_20;
	}
label_24:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = sp[1].o;
	sp[3].i = temp0;
	sp += 4;
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdate) != 0) goto label_28;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_maxPeas));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_29;
	}
label_28:;
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_UPGRADING;
label_29:;
	{
	sp -= 5;
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[4].o;
	jint temp0 = jint(1);
	sp[2].o = (jobject)SM_nro_NinjaUtil_getTime_int_R_java_lang_String(ctx, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (20);
	clinit_nro_SmallImage(ctx);
	sp[2].o = (jobject)SF_nro_SmallImage_smallImg;
	((func_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp1, (temp2 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(4))))));
	}
label_20:;
	{
	LINE_NUMBER(109);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds) < 0) goto label_30;
	}
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas) < ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_maxPeas)) goto label_31;
	}
label_30:;
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds) < 0) goto label_32;
	}
	{
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdate) == 0) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	sp[0].o = (jobject)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_says;
	sp[1].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	sp[1].o = (jobject)((nro_PopUp *) NULL_CHECK(sp[1].o))->F_says;
	jint temp0 = (((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1));
	sp[1].o = (jobject)SM_nro_NinjaUtil_getTime_int_R_java_lang_String(ctx, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_seconds));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_32:;
	{
	LINE_NUMBER(113);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isPeasEffect) == 0) goto label_33;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isPaint = (jint(0));
	LINE_NUMBER(115);
	jint temp0 = 98;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_peaPostionX;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas) - (jint(1)))));
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	jint temp3 = temp2 - (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(3)))) / (jint(2)));
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_peaPostionY;
	jint temp5 = temp4 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas) - (jint(1)))));
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_smallImg;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp3, (temp5 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_id))), (jint(4))))), (jint(1)));
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	((nro_MagicTree *) NULL_CHECK(sp[0].o))->F_currPeas = (((jint)((nro_MagicTree *) NULL_CHECK(sp[0].o))->F_currPeas) - (jint(1)));
	LINE_NUMBER(117);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_38;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	}
label_38:;
	{
	LINE_NUMBER(121);
	if (((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_currPeas) != ((jint)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_shadowLife)) goto label_33;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_p;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isPaint = (jint(1));
	LINE_NUMBER(123);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isUpdateTree = (jint(1));
	LINE_NUMBER(124);
	((nro_MagicTree *) NULL_CHECK((frame[0].o)))->F_isPeasEffect = (jint(0));
	}
label_33:;
	{
	LINE_NUMBER(128);
	M_nro_Npc_update(ctx, (frame[0].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MagicTree_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MagicTree:perform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(132);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_magicTree_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_magicTree_byte])(ctx, sp[0].o, (jint(1)));
	}
label_1:;
	LINE_NUMBER(136);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_MagicTree(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Npc(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MagicTree:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MagicTree(ctx);
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dhatdau.png"_j))));
	clinit_nro_MagicTree(ctx);
	SF_nro_MagicTree_pea = sp[0].o;
	LINE_NUMBER(23);
	clinit_nro_MagicTree(ctx);
	SF_nro_MagicTree_isPaint = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_MagicTree[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_nro_Char_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_nro_Char_getX_R_int,
	(void *) M_nro_Char_getY_R_int,
	(void *) M_nro_Char_getW_R_int,
	(void *) M_nro_Char_getH_R_int,
	(void *) M_nro_Char_stopMoving,
	(void *) M_nro_Char_isInvisible_R_boolean,
	(void *) M_nro_Char_applyCharLevelPercent,
	(void *) M_nro_Char_getdxSkill_R_int,
	(void *) M_nro_Char_getdySkill_R_int,
	(void *) M_nro_Char_getStrLevel_R_java_lang_String,
	(void *) M_nro_Char_avatarz_R_int,
	(void *) M_nro_Char_setPowerInfo_java_lang_String_short_short_short,
	(void *) M_nro_Char_addInfo_java_lang_String,
	(void *) M_nro_Char_boxSort,
	(void *) M_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill,
	(void *) M_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint,
	(void *) M_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint,
	(void *) M_nro_Char_isInWaypoint_R_boolean,
	(void *) M_nro_Char_soundUpdate,
	(void *) M_nro_MagicTree_update,
	(void *) M_nro_Char_updateEffect,
	(void *) M_nro_Char_checkPerformEndMovePointAction,
	(void *) M_nro_Char_checkHideCharName,
	(void *) M_nro_Char_updateSkillPaint,
	(void *) M_nro_Char_SetNum_int_int,
	(void *) M_nro_Char_updateCharDeadFly,
	(void *) M_nro_Char_updateResetPoint,
	(void *) M_nro_Char_updateSkillStand,
	(void *) M_nro_Char_updateCharAutoJump,
	(void *) M_nro_Npc_hide,
	(void *) M_nro_Char_show,
	(void *) M_nro_Char_updateCharStand,
	(void *) M_nro_Char_updateSuperEff,
	(void *) M_nro_Char_getSoundVolumn_R_float,
	(void *) M_nro_Char_updateCharRun,
	(void *) M_nro_Char_stop,
	(void *) M_nro_Char_updateCharJump,
	(void *) M_nro_Char_setCharFallFromJump,
	(void *) M_nro_Char_updateCharFall,
	(void *) M_nro_Char_updateCharFly,
	(void *) M_nro_Char_updateMount,
	(void *) M_nro_Char_checkFrameTick_Array1_int,
	(void *) M_nro_Char_paintMount2_lib_mGraphics,
	(void *) M_nro_Char_setMountIsStart,
	(void *) M_nro_Char_checkDelayFallIfTooHigh,
	(void *) M_nro_Char_setDefaultPart,
	(void *) M_nro_Char_setDefaultWeapon,
	(void *) M_nro_Char_setDefaultBody,
	(void *) M_nro_Char_setDefaultLeg,
	(void *) M_nro_Char_isSelectingSkillUseAlone_R_boolean,
	(void *) M_nro_Char_x_R_boolean,
	(void *) M_nro_Char_isSelectingSkillBuffToPlayer_R_boolean,
	(void *) M_nro_Char_isUseChargeSkill_R_boolean,
	(void *) M_nro_Char_setSkillPaint_nro_SkillPaint_int,
	(void *) M_nro_Char_sendUseChargeSkill,
	(void *) M_nro_Char_stopUseChargeSkill,
	(void *) M_nro_Char_useChargeSkill_boolean,
	(void *) M_nro_Char_setAutoSkillPaint_nro_SkillPaint_int,
	(void *) M_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint,
	(void *) M_nro_Char_setAttack,
	(void *) M_nro_Char_isOutX_R_boolean,
	(void *) M_nro_Char_isPaint_R_boolean,
	(void *) M_nro_Char_createShadow_int_int_int,
	(void *) M_nro_Char_setMabuHold_boolean,
	(void *) M_nro_MagicTree_paint_lib_mGraphics,
	(void *) M_nro_Char_paintEff_Pet_lib_mGraphics,
	(void *) M_nro_Char_paintEffect_lib_mGraphics,
	(void *) M_nro_Char_paintHp_lib_mGraphics_int_int,
	(void *) M_nro_Char_paintShadow_lib_mGraphics,
	(void *) M_nro_Char_updateShadown,
	(void *) M_nro_Char_paintCharWithoutSkill_lib_mGraphics,
	(void *) M_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean,
	(void *) M_nro_Char_isCharBodyImageID_int_R_boolean,
	(void *) M_nro_Char_paint_lib_mGraphics_int_int_int,
	(void *) M_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int,
	(void *) M_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean,
	(void *) M_nro_Char_paintCharWithSkill_lib_mGraphics,
	(void *) M_nro_Char_moveTo_int_int_int,
	(void *) M_nro_Char_searchFocus,
	(void *) M_nro_Char_clearFocus_int,
	(void *) M_nro_Char_isAttacPlayerStatus_R_boolean,
	(void *) M_nro_Char_setHoldChar_nro_Char,
	(void *) M_nro_Char_setHoldMob_nro_Mob,
	(void *) M_nro_Char_findNextFocusByKey,
	(void *) M_nro_Char_deFocusNPC,
	(void *) M_nro_Char_updateCharInBridge,
	(void *) M_nro_Char_doInjure_long_long_boolean_boolean,
	(void *) M_nro_Char_doInjure,
	(void *) M_nro_Char_startDie_short_short,
	(void *) M_nro_Char_waitToDie_short_short,
	(void *) M_nro_Char_liveFromDead,
	(void *) M_nro_Char_doUsePotion_R_boolean,
	(void *) M_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean,
	(void *) M_nro_Char_focusManualTo_java_lang_Object,
	(void *) M_nro_Char_focusToAttack_R_boolean,
	(void *) M_nro_Char_addDustEff_int,
	(void *) M_nro_Char_removeHoleEff,
	(void *) M_nro_Char_removeProtectEff,
	(void *) M_nro_Char_removeBlindEff,
	(void *) M_nro_Char_removeEffect,
	(void *) M_nro_Char_setPos_short_short_byte,
	(void *) M_nro_Char_removeHuytSao,
	(void *) M_nro_Char_fusionComplete,
	(void *) M_nro_Char_setFusion_byte,
	(void *) M_nro_Char_removeSleepEff,
	(void *) M_nro_Char_setPartOld,
	(void *) M_nro_Char_addServerEffect_int_int_int_int,
	(void *) M_nro_Char_resetPartTemp,
	(void *) M_nro_Char_getEffById_int_R_nro_Effect,
	(void *) M_nro_Char_addEffChar_nro_Effect,
	(void *) M_nro_Char_removeEffChar_int_int,
	(void *) M_nro_Char_paintEffBehind_lib_mGraphics,
	(void *) M_nro_Char_paintEffFront_lib_mGraphics,
	(void *) M_nro_Char_updEffChar,
	(void *) M_nro_Char_checkLuong_R_int,
	(void *) M_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int,
	(void *) M_nro_Char_updateFHead,
	(void *) M_nro_Char_getFHead_int_R_int,
	(void *) M_nro_Char_paintHat_behind_lib_mGraphics_int_int,
	(void *) M_nro_Char_sendNewAttack_short,
	(void *) M_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte,
	(void *) M_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte,
	(void *) M_nro_Char_clone_R_nro_Char,
	(void *) M_nro_Char_containsCaiTrang_int_R_boolean,
	(void *) M_nro_Npc_setStatus_byte_int,
	(void *) M_nro_Npc_paintName_lib_mGraphics,
	(void *) M_nro_MagicTree_perform_int_java_lang_Object,
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
	{ "getX", "()I" },
	{ "getY", "()I" },
	{ "getW", "()I" },
	{ "getH", "()I" },
	{ "stopMoving", "()V" },
	{ "isInvisible", "()Z" },
	{ "applyCharLevelPercent", "()V" },
	{ "getdxSkill", "()I" },
	{ "getdySkill", "()I" },
	{ "getStrLevel", "()Ljava/lang/String;" },
	{ "avatarz", "()I" },
	{ "setPowerInfo", "(Ljava/lang/String;SSS)V" },
	{ "addInfo", "(Ljava/lang/String;)V" },
	{ "boxSort", "()V" },
	{ "getSkill", "(Lnro/SkillTemplate;)Lnro/Skill;" },
	{ "isInEnterOfflinePoint", "()Lnro/Waypoint;" },
	{ "isInEnterOnlinePoint", "()Lnro/Waypoint;" },
	{ "isInWaypoint", "()Z" },
	{ "soundUpdate", "()V" },
	{ "update", "()V" },
	{ "updateEffect", "()V" },
	{ "checkPerformEndMovePointAction", "()V" },
	{ "checkHideCharName", "()V" },
	{ "updateSkillPaint", "()V" },
	{ "SetNum", "(II)V" },
	{ "updateCharDeadFly", "()V" },
	{ "updateResetPoint", "()V" },
	{ "updateSkillStand", "()V" },
	{ "updateCharAutoJump", "()V" },
	{ "hide", "()V" },
	{ "show", "()V" },
	{ "updateCharStand", "()V" },
	{ "updateSuperEff", "()V" },
	{ "getSoundVolumn", "()F" },
	{ "updateCharRun", "()V" },
	{ "stop", "()V" },
	{ "updateCharJump", "()V" },
	{ "setCharFallFromJump", "()V" },
	{ "updateCharFall", "()V" },
	{ "updateCharFly", "()V" },
	{ "updateMount", "()V" },
	{ "checkFrameTick", "([I)V" },
	{ "paintMount2", "(Llib/mGraphics;)V" },
	{ "setMountIsStart", "()V" },
	{ "checkDelayFallIfTooHigh", "()V" },
	{ "setDefaultPart", "()V" },
	{ "setDefaultWeapon", "()V" },
	{ "setDefaultBody", "()V" },
	{ "setDefaultLeg", "()V" },
	{ "isSelectingSkillUseAlone", "()Z" },
	{ "x", "()Z" },
	{ "isSelectingSkillBuffToPlayer", "()Z" },
	{ "isUseChargeSkill", "()Z" },
	{ "setSkillPaint", "(Lnro/SkillPaint;I)V" },
	{ "sendUseChargeSkill", "()V" },
	{ "stopUseChargeSkill", "()V" },
	{ "useChargeSkill", "(Z)V" },
	{ "setAutoSkillPaint", "(Lnro/SkillPaint;I)V" },
	{ "skillInfoPaint", "()[Lnro/SkillInfoPaint;" },
	{ "setAttack", "()V" },
	{ "isOutX", "()Z" },
	{ "isPaint", "()Z" },
	{ "createShadow", "(III)V" },
	{ "setMabuHold", "(Z)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "paintEff_Pet", "(Llib/mGraphics;)V" },
	{ "paintEffect", "(Llib/mGraphics;)V" },
	{ "paintHp", "(Llib/mGraphics;II)V" },
	{ "paintShadow", "(Llib/mGraphics;)V" },
	{ "updateShadown", "()V" },
	{ "paintCharWithoutSkill", "(Llib/mGraphics;)V" },
	{ "paintBag", "(Llib/mGraphics;[SIIIZ)V" },
	{ "isCharBodyImageID", "(I)Z" },
	{ "paint", "(Llib/mGraphics;III)V" },
	{ "paintHeadWithXY", "(Llib/mGraphics;III)V" },
	{ "paintCharBody", "(Llib/mGraphics;IIIIZ)V" },
	{ "paintCharWithSkill", "(Llib/mGraphics;)V" },
	{ "moveTo", "(III)V" },
	{ "searchFocus", "()V" },
	{ "clearFocus", "(I)V" },
	{ "isAttacPlayerStatus", "()Z" },
	{ "setHoldChar", "(Lnro/Char;)V" },
	{ "setHoldMob", "(Lnro/Mob;)V" },
	{ "findNextFocusByKey", "()V" },
	{ "deFocusNPC", "()V" },
	{ "updateCharInBridge", "()V" },
	{ "doInjure", "(JJZZ)V" },
	{ "doInjure", "()V" },
	{ "startDie", "(SS)V" },
	{ "waitToDie", "(SS)V" },
	{ "liveFromDead", "()V" },
	{ "doUsePotion", "()Z" },
	{ "isMeCanAttackOtherPlayer", "(Lnro/Char;)Z" },
	{ "focusManualTo", "(Ljava/lang/Object;)V" },
	{ "focusToAttack", "()Z" },
	{ "addDustEff", "(I)V" },
	{ "removeHoleEff", "()V" },
	{ "removeProtectEff", "()V" },
	{ "removeBlindEff", "()V" },
	{ "removeEffect", "()V" },
	{ "setPos", "(SSB)V" },
	{ "removeHuytSao", "()V" },
	{ "fusionComplete", "()V" },
	{ "setFusion", "(B)V" },
	{ "removeSleepEff", "()V" },
	{ "setPartOld", "()V" },
	{ "addServerEffect", "(IIII)V" },
	{ "resetPartTemp", "()V" },
	{ "getEffById", "(I)Lnro/Effect;" },
	{ "addEffChar", "(Lnro/Effect;)V" },
	{ "removeEffChar", "(II)V" },
	{ "paintEffBehind", "(Llib/mGraphics;)V" },
	{ "paintEffFront", "(Llib/mGraphics;)V" },
	{ "updEffChar", "()V" },
	{ "checkLuong", "()I" },
	{ "paintRedEye", "(Llib/mGraphics;IIII)V" },
	{ "updateFHead", "()V" },
	{ "getFHead", "(I)I" },
	{ "paintHat_behind", "(Llib/mGraphics;II)V" },
	{ "sendNewAttack", "(S)V" },
	{ "SetSkillPaint_NEW", "(SZBBBSB)V" },
	{ "SetSkillPaint_STT", "(ISLnro/Point;SSB[Lnro/Point;B)V" },
	{ "clone", "()Lnro/Char;" },
	{ "containsCaiTrang", "(I)Z" },
	{ "setStatus", "(BI)V" },
	{ "paintName", "(Llib/mGraphics;)V" },
	{ "perform", "(ILjava/lang/Object;)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "pea", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_MagicTree_pea, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "id", &class_int, offsetof(nro_MagicTree, F_id), "I", 1 },
	{ "currPeas", &class_int, offsetof(nro_MagicTree, F_currPeas), "I", 1 },
	{ "shadowLife", &class_int, offsetof(nro_MagicTree, F_shadowLife), "I", 1 },
	{ "maxPeas", &class_int, offsetof(nro_MagicTree, F_maxPeas), "I", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_MagicTree, F_name), "Ljava/lang/String;", 1 },
	{ "isUpdate", &class_boolean, offsetof(nro_MagicTree, F_isUpdate), "Z", 1 },
	{ "peaPostionX", getArrayClass(&class_int, 1), offsetof(nro_MagicTree, F_peaPostionX), "[I", 1 },
	{ "peaPostionY", getArrayClass(&class_int, 1), offsetof(nro_MagicTree, F_peaPostionY), "[I", 1 },
	{ "p", &class_nro_PopUp, offsetof(nro_MagicTree, F_p), "Lnro/PopUp;", 2 },
	{ "isUpdateTree", &class_boolean, offsetof(nro_MagicTree, F_isUpdateTree), "Z", 1 },
	{ "isPaint", &class_boolean, (intptr_t) &SF_nro_MagicTree_isPaint, "Z", 9 },
	{ "isPeasEffect", &class_boolean, offsetof(nro_MagicTree, F_isPeasEffect), "Z", 1 },
	{ "seconds", &class_int, offsetof(nro_MagicTree, F_seconds), "I", 1 },
	{ "last", &class_long, offsetof(nro_MagicTree, F_last), "J", 1 },
	{ "cur", &class_long, offsetof(nro_MagicTree, F_cur), "J", 1 },
	{ "waitToUpdate", &class_boolean, offsetof(nro_MagicTree, F_waitToUpdate), "Z", 2 },
	{ "delay", &class_int, offsetof(nro_MagicTree, F_delay), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MagicTree_int_int_int_int_int_int, 0, "(IIIIII)V", 1 },
	{ "paint", (intptr_t) M_nro_MagicTree_paint_lib_mGraphics, VTABLE_nro_MagicTree_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_MagicTree_update, VTABLE_nro_MagicTree_update, "()V", 17 },
	{ "perform", (intptr_t) M_nro_MagicTree_perform_int_java_lang_Object, VTABLE_nro_MagicTree_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_MagicTree, 0, "()V", 8 },
};

Class class_nro_MagicTree{
		.nativeName = (intptr_t) "nro/MagicTree",
		.parentClass = (intptr_t) &class_nro_Npc,
		.size = sizeof(nro_MagicTree),
		.classVtable = (intptr_t) vtable_nro_MagicTree,
		.staticInitializer = (intptr_t) clinit_nro_MagicTree,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MagicTree,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 138,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MagicTree = registerClass(&class_nro_MagicTree);

}

