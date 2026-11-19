#include "lib/mSystem.h"
#include "nro/GameScr.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME.h"
#include "nro/ClientDiagLogger_LogEntry.h"
#include "main/GameCanvas.h"
#include "lib/image/mImage.h"
#include "nro/MainImage.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/FrameImage.h"
#include "nro/Controller.h"
#include "nro/SplashScr.h"
#include "nro/mScreen.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "nro/ImgByName.h"
#include "java/lang/Exception.h"
#include "nro/ServerListScreen.h"
#include "lib/mGraphics.h"
#include "nro/mHashTable.h"
#include "nro/ClientDiagLogger.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/Res.h"
#include "main/GameMidlet.h"
#include "nro/Rms.h"
#include "nro/LoginScr.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {

jint SF_lib_mSystem_clientTypec;
jbyte SF_lib_mSystem_curINAPP;
jbyte SF_lib_mSystem_maxINAPP;
jobject SF_lib_mSystem_g;

void mark_lib_mSystem(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_mSystem_g)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mSystem_g)->clazz)->markFunction)((jobject) SF_lib_mSystem_g, mark, depth + 1);
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
	auto self = (lib_mSystem *) object;
}

void init_lib_mSystem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_mSystem_resetCurInapp(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:resetCurInapp", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	{
	LINE_NUMBER(31);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_curINAPP = (jint(0));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_lib_mSystem_getWidth_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:getWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(35);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(5))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_lib_mSystem_getHeight_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(39);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(5))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_lib_mSystem_getTimeCountDown_long_int_boolean_boolean_R_java_lang_String(jcontext ctx, jlong param0, jint param1, jbool param2, jbool param3) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:getTimeCountDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(44);
	jlong temp0 = (frame[0].l) + (jlong(((frame[2].i) * (1000))));
	jlong temp1 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	jlong temp2 = (temp0 - temp1) / (jlong(1000ll));
	frame[5].l = temp2;
	if ((longCompare(temp2, (jlong(0)))) > 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_3;
label_2:;
	INST_LLOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, sp[0].l);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_lib_mSystem_numberTostring_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:numberTostring", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	clinit_lib_mSystem(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(48);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(49);
	frame[3].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(52);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(53);
	frame[3].i = (jint(1));
	LINE_NUMBER(54);
	frame[0].l = (-(frame[0].l));
	LINE_NUMBER(55);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(60);
	if ((longCompare((frame[0].l), (jlong(1000000000ll)))) < 0) goto label_16;
	}
	{
	LINE_NUMBER(61);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"b"_j)));
	LINE_NUMBER(62);
	frame[0].l = ((frame[0].l) / (jlong(1000000000ll)));
	LINE_NUMBER(63);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	{ popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_21
	}
label_16:;
	{
	LINE_NUMBER(64);
	if ((longCompare((frame[0].l), (jlong(1000000ll)))) < 0) goto label_22;
	}
	{
	LINE_NUMBER(65);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"m"_j)));
	LINE_NUMBER(66);
	frame[0].l = ((frame[0].l) / (jlong(1000000ll)));
	LINE_NUMBER(67);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_21
	}
label_22:;
	{
	LINE_NUMBER(69);
	if ((longCompare((frame[0].l), (jlong(1000ll)))) >= 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(70);
	if ((frame[3].i) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(71);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(74);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_21; }
	if (bypasses[1]) { bypasses[1] = false; goto label_21; }
	{
	LINE_NUMBER(77);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"k"_j)));
	LINE_NUMBER(78);
	frame[0].l = ((frame[0].l) / (jlong(1000ll)));
	LINE_NUMBER(79);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	}
label_21:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (frame[5].i), (jint(2)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[6].i = temp0;
	if (temp0 != 0) goto label_32;
	}
	{
	LINE_NUMBER(84);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_32:;
	{
	LINE_NUMBER(85);
	if (((frame[6].i) % (10)) != 0) goto label_34;
	}
	{
	LINE_NUMBER(86);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (frame[5].i), (jint(1)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_34:;
	{
	LINE_NUMBER(88);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (frame[5].i), (jint(2)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(91);
	goto label_36;
label_2:;
	LINE_NUMBER(90);
	INST_ASTORE(4);
label_36:;
	{
	LINE_NUMBER(93);
	if ((frame[3].i) == 0) goto label_37;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_38;
	}
label_37:;
	INST_ALOAD(2);
label_38:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_lib_mSystem_callHotlineJava(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:callHotlineJava", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	{
	LINE_NUMBER(97);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	clinit_nro_ServerListScreen(ctx);
	sp[1].o = (jobject)SF_nro_ServerListScreen_l;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_mSystem_paintPopUp2_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:paintPopUp2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(102);
	((func_lib_mGraphics_fillRect_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((frame[3].i) + (10)), ((frame[4].i) + (10)), (jint(0)));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_mSystem_sleep(jcontext ctx) {
	FrameInfo frameInfo { "lib/mSystem:sleep", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_lib_mSystem(ctx);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_mSystem_onConnectionFail_boolean(jcontext ctx, jbool param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:onConnectionFail", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(111);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"MSYSTEM_ON_CONNECTION_FAIL"_j));
	jint temp0 = 503;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ERR_CONNECTION_FAIL"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ON_CONNECTION_FAIL"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"isMain="_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[0].i));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logLogoutTrigger_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(117);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_SplashScr(ctx);
	sp[1].o = (jobject)SF_nro_SplashScr_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(118);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_maychutathoacmatsong;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" [1]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8884), (jobject(nullptr)));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_clearSendingMessage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_clearSendingMessage])(ctx, sp[0].o);
	LINE_NUMBER(121);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_clearSendingMessage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_clearSendingMessage])(ctx, sp[0].o);
	LINE_NUMBER(122);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isWait = (jint(0));
	LINE_NUMBER(123);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isMain) == 0) goto label_8;
	}
	{
	LINE_NUMBER(124);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_maychutathoacmatsong;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(126);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_isContinueToLogin = (jint(0));
	LINE_NUMBER(127);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (sp[0].o == nullptr) goto label_11;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_ipSelect;
	if ((--sp)->i < 0) goto label_11;
	{
	clinit_nro_ServerListScreen(ctx);
	jint temp0 = (jint)SF_nro_ServerListScreen_ipSelect;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(128);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_serverName = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect)));
	}
label_11:;
	{
	LINE_NUMBER(130);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(131);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"===========> 2 v\u00e0o OnconnectFail"_j))));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(133);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(134);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(1));
	LINE_NUMBER(135);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(138);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(139);
	if ((frame[0].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(140);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(0));
	}
label_4:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_mSystem_onDisconnected_boolean(jcontext ctx, jbool param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:onDisconnected", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"MSYSTEM_ON_DISCONNECTED"_j));
	jint temp0 = 503;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ERR_DISCONNECTED"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ON_DISCONNECTED"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"isMain="_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[0].i));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logLogoutTrigger_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(154);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_clearSendingMessage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_clearSendingMessage])(ctx, sp[0].o);
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_clearSendingMessage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_clearSendingMessage])(ctx, sp[0].o);
	LINE_NUMBER(156);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isMain) == 0) goto label_4;
	}
	{
	LINE_NUMBER(157);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_instance;
	((func_main_GameCanvas_resetToLoginScrz) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_resetToLoginScrz])(ctx, sp[0].o);
	LINE_NUMBER(158);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_pls_restart_game_error;
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8885), (jobject(nullptr)));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(160);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(161);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_maychutathoacmatsong;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" [2]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(ctx, sp[0].o, (8884), (jobject(nullptr)));
	goto label_10;
	}
label_8:;
	LINE_NUMBER(163);
	SM_main_GameCanvas_endDlg(ctx);
label_10:;
	{
	LINE_NUMBER(166);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(167);
	if ((frame[0].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(168);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(171);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_instance;
	((func_main_GameCanvas_resetToLoginScrz) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_resetToLoginScrz])(ctx, sp[0].o);
	}
label_7:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:loadImageRMS", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(176);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(181);
	if ((frame[2].i) < 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[2].i));
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(0);
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[3].o), (47));
	frame[4].i = temp0;
	LINE_NUMBER(183);
	if ((frame[4].i) < 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[3].o), ((frame[4].i) + (jint(1))));
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(3);
label_11:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(184);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(185);
	if ((frame[6].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(ctx, (frame[6].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	frame[1].o = sp[0].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(190);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(188);
	frame[2].o = sp[0].o;
	LINE_NUMBER(189);
	frame[1].o = (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(193);
	if ((frame[1].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)SM_lib_image_mImage_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:loadImage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(201);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)SM_lib_image_mImage_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(206);
	goto label_5;
label_2:;
	LINE_NUMBER(205);
	INST_ASTORE(2);
label_5:;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:createImage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(212);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(213);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)SM_javax_microedition_lcdui_Image_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(218);
	goto label_6;
label_2:;
	LINE_NUMBER(217);
	INST_ASTORE(2);
label_6:;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_lib_mSystem_paintFlyText_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:paintFlyText", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(224);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= (jint(5))) goto label_2;
	}
	{
	LINE_NUMBER(225);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextState;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) == (jint(-1))) goto label_4;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextY;
	jint temp1 = (jint)SM_main_GameCanvas_isPaint_int_int_R_boolean(ctx, temp0, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))));
	if (temp1 == 0) goto label_4;
	}
	{
	LINE_NUMBER(226);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(227);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_red;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	((func_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i))), (jint(2)));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(228);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(229);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_yellow;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	((func_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i))), (jint(2)));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(230);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (jint(2))) goto label_10;
	}
	{
	LINE_NUMBER(231);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_green;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	((func_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i))), (jint(2)));
	goto label_4;
	}
label_10:;
	{
	LINE_NUMBER(232);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (jint(3))) goto label_12;
	}
	{
	LINE_NUMBER(233);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_yellow;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_bigNumber_black;
	((func_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_4;
	}
label_12:;
	{
	LINE_NUMBER(234);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (8)) goto label_14;
	}
	{
	LINE_NUMBER(235);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_green;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_bigNumber_black;
	((func_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_4;
	}
label_14:;
	{
	LINE_NUMBER(236);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (jint(4))) goto label_16;
	}
	{
	LINE_NUMBER(237);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_While;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_4;
	}
label_16:;
	{
	LINE_NUMBER(238);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (jint(5))) goto label_18;
	}
	{
	LINE_NUMBER(239);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_orange;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	((func_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i))), (jint(2)));
	goto label_4;
	}
label_18:;
	{
	LINE_NUMBER(240);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (6)) goto label_20;
	}
	{
	LINE_NUMBER(241);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_yellow;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_bigNumber_black;
	((func_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_4;
	}
label_20:;
	{
	LINE_NUMBER(242);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (7)) goto label_22;
	}
	{
	LINE_NUMBER(243);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_While;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_bigNumber_black;
	((func_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_4;
	}
label_22:;
	{
	LINE_NUMBER(244);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (9)) goto label_24;
	}
	{
	LINE_NUMBER(245);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_red;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_bigNumber_black;
	((func_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_4;
	}
label_24:;
	{
	LINE_NUMBER(246);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_flyTextColor;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (10)) goto label_4;
	}
	{
	LINE_NUMBER(247);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_blue;
	sp[1].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[2].o = (jobject)SF_nro_GameScr_bF;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_flyTextY;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[1].i));
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_bigNumber_black;
	((func_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	}
label_4:;
	{
	LINE_NUMBER(224);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong SM_lib_mSystem_currentTimeMillis_R_long(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:currentTimeMillis", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	{
	LINE_NUMBER(254);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:getFraImage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(258);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(259);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	clinit_nro_ImgByName(ctx);
	sp[1].o = (jobject)SF_nro_ImgByName_hashImagePath;
	sp[0].o = (jobject)SM_nro_ImgByName_getImagePath_java_lang_String_nro_mHashTable_R_nro_MainImage(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_img;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(261);
	if (((jint)((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_nFrame) <= 0) goto label_5;
	}
	{
	jint temp0 = (jint)((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_nFrame;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ICONST(1);
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(262);
	sp[0].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_img;
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, sp[0].o);
	frame[4].i = (temp0 / (frame[3].i));
	LINE_NUMBER(263);
	if ((frame[4].i) > 0) goto label_9;
	}
	{
	LINE_NUMBER(264);
	frame[4].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(267);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	sp[1].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_img;
	sp[2].o = (jobject)((nro_MainImage *) NULL_CHECK((frame[2].o)))->F_img;
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[2].o);
	init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(ctx, sp[0].o, sp[1].o, temp0, (frame[4].i));
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_lib_mSystem_println_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:println", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(275);
	SM_nro_Res_outz_java_lang_String(ctx, (frame[0].o));
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_lib_mSystem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSystem:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSystem(ctx);
	{
	LINE_NUMBER(23);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_clientTypec = (jint(4));
	LINE_NUMBER(24);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_curINAPP = (jint(0));
	LINE_NUMBER(25);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_maxINAPP = (jint(5));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_mSystem[] {
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
	{ "clientTypec", &class_int, (intptr_t) &SF_lib_mSystem_clientTypec, "I", 9 },
	{ "curINAPP", &class_byte, (intptr_t) &SF_lib_mSystem_curINAPP, "B", 9 },
	{ "maxINAPP", &class_byte, (intptr_t) &SF_lib_mSystem_maxINAPP, "B", 9 },
	{ "g", &class_java_lang_String, (intptr_t) &SF_lib_mSystem_g, "Ljava/lang/String;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_mSystem, 0, "()V", 1 },
	{ "resetCurInapp", (intptr_t) SM_lib_mSystem_resetCurInapp, 0, "()V", 9 },
	{ "getWidth", (intptr_t) SM_lib_mSystem_getWidth_javax_microedition_lcdui_Image_R_int, 0, "(Ljavax/microedition/lcdui/Image;)I", 9 },
	{ "getHeight", (intptr_t) SM_lib_mSystem_getHeight_javax_microedition_lcdui_Image_R_int, 0, "(Ljavax/microedition/lcdui/Image;)I", 9 },
	{ "getTimeCountDown", (intptr_t) SM_lib_mSystem_getTimeCountDown_long_int_boolean_boolean_R_java_lang_String, 0, "(JIZZ)Ljava/lang/String;", 9 },
	{ "numberTostring", (intptr_t) SM_lib_mSystem_numberTostring_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 9 },
	{ "callHotlineJava", (intptr_t) SM_lib_mSystem_callHotlineJava, 0, "()V", 9 },
	{ "paintPopUp2", (intptr_t) SM_lib_mSystem_paintPopUp2_lib_mGraphics_int_int_int_int, 0, "(Llib/mGraphics;IIII)V", 9 },
	{ "sleep", (intptr_t) SM_lib_mSystem_sleep, 0, "()V", 9 },
	{ "onConnectionFail", (intptr_t) SM_lib_mSystem_onConnectionFail_boolean, 0, "(Z)V", 9 },
	{ "onDisconnected", (intptr_t) SM_lib_mSystem_onDisconnected_boolean, 0, "(Z)V", 9 },
	{ "loadImageRMS", (intptr_t) SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image, 0, "(Ljava/lang/String;)Ljavax/microedition/lcdui/Image;", 9 },
	{ "loadImage", (intptr_t) SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image, 0, "(Ljava/lang/String;)Ljavax/microedition/lcdui/Image;", 9 },
	{ "createImage", (intptr_t) SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image, 0, "(Ljava/lang/String;)Ljavax/microedition/lcdui/Image;", 9 },
	{ "paintFlyText", (intptr_t) SM_lib_mSystem_paintFlyText_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "currentTimeMillis", (intptr_t) SM_lib_mSystem_currentTimeMillis_R_long, 0, "()J", 9 },
	{ "getFraImage", (intptr_t) SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage, 0, "(Ljava/lang/String;)Lnro/FrameImage;", 9 },
	{ "println", (intptr_t) SM_lib_mSystem_println_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_lib_mSystem, 0, "()V", 8 },
};

Class class_lib_mSystem{
		.nativeName = (intptr_t) "lib/mSystem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_mSystem),
		.classVtable = (intptr_t) vtable_lib_mSystem,
		.staticInitializer = (intptr_t) clinit_lib_mSystem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_mSystem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_mSystem = registerClass(&class_lib_mSystem);

}

