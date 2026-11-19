#include "nro/Controller2.h"
#include "nro/NewBoss.h"
#include "java/lang/StringBuilder.h"
#include "lib/input/TField.h"
#include "lib/network/Session_ME.h"
#include "java/util/Vector.h"
#include "nro/AutoTrainMenu.h"
#include "nro/Mabu.h"
#include "nro/Info_RadaScr.h"
#include "nro/ImageSource.h"
#include "nro/ItemTime.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "nro/ServerListScreen.h"
#include "nro/Controller2.h"
#include "nro/Message.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "java/io/DataInputStream.h"
#include "nro/ItemTemplate.h"
#include "nro/BachTuoc.h"
#include "nro/ServerEffect.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "java/lang/System.h"
#include "nro/GameScr.h"
#include "nro/ItemOption.h"
#include "main/GameCanvas.h"
#include "nro/BigBoss.h"
#include "nro/Service.h"
#include "nro/Panel.h"
#include "nro/AutoTrainMenu_AutoItem.h"
#include "nro/CrackBallScr.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "java/io/FilterInputStream.h"
#include "nro/Controller.h"
#include "java/io/IOException.h"
#include "nro/ItemTemplates.h"
#include "nro/PKFlag.h"
#include "lib/mSystem.h"
#include "nro/RadarScr.h"
#include "nro/BigBoss2.h"
#include "nro/InfoDlg.h"
#include "nro/Effect.h"
#include "nro/BachTuoc2.h"
#include "nro/PetFollow.h"
#include "lib/input/ChatTextField.h"
#include "nro/ClientInput.h"
#include "nro/Npc.h"
#include "nro/RegisterScreen.h"
#include "main/GameMidlet.h"
#include "nro/TransportScr.h"
#include "nro/Item.h"
#include "nro/LoginScr.h"

extern "C" {


void mark_nro_Controller2(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Controller2 *) object;
	if (self->F_o)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_o)->clazz)->markFunction)((jobject) self->F_o, mark, depth + 1);
	if (self->F_p)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p)->clazz)->markFunction)((jobject) self->F_p, mark, depth + 1);
}

void clinit_nro_Controller2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Controller2_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Controller2:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Controller2(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_t = (jint(0));
	LINE_NUMBER(32);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_j = (jint(16711680));
	LINE_NUMBER(33);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_l = (jlong(0));
	LINE_NUMBER(34);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_m = (jlong(150ll));
	LINE_NUMBER(35);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_n = (jint(1));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_o = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_p = (jref) sp[1].o;
	LINE_NUMBER(38);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_y0 = (frame[2].i);
	LINE_NUMBER(39);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_d = (frame[1].i);
	LINE_NUMBER(40);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_k = (jfloat(1));
	LINE_NUMBER(41);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_c = (frame[3].i);
	LINE_NUMBER(42);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_h = (frame[4].i);
	LINE_NUMBER(43);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_a = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w);
	LINE_NUMBER(44);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_b = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_l = temp0;
	LINE_NUMBER(47);
	frame[3].i = (jint(0));
	}
label_17:;
	{
	if ((frame[3].i) >= (jint(2))) goto label_18;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_o;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_p;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(47);
	INST_IINC(3, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(52);
	((nro_Controller2 *) NULL_CHECK((frame[0].o)))->F_j = (frame[5].i);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Controller2_a_lib_mGraphics_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Controller2:a", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Controller2(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(56);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(57);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(1)), (jint(2)));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Controller2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Controller2:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Controller2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Controller2_readMessage_nro_Message(jcontext ctx, jobject param0) {
	jtype frame[78];
	auto stack = &frame[69];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Controller2:readMessage", 78 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[11]{};

	clinit_nro_Controller2(ctx);
	frame[0].o = param0;
label_41: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(91);
	switch(((jint)((nro_Message *) NULL_CHECK((frame[0].o)))->F_command)) {
		case -128: goto label_204;
		case -127: { popExceptionFrames(frameRef, 1); goto label_42; }
		case -126: { popExceptionFrames(frameRef, 1); goto label_45; }
		case -125: { popExceptionFrames(frameRef, 1); goto label_48; }
		case -124: { popExceptionFrames(frameRef, 1); goto label_51; }
		case -123: { popExceptionFrames(frameRef, 1); goto label_57; }
		case -122: { popExceptionFrames(frameRef, 1); goto label_60; }
		case -121: { popExceptionFrames(frameRef, 1); goto label_63; }
		case -120: { popExceptionFrames(frameRef, 1); goto label_66; }
		case -119: { popExceptionFrames(frameRef, 1); goto label_69; }
		case -117: { popExceptionFrames(frameRef, 1); goto label_72; }
		case -116: { popExceptionFrames(frameRef, 1); goto label_75; }
		case -115: { popExceptionFrames(frameRef, 1); goto label_78; }
		case -113: { popExceptionFrames(frameRef, 1); goto label_81; }
		case -111: { popExceptionFrames(frameRef, 1); goto label_84; }
		case -110: { popExceptionFrames(frameRef, 1); goto label_87; }
		case -106: { popExceptionFrames(frameRef, 1); goto label_90; }
		case -105: { popExceptionFrames(frameRef, 1); goto label_96; }
		case -103: { popExceptionFrames(frameRef, 1); goto label_99; }
		case -102: { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_110; } // goto label_205
		case -101: { popExceptionFrames(frameRef, 1); goto label_111; }
		case -100: { popExceptionFrames(frameRef, 1); goto label_114; }
		case -89: { popExceptionFrames(frameRef, 1); goto label_117; }
		case 31: { popExceptionFrames(frameRef, 1); goto label_120; }
		case 42: { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_134; } // goto label_206
		case 48: { popExceptionFrames(frameRef, 1); goto label_135; }
		case 51: { popExceptionFrames(frameRef, 1); goto label_138; }
		case 52: { popExceptionFrames(frameRef, 1); goto label_141; }
		case 93: { popExceptionFrames(frameRef, 1); goto label_144; }
		case 100: { popExceptionFrames(frameRef, 1); goto label_147; }
		case 101: { popExceptionFrames(frameRef, 1); goto label_150; }
		case 102: { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_158; } // goto label_207
		case 113: { popExceptionFrames(frameRef, 1); goto label_171; }
		case 114: { popExceptionFrames(frameRef, 1); goto label_18; }
		case 121: { popExceptionFrames(frameRef, 1); goto label_177; }
		case 122: { popExceptionFrames(frameRef, 1); goto label_180; }
		case 123: { popExceptionFrames(frameRef, 1); goto label_183; }
		case 124: { popExceptionFrames(frameRef, 1); goto label_186; }
		case 125: { popExceptionFrames(frameRef, 1); goto label_189; }
		case 127: { popExceptionFrames(frameRef, 1); goto label_195; }
		default: { bypasses[3] = true; goto label_116; } // goto label_115
	}
	}
label_204:;
	{
	LINE_NUMBER(93);
	frame[9].o = (frame[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[10].i = temp0;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[11].i = temp1;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp1 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_210;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[27].o = sp[0].o;
	goto label_213;
	}
label_210:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[11].i));
	frame[27].o = sp[0].o;
	}
label_213:;
	{
	LINE_NUMBER(104);
	if ((frame[10].i) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[26].i = temp0;
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[28].i = temp1;
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[29].i = temp2;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[12].i = temp3;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp4 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[30].i = temp4;
	LINE_NUMBER(110);
	if ((frame[27].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = frame[27].o;
	clinit_nro_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_nro_Char_int_int_int_byte(ctx, sp[1].o, (frame[26].i), (frame[27].o), (frame[28].i), (frame[29].i), (frame[12].i), (frame[30].i));
	((func_nro_Char_addEffChar_nro_Effect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_addEffChar_nro_Effect])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(113);
	{ popExceptionFrames(frameRef, 1); goto label_221; }
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(116);
	if ((frame[10].i) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[26].i = temp0;
	LINE_NUMBER(118);
	if ((frame[27].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(119);
	((func_nro_Char_removeEffChar_int_int) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_nro_Char_removeEffChar_int_int])(ctx, (frame[27].o), (jint(0)), (frame[26].i));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(121);
	{ popExceptionFrames(frameRef, 1); goto label_221; }
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(124);
	if ((frame[10].i) != (jint(2))) { popExceptionFrames(frameRef, 1); goto label_225; }
	}
	{
	LINE_NUMBER(125);
	if ((frame[27].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(126);
	((func_nro_Char_removeEffChar_int_int) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_nro_Char_removeEffChar_int_int])(ctx, (frame[27].o), (jint(-1)), (jint(0)));
	}
label_8:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(128);
	{ popExceptionFrames(frameRef, 1); goto label_221; }
label_225:;
	LINE_NUMBER(132);
	goto label_39;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(130);
	frame[27].o = sp[0].o;
	LINE_NUMBER(131);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[27].o));
	}
label_39:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();
label_42:;
label_44: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(136);
	SM_nro_Controller2_b_nro_Message(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();
label_45:;
label_47: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[25].i = temp0;
	LINE_NUMBER(140);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"type quay= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[25].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(141);
	if ((frame[25].i) != (jint(1))) goto label_231;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	frame[20].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	frame[22].o = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_showWinNumber_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_showWinNumber_java_lang_String_java_lang_String])(ctx, sp[0].o, (frame[20].o), (frame[22].o));
	}
label_231:;
	{
	LINE_NUMBER(148);
	if ((frame[25].i) != 0) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_GameScr_showYourNumber_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_showYourNumber_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();
label_48:;
label_50: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow = (jint(0));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	frame[27].o = sp[0].o;
	LINE_NUMBER(156);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"titile= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[27].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[25].i = temp0;
	LINE_NUMBER(158);
	sp[0].o = (jobject)SM_nro_ClientInput_gI_R_nro_ClientInput(ctx);
	((func_nro_ClientInput_setInput_int_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ClientInput_setInput_int_java_lang_String])(ctx, sp[0].o, (frame[25].i), (frame[27].o));
	LINE_NUMBER(160);
	frame[5].i = (jint(0));
	}
label_242:;
	{
	if ((frame[5].i) >= (frame[25].i)) goto label_49;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)SM_nro_ClientInput_gI_R_nro_ClientInput(ctx);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_tf;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[19].i = temp0;
	if (temp0 != 0) goto label_246;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)SM_nro_ClientInput_gI_R_nro_ClientInput(ctx);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_tf;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))))->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), (jint(1)));
	}
label_246:;
	{
	LINE_NUMBER(166);
	if ((frame[19].i) != (jint(1))) goto label_248;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)SM_nro_ClientInput_gI_R_nro_ClientInput(ctx);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_tf;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))))->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), (jint(0)));
	}
label_248:;
	{
	LINE_NUMBER(170);
	if ((frame[19].i) != (jint(2))) goto label_250;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)SM_nro_ClientInput_gI_R_nro_ClientInput(ctx);
	sp[0].o = (jobject)((nro_ClientInput *) NULL_CHECK(sp[0].o))->F_tf;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))))->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), (jint(2)));
	}
label_250:;
	{
	LINE_NUMBER(160);
	INST_IINC(5, 1);
	goto label_242;
	}
label_49:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();
label_51:;
label_53: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[19].i = temp0;
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[17].i = temp1;
	if (temp1 != 0) goto label_254;
	}
	{
	LINE_NUMBER(179);
	if ((frame[19].i) != (jint(2))) goto label_256;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_259;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_removeEffect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeEffect])(ctx, sp[0].o);
	goto label_256;
	}
label_259:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[3].i));
	if (sp[0].o == nullptr) goto label_256;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[3].i));
	((func_nro_Char_removeEffect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeEffect])(ctx, sp[0].o);
	}
label_256:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[4].i = temp1;
	LINE_NUMBER(189);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"playerID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" skillID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(190);
	if ((frame[3].i) != (32)) goto label_265;
	}
	{
	LINE_NUMBER(191);
	if ((frame[19].i) != (jint(1))) goto label_267;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(193);
	jint temp1 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp1 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_270;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_holdEffID = (frame[3].i);
	LINE_NUMBER(195);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[5].i));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_setHoldChar_nro_Char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setHoldChar_nro_Char])(ctx, sp[0].o, sp[1].o);
	goto label_265;
	}
label_270:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_273;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 == ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_273;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_holdEffID = (frame[3].i);
	LINE_NUMBER(198);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[5].i));
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((func_nro_Char_setHoldChar_nro_Char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setHoldChar_nro_Char])(ctx, sp[0].o, sp[1].o);
	goto label_265;
	}
label_273:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_265;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_265;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_holdEffID = (frame[3].i);
	LINE_NUMBER(201);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((func_nro_Char_setHoldChar_nro_Char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setHoldChar_nro_Char])(ctx, sp[0].o, sp[1].o);
	goto label_265;
	}
label_267:;
	{
	LINE_NUMBER(203);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_278;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_removeHoleEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeHoleEff])(ctx, sp[0].o);
	goto label_265;
	}
label_278:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_265;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((func_nro_Char_removeHoleEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeHoleEff])(ctx, sp[0].o);
	}
label_265:;
	{
	LINE_NUMBER(210);
	if ((frame[3].i) != (33)) goto label_281;
	}
	{
	LINE_NUMBER(211);
	if ((frame[19].i) != (jint(1))) goto label_283;
	}
	{
	LINE_NUMBER(212);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_285;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_protectEff = (jint(1));
	goto label_281;
	}
label_285:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_281;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_protectEff = (jint(1));
	goto label_281;
	}
label_283:;
	{
	LINE_NUMBER(217);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_288;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_removeProtectEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeProtectEff])(ctx, sp[0].o);
	goto label_281;
	}
label_288:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_281;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((func_nro_Char_removeProtectEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeProtectEff])(ctx, sp[0].o);
	}
label_281:;
	{
	LINE_NUMBER(224);
	if ((frame[3].i) != (39)) goto label_291;
	}
	{
	LINE_NUMBER(225);
	if ((frame[19].i) != (jint(1))) goto label_293;
	}
	{
	LINE_NUMBER(226);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_295;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_huytSao = (jint(1));
	goto label_291;
	}
label_295:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_291;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_huytSao = (jint(1));
	goto label_291;
	}
label_293:;
	{
	LINE_NUMBER(231);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_298;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_removeHuytSao) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeHuytSao])(ctx, sp[0].o);
	goto label_291;
	}
label_298:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_291;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((func_nro_Char_removeHuytSao) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeHuytSao])(ctx, sp[0].o);
	}
label_291:;
	{
	LINE_NUMBER(238);
	if ((frame[3].i) != (40)) goto label_301;
	}
	{
	LINE_NUMBER(239);
	if ((frame[19].i) != (jint(1))) goto label_303;
	}
	{
	LINE_NUMBER(240);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_305;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_blindEff = (jint(1));
	goto label_301;
	}
label_305:;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_301;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_blindEff = (jint(1));
	goto label_301;
	}
label_303:;
	{
	LINE_NUMBER(245);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_308;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_removeBlindEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeBlindEff])(ctx, sp[0].o);
	goto label_301;
	}
label_308:;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_301;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((func_nro_Char_removeBlindEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeBlindEff])(ctx, sp[0].o);
	}
label_301:;
	{
	LINE_NUMBER(252);
	if ((frame[3].i) != (41)) goto label_311;
	}
	{
	LINE_NUMBER(253);
	if ((frame[19].i) != (jint(1))) goto label_313;
	}
	{
	LINE_NUMBER(254);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_315;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_sleepEff = (jint(1));
	goto label_311;
	}
label_315:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_311;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_sleepEff = (jint(1));
	goto label_311;
	}
label_313:;
	{
	LINE_NUMBER(259);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_318;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_removeSleepEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeSleepEff])(ctx, sp[0].o);
	goto label_311;
	}
label_318:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	if (sp[0].o == nullptr) goto label_311;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((func_nro_Char_removeSleepEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeSleepEff])(ctx, sp[0].o);
	}
label_311:;
	{
	LINE_NUMBER(266);
	if ((frame[3].i) != (42)) goto label_254;
	}
	{
	LINE_NUMBER(267);
	if ((frame[19].i) != (jint(1))) goto label_322;
	}
	{
	LINE_NUMBER(268);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_254;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_stone = (jint(1));
	goto label_254;
	}
label_322:;
	{
	LINE_NUMBER(271);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_254;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_stone = (jint(0));
	LINE_NUMBER(273);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"tra ve huy chieu 2"_j))));
	}
label_254:;
	{
	LINE_NUMBER(278);
	if ((frame[17].i) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[25].i = temp1;
	LINE_NUMBER(281);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"modbHoldID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[25].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" skillID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"eff ID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[19].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(282);
	if ((frame[3].i) != (32)) goto label_331;
	}
	{
	LINE_NUMBER(283);
	if ((frame[19].i) != (jint(1))) goto label_333;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_336;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_holdEffID = (frame[3].i);
	LINE_NUMBER(286);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((func_nro_Char_setHoldMob_nro_Mob) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setHoldMob_nro_Mob])(ctx, sp[0].o, sp[1].o);
	goto label_331;
	}
label_336:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[5].i));
	if (sp[0].o == nullptr) goto label_331;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_holdEffID = (frame[3].i);
	LINE_NUMBER(289);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[5].i));
	sp[1].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((func_nro_Char_setHoldMob_nro_Mob) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setHoldMob_nro_Mob])(ctx, sp[0].o, sp[1].o);
	goto label_331;
	}
label_333:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((func_nro_Mob_removeHoldEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_removeHoldEff])(ctx, sp[0].o);
	}
label_331:;
	{
	LINE_NUMBER(296);
	if ((frame[3].i) != (40)) goto label_341;
	}
	{
	LINE_NUMBER(297);
	if ((frame[19].i) != (jint(1))) goto label_343;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_blindEff = (jint(1));
	goto label_341;
	}
label_343:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((func_nro_Mob_removeBlindEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_removeBlindEff])(ctx, sp[0].o);
	}
label_341:;
	{
	LINE_NUMBER(304);
	if ((frame[3].i) != (41)) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(305);
	if ((frame[19].i) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_54; }
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_sleepEff = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(307);
	popStackFrame(ctx);
	INST_RETURN();
label_54:;
label_56: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(ctx, (frame[25].i));
	((func_nro_Mob_removeSleepEff) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_removeSleepEff])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(311);
	popStackFrame(ctx);
	INST_RETURN();
label_57:;
label_59: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, temp0);
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[1].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_perCentMp = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(318);
	popStackFrame(ctx);
	INST_RETURN();
label_60:;
label_62: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_GameScr_findNPCInMap_short_R_nro_Npc(ctx, temp0);
	frame[14].o = sp[0].o;
	LINE_NUMBER(323);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[17].i = temp1;
	LINE_NUMBER(324);
	sp[0].o = frame[14].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[17].i));
	((nro_Npc *) NULL_CHECK(sp[0].o))->F_duahau = (jref) sp[1].o;
	LINE_NUMBER(326);
	frame[3].i = (jint(0));
	}
label_352:;
	{
	if ((frame[3].i) >= (frame[17].i)) goto label_353;
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[14].o)))->F_duahau;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(326);
	INST_IINC(3, 1);
	goto label_352;
	}
label_353:;
	{
	LINE_NUMBER(330);
	sp[0].o = frame[14].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[1].o);
	((func_nro_Npc_setStatus_byte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Npc_setStatus_byte_int])(ctx, sp[0].o, temp0, temp1);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(331);
	popStackFrame(ctx);
	INST_RETURN();
label_63:;
label_65: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(333);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_Service(ctx);
	SF_nro_Service_logMap = (temp0 - (clinit_nro_Service(ctx), (jlong)SF_nro_Service_curCheckMap));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_RETURN();
label_66:;
label_68: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(336);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	frame[28].l = (temp0 - (clinit_nro_Service(ctx), (jlong)SF_nro_Service_curCheckController));
	LINE_NUMBER(337);
	if ((longCompare((frame[28].l), (jlong(0)))) < 0) goto label_67;
	}
	{
	if ((longCompare((frame[28].l), (jlong(9999ll)))) > 0) goto label_67;
	}
	{
	LINE_NUMBER(338);
	clinit_nro_Service(ctx);
	SF_nro_Service_logController = (frame[28].l);
	LINE_NUMBER(339);
	SM_lib_network_Session_ME_updatePingSample_int(ctx, (jint((frame[28].l))));
	}
label_67:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(341);
	popStackFrame(ctx);
	INST_RETURN();
label_69:;
label_71: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_rank = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_RETURN();
label_72:;
label_74: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_tMabuEff = (jint(0));
	LINE_NUMBER(347);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_percentMabu = temp0;
	LINE_NUMBER(348);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_percentMabu) != (100)) goto label_361;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_mabuEff = (jint(1));
	}
label_361:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_percentMabu) != (101)) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(353);
	clinit_nro_Npc(ctx);
	SF_nro_Npc_mabuEff = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	INST_RETURN();
label_75:;
label_77: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_364;
	}
	INST_ICONST(1);
	goto label_365;
label_364:;
	INST_ICONST(0);
label_365:;
	{
	sp -= 1;
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_canAutoPlay = sp[0].i;
	LINE_NUMBER(359);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isAutoPlay = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_canAutoPlay);
	LINE_NUMBER(360);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_76;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_76;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_76;
	}
	{
	LINE_NUMBER(361);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_enabled = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_canAutoPlay);
	}
label_76:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(363);
	popStackFrame(ctx);
	INST_RETURN();
label_78:;
label_80: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[2].o);
	((func_nro_Char_setPowerInfo_java_lang_String_short_short_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setPowerInfo_java_lang_String_short_short_short])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(366);
	popStackFrame(ctx);
	INST_RETURN();
label_81:;
label_83: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (10));
	frame[30].o = sp[0].o;
	LINE_NUMBER(370);
	frame[3].i = (jint(0));
	}
label_370:;
	{
	if ((frame[3].i) >= (10)) goto label_371;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = frame[30].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(370);
	INST_IINC(3, 1);
	goto label_370;
	}
label_371:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_onKSkill_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_onKSkill_Array1_byte])(ctx, sp[0].o, (frame[30].o));
	LINE_NUMBER(375);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_onOSkill_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_onOSkill_Array1_byte])(ctx, sp[0].o, (frame[30].o));
	LINE_NUMBER(376);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_onCSkill_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_onCSkill_Array1_byte])(ctx, sp[0].o, (frame[30].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(377);
	popStackFrame(ctx);
	INST_RETURN();
label_84:;
label_86: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[18].i = temp0;
	LINE_NUMBER(380);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_nro_ImageSource(ctx);
	SF_nro_ImageSource_vSource = sp[0].o;
	LINE_NUMBER(382);
	frame[1].i = (jint(0));
	}
label_378:;
	{
	if ((frame[1].i) >= (frame[18].i)) goto label_379;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	frame[22].o = sp[0].o;
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[25].i = temp0;
	LINE_NUMBER(385);
	clinit_nro_ImageSource(ctx);
	sp[0].o = (jobject)SF_nro_ImageSource_vSource;
	clinit_nro_ImageSource(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ImageSource);
	init_nro_ImageSource_java_lang_String_byte(ctx, sp[1].o, (frame[22].o), (frame[25].i));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(382);
	INST_IINC(1, 1);
	goto label_378;
	}
label_379:;
	{
	LINE_NUMBER(388);
	SM_nro_ImageSource_checkRMS(ctx);
	LINE_NUMBER(389);
	SM_nro_ImageSource_saveRMS(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(390);
	popStackFrame(ctx);
	INST_RETURN();
label_87:;
label_89: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[24].i = temp0;
	if (temp0 != (jint(1))) goto label_386;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(395);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[31].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_390;
	}
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_sendServerData_byte_int_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendServerData_byte_int_Array1_byte])(ctx, sp[0].o, (jint(1)), (jint(-1)), (checkCast(ctx, getArrayClass(&class_byte, 1), (jobject(nullptr)))));
	goto label_386;
	}
label_390:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_sendServerData_byte_int_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendServerData_byte_int_Array1_byte])(ctx, sp[0].o, (jint(1)), (frame[1].i), (frame[31].o));
	}
label_386:;
	{
	LINE_NUMBER(402);
	if ((frame[24].i) != 0) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[16].i = temp1;
	sp[0].o = (jobject) createArray(ctx, &class_byte, temp1);
	frame[31].o = sp[0].o;
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp4 = (jint)((func_java_io_DataInputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[31].o), (jint(0)), (frame[16].i));
	LINE_NUMBER(406);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(ctx, sp[0].o, (frame[31].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(407);
	popStackFrame(ctx);
	INST_RETURN();
label_90:;
label_92: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[16].i = temp0;
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, sp[0].o);
	if (temp1 < (jint(4))) goto label_398;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[18].i = temp0;
	goto label_401;
	}
label_398:;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[18].i = temp0;
	}
label_401:;
	{
	LINE_NUMBER(417);
	jint temp0 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, (frame[16].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_93; }
	}
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)SM_nro_ItemTime_getItemById_int_R_nro_ItemTime(ctx, (frame[16].i));
	((func_nro_ItemTime_initTime_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ItemTime_initTime_int_boolean])(ctx, sp[0].o, (frame[18].i), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(419);
	popStackFrame(ctx);
	INST_RETURN();
label_93:;
label_95: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(422);
	clinit_nro_ItemTime(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ItemTime);
	init_nro_ItemTime_short_int(ctx, sp[0].o, (frame[16].i), (frame[18].i));
	frame[31].o = sp[0].o;
	LINE_NUMBER(423);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_vItemTime;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[31].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(424);
	popStackFrame(ctx);
	INST_RETURN();
label_96:;
label_98: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)SM_nro_TransportScr_gI_R_nro_TransportScr(ctx);
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_time = (jint(0));
	LINE_NUMBER(427);
	sp[0].o = (jobject)SM_nro_TransportScr_gI_R_nro_TransportScr(ctx);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_maxTime = temp0;
	LINE_NUMBER(428);
	sp[0].o = (jobject)SM_nro_TransportScr_gI_R_nro_TransportScr(ctx);
	sp[1].o = (jobject)SM_nro_TransportScr_gI_R_nro_TransportScr(ctx);
	jlong temp1 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_TransportScr *) NULL_CHECK(sp[1].o))->F_curr = temp1;
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_last = temp1;
	LINE_NUMBER(429);
	sp[0].o = (jobject)SM_nro_TransportScr_gI_R_nro_TransportScr(ctx);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp4 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_type = temp4;
	LINE_NUMBER(430);
	sp[0].o = (jobject)SM_nro_TransportScr_gI_R_nro_TransportScr(ctx);
	((func_nro_TransportScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_TransportScr_switchToMe])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(431);
	popStackFrame(ctx);
	INST_RETURN();
label_99:;
label_101: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[19].i = temp0;
	LINE_NUMBER(434);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"server gui ve actionFlag = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[19].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(435);
	if ((frame[19].i) != 0) { popExceptionFrames(frameRef, 1); goto label_102; }
	}
	{
	LINE_NUMBER(436);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_vFlag;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[19].i = temp0;
	LINE_NUMBER(439);
	frame[2].i = (jint(0));
	}
label_413:;
	{
	if ((frame[2].i) >= (frame[19].i)) goto label_414;
	}
	{
	LINE_NUMBER(440);
	clinit_nro_Item(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Item);
	init_nro_Item(ctx, sp[0].o);
	frame[32].o = sp[0].o;
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[23].i = temp0;
	if (temp0 == (jint(-1))) goto label_418;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = frame[32].o;
	sp[1].o = (jobject)SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate(ctx, (frame[23].i));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_template = (jref) sp[1].o;
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[24].i = temp0;
	if (temp0 == (jint(-1))) goto label_418;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = frame[32].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_ItemOption, (frame[24].i));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_itemOption = (jref) sp[1].o;
	LINE_NUMBER(446);
	frame[6].i = (jint(0));
	}
label_424:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[32].o)))->F_itemOption;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_418;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)SM_nro_Controller_readItemOption_nro_Message_R_nro_ItemOption(ctx, (frame[0].o));
	frame[33].o = sp[0].o;
	LINE_NUMBER(448);
	if ((frame[33].o) == nullptr) goto label_427;
	}
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[32].o)))->F_itemOption;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)) = (frame[33].o);
	}
label_427:;
	{
	LINE_NUMBER(446);
	INST_IINC(6, 1);
	goto label_424;
	}
label_418:;
	{
	LINE_NUMBER(455);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_vFlag;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[32].o));
	LINE_NUMBER(439);
	INST_IINC(2, 1);
	goto label_413;
	}
label_414:;
	{
	LINE_NUMBER(458);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_setTabFlag) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTabFlag])(ctx, sp[0].o);
	LINE_NUMBER(459);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_show) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_show])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	INST_RETURN();
label_102:;
label_104: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(463);
	if ((frame[19].i) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_105; }
	}
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(465);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[17].i = temp1;
	LINE_NUMBER(466);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"---------------actionFlag1:  "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" : "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[17].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(467);
	jint temp2 = frame[1].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp2 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_435;
	}
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cFlag = (frame[17].i);
	goto label_437;
	}
label_435:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[1].i));
	if (sp[0].o == nullptr) goto label_437;
	}
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[1].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cFlag = (frame[17].i);
	}
label_437:;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	LINE_NUMBER(474);
	SM_nro_GameScr_getFlagImage_int_byte(ctx, (frame[1].i), (frame[17].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(475);
	popStackFrame(ctx);
	INST_RETURN();
label_105:;
label_107: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(478);
	if ((frame[19].i) != (jint(2))) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[19].i = temp0;
	LINE_NUMBER(480);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[16].i = temp1;
	LINE_NUMBER(482);
	clinit_nro_PKFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_PKFlag);
	init_nro_PKFlag(ctx, sp[0].o);
	frame[32].o = sp[0].o;
	((nro_PKFlag *) NULL_CHECK(sp[0].o))->F_cflag = (frame[19].i);
	LINE_NUMBER(483);
	((nro_PKFlag *) NULL_CHECK((frame[32].o)))->F_IDimageFlag = (frame[16].i);
	LINE_NUMBER(484);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vFlag;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[32].o));
	LINE_NUMBER(486);
	frame[4].i = (jint(0));
	}
label_447:;
	{
	jint temp0 = frame[4].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vFlag;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_448;
	}
	{
	LINE_NUMBER(487);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vFlag;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[33].o = (checkCast(ctx, &class_nro_PKFlag, sp[0].o));
	LINE_NUMBER(488);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"i: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"  cflag: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_PKFlag *) NULL_CHECK((frame[33].o)))->F_cflag));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"   IDimageFlag: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_PKFlag *) NULL_CHECK((frame[33].o)))->F_IDimageFlag));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(486);
	INST_IINC(4, 1);
	goto label_447;
	}
label_448:;
	{
	LINE_NUMBER(491);
	frame[4].i = (jint(0));
	}
label_452:;
	{
	jint temp0 = frame[4].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_453;
	}
	{
	LINE_NUMBER(492);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = checkCast(ctx, &class_nro_Char, sp[0].o);
	frame[21].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_456;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[21].o)))->F_cFlag) != (frame[19].i)) goto label_456;
	}
	{
	LINE_NUMBER(493);
	((nro_Char *) NULL_CHECK((frame[21].o)))->F_flagImage = (frame[16].i);
	}
label_456:;
	{
	LINE_NUMBER(491);
	INST_IINC(4, 1);
	goto label_452;
	}
label_453:;
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cFlag) != (frame[19].i)) { popExceptionFrames(frameRef, 1); goto label_108; }
	}
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_flagImage = (frame[16].i);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(499);
	popStackFrame(ctx);
	INST_RETURN();
label_108:;
label_110: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_205; }
	LINE_NUMBER(501);
	{ popExceptionFrames(frameRef, 1); goto label_221; }
label_205:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[19].i = temp0;
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	if ((frame[19].i) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(505);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_isLogin2 = (jint(0));
	LINE_NUMBER(506);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	sp[2].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))));
	((func_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"2.5.0"_j))), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(507);
	popStackFrame(ctx);
	INST_RETURN();
label_111:;
label_113: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(511);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_462;
	}
	{
	LINE_NUMBER(512);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	}
label_462:;
	{
	LINE_NUMBER(515);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_isLogin2 = (jint(1));
	LINE_NUMBER(516);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(517);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	frame[22].o = sp[0].o;
	LINE_NUMBER(518);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[22].o));
	LINE_NUMBER(519);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_setClientType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_setClientType])(ctx, sp[0].o);
	LINE_NUMBER(520);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte])(ctx, sp[0].o, (frame[22].o), (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8"2.5.0"_j))), (jint(1)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(521);
	popStackFrame(ctx);
	INST_RETURN();
label_114:;
label_116: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_115; }
	{
	LINE_NUMBER(523);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(524);
	frame[32].i = (jint(0));
	LINE_NUMBER(525);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) <= ((jint(2)) * (clinit_nro_Panel(ctx), (jint)SF_nro_Panel_WIDTH_PANEL))) goto label_471;
	}
	{
	LINE_NUMBER(526);
	frame[32].i = (jint(1));
	}
label_471:;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	jint temp1 = jshort(temp0);
	frame[23].i = temp1;
	if (temp1 >= 0) goto label_474;
	}
	LINE_NUMBER(530);
	{ popExceptionFrames(frameRef, 1); goto label_221; }
label_474:;
	{
	LINE_NUMBER(533);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"t Indxe= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[23].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(534);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_maxPageShop;
	jint temp0 = frame[23].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(535);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_currPageShop;
	jint temp2 = frame[23].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	LINE_NUMBER(536);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"max page= "_j))));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_panel;
	sp[1].o = (jobject)((nro_Panel *) NULL_CHECK(sp[1].o))->F_maxPageShop;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[23].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" curr page= "_j))));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_panel;
	sp[1].o = (jobject)((nro_Panel *) NULL_CHECK(sp[1].o))->F_currPageShop;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[23].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp4 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, sp[0].o);
	frame[5].i = temp4;
	LINE_NUMBER(538);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	jint temp5 = frame[23].i;
	sp[1].o = (jobject)createArray(ctx, &class_nro_Item, (frame[5].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	LINE_NUMBER(539);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_say_wat_do_u_want_to_buy;
	clinit_nro_Panel(ctx);
	SF_nro_Panel_strWantToBuy = sp[0].o;
	LINE_NUMBER(541);
	frame[6].i = (jint(0));
	}
label_483:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_484;
	}
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[33].i = temp0;
	if (temp0 == (jint(-1))) goto label_487;
	}
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i));
	jint temp0 = frame[6].i;
	clinit_nro_Item(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Item);
	init_nro_Item(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(545);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate(ctx, (frame[33].i));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_template = (jref) sp[1].o;
	LINE_NUMBER(546);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Item *) NULL_CHECK(sp[0].o))->F_itemId = temp1;
	LINE_NUMBER(547);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[1].o);
	((nro_Item *) NULL_CHECK(sp[0].o))->F_buyCoin = temp2;
	LINE_NUMBER(548);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[1].o);
	((nro_Item *) NULL_CHECK(sp[0].o))->F_buyGold = temp3;
	LINE_NUMBER(549);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp4 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	((nro_Item *) NULL_CHECK(sp[0].o))->F_buyType = temp4;
	LINE_NUMBER(550);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp5 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[1].o);
	((nro_Item *) NULL_CHECK(sp[0].o))->F_quantity = temp5;
	LINE_NUMBER(551);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp6 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	((nro_Item *) NULL_CHECK(sp[0].o))->F_isMe = temp6;
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp7 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[34].i = temp7;
	if (temp7 == (jint(-1))) goto label_498;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)createArray(ctx, &class_nro_ItemOption, (frame[34].i));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_itemOption = (jref) sp[1].o;
	LINE_NUMBER(556);
	frame[35].i = (jint(0));
	}
label_501:;
	{
	jint temp0 = frame[35].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i)))))->F_itemOption;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_498;
	}
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)SM_nro_Controller_gI_R_nro_Controller(ctx);
	LINE_NUMBER(559);
	sp[0].o = (jobject)SM_nro_Controller_readItemOption_nro_Message_R_nro_ItemOption(ctx, (frame[0].o));
	frame[36].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_505;
	}
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i)))))->F_itemOption;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[35].i)) = (frame[36].o);
	LINE_NUMBER(561);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_panel;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_arrItemShop;
	jint temp0 = (jint)((func_nro_Panel_getCompare_nro_Item_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_Panel_getCompare_nro_Item_R_int])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[23].i))), (frame[6].i))));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_compare = temp0;
	}
label_505:;
	{
	LINE_NUMBER(556);
	INST_IINC(35, 1);
	goto label_501;
	}
label_498:;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_508;
	}
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[35].i = temp0;
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[36].i = temp1;
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[37].i = temp2;
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[38].i = temp3;
	LINE_NUMBER(571);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	((func_nro_Item_setPartTemp_int_int_int_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i))))->vtable)[VTABLE_nro_Item_setPartTemp_int_int_int_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i))), (frame[35].i), (frame[36].i), (frame[37].i), (frame[38].i));
	}
label_508:;
	{
	LINE_NUMBER(574);
	if ((clinit_main_GameMidlet(ctx), (jint)SF_main_GameMidlet_LANGUAGE) < (237)) goto label_487;
	}
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemShop;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[23].i))), (frame[6].i));
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[1].o);
	((nro_Item *) NULL_CHECK(sp[0].o))->F_nameNguoiKyGui = (jref) sp[1].o;
	LINE_NUMBER(576);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nguoi ki gui  "_j))));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_arrItemShop;
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[23].i))), (frame[6].i)))))->F_nameNguoiKyGui;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_487:;
	{
	LINE_NUMBER(541);
	INST_IINC(6, 1);
	goto label_483;
	}
label_484:;
	{
	LINE_NUMBER(581);
	if ((frame[32].i) == 0) goto label_516;
	}
	{
	LINE_NUMBER(582);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	((func_nro_Panel_setTabKiGui) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTabKiGui])(ctx, sp[0].o);
	}
label_516:;
	{
	LINE_NUMBER(585);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_setTabShop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTabShop])(ctx, sp[0].o);
	LINE_NUMBER(586);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_panel;
	jint temp0 = jint(0);
	((nro_Panel *) NULL_CHECK(sp[1].o))->F_cmtoY = temp0;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_cmy = temp0;
	}
label_115:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(588);
	popStackFrame(ctx);
	INST_RETURN();
label_117:;
label_119: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_519;
	}
	INST_ICONST(1);
	goto label_520;
label_519:;
	INST_ICONST(0);
label_520:;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_open3Hour = (--sp)->i;
	popExceptionFrame(frameRef);
	LINE_NUMBER(591);
	popStackFrame(ctx);
	INST_RETURN();
label_120:;
label_122: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	if (temp1 == (jint(1))) { popExceptionFrames(frameRef, 1); goto label_126; }
	}
	{
	LINE_NUMBER(595);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) { popExceptionFrames(frameRef, 1); goto label_123; }
	}
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_petFollow;
	((func_nro_PetFollow_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PetFollow_remove])(ctx, sp[0].o);
	LINE_NUMBER(597);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_petFollow = (jref) (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(598);
	popStackFrame(ctx);
	INST_RETURN();
label_123:;
label_125: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[1].i));
	frame[33].o = sp[0].o;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_petFollow;
	((func_nro_PetFollow_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PetFollow_remove])(ctx, sp[0].o);
	LINE_NUMBER(603);
	((nro_Char *) NULL_CHECK((frame[33].o)))->F_petFollow = (jref) (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(604);
	popStackFrame(ctx);
	INST_RETURN();
label_126:;
label_128: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(607);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[16].i = temp0;
	LINE_NUMBER(608);
	frame[18].i = (jint(-1));
	LINE_NUMBER(609);
	frame[33].o = (jobject(nullptr));
	LINE_NUMBER(610);
	frame[34].i = (jint(0));
	LINE_NUMBER(611);
	frame[6].i = (jint(0));
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[18].i = temp0;
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[35].i = temp0;
	sp[0].o = (jobject) createArray(ctx, &class_int, temp0);
	frame[33].o = sp[0].o;
	LINE_NUMBER(618);
	frame[7].i = (jint(0));
	}
label_534:;
	{
	if ((frame[7].i) >= (frame[35].i)) goto label_535;
	}
	{
	LINE_NUMBER(619);
	sp[0].o = frame[33].o;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(618);
	INST_IINC(7, 1);
	goto label_534;
	}
label_535:;
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[34].i = temp0;
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[6].i = temp1;
	}
label_11:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(626);
	goto label_539;
label_12:;
	LINE_NUMBER(625);
	INST_ASTORE(35);
label_539:;
	{
	LINE_NUMBER(628);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) { popExceptionFrames(frameRef, 1); goto label_129; }
	}
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_PetFollow(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_PetFollow);
	init_nro_PetFollow(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_petFollow = (jref) sp[1].o;
	LINE_NUMBER(630);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_smallID = (frame[16].i);
	LINE_NUMBER(631);
	if ((frame[18].i) <= 0) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_petFollow;
	((func_nro_PetFollow_SetImg_int_Array1_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PetFollow_SetImg_int_Array1_int_int_int])(ctx, sp[0].o, (frame[18].i), (frame[33].o), (frame[34].i), (frame[6].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(633);
	popStackFrame(ctx);
	INST_RETURN();
label_129:;
label_131: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(637);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[1].i));
	frame[35].o = sp[0].o;
	clinit_nro_PetFollow(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_PetFollow);
	init_nro_PetFollow(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_petFollow = (jref) sp[1].o;
	LINE_NUMBER(638);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[35].o)))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_smallID = (frame[16].i);
	LINE_NUMBER(639);
	if ((frame[18].i) <= 0) { popExceptionFrames(frameRef, 1); goto label_132; }
	}
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[35].o)))->F_petFollow;
	((func_nro_PetFollow_SetImg_int_Array1_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PetFollow_SetImg_int_Array1_int_int_int])(ctx, sp[0].o, (frame[18].i), (frame[33].o), (frame[34].i), (frame[6].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(641);
	popStackFrame(ctx);
	INST_RETURN();
label_132:;
label_134: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_206; }
	LINE_NUMBER(644);
	{ popExceptionFrames(frameRef, 1); goto label_221; }
label_206:;
	{
	LINE_NUMBER(646);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(647);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_isContinueToLogin = (jint(0));
	LINE_NUMBER(648);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(649);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[17].i = temp0;
	LINE_NUMBER(650);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_registerScr;
	if (sp[0].o != nullptr) goto label_552;
	}
	{
	LINE_NUMBER(651);
	clinit_nro_RegisterScreen(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_RegisterScreen);
	init_nro_RegisterScreen_byte(ctx, sp[0].o, (frame[17].i));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_registerScr = sp[0].o;
	}
label_552:;
	{
	LINE_NUMBER(654);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_registerScr;
	((func_nro_RegisterScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_RegisterScreen_switchToMe])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(655);
	popStackFrame(ctx);
	INST_RETURN();
label_135:;
label_137: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, temp0, (jint(0)));
	LINE_NUMBER(658);
	SM_main_GameCanvas_doResetToLoginScr(ctx);
	LINE_NUMBER(659);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(660);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(661);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_waitToLogin = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(662);
	popStackFrame(ctx);
	INST_RETURN();
label_138:;
label_140: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, temp0);
	frame[35].o = (checkCast(ctx, &class_nro_Mabu, sp[0].o));
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[36].i = temp1;
	LINE_NUMBER(666);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[37].i = temp2;
	LINE_NUMBER(667);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[7].i = temp3;
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp4 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[19].i = temp4;
	sp[0].o = (jobject)createArray(ctx, &class_nro_Char, temp4);
	frame[38].o = sp[0].o;
	LINE_NUMBER(669);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[19].i));
	frame[39].o = sp[0].o;
	LINE_NUMBER(671);
	frame[4].i = (jint(0));
	}
label_565:;
	{
	if ((frame[4].i) >= (frame[19].i)) goto label_566;
	}
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[40].i = temp0;
	LINE_NUMBER(673);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"char ID="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[40].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(674);
	ARRAY_ACCESS(jobject, (frame[38].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(675);
	jint temp1 = frame[40].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp1 == ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_571;
	}
	{
	LINE_NUMBER(676);
	sp[0].o = frame[38].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[40].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_573;
	}
label_571:;
	{
	LINE_NUMBER(678);
	sp[0].o = frame[38].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_573:;
	{
	LINE_NUMBER(681);
	sp[0].o = frame[39].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, sp[1].o);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	LINE_NUMBER(671);
	INST_IINC(4, 1);
	goto label_565;
	}
label_566:;
	{
	LINE_NUMBER(684);
	((func_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long) ((void **) nullCheck(ctx, (frame[35].o))->vtable)[VTABLE_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long])(ctx, (frame[35].o), (frame[36].i), (frame[37].i), (jshort((frame[7].i))), (frame[38].o), (frame[39].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(685);
	popStackFrame(ctx);
	INST_RETURN();
label_141:;
label_143: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[18].i = temp0;
	if (temp0 != (jint(1))) goto label_576;
	}
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_579;
	}
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_setMabuHold_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setMabuHold_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(690);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = temp0;
	LINE_NUMBER(691);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp1;
	goto label_576;
	}
label_579:;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	frame[21].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_576;
	}
	{
	LINE_NUMBER(693);
	((func_nro_Char_setMabuHold_boolean) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_nro_Char_setMabuHold_boolean])(ctx, (frame[21].o), (jint(1)));
	LINE_NUMBER(694);
	sp[0].o = frame[21].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = temp0;
	LINE_NUMBER(695);
	sp[0].o = frame[21].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp1;
	}
label_576:;
	{
	LINE_NUMBER(699);
	if ((frame[18].i) != 0) goto label_587;
	}
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_590;
	}
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_setMabuHold_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setMabuHold_boolean])(ctx, sp[0].o, (jint(0)));
	goto label_587;
	}
label_590:;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	frame[21].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_587;
	}
	{
	LINE_NUMBER(703);
	((func_nro_Char_setMabuHold_boolean) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_nro_Char_setMabuHold_boolean])(ctx, (frame[21].o), (jint(0)));
	}
label_587:;
	{
	LINE_NUMBER(707);
	if ((frame[18].i) != (jint(2))) goto label_594;
	}
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(709);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[5].i = temp1;
	LINE_NUMBER(710);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[4].i));
	((func_nro_Mabu_eat_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Mabu, sp[0].o)))->vtable)[VTABLE_nro_Mabu_eat_int])(ctx, (checkCast(ctx, &class_nro_Mabu, sp[0].o)), (frame[5].i));
	}
label_594:;
	{
	LINE_NUMBER(713);
	if ((frame[18].i) != (jint(3))) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_mabuPercent = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(715);
	popStackFrame(ctx);
	INST_RETURN();
label_144:;
label_146: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Res_changeString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[20].o = sp[0].o;
	LINE_NUMBER(720);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_chatVip_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_chatVip_java_lang_String])(ctx, sp[0].o, (frame[20].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(721);
	popStackFrame(ctx);
	INST_RETURN();
label_147:;
label_149: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[18].i = temp0;
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[15].i = (jshort(temp1));
	LINE_NUMBER(725);
	frame[40].o = (jobject(nullptr));
	LINE_NUMBER(726);
	if ((frame[18].i) != 0) goto label_603;
	}
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBody;
	frame[40].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i)));
	}
label_603:;
	{
	LINE_NUMBER(730);
	if ((frame[18].i) != (jint(1))) goto label_605;
	}
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBag;
	frame[40].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i)));
	}
label_605:;
	{
	LINE_NUMBER(734);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[15].i = temp0;
	if (temp0 == (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(735);
	sp[0].o = frame[40].o;
	sp[1].o = (jobject)SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate(ctx, (frame[15].i));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_template = (jref) sp[1].o;
	LINE_NUMBER(736);
	sp[0].o = frame[40].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[1].o);
	((nro_Item *) NULL_CHECK(sp[0].o))->F_quantity = temp0;
	LINE_NUMBER(737);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(739);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[19].i = temp1;
	if (temp1 == 0) goto label_613;
	}
	{
	LINE_NUMBER(740);
	sp[0].o = frame[40].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_ItemOption, (frame[19].i));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_itemOption = (jref) sp[1].o;
	LINE_NUMBER(742);
	frame[1].i = (jint(0));
	}
label_616:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[40].o)))->F_itemOption;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_613;
	}
	{
	LINE_NUMBER(743);
	sp[0].o = (jobject)SM_nro_Controller_gI_R_nro_Controller(ctx);
	LINE_NUMBER(745);
	sp[0].o = (jobject)SM_nro_Controller_readItemOption_nro_Message_R_nro_ItemOption(ctx, (frame[0].o));
	frame[41].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_620;
	}
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[40].o)))->F_itemOption;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[41].o);
	}
label_620:;
	{
	LINE_NUMBER(742);
	INST_IINC(1, 1);
	goto label_616;
	}
label_613:;
	{
	LINE_NUMBER(751);
	if (((jint)((nro_Item *) NULL_CHECK((frame[40].o)))->F_quantity) > 0) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(752);
	popStackFrame(ctx);
	INST_RETURN();
label_150:;
label_152: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(757);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"big boss--------------------------------------------------"_j))));
	LINE_NUMBER(759);
	sp[0].o = (jobject)SM_nro_Mob_getBigBoss_R_nro_BigBoss(ctx);
	frame[41].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_153; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(760);
	popStackFrame(ctx);
	INST_RETURN();
label_153:;
label_155: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[17].i = temp0;
	LINE_NUMBER(764);
	if ((frame[17].i) == 0) goto label_625;
	}
	{
	if ((frame[17].i) == (jint(1))) goto label_625;
	}
	{
	if ((frame[17].i) == (jint(2))) goto label_625;
	}
	{
	if ((frame[17].i) == (jint(4))) goto label_625;
	}
	{
	if ((frame[17].i) != (jint(3))) goto label_626;
	}
label_625:;
	{
	LINE_NUMBER(765);
	if ((frame[17].i) != (jint(3))) goto label_627;
	}
	{
	LINE_NUMBER(766);
	sp[0].o = frame[41].o;
	sp[1].o = frame[41].o;
	sp[2].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[2].o);
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_xFirst = temp0;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_xTo = temp0;
	LINE_NUMBER(767);
	sp[0].o = frame[41].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_yFirst = temp3;
	LINE_NUMBER(768);
	((func_nro_BigBoss_setFly) ((void **) nullCheck(ctx, (frame[41].o))->vtable)[VTABLE_nro_BigBoss_setFly])(ctx, (frame[41].o));
	goto label_626;
	}
label_627:;
	{
	LINE_NUMBER(770);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[42].i = temp0;
	LINE_NUMBER(771);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CHUONG nChar= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[42].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(772);
	sp[0].o = (jobject)createArray(ctx, &class_nro_Char, (frame[42].i));
	frame[43].o = sp[0].o;
	LINE_NUMBER(773);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[42].i));
	frame[44].o = sp[0].o;
	LINE_NUMBER(775);
	frame[8].i = (jint(0));
	}
label_635:;
	{
	if ((frame[8].i) >= (frame[42].i)) goto label_636;
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(777);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"char ID="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(778);
	ARRAY_ACCESS(jobject, (frame[43].o), (frame[8].i)) = (jobject(nullptr));
	LINE_NUMBER(779);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp1 == ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_641;
	}
	{
	LINE_NUMBER(780);
	sp[0].o = frame[43].o;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[3].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_643;
	}
label_641:;
	{
	LINE_NUMBER(782);
	sp[0].o = frame[43].o;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_643:;
	{
	LINE_NUMBER(785);
	sp[0].o = frame[44].o;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, sp[1].o);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	LINE_NUMBER(775);
	INST_IINC(8, 1);
	goto label_635;
	}
label_636:;
	{
	LINE_NUMBER(788);
	((func_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte) ((void **) nullCheck(ctx, (frame[41].o))->vtable)[VTABLE_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte])(ctx, (frame[41].o), (frame[43].o), (frame[44].o), (frame[17].i));
	}
label_626:;
	{
	LINE_NUMBER(792);
	if ((frame[17].i) != (jint(5))) goto label_645;
	}
	{
	LINE_NUMBER(793);
	((func_nro_BigBoss_getDataB2) ((void **) nullCheck(ctx, (frame[41].o))->vtable)[VTABLE_nro_BigBoss_getDataB2])(ctx, (frame[41].o));
	LINE_NUMBER(794);
	((nro_BigBoss *) NULL_CHECK((frame[41].o)))->F_haftBody = (jint(1));
	LINE_NUMBER(795);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_status = (jint(2));
	}
label_645:;
	{
	LINE_NUMBER(798);
	if ((frame[17].i) != (6)) goto label_649;
	}
	{
	LINE_NUMBER(799);
	((func_nro_BigBoss_getDataB2) ((void **) nullCheck(ctx, (frame[41].o))->vtable)[VTABLE_nro_BigBoss_getDataB2])(ctx, (frame[41].o));
	LINE_NUMBER(800);
	sp[0].o = frame[41].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(801);
	sp[0].o = frame[41].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(802);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_status = (jint(2));
	}
label_649:;
	{
	LINE_NUMBER(805);
	if ((frame[17].i) != (7)) goto label_654;
	}
	{
	LINE_NUMBER(806);
	((func_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte) ((void **) nullCheck(ctx, (frame[41].o))->vtable)[VTABLE_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte])(ctx, (frame[41].o), (checkCast(ctx, getArrayClass(&class_nro_Char, 1), (jobject(nullptr)))), (checkCast(ctx, getArrayClass(&class_long, 1), (jobject(nullptr)))), (frame[17].i));
	}
label_654:;
	{
	LINE_NUMBER(809);
	if ((frame[17].i) != (8)) goto label_656;
	}
	{
	LINE_NUMBER(810);
	sp[0].o = frame[41].o;
	sp[1].o = frame[41].o;
	sp[2].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[2].o);
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_xFirst = temp0;
	((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_xTo = temp0;
	LINE_NUMBER(811);
	sp[0].o = frame[41].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_yFirst = temp3;
	LINE_NUMBER(812);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_status = (jint(2));
	}
label_656:;
	{
	LINE_NUMBER(815);
	if ((frame[17].i) != (9)) { popExceptionFrames(frameRef, 1); goto label_156; }
	}
	{
	LINE_NUMBER(816);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_isHide = (jint(1));
	LINE_NUMBER(817);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_status = (jint(0));
	LINE_NUMBER(818);
	sp[0].o = frame[41].o;
	sp[1].o = frame[41].o;
	sp[2].o = frame[41].o;
	sp[3].o = frame[41].o;
	sp[4].o = frame[41].o;
	jint temp0 = -1000;
	((nro_Mob *) NULL_CHECK(sp[4].o))->F_yFirst = temp0;
	((nro_Mob *) NULL_CHECK(sp[3].o))->F_xFirst = temp0;
	((nro_BigBoss *) NULL_CHECK(sp[2].o))->F_xTo = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_y = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(819);
	popStackFrame(ctx);
	INST_RETURN();
label_156:;
label_158: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_207; }
	{
	LINE_NUMBER(822);
	if ((frame[17].i) != (10)) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(823);
	((func_nro_BigBoss_getDataB) ((void **) nullCheck(ctx, (frame[41].o))->vtable)[VTABLE_nro_BigBoss_getDataB])(ctx, (frame[41].o));
	LINE_NUMBER(824);
	((nro_BigBoss *) NULL_CHECK((frame[41].o)))->F_haftBody = (jint(0));
	LINE_NUMBER(825);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_isHide = (jint(0));
	LINE_NUMBER(826);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_x = ((jint)((nro_Mob *) NULL_CHECK((frame[41].o)))->F_xFirst);
	LINE_NUMBER(827);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[41].o)))->F_yFirst);
	LINE_NUMBER(828);
	((nro_Mob *) NULL_CHECK((frame[41].o)))->F_status = (jint(2));
	{ popExceptionFrames(frameRef, 1); goto label_221; }
	}
label_207:;
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[18].i = temp0;
	if (temp0 == 0) goto label_670;
	}
	{
	if ((frame[18].i) == (jint(1))) goto label_670;
	}
	{
	if ((frame[18].i) == (jint(2))) goto label_670;
	}
	{
	if ((frame[18].i) != (6)) { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_164; } // goto label_671
	}
label_670:;
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)SM_nro_Mob_getBigBoss2_R_nro_BigBoss2(ctx);
	frame[45].o = sp[0].o;
	LINE_NUMBER(837);
	frame[46].o = (jobject(nullptr));
	LINE_NUMBER(838);
	if ((frame[45].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_159; }
	}
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)SM_nro_Mob_x_R_nro_BachTuoc2(ctx);
	frame[46].o = sp[0].o;
	LINE_NUMBER(840);
	if ((frame[46].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_159; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(841);
	popStackFrame(ctx);
	INST_RETURN();
label_159:;
label_161: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(845);
	if ((frame[18].i) != (6)) { popExceptionFrames(frameRef, 1); goto label_162; }
	}
	{
	LINE_NUMBER(846);
	if ((frame[45].o) == nullptr) goto label_677;
	}
	{
	LINE_NUMBER(847);
	((func_nro_BigBoss2_setFly) ((void **) nullCheck(ctx, (frame[45].o))->vtable)[VTABLE_nro_BigBoss2_setFly])(ctx, (frame[45].o));
	goto label_160;
	}
label_677:;
	{
	LINE_NUMBER(848);
	if ((frame[46].o) == nullptr) goto label_160;
	}
	{
	LINE_NUMBER(849);
	((func_nro_BachTuoc2_setFly) ((void **) nullCheck(ctx, (frame[46].o))->vtable)[VTABLE_nro_BachTuoc2_setFly])(ctx, (frame[46].o));
	}
label_160:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(851);
	popStackFrame(ctx);
	INST_RETURN();
label_162:;
label_164: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	if (bypasses[4]) { bypasses[4] = false; goto label_671; }
	{
	LINE_NUMBER(854);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[17].i = temp0;
	sp[0].o = (jobject)createArray(ctx, &class_nro_Char, temp0);
	frame[42].o = sp[0].o;
	LINE_NUMBER(855);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[17].i));
	frame[43].o = sp[0].o;
	LINE_NUMBER(857);
	frame[44].i = (jint(0));
	}
label_683:;
	{
	if ((frame[44].i) >= (frame[17].i)) goto label_684;
	}
	{
	LINE_NUMBER(858);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[8].i = temp0;
	LINE_NUMBER(859);
	ARRAY_ACCESS(jobject, (frame[42].o), (frame[44].i)) = (jobject(nullptr));
	LINE_NUMBER(860);
	jint temp1 = frame[8].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp1 == ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_688;
	}
	{
	LINE_NUMBER(861);
	sp[0].o = frame[42].o;
	jint temp0 = frame[44].i;
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[8].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_690;
	}
label_688:;
	{
	LINE_NUMBER(863);
	sp[0].o = frame[42].o;
	jint temp0 = frame[44].i;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_690:;
	{
	LINE_NUMBER(866);
	sp[0].o = frame[43].o;
	jint temp0 = frame[44].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, sp[1].o);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	LINE_NUMBER(857);
	INST_IINC(44, 1);
	goto label_683;
	}
label_684:;
	{
	LINE_NUMBER(869);
	if ((frame[45].o) == nullptr) goto label_692;
	}
	{
	LINE_NUMBER(870);
	((func_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte) ((void **) nullCheck(ctx, (frame[45].o))->vtable)[VTABLE_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte])(ctx, (frame[45].o), (frame[42].o), (frame[43].o), (jbyte((frame[18].i))));
	goto label_671;
	}
label_692:;
	{
	LINE_NUMBER(871);
	if ((frame[46].o) == nullptr) goto label_671;
	}
	{
	LINE_NUMBER(872);
	((func_nro_BachTuoc2_setAttack_Array1_nro_Char_Array1_long_byte) ((void **) nullCheck(ctx, (frame[46].o))->vtable)[VTABLE_nro_BachTuoc2_setAttack_Array1_nro_Char_Array1_long_byte])(ctx, (frame[46].o), (frame[42].o), (frame[43].o), (jbyte((frame[18].i))));
	}
label_671:;
	{
	LINE_NUMBER(876);
	if ((frame[18].i) == (jint(3))) goto label_695;
	}
	{
	if ((frame[18].i) == (jint(4))) goto label_695;
	}
	{
	if ((frame[18].i) == (jint(5))) goto label_695;
	}
	{
	if ((frame[18].i) != (7)) { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_170; } // goto label_696
	}
label_695:;
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)SM_nro_Mob_getBachTuoc_R_nro_BachTuoc(ctx);
	frame[45].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_165; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(879);
	popStackFrame(ctx);
	INST_RETURN();
label_165:;
label_167: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(882);
	if ((frame[18].i) != (7)) { popExceptionFrames(frameRef, 1); goto label_168; }
	}
	{
	LINE_NUMBER(883);
	sp[0].o = frame[45].o;
	sp[1].o = frame[45].o;
	sp[2].o = frame[45].o;
	sp[3].o = frame[45].o;
	sp[4].o = frame[45].o;
	sp[5].o = frame[45].o;
	jint temp0 = -1000;
	((nro_Mob *) NULL_CHECK(sp[5].o))->F_yFirst = temp0;
	((nro_Mob *) NULL_CHECK(sp[4].o))->F_xFirst = temp0;
	((nro_BachTuoc *) NULL_CHECK(sp[3].o))->F_yTo = temp0;
	((nro_BachTuoc *) NULL_CHECK(sp[2].o))->F_xTo = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_y = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(884);
	popStackFrame(ctx);
	INST_RETURN();
label_168:;
label_170: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	if (bypasses[5]) { bypasses[5] = false; goto label_696; }
	{
	LINE_NUMBER(887);
	if ((frame[18].i) == (jint(3))) goto label_699;
	}
	{
	if ((frame[18].i) != (jint(4))) goto label_700;
	}
label_699:;
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[17].i = temp0;
	sp[0].o = (jobject)createArray(ctx, &class_nro_Char, temp0);
	frame[42].o = sp[0].o;
	LINE_NUMBER(889);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[17].i));
	frame[43].o = sp[0].o;
	LINE_NUMBER(891);
	frame[44].i = (jint(0));
	}
label_704:;
	{
	if ((frame[44].i) >= (frame[17].i)) goto label_705;
	}
	{
	LINE_NUMBER(892);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[8].i = temp0;
	LINE_NUMBER(893);
	ARRAY_ACCESS(jobject, (frame[42].o), (frame[44].i)) = (jobject(nullptr));
	LINE_NUMBER(894);
	jint temp1 = frame[8].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp1 == ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_709;
	}
	{
	LINE_NUMBER(895);
	sp[0].o = frame[42].o;
	jint temp0 = frame[44].i;
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[8].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_711;
	}
label_709:;
	{
	LINE_NUMBER(897);
	sp[0].o = frame[42].o;
	jint temp0 = frame[44].i;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_711:;
	{
	LINE_NUMBER(900);
	sp[0].o = frame[43].o;
	jint temp0 = frame[44].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, sp[1].o);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	LINE_NUMBER(891);
	INST_IINC(44, 1);
	goto label_704;
	}
label_705:;
	{
	LINE_NUMBER(903);
	((func_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte) ((void **) nullCheck(ctx, (frame[45].o))->vtable)[VTABLE_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte])(ctx, (frame[45].o), (frame[42].o), (frame[43].o), (jbyte((frame[18].i))));
	}
label_700:;
	{
	LINE_NUMBER(906);
	if ((frame[18].i) != (jint(5))) goto label_696;
	}
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[16].i = temp0;
	LINE_NUMBER(908);
	((func_nro_BachTuoc_move_short) ((void **) nullCheck(ctx, (frame[45].o))->vtable)[VTABLE_nro_BachTuoc_move_short])(ctx, (frame[45].o), (frame[16].i));
	}
label_696:;
	{
	LINE_NUMBER(912);
	if ((frame[18].i) <= (9)) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	if ((frame[18].i) >= (30)) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(913);
	SM_nro_Controller2_a_nro_Message_int(ctx, (frame[0].o), (frame[18].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(914);
	popStackFrame(ctx);
	INST_RETURN();
label_171:;
label_173: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(918);
	frame[15].i = (jint(0));
	LINE_NUMBER(919);
	frame[17].i = (jint(0));
	LINE_NUMBER(920);
	frame[3].i = (jint(0));
	LINE_NUMBER(921);
	frame[4].i = (jint(0));
	LINE_NUMBER(922);
	frame[5].i = (jint(0));
	LINE_NUMBER(923);
	frame[6].i = (jint(-1));
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(926);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[15].i = (jshort(temp0));
	LINE_NUMBER(927);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[17].i = temp1;
	LINE_NUMBER(928);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[3].i = temp2;
	LINE_NUMBER(929);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[4].i = temp3;
	LINE_NUMBER(930);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp4 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[5].i = temp4;
	LINE_NUMBER(931);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp5 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[6].i = temp5;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(933);
	goto label_726;
label_16:;
	LINE_NUMBER(932);
	INST_ASTORE(45);
label_726:;
	{
	LINE_NUMBER(935);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (frame[3].i), (frame[4].i), (frame[5].i), (frame[17].i), (frame[15].i), (frame[6].i));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(936);
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
label_174: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_20; }
	}
	{
	LINE_NUMBER(939);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(940);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_curINAPP = temp0;
	LINE_NUMBER(941);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_maxINAPP = temp1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(942);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
label_176: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	LINE_NUMBER(943);
	INST_ASTORE(45);
	popExceptionFrame(frameRef);
	LINE_NUMBER(944);
	popStackFrame(ctx);
	INST_RETURN();
label_177:;
label_179: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(947);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_g = sp[0].o;
	LINE_NUMBER(948);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(949);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SHOW AD public ID= "_j))));
	clinit_lib_mSystem(ctx);
	sp[1].o = (jobject)SF_lib_mSystem_g;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(950);
	popStackFrame(ctx);
	INST_RETURN();
label_180:;
label_182: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(952);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[13].i = temp0;
	LINE_NUMBER(953);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"second login = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[13].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(954);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_timeLogin = (frame[13].i);
	LINE_NUMBER(955);
	jlong temp1 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_lastTimeLogin = temp1;
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_currTimeLogin = temp1;
	LINE_NUMBER(956);
	SM_main_GameCanvas_endDlg(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(957);
	popStackFrame(ctx);
	INST_RETURN();
label_183:;
label_185: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(959);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(960);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[16].i = temp1;
	LINE_NUMBER(961);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[3].i = temp2;
	LINE_NUMBER(962);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[13].i = (jshort(temp3));
	LINE_NUMBER(963);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SET POSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSss x= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[16].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" y= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"chaPos= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"type Pos= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[13].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(964);
	frame[45].o = (jobject(nullptr));
	LINE_NUMBER(965);
	jint temp4 = frame[1].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp4 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_741;
	}
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[45].o = sp[0].o;
	goto label_743;
	}
label_741:;
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[1].i));
	if (sp[0].o == nullptr) goto label_743;
	}
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[1].i));
	frame[45].o = sp[0].o;
	}
label_743:;
	{
	LINE_NUMBER(971);
	if ((frame[45].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(972);
	if ((frame[13].i) != 0) goto label_746;
	}
	INST_BIPUSH(60);
	goto label_747;
label_746:;
	INST_SIPUSH(173);
label_747:;
	{
	sp -= 1;
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, sp[0].i, (frame[45].o), (jint(1)));
	LINE_NUMBER(973);
	((func_nro_Char_setPos_short_short_byte) ((void **) nullCheck(ctx, (frame[45].o))->vtable)[VTABLE_nro_Char_setPos_short_short_byte])(ctx, (frame[45].o), (frame[16].i), (jshort((frame[3].i))), (jbyte((frame[13].i))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(974);
	popStackFrame(ctx);
	INST_RETURN();
label_186:;
label_188: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(978);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(979);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	frame[46].o = sp[0].o;
	LINE_NUMBER(980);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"noi chuyen = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[46].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"npc ID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(981);
	sp[0].o = (jobject)SM_nro_GameScr_findNPCInMap_short_R_nro_Npc(ctx, (jshort((frame[4].i))));
	frame[14].o = sp[0].o;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(982);
	((func_nro_Npc_addInfo_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_nro_Npc_addInfo_java_lang_String])(ctx, (frame[14].o), (frame[46].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(983);
	popStackFrame(ctx);
	INST_RETURN();
label_189:;
label_191: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(988);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[2].i = temp1;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp1 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) { popExceptionFrames(frameRef, 1); goto label_192; }
	}
	{
	LINE_NUMBER(989);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((func_nro_Char_setFusion_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setFusion_byte])(ctx, sp[0].o, (jbyte((frame[1].i))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(990);
	popStackFrame(ctx);
	INST_RETURN();
label_192:;
label_194: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(993);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[2].i));
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_221; }
	}
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[2].i));
	((func_nro_Char_setFusion_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setFusion_byte])(ctx, sp[0].o, (jbyte((frame[1].i))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(995);
	popStackFrame(ctx);
	INST_RETURN();
label_195:;
label_196: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(999);
	frame[9].o = (frame[0].o);
	}
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[6] = true; goto label_203; } // goto label_24
	}
	{
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[10].i = temp0;
	if (temp0 != 0) { popExceptionFrames(frameRef, 2); goto label_26; }
	}
	{
	LINE_NUMBER(1007);
	sp[0].o = (jobject)SM_nro_RadarScr_gI_R_nro_RadarScr(ctx);
	LINE_NUMBER(1008);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[51].o = sp[0].o;
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[47].i = temp0;
	LINE_NUMBER(1010);
	frame[48].i = (jint(0));
	LINE_NUMBER(1012);
	frame[49].i = (jint(0));
	}
label_764:;
	{
	if ((frame[49].i) >= (frame[47].i)) goto label_765;
	}
	{
	LINE_NUMBER(1013);
	clinit_nro_Info_RadaScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Info_RadaScr);
	init_nro_Info_RadaScr(ctx, sp[0].o);
	frame[50].o = sp[0].o;
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[12].i = temp0;
	LINE_NUMBER(1015);
	frame[52].i = ((frame[49].i) + (jint(1)));
	LINE_NUMBER(1016);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[53].i = temp1;
	LINE_NUMBER(1017);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[54].i = temp2;
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[55].i = temp3;
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp4 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[56].i = temp4;
	LINE_NUMBER(1020);
	frame[57].i = (jint(-1));
	LINE_NUMBER(1021);
	frame[58].o = (jobject(nullptr));
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp5 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[59].i = temp5;
	if (temp5 != 0) goto label_777;
	}
	{
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[57].i = temp0;
	goto label_779;
	}
label_777:;
	{
	LINE_NUMBER(1026);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[60].i = temp0;
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[61].i = temp1;
	LINE_NUMBER(1028);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[62].i = temp2;
	LINE_NUMBER(1029);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[63].i = temp3;
	LINE_NUMBER(1031);
	clinit_nro_Char(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[0].o);
	frame[64].o = sp[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_head = (frame[60].i);
	LINE_NUMBER(1032);
	((nro_Char *) NULL_CHECK((frame[64].o)))->F_body = (frame[61].i);
	LINE_NUMBER(1033);
	((nro_Char *) NULL_CHECK((frame[64].o)))->F_leg = (frame[62].i);
	LINE_NUMBER(1034);
	((nro_Char *) NULL_CHECK((frame[64].o)))->F_bag = (frame[63].i);
	LINE_NUMBER(1035);
	frame[58].o = (frame[64].o);
	}
label_779:;
	{
	LINE_NUMBER(1038);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	frame[60].o = sp[0].o;
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	frame[61].o = sp[0].o;
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[62].i = temp0;
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[63].i = temp1;
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[64].i = temp2;
	LINE_NUMBER(1043);
	frame[65].o = (jobject(nullptr));
	LINE_NUMBER(1044);
	if ((frame[64].i) == 0) goto label_795;
	}
	{
	LINE_NUMBER(1045);
	sp[0].o = (jobject)createArray(ctx, &class_nro_ItemOption, (frame[64].i));
	frame[65].o = sp[0].o;
	LINE_NUMBER(1047);
	frame[66].i = (jint(0));
	}
label_798:;
	{
	if ((frame[66].i) >= (((jarray) nullCheck(ctx, (frame[65].o)))->length)) goto label_795;
	}
	{
	LINE_NUMBER(1048);
	sp[0].o = (jobject)SM_nro_Controller_gI_R_nro_Controller(ctx);
	LINE_NUMBER(1049);
	sp[0].o = (jobject)SM_nro_Controller_readItemOption_nro_Message_R_nro_ItemOption(ctx, (frame[9].o));
	frame[67].o = sp[0].o;
	LINE_NUMBER(1050);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[68].i = temp0;
	LINE_NUMBER(1051);
	if ((frame[67].o) == nullptr) goto label_803;
	}
	{
	LINE_NUMBER(1052);
	ARRAY_ACCESS(jobject, (frame[65].o), (frame[66].i)) = (frame[67].o);
	LINE_NUMBER(1053);
	((nro_ItemOption *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[65].o), (frame[66].i)))))->F_active = (frame[68].i);
	}
label_803:;
	{
	LINE_NUMBER(1047);
	INST_IINC(66, 1);
	goto label_798;
	}
label_795:;
	{
	LINE_NUMBER(1058);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_id = (frame[12].i);
	LINE_NUMBER(1059);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_no = (frame[52].i);
	LINE_NUMBER(1060);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_idIcon = (frame[53].i);
	LINE_NUMBER(1061);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_rank = (frame[54].i);
	LINE_NUMBER(1062);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_typeMonster = (frame[59].i);
	LINE_NUMBER(1063);
	if ((frame[57].i) == (jint(-1))) goto label_811;
	}
	{
	LINE_NUMBER(1064);
	sp[0].o = frame[50].o;
	clinit_nro_Mob(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Mob);
	init_nro_Mob(ctx, sp[1].o);
	((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_mobInfo = (jref) sp[1].o;
	LINE_NUMBER(1065);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_mobInfo;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_templateId = (frame[57].i);
	}
label_811:;
	{
	LINE_NUMBER(1068);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_name = (jref) (frame[60].o);
	LINE_NUMBER(1069);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_info = (jref) (frame[61].o);
	LINE_NUMBER(1070);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_charInfo = (jref) (frame[58].o);
	LINE_NUMBER(1071);
	((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_itemOption = (jref) (frame[65].o);
	LINE_NUMBER(1072);
	((func_nro_Info_RadaScr_addItemDetail) ((void **) nullCheck(ctx, (frame[50].o))->vtable)[VTABLE_nro_Info_RadaScr_addItemDetail])(ctx, (frame[50].o));
	LINE_NUMBER(1073);
	((func_nro_Info_RadaScr_SetLevel_byte) ((void **) nullCheck(ctx, (frame[50].o))->vtable)[VTABLE_nro_Info_RadaScr_SetLevel_byte])(ctx, (frame[50].o), (frame[62].i));
	LINE_NUMBER(1074);
	((func_nro_Info_RadaScr_SetUse_byte) ((void **) nullCheck(ctx, (frame[50].o))->vtable)[VTABLE_nro_Info_RadaScr_SetUse_byte])(ctx, (frame[50].o), (frame[63].i));
	LINE_NUMBER(1075);
	((func_nro_Info_RadaScr_SetAmount_byte_byte) ((void **) nullCheck(ctx, (frame[50].o))->vtable)[VTABLE_nro_Info_RadaScr_SetAmount_byte_byte])(ctx, (frame[50].o), (frame[55].i), (frame[56].i));
	LINE_NUMBER(1076);
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[51].o))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, (frame[51].o), (frame[50].o));
	LINE_NUMBER(1077);
	if ((frame[62].i) <= 0) goto label_823;
	}
	LINE_NUMBER(1078);
	INST_IINC(48, 1);
label_823:;
	{
	LINE_NUMBER(1012);
	INST_IINC(49, 1);
	goto label_764;
	}
label_765:;
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)SM_nro_RadarScr_gI_R_nro_RadarScr(ctx);
	((func_nro_RadarScr_SetRadarScr_nro_MyVector_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_RadarScr_SetRadarScr_nro_MyVector_int_int])(ctx, sp[0].o, (frame[51].o), (frame[48].i), (frame[47].i));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1083);
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
label_197: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
label_28: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[7] = true; goto label_203; } // goto label_24
	}
	{
	LINE_NUMBER(1086);
	if ((frame[10].i) != (jint(1))) { popExceptionFrames(frameRef, 2); goto label_29; }
	}
	{
	LINE_NUMBER(1087);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[51].i = temp0;
	LINE_NUMBER(1088);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[52].i = temp1;
	LINE_NUMBER(1089);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, (frame[51].i));
	if (sp[0].o == nullptr) goto label_828;
	}
	{
	LINE_NUMBER(1090);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, (frame[51].i));
	((func_nro_Info_RadaScr_SetUse_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_RadaScr_SetUse_byte])(ctx, sp[0].o, (frame[52].i));
	}
label_828:;
	LINE_NUMBER(1093);
	SM_nro_RadarScr_SetListUse(ctx);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1094);
	popStackFrame(ctx);
	INST_RETURN();
label_29:;
label_198: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[8] = true; goto label_203; } // goto label_24
	}
	{
	LINE_NUMBER(1097);
	if ((frame[10].i) != (jint(2))) { popExceptionFrames(frameRef, 2); goto label_32; }
	}
	{
	LINE_NUMBER(1098);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[11].i = temp0;
	LINE_NUMBER(1099);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[47].i = (jshort(temp1));
	LINE_NUMBER(1100);
	frame[48].i = (jint(0));
	LINE_NUMBER(1102);
	frame[49].i = (jint(0));
	}
label_834:;
	{
	jint temp0 = frame[49].i;
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_835;
	}
	{
	LINE_NUMBER(1103);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[49].i));
	sp[0].o = checkCast(ctx, &class_nro_Info_RadaScr, sp[0].o);
	frame[50].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_838;
	}
	{
	LINE_NUMBER(1104);
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_id) != (frame[11].i)) goto label_840;
	}
	{
	LINE_NUMBER(1105);
	((func_nro_Info_RadaScr_SetLevel_byte) ((void **) nullCheck(ctx, (frame[50].o))->vtable)[VTABLE_nro_Info_RadaScr_SetLevel_byte])(ctx, (frame[50].o), (jbyte((frame[47].i))));
	}
label_840:;
	{
	LINE_NUMBER(1108);
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[50].o)))->F_level) <= 0) goto label_838;
	}
	LINE_NUMBER(1109);
	INST_IINC(48, 1);
label_838:;
	{
	LINE_NUMBER(1102);
	INST_IINC(49, 1);
	goto label_834;
	}
label_835:;
	{
	LINE_NUMBER(1114);
	jint temp0 = frame[48].i;
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	SM_nro_RadarScr_SetNum_int_int(ctx, temp0, temp1);
	LINE_NUMBER(1115);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_listUse;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, (frame[11].i));
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 2); goto label_201; }
	}
	{
	LINE_NUMBER(1116);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_listUse;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, (frame[11].i));
	((func_nro_Info_RadaScr_SetLevel_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_RadaScr_SetLevel_byte])(ctx, sp[0].o, (jbyte((frame[47].i))));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1117);
	popStackFrame(ctx);
	INST_RETURN();
label_32:;
label_199: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
label_34: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[9] = true; goto label_203; } // goto label_24
	}
	{
	LINE_NUMBER(1119);
	if ((frame[10].i) != (jint(3))) { popExceptionFrames(frameRef, 2); goto label_35; }
	}
	{
	LINE_NUMBER(1120);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[11].i = temp0;
	LINE_NUMBER(1121);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[47].i = (jshort(temp1));
	LINE_NUMBER(1122);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[26].i = (jshort(temp2));
	LINE_NUMBER(1123);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, (frame[11].i));
	if (sp[0].o == nullptr) goto label_849;
	}
	{
	LINE_NUMBER(1124);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_list;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, (frame[11].i));
	((func_nro_Info_RadaScr_SetAmount_byte_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_RadaScr_SetAmount_byte_byte])(ctx, sp[0].o, (jbyte((frame[47].i))), (jbyte((frame[26].i))));
	}
label_849:;
	{
	LINE_NUMBER(1127);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_listUse;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, (frame[11].i));
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 2); goto label_201; }
	}
	{
	LINE_NUMBER(1128);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_listUse;
	sp[0].o = (jobject)SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(ctx, sp[0].o, (frame[11].i));
	((func_nro_Info_RadaScr_SetAmount_byte_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_RadaScr_SetAmount_byte_byte])(ctx, sp[0].o, (jbyte((frame[47].i))), (jbyte((frame[26].i))));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1129);
	popStackFrame(ctx);
	INST_RETURN();
label_35:;
label_200: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
label_37: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[10] = true; goto label_203; } // goto label_24
	}
	{
	LINE_NUMBER(1131);
	if ((frame[10].i) != (jint(4))) { popExceptionFrames(frameRef, 2); goto label_201; }
	}
	{
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[11].i = temp0;
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[47].i = temp1;
	LINE_NUMBER(1135);
	jint temp2 = frame[11].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp2 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_855;
	}
	{
	LINE_NUMBER(1136);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[51].o = sp[0].o;
	goto label_858;
	}
label_855:;
	{
	LINE_NUMBER(1138);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[11].i));
	frame[51].o = sp[0].o;
	}
label_858:;
	{
	LINE_NUMBER(1141);
	if ((frame[51].o) == nullptr) { popExceptionFrames(frameRef, 2); goto label_201; }
	}
	{
	LINE_NUMBER(1142);
	((nro_Char *) NULL_CHECK((frame[51].o)))->F_idAuraEff = (frame[47].i);
	LINE_NUMBER(1143);
	sp[0].o = frame[51].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_idEff_Set_Item = (jshort(temp0));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1144);
	popStackFrame(ctx);
	INST_RETURN();
label_201:;
label_203: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	if (bypasses[6]) { bypasses[6] = false; goto label_24; }
	if (bypasses[7]) { bypasses[7] = false; goto label_24; }
	if (bypasses[8]) { bypasses[8] = false; goto label_24; }
	if (bypasses[9]) { bypasses[9] = false; goto label_24; }
	if (bypasses[10]) { bypasses[10] = false; goto label_24; }
	LINE_NUMBER(1149);
	goto label_202;
label_24:;
	{
	sp -= 1;
	LINE_NUMBER(1147);
	frame[47].o = sp[0].o;
	LINE_NUMBER(1148);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[47].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[47].o));
	}
label_202:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1151);
	popStackFrame(ctx);
	INST_RETURN();
label_221:;
	LINE_NUMBER(1154);
	goto label_862;
label_40:;
	LINE_NUMBER(1153);
	INST_ASTORE(1);
label_862:;
	LINE_NUMBER(1156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Controller2_b_nro_Message(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Controller2:b", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Controller2(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[1].i = temp0;
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[1].i = temp0;
	sp[0].o = (jobject) createArray(ctx, &class_short, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1166);
	frame[3].i = (jint(0));
	}
label_10:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_11;
	}
	{
	LINE_NUMBER(1167);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1166);
	INST_IINC(3, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1170);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(1171);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp1;
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[5].i = temp2;
	LINE_NUMBER(1173);
	sp[0].o = (jobject)SM_nro_CrackBallScr_gI_R_nro_CrackBallScr(ctx);
	((func_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short])(ctx, sp[0].o, (frame[2].o), (frame[4].i), (frame[1].i), (frame[5].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1174);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1177);
	if ((frame[1].i) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[1].i = temp0;
	sp[0].o = (jobject) createArray(ctx, &class_short, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1180);
	frame[3].i = (jint(0));
	}
label_20:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_21;
	}
	{
	LINE_NUMBER(1181);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1180);
	INST_IINC(3, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(1184);
	sp[0].o = (jobject)SM_nro_CrackBallScr_gI_R_nro_CrackBallScr(ctx);
	((func_nro_CrackBallScr_DoneCrackBallScr_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_CrackBallScr_DoneCrackBallScr_Array1_short])(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1185);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	LINE_NUMBER(1189);
	goto label_24;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1187);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1188);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[1].o));
	}
label_24:;
	LINE_NUMBER(1191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Controller2_a_nro_Message_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Controller2:a", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Controller2(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Mob_getBigBoss2_byte_R_nro_NewBoss(ctx, temp0);
	frame[2].o = sp[0].o;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1197);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1200);
	if ((frame[1].i) != (10)) goto label_8;
	}
	{
	LINE_NUMBER(1201);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(1202);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[0].o);
	frame[4].i = temp1;
	LINE_NUMBER(1203);
	((func_nro_NewBoss_a_short_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_NewBoss_a_short_short])(ctx, (frame[2].o), (frame[3].i), (frame[4].i));
	}
label_8:;
	{
	LINE_NUMBER(1206);
	if ((frame[1].i) < (11)) goto label_12;
	}
	{
	if ((frame[1].i) > (20)) goto label_12;
	}
	{
	LINE_NUMBER(1208);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[3].i = temp0;
	sp[0].o = (jobject)createArray(ctx, &class_nro_Char, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1209);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1211);
	frame[6].i = (jint(0));
	}
label_17:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_18;
	}
	{
	LINE_NUMBER(1212);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[7].i = temp0;
	LINE_NUMBER(1213);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)) = (jobject(nullptr));
	LINE_NUMBER(1214);
	jint temp1 = frame[7].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp1 == ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_22;
	}
	{
	LINE_NUMBER(1215);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[7].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(1217);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(1220);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, sp[1].o);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1211);
	INST_IINC(6, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(1223);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[6].i = temp0;
	LINE_NUMBER(1224);
	((func_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte])(ctx, (frame[2].o), (frame[4].o), (frame[5].o), (jbyte(((frame[1].i) - (10)))), (frame[6].i));
	}
label_12:;
	{
	LINE_NUMBER(1227);
	if ((frame[1].i) != (21)) goto label_27;
	}
	{
	LINE_NUMBER(1228);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_a = temp0;
	LINE_NUMBER(1229);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, sp[1].o);
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_isDontMove = temp1;
	LINE_NUMBER(1230);
	((func_nro_NewBoss_removeBigBoss) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_NewBoss_removeBigBoss])(ctx, (frame[2].o));
	}
label_27:;
	{
	LINE_NUMBER(1233);
	if ((frame[1].i) != (23)) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(1234);
	((func_nro_NewBoss_onCancelChat) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_NewBoss_onCancelChat])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1235);
	popStackFrame(ctx);
	INST_RETURN();
label_31:;
	LINE_NUMBER(1239);
	goto label_33;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1237);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1238);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_33:;
	LINE_NUMBER(1241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Controller2[] {
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
	{ "a", &class_int, offsetof(nro_Controller2, F_a), "I", 0 },
	{ "b", &class_int, offsetof(nro_Controller2, F_b), "I", 0 },
	{ "c", &class_int, offsetof(nro_Controller2, F_c), "I", 0 },
	{ "d", &class_int, offsetof(nro_Controller2, F_d), "I", 0 },
	{ "e", &class_int, offsetof(nro_Controller2, F_e), "I", 0 },
	{ "f", &class_int, offsetof(nro_Controller2, F_f), "I", 0 },
	{ "y0", &class_int, offsetof(nro_Controller2, F_y0), "I", 0 },
	{ "h", &class_int, offsetof(nro_Controller2, F_h), "I", 0 },
	{ "t", &class_int, offsetof(nro_Controller2, F_t), "I", 0 },
	{ "j", &class_int, offsetof(nro_Controller2, F_j), "I", 0 },
	{ "k", &class_float, offsetof(nro_Controller2, F_k), "F", 0 },
	{ "l", &class_long, offsetof(nro_Controller2, F_l), "J", 0 },
	{ "m", &class_long, offsetof(nro_Controller2, F_m), "J", 0 },
	{ "n", &class_boolean, offsetof(nro_Controller2, F_n), "Z", 0 },
	{ "o", getArrayClass(&class_int, 1), offsetof(nro_Controller2, F_o), "[I", 0 },
	{ "p", getArrayClass(&class_int, 1), offsetof(nro_Controller2, F_p), "[I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Controller2_int_int_int_int_int, 0, "(IIIII)V", 1 },
	{ "a", (intptr_t) SM_nro_Controller2_a_lib_mGraphics_int_int_int, 0, "(Llib/mGraphics;III)V", 9 },
	{ "<init>", (intptr_t) init_nro_Controller2, 0, "()V", 1 },
	{ "readMessage", (intptr_t) SM_nro_Controller2_readMessage_nro_Message, 0, "(Lnro/Message;)V", 9 },
	{ "b", (intptr_t) SM_nro_Controller2_b_nro_Message, 0, "(Lnro/Message;)V", 10 },
	{ "a", (intptr_t) SM_nro_Controller2_a_nro_Message_int, 0, "(Lnro/Message;I)V", 10 },
};

Class class_nro_Controller2{
		.nativeName = (intptr_t) "nro/Controller2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Controller2),
		.classVtable = (intptr_t) vtable_nro_Controller2,
		.staticInitializer = (intptr_t) clinit_nro_Controller2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Controller2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Controller2 = registerClass(&class_nro_Controller2);

}

