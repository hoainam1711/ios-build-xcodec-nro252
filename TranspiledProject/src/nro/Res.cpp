#include "nro/Res.h"
#include "java/lang/Math.h"
#include "lib/mFont.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Random.h"
#include "lib/mGraphics.h"
#include "nro/Service.h"
#include "java/lang/StringBuffer.h"
#include "java/io/PrintStream.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/NinjaUtil.h"
#include "nro/Char.h"
#include "java/lang/System.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_Res_sinz;
jobject SF_nro_Res_cosz;
jobject SF_nro_Res_tanz;
jobject SF_nro_Res_r;
jbool SF_nro_Res_isIcon;
jbool SF_nro_Res_isBig;

void mark_nro_Res(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Res_sinz)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Res_sinz)->clazz)->markFunction)((jobject) SF_nro_Res_sinz, mark, depth + 1);
		if (SF_nro_Res_cosz)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Res_cosz)->clazz)->markFunction)((jobject) SF_nro_Res_cosz, mark, depth + 1);
		if (SF_nro_Res_tanz)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Res_tanz)->clazz)->markFunction)((jobject) SF_nro_Res_tanz, mark, depth + 1);
		if (SF_nro_Res_r)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Res_r)->clazz)->markFunction)((jobject) SF_nro_Res_r, mark, depth + 1);
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
	auto self = (nro_Res *) object;
}

void init_nro_Res(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Res_init(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject) createArray(ctx, &class_short, (91));
	clinit_nro_Res(ctx);
	SF_nro_Res_cosz = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject) createArray(ctx, &class_int, (91));
	clinit_nro_Res(ctx);
	SF_nro_Res_tanz = sp[0].o;
	LINE_NUMBER(27);
	frame[0].i = (jint(0));
	}
label_3:;
	{
	if ((frame[0].i) > (90)) goto label_4;
	}
	{
	LINE_NUMBER(28);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_cosz;
	jint temp0 = frame[0].i;
	clinit_nro_Res(ctx);
	sp[1].o = (jobject)SF_nro_Res_sinz;
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jshort, sp[1].o, ((90) - (frame[0].i))));
	LINE_NUMBER(29);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_cosz;
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[0].i))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(30);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_tanz;
	ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)) = (jint(2147483647));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(32);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_tanz;
	jint temp0 = frame[0].i;
	clinit_nro_Res(ctx);
	sp[1].o = (jobject)SF_nro_Res_sinz;
	jint temp1 = ((jint)ARRAY_ACCESS(jshort, sp[1].o, (frame[0].i))) << (10);
	clinit_nro_Res(ctx);
	sp[1].o = (jobject)SF_nro_Res_cosz;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 / ((jint)ARRAY_ACCESS(jshort, sp[1].o, (frame[0].i))));
	}
label_9:;
	{
	LINE_NUMBER(27);
	INST_IINC(0, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_nro_Res_atan_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:atan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)SM_nro_Res_fixangle_int_R_int(ctx, (frame[0].i));
	frame[0].i = temp0;
	if (temp0 < 0) goto label_1;
	}
	{
	if ((frame[0].i) >= (90)) goto label_1;
	}
	{
	LINE_NUMBER(40);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_sinz;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[0].i)));
	}
label_1:;
	{
	LINE_NUMBER(41);
	if ((frame[0].i) < (90)) goto label_3;
	}
	{
	if ((frame[0].i) >= (180)) goto label_3;
	}
	{
	LINE_NUMBER(42);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_sinz;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, ((180) - (frame[0].i))));
	}
label_3:;
	{
	LINE_NUMBER(44);
	if ((frame[0].i) < (180)) goto label_5;
	}
	{
	if ((frame[0].i) >= (270)) goto label_5;
	}
	{
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_sinz;
	jint temp0 = -((jint)ARRAY_ACCESS(jshort, sp[0].o, ((frame[0].i) - (180))));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_sinz;
	jint temp0 = -((jint)ARRAY_ACCESS(jshort, sp[0].o, ((360) - (frame[0].i))));
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_nro_Res_cos_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:cos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)SM_nro_Res_fixangle_int_R_int(ctx, (frame[0].i));
	frame[0].i = temp0;
	if (temp0 < 0) goto label_1;
	}
	{
	if ((frame[0].i) >= (90)) goto label_1;
	}
	{
	LINE_NUMBER(50);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_cosz;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[0].i)));
	}
label_1:;
	{
	LINE_NUMBER(51);
	if ((frame[0].i) < (90)) goto label_3;
	}
	{
	if ((frame[0].i) >= (180)) goto label_3;
	}
	{
	LINE_NUMBER(52);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_cosz;
	popStackFrame(ctx);
	return (-((jint)ARRAY_ACCESS(jshort, sp[0].o, ((180) - (frame[0].i)))));
	}
label_3:;
	{
	LINE_NUMBER(54);
	if ((frame[0].i) < (180)) goto label_5;
	}
	{
	if ((frame[0].i) >= (270)) goto label_5;
	}
	{
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_cosz;
	jint temp0 = -((jint)ARRAY_ACCESS(jshort, sp[0].o, ((frame[0].i) - (180))));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_cosz;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, ((360) - (frame[0].i)));
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_nro_Res_angle_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:angle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(61);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((frame[1].i) << (10)) / (frame[0].i)));
	frame[3].i = temp0;
	LINE_NUMBER(65);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) > (90)) goto label_5;
	}
	{
	LINE_NUMBER(66);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_tanz;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))) < (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(67);
	frame[2].i = (frame[4].i);
	LINE_NUMBER(68);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(65);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(72);
	frame[2].i = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(75);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(76);
	if ((frame[1].i) < 0) goto label_12;
	}
	INST_ILOAD(0);
	if ((--sp)->i >= 0) goto label_12;
	{
	LINE_NUMBER(77);
	frame[3].i = ((180) - (frame[3].i));
	}
label_12:;
	{
	LINE_NUMBER(80);
	if ((frame[1].i) >= 0) goto label_14;
	}
	INST_ILOAD(0);
	if ((--sp)->i >= 0) goto label_14;
	LINE_NUMBER(81);
	INST_IINC(3, 180);
label_14:;
	{
	LINE_NUMBER(84);
	if ((frame[1].i) >= 0) goto label_16;
	}
	INST_ILOAD(0);
	if ((--sp)->i >= 0) goto label_17;
label_16:;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_17:;
	{
	LINE_NUMBER(88);
	frame[2].i = ((360) - (frame[3].i));
	goto label_18;
	}
label_1:;
	{
	LINE_NUMBER(90);
	if ((frame[1].i) <= 0) goto label_19;
	}
	INST_BIPUSH(90);
	goto label_20;
label_19:;
	INST_SIPUSH(270);
label_20:;
	INST_ISTORE(2);
label_18:;
	{
	LINE_NUMBER(93);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_fixangle_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:fixangle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(98);
	if ((frame[0].i) < (360)) goto label_1;
	}
	LINE_NUMBER(99);
	INST_IINC(0, -360);
label_1:;
	{
	LINE_NUMBER(102);
	if ((frame[0].i) >= 0) goto label_3;
	}
	LINE_NUMBER(103);
	INST_IINC(0, 360);
label_3:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

void SM_nro_Res_paintOnScreenDebug_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:paintOnScreenDebug", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(110);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"check Controller= "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[2].o, (clinit_nro_Service(ctx), (jlong)SF_nro_Service_logController));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(3)), (55), (jint(0)));
	LINE_NUMBER(111);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"check Map= "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[2].o, (clinit_nro_Service(ctx), (jlong)SF_nro_Service_logMap));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(3)), (75), (jint(0)));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Res_updateOnScreenDebug(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:updateOnScreenDebug", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	{
	LINE_NUMBER(115);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	frame[0].l = temp0;
	LINE_NUMBER(116);
	if ((longCompare(((frame[0].l) - (clinit_nro_Service(ctx), (jlong)SF_nro_Service_curCheckController)), (jlong(5000ll)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_sendCheckController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendCheckController])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(120);
	if ((longCompare(((frame[0].l) - (clinit_nro_Service(ctx), (jlong)SF_nro_Service_curCheckMap)), (jlong(5000ll)))) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_sendCheckMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendCheckMap])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_Res_changeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:changeString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(127);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (7)) goto label_1;
	}
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) < (10)) goto label_3;
	}
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_3:;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Gohan"_j))));
	if (temp0 == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Gohan"_j))), (((jobject) createStringLiteral(ctx, u8"Hango"_j))));
	frame[0].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"G\u00f4han"_j))));
	if (temp0 == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"G\u00f4han"_j))), (((jobject) createStringLiteral(ctx, u8"Hango"_j))));
	frame[0].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Bunma"_j))));
	if (temp0 == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Bunma"_j))), (((jobject) createStringLiteral(ctx, u8"Mabun"_j))));
	frame[0].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(144);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Bunman"_j))));
	if (temp0 == (jint(-1))) goto label_11;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Bunman"_j))), (((jobject) createStringLiteral(ctx, u8"Mabun"_j))));
	frame[0].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Bun ma"_j))));
	if (temp0 == (jint(-1))) goto label_13;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Bun ma"_j))), (((jobject) createStringLiteral(ctx, u8"Mabun"_j))));
	frame[0].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\u0110\u1eadu th\u1ea7n"_j))));
	if (temp0 == (jint(-1))) goto label_15;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\u0110\u1eadu th\u1ea7n"_j))), (((jobject) createStringLiteral(ctx, u8"C\u00e2y th\u1ea7n"_j))));
	frame[0].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Mabu"_j))));
	if (temp0 == (jint(-1))) goto label_17;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Mabu"_j))), (((jobject) createStringLiteral(ctx, u8"Buma"_j))));
	frame[0].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ma b\u01b0"_j))));
	if (temp0 == (jint(-1))) goto label_19;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ma b\u01b0"_j))), (((jobject) createStringLiteral(ctx, u8"Buma"_j))));
	frame[0].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Xayda"_j))));
	if (temp0 == (jint(-1))) goto label_21;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Xayda"_j))), (((jobject) createStringLiteral(ctx, u8"Dasay"_j))));
	frame[0].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Xay da"_j))));
	if (temp0 == (jint(-1))) goto label_23;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Xay da"_j))), (((jobject) createStringLiteral(ctx, u8"Dasay"_j))));
	frame[0].o = sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Nam\u1ebfc"_j))));
	if (temp0 == (jint(-1))) goto label_25;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Nam\u1ebfc"_j))), (((jobject) createStringLiteral(ctx, u8"Mecda"_j))));
	frame[0].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Na m\u1ebfc"_j))));
	if (temp0 == (jint(-1))) goto label_27;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Na m\u1ebfc"_j))), (((jobject) createStringLiteral(ctx, u8"Mecda"_j))));
	frame[0].o = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Namek"_j))));
	if (temp0 == (jint(-1))) goto label_29;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Namek"_j))), (((jobject) createStringLiteral(ctx, u8"Mecda"_j))));
	frame[0].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(184);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"R\u1ed3ng th\u1ea7n"_j))));
	if (temp0 == (jint(-1))) goto label_31;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"R\u1ed3ng th\u1ea7n"_j))), (((jobject) createStringLiteral(ctx, u8"R\u1ed3ng \u0111\u1ea5t"_j))));
	frame[0].o = sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Kame"_j))));
	if (temp0 == (jint(-1))) goto label_33;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Kame"_j))), (((jobject) createStringLiteral(ctx, u8"Meka"_j))));
	frame[0].o = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Vegeta"_j))));
	if (temp0 == (jint(-1))) goto label_35;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Vegeta"_j))), (((jobject) createStringLiteral(ctx, u8"Tageve"_j))));
	frame[0].o = sp[0].o;
	}
label_35:;
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Kakalot"_j))));
	if (temp0 == (jint(-1))) goto label_37;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Kakalot"_j))), (((jobject) createStringLiteral(ctx, u8"Lotkaka"_j))));
	frame[0].o = sp[0].o;
	}
label_37:;
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Broly"_j))));
	if (temp0 == (jint(-1))) goto label_39;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Broly"_j))), (((jobject) createStringLiteral(ctx, u8"Lybro"_j))));
	frame[0].o = sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc r\u1ed3ng"_j))));
	if (temp0 == (jint(-1))) goto label_41;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc r\u1ed3ng"_j))), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc th\u1ea7n"_j))));
	frame[0].o = sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ng\u1ecdc r\u1ed3ng"_j))));
	if (temp0 == (jint(-1))) goto label_43;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ng\u1ecdc r\u1ed3ng"_j))), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc th\u1ea7n"_j))));
	frame[0].o = sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Radic"_j))));
	if (temp0 == (jint(-1))) goto label_45;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Radic"_j))), (((jobject) createStringLiteral(ctx, u8"Dicra"_j))));
	frame[0].o = sp[0].o;
	}
label_45:;
	{
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ra dic"_j))));
	if (temp0 == (jint(-1))) goto label_47;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ra dic"_j))), (((jobject) createStringLiteral(ctx, u8"Dicra"_j))));
	frame[0].o = sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(220);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ra \u0111\u00edc"_j))));
	if (temp0 == (jint(-1))) goto label_49;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ra \u0111\u00edc"_j))), (((jobject) createStringLiteral(ctx, u8"Dicra"_j))));
	frame[0].o = sp[0].o;
	}
label_49:;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Cadic"_j))));
	if (temp0 == (jint(-1))) goto label_51;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Cadic"_j))), (((jobject) createStringLiteral(ctx, u8"Dicca"_j))));
	frame[0].o = sp[0].o;
	}
label_51:;
	{
	LINE_NUMBER(228);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ca dic"_j))));
	if (temp0 == (jint(-1))) goto label_53;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ca dic"_j))), (((jobject) createStringLiteral(ctx, u8"Dicca"_j))));
	frame[0].o = sp[0].o;
	}
label_53:;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ca \u0111\u00edc"_j))));
	if (temp0 == (jint(-1))) goto label_55;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ca \u0111\u00edc"_j))), (((jobject) createStringLiteral(ctx, u8"Dicca"_j))));
	frame[0].o = sp[0].o;
	}
label_55:;
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Quy l\u00e3o"_j))));
	if (temp0 == (jint(-1))) goto label_57;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Quy l\u00e3o"_j))), (((jobject) createStringLiteral(ctx, u8"L\u00e3o"_j))));
	frame[0].o = sp[0].o;
	}
label_57:;
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"quy l\u00e3o"_j))));
	if (temp0 == (jint(-1))) goto label_59;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"quy l\u00e3o"_j))), (((jobject) createStringLiteral(ctx, u8"l\u00e3o"_j))));
	frame[0].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"QuyL\u00e3o"_j))));
	if (temp0 == (jint(-1))) goto label_61;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Quy L\u00e3o"_j))), (((jobject) createStringLiteral(ctx, u8"L\u00e3o"_j))));
	frame[0].o = sp[0].o;
	}
label_61:;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Santa"_j))));
	if (temp0 == (jint(-1))) goto label_63;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Santa"_j))), (((jobject) createStringLiteral(ctx, u8"Tasan"_j))));
	frame[0].o = sp[0].o;
	}
label_63:;
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"H\u1ea1t M\u00edt"_j))));
	if (temp0 == (jint(-1))) goto label_65;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"H\u1ea1t M\u00edt"_j))), (((jobject) createStringLiteral(ctx, u8"H\u1ea1t D\u1ebb"_j))));
	frame[0].o = sp[0].o;
	}
label_65:;
	{
	LINE_NUMBER(256);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"H\u1ea1t m\u00edt"_j))));
	if (temp0 == (jint(-1))) goto label_67;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"H\u1ea1t m\u00edt"_j))), (((jobject) createStringLiteral(ctx, u8"H\u1ea1t d\u1ebb"_j))));
	frame[0].o = sp[0].o;
	}
label_67:;
	{
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u00e0u b\u1ea3y b\u1ea3y"_j))));
	if (temp0 == (jint(-1))) goto label_69;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u00e0u b\u1ea3y b\u1ea3y"_j))), (((jobject) createStringLiteral(ctx, u8"T\u00e0u t\u00e0u"_j))));
	frame[0].o = sp[0].o;
	}
label_69:;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Uron"_j))));
	if (temp0 == (jint(-1))) goto label_71;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Uron"_j))), (((jobject) createStringLiteral(ctx, u8"Onru"_j))));
	frame[0].o = sp[0].o;
	}
label_71:;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"U ron"_j))));
	if (temp0 == (jint(-1))) goto label_73;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"U ron"_j))), (((jobject) createStringLiteral(ctx, u8"Onru"_j))));
	frame[0].o = sp[0].o;
	}
label_73:;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ur\u00f4n"_j))));
	if (temp0 == (jint(-1))) goto label_75;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ur\u00f4n"_j))), (((jobject) createStringLiteral(ctx, u8"Onru"_j))));
	frame[0].o = sp[0].o;
	}
label_75:;
	{
	LINE_NUMBER(276);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc R\u1ed3ng"_j))));
	if (temp0 == (jint(-1))) goto label_77;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc R\u1ed3ng"_j))), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc th\u1ea7n"_j))));
	frame[0].o = sp[0].o;
	}
label_77:;
	{
	LINE_NUMBER(280);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc r\u1ed3ng"_j))));
	if (temp0 == (jint(-1))) goto label_79;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc r\u1ed3ng"_j))), (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc th\u1ea7n"_j))));
	frame[0].o = sp[0].o;
	}
label_79:;
	{
	LINE_NUMBER(284);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Fide"_j))));
	if (temp0 == (jint(-1))) goto label_81;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Fide"_j))), (((jobject) createStringLiteral(ctx, u8"Defi"_j))));
	frame[0].o = sp[0].o;
	}
label_81:;
	{
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Vegeta"_j))));
	if (temp0 == (jint(-1))) goto label_83;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Vegeta"_j))), (((jobject) createStringLiteral(ctx, u8"Tageve"_j))));
	frame[0].o = sp[0].o;
	}
label_83:;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Moori"_j))));
	if (temp0 == (jint(-1))) goto label_85;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Moori"_j))), (((jobject) createStringLiteral(ctx, u8"Rimoo"_j))));
	frame[0].o = sp[0].o;
	}
label_85:;
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Aru"_j))));
	if (temp0 == (jint(-1))) goto label_87;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Aru"_j))), (((jobject) createStringLiteral(ctx, u8"Ura"_j))));
	frame[0].o = sp[0].o;
	}
label_87:;
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Kamejoko"_j))));
	if (temp0 == (jint(-1))) goto label_89;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Kamejoko"_j))), (((jobject) createStringLiteral(ctx, u8"Kojomeka"_j))));
	frame[0].o = sp[0].o;
	}
label_89:;
	{
	LINE_NUMBER(304);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"kamejoko"_j))));
	if (temp0 == (jint(-1))) goto label_91;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"kamejoko"_j))), (((jobject) createStringLiteral(ctx, u8"kojomeka"_j))));
	frame[0].o = sp[0].o;
	}
label_91:;
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Kame"_j))));
	if (temp0 == (jint(-1))) goto label_93;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Kame"_j))), (((jobject) createStringLiteral(ctx, u8"Meka"_j))));
	frame[0].o = sp[0].o;
	}
label_93:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"kame"_j))));
	if (temp0 == (jint(-1))) goto label_95;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"kame"_j))), (((jobject) createStringLiteral(ctx, u8"meka"_j))));
	frame[0].o = sp[0].o;
	}
label_95:;
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Masenko"_j))));
	if (temp0 == (jint(-1))) goto label_97;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Masenko"_j))), (((jobject) createStringLiteral(ctx, u8"Kosenma"_j))));
	frame[0].o = sp[0].o;
	}
label_97:;
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Th\u00e1i D\u01b0\u01a1ng H\u1ea1 San"_j))));
	if (temp0 == (jint(-1))) goto label_99;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Th\u00e1i D\u01b0\u01a1ng H\u1ea1 San"_j))), (((jobject) createStringLiteral(ctx, u8"H\u1ea1 D\u01b0\u01a1ng"_j))));
	frame[0].o = sp[0].o;
	}
label_99:;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Solar flare"_j))));
	if (temp0 == (jint(-1))) goto label_101;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Solar flare"_j))), (((jobject) createStringLiteral(ctx, u8"Solar"_j))));
	frame[0].o = sp[0].o;
	}
label_101:;
	{
	LINE_NUMBER(328);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Qu\u1ea3 c\u1ea7u k\u00eanh khi"_j))));
	if (temp0 == (jint(-1))) goto label_103;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Qu\u1ea3 c\u1ea7u k\u00eanh khi"_j))), (((jobject) createStringLiteral(ctx, u8"Qu\u1ea3 c\u1ea7u"_j))));
	frame[0].o = sp[0].o;
	}
label_103:;
	{
	LINE_NUMBER(332);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Genki-Dama"_j))));
	if (temp0 == (jint(-1))) goto label_105;
	}
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Genki-Dama"_j))), (((jobject) createStringLiteral(ctx, u8"Dama"_j))));
	frame[0].o = sp[0].o;
	}
label_105:;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Genki-Dama"_j))));
	if (temp0 == (jint(-1))) goto label_107;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Genki-Dama"_j))), (((jobject) createStringLiteral(ctx, u8"Dama"_j))));
	frame[0].o = sp[0].o;
	}
label_107:;
	{
	LINE_NUMBER(340);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Makankosappo"_j))));
	if (temp0 == (jint(-1))) goto label_109;
	}
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Makankosappo"_j))), (((jobject) createStringLiteral(ctx, u8"Oppasoknakam"_j))));
	frame[0].o = sp[0].o;
	}
label_109:;
	{
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:replace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(349);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(350);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(351);
	frame[5].i = (jint(0));
	LINE_NUMBER(353);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[6].i = temp1;
	}
label_4:;
	{
	if ((frame[4].i) == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(354);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[5].i), (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(355);
	frame[5].i = ((frame[4].i) + (frame[6].i));
	LINE_NUMBER(353);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[5].i));
	frame[4].i = temp0;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_rnd_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:rnd", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(363);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_r;
	jint temp0 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_random_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(367);
	if ((frame[0].i) != (frame[1].i)) goto label_1;
	}
	INST_ILOAD(0);
	goto label_2;
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_r;
	jint temp1 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, ((frame[1].i) - (frame[0].i)));
	jint temp2 = temp0 + temp1;
	sp[0].i = temp2;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_nro_Res_random_Am_0_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:random_Am_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(372);
	frame[1].i = (jint(0));
	}
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_2;
	{
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_r;
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[1].i = (temp0 % (frame[0].i));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_random_Am_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:random_Am", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(379);
	jint temp0 = frame[0].i;
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_r;
	jint temp1 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, ((frame[1].i) - (frame[0].i)));
	frame[0].i = (temp0 + temp1);
	LINE_NUMBER(380);
	frame[2].i = (jint(2));
	LINE_NUMBER(381);
	clinit_nro_Res(ctx);
	sp[0].o = (jobject)SF_nro_Res_r;
	jint temp2 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, (frame[2].i));
	if (temp2 != 0) goto label_3;
	}
	{
	LINE_NUMBER(382);
	frame[0].i = (-(frame[0].i));
	}
label_3:;
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_distance_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:distance", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(389);
	jint temp0 = (jint)SM_nro_Res_sqrt_int_R_int(ctx, ((((frame[0].i) - (frame[2].i)) * ((frame[0].i) - (frame[2].i))) + (((frame[1].i) - (frame[3].i)) * ((frame[1].i) - (frame[3].i)))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_getDistance_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:getDistance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(393);
	jint temp0 = (jint)SM_nro_Res_sqrt_int_R_int(ctx, (((frame[0].i) * (frame[0].i)) + ((frame[1].i) * (frame[1].i))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_sqrt_int_R_int(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:sqrt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(397);
	if ((frame[0].i) > 0) goto label_1;
	}
	{
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(400);
	frame[1].i = (((frame[0].i) + (jint(1))) / (jint(2)));
	}
label_3:;
	{
	LINE_NUMBER(404);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(405);
	frame[1].i = (((frame[1].i) / (jint(2))) + ((frame[0].i) / ((frame[1].i) * (jint(2)))));
	LINE_NUMBER(406);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[1].i)));
	if (temp0 > (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_e_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:e", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(413);
	frame[1].i = (jint(1));
	LINE_NUMBER(415);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(416);
	frame[1].i = ((frame[1].i) * (frame[0].i));
	LINE_NUMBER(415);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_nro_Res_abs_int_R_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:abs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(423);
	if ((frame[0].i) <= 0) goto label_1;
	}
	INST_ILOAD(0);
	goto label_2;
label_1:;
	INST_ILOAD(0);
	INST_INEG();
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_nro_Res_inRect_int_int_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:inRect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(427);
	if ((frame[4].i) < (frame[0].i)) goto label_1;
	}
	{
	if ((frame[4].i) > ((frame[0].i) + (frame[2].i))) goto label_1;
	}
	{
	if ((frame[5].i) < (frame[1].i)) goto label_1;
	}
	{
	if ((frame[5].i) > ((frame[1].i) + (frame[3].i))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_Res_err_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:err", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(431);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Res_outz_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:outz", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(435);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:split", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(441);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	if (temp0 < 0) goto label_2;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + temp1));
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, sp[0].o, (frame[1].o), ((frame[2].i) + (jint(1))));
	frame[4].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, ((frame[2].i) + (jint(1))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(445);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	}
label_5:;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[4].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[3].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_Res_formatNumber_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:formatNumber", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(456);
	if ((longCompare((frame[0].l), (jlong(1000000000ll)))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(457);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_billion;
	frame[2].o = sp[0].o;
	LINE_NUMBER(458);
	frame[3].l = (((frame[0].l) % (jlong(1000000000ll))) / (jlong(100000000ll)));
	LINE_NUMBER(459);
	frame[0].l = ((frame[0].l) / (jlong(1000000000ll)));
	LINE_NUMBER(460);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[0].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(461);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(462);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(464);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_9;
	}
label_1:;
	{
	LINE_NUMBER(466);
	if ((longCompare((frame[0].l), (jlong(1000000ll)))) < 0) goto label_10;
	}
	{
	LINE_NUMBER(467);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_million;
	frame[2].o = sp[0].o;
	LINE_NUMBER(468);
	frame[3].l = (((frame[0].l) % (jlong(1000000ll))) / (jlong(100000ll)));
	LINE_NUMBER(469);
	frame[0].l = ((frame[0].l) / (jlong(1000000ll)));
	LINE_NUMBER(470);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[0].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(471);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(472);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(474);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[0].l));
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_Res_formatNumber2_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:formatNumber2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(487);
	if ((longCompare((frame[0].l), (jlong(1000000000ll)))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(488);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_billion;
	frame[2].o = sp[0].o;
	LINE_NUMBER(489);
	frame[3].l = (((frame[0].l) % (jlong(1000000000ll))) / (jlong(10000000ll)));
	LINE_NUMBER(490);
	frame[0].l = ((frame[0].l) / (jlong(1000000000ll)));
	LINE_NUMBER(491);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[0].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(492);
	if ((longCompare((frame[3].l), (jlong(10ll)))) < 0) goto label_7;
	}
	{
	LINE_NUMBER(493);
	if ((longCompare(((frame[3].l) % (jlong(10ll))), (jlong(0)))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(494);
	frame[3].l = ((frame[3].l) / (jlong(10ll)));
	}
label_9:;
	{
	LINE_NUMBER(497);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(498);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(499);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(501);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_1:;
	{
	LINE_NUMBER(503);
	if ((longCompare((frame[0].l), (jlong(1000000ll)))) < 0) goto label_14;
	}
	{
	LINE_NUMBER(504);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_million;
	frame[2].o = sp[0].o;
	LINE_NUMBER(505);
	frame[3].l = (((frame[0].l) % (jlong(1000000ll))) / (jlong(10000ll)));
	LINE_NUMBER(506);
	frame[0].l = ((frame[0].l) / (jlong(1000000ll)));
	LINE_NUMBER(507);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[0].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(508);
	if ((longCompare((frame[3].l), (jlong(10ll)))) < 0) goto label_20;
	}
	{
	LINE_NUMBER(509);
	if ((longCompare(((frame[3].l) % (jlong(10ll))), (jlong(0)))) != 0) goto label_22;
	}
	{
	LINE_NUMBER(510);
	frame[3].l = ((frame[3].l) / (jlong(10ll)));
	}
label_22:;
	{
	LINE_NUMBER(513);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_20:;
	{
	LINE_NUMBER(514);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(515);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_24:;
	{
	LINE_NUMBER(517);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(519);
	if ((longCompare((frame[0].l), (jlong(10000ll)))) < 0) goto label_26;
	}
	{
	LINE_NUMBER(520);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"k"_j)));
	LINE_NUMBER(521);
	frame[3].l = (((frame[0].l) % (jlong(1000ll))) / (jlong(10ll)));
	LINE_NUMBER(522);
	frame[0].l = ((frame[0].l) / (jlong(1000ll)));
	LINE_NUMBER(523);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[0].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(524);
	if ((longCompare((frame[3].l), (jlong(10ll)))) < 0) goto label_32;
	}
	{
	LINE_NUMBER(525);
	if ((longCompare(((frame[3].l) % (jlong(10ll))), (jlong(0)))) != 0) goto label_34;
	}
	{
	LINE_NUMBER(526);
	frame[3].l = ((frame[3].l) / (jlong(10ll)));
	}
label_34:;
	{
	LINE_NUMBER(529);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_32:;
	{
	LINE_NUMBER(530);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_36;
	}
	{
	LINE_NUMBER(531);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_36:;
	{
	LINE_NUMBER(533);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_26:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[0].l));
	frame[5].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void clinit_nro_Res(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Res:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Res(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject) createArray(ctx, &class_short, (91));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(1))) = (18);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(2))) = (36);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(3))) = (54);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(4))) = (71);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(5))) = (89);
	ARRAY_ACCESS(jshort, sp[0].o, (6)) = (107);
	ARRAY_ACCESS(jshort, sp[0].o, (7)) = (125);
	ARRAY_ACCESS(jshort, sp[0].o, (8)) = (143);
	ARRAY_ACCESS(jshort, sp[0].o, (9)) = (160);
	ARRAY_ACCESS(jshort, sp[0].o, (10)) = (178);
	ARRAY_ACCESS(jshort, sp[0].o, (11)) = (195);
	ARRAY_ACCESS(jshort, sp[0].o, (12)) = (213);
	ARRAY_ACCESS(jshort, sp[0].o, (13)) = (230);
	ARRAY_ACCESS(jshort, sp[0].o, (14)) = (248);
	ARRAY_ACCESS(jshort, sp[0].o, (15)) = (265);
	ARRAY_ACCESS(jshort, sp[0].o, (16)) = (282);
	ARRAY_ACCESS(jshort, sp[0].o, (17)) = (299);
	ARRAY_ACCESS(jshort, sp[0].o, (18)) = (316);
	ARRAY_ACCESS(jshort, sp[0].o, (19)) = (333);
	ARRAY_ACCESS(jshort, sp[0].o, (20)) = (350);
	ARRAY_ACCESS(jshort, sp[0].o, (21)) = (367);
	ARRAY_ACCESS(jshort, sp[0].o, (22)) = (384);
	ARRAY_ACCESS(jshort, sp[0].o, (23)) = (400);
	ARRAY_ACCESS(jshort, sp[0].o, (24)) = (416);
	ARRAY_ACCESS(jshort, sp[0].o, (25)) = (433);
	ARRAY_ACCESS(jshort, sp[0].o, (26)) = (449);
	ARRAY_ACCESS(jshort, sp[0].o, (27)) = (465);
	ARRAY_ACCESS(jshort, sp[0].o, (28)) = (481);
	ARRAY_ACCESS(jshort, sp[0].o, (29)) = (496);
	ARRAY_ACCESS(jshort, sp[0].o, (30)) = (512);
	ARRAY_ACCESS(jshort, sp[0].o, (31)) = (527);
	ARRAY_ACCESS(jshort, sp[0].o, (32)) = (543);
	ARRAY_ACCESS(jshort, sp[0].o, (33)) = (558);
	ARRAY_ACCESS(jshort, sp[0].o, (34)) = (573);
	ARRAY_ACCESS(jshort, sp[0].o, (35)) = (587);
	ARRAY_ACCESS(jshort, sp[0].o, (36)) = (602);
	ARRAY_ACCESS(jshort, sp[0].o, (37)) = (616);
	ARRAY_ACCESS(jshort, sp[0].o, (38)) = (630);
	ARRAY_ACCESS(jshort, sp[0].o, (39)) = (644);
	ARRAY_ACCESS(jshort, sp[0].o, (40)) = (658);
	ARRAY_ACCESS(jshort, sp[0].o, (41)) = (672);
	ARRAY_ACCESS(jshort, sp[0].o, (42)) = (685);
	ARRAY_ACCESS(jshort, sp[0].o, (43)) = (698);
	ARRAY_ACCESS(jshort, sp[0].o, (44)) = (711);
	ARRAY_ACCESS(jshort, sp[0].o, (45)) = (724);
	ARRAY_ACCESS(jshort, sp[0].o, (46)) = (737);
	ARRAY_ACCESS(jshort, sp[0].o, (47)) = (749);
	ARRAY_ACCESS(jshort, sp[0].o, (48)) = (761);
	ARRAY_ACCESS(jshort, sp[0].o, (49)) = (773);
	ARRAY_ACCESS(jshort, sp[0].o, (50)) = (784);
	ARRAY_ACCESS(jshort, sp[0].o, (51)) = (796);
	ARRAY_ACCESS(jshort, sp[0].o, (52)) = (807);
	ARRAY_ACCESS(jshort, sp[0].o, (53)) = (818);
	ARRAY_ACCESS(jshort, sp[0].o, (54)) = (828);
	ARRAY_ACCESS(jshort, sp[0].o, (55)) = (839);
	ARRAY_ACCESS(jshort, sp[0].o, (56)) = (849);
	ARRAY_ACCESS(jshort, sp[0].o, (57)) = (859);
	ARRAY_ACCESS(jshort, sp[0].o, (58)) = (868);
	ARRAY_ACCESS(jshort, sp[0].o, (59)) = (878);
	ARRAY_ACCESS(jshort, sp[0].o, (60)) = (887);
	ARRAY_ACCESS(jshort, sp[0].o, (61)) = (896);
	ARRAY_ACCESS(jshort, sp[0].o, (62)) = (904);
	ARRAY_ACCESS(jshort, sp[0].o, (63)) = (912);
	ARRAY_ACCESS(jshort, sp[0].o, (64)) = (920);
	ARRAY_ACCESS(jshort, sp[0].o, (65)) = (928);
	ARRAY_ACCESS(jshort, sp[0].o, (66)) = (935);
	ARRAY_ACCESS(jshort, sp[0].o, (67)) = (943);
	ARRAY_ACCESS(jshort, sp[0].o, (68)) = (949);
	ARRAY_ACCESS(jshort, sp[0].o, (69)) = (956);
	ARRAY_ACCESS(jshort, sp[0].o, (70)) = (962);
	ARRAY_ACCESS(jshort, sp[0].o, (71)) = (968);
	ARRAY_ACCESS(jshort, sp[0].o, (72)) = (974);
	ARRAY_ACCESS(jshort, sp[0].o, (73)) = (979);
	ARRAY_ACCESS(jshort, sp[0].o, (74)) = (984);
	ARRAY_ACCESS(jshort, sp[0].o, (75)) = (989);
	ARRAY_ACCESS(jshort, sp[0].o, (76)) = (994);
	ARRAY_ACCESS(jshort, sp[0].o, (77)) = (998);
	ARRAY_ACCESS(jshort, sp[0].o, (78)) = (1002);
	ARRAY_ACCESS(jshort, sp[0].o, (79)) = (1005);
	ARRAY_ACCESS(jshort, sp[0].o, (80)) = (1008);
	ARRAY_ACCESS(jshort, sp[0].o, (81)) = (1011);
	ARRAY_ACCESS(jshort, sp[0].o, (82)) = (1014);
	ARRAY_ACCESS(jshort, sp[0].o, (83)) = (1016);
	ARRAY_ACCESS(jshort, sp[0].o, (84)) = (1018);
	ARRAY_ACCESS(jshort, sp[0].o, (85)) = (1020);
	ARRAY_ACCESS(jshort, sp[0].o, (86)) = (1022);
	ARRAY_ACCESS(jshort, sp[0].o, (87)) = (1023);
	ARRAY_ACCESS(jshort, sp[0].o, (88)) = (1023);
	ARRAY_ACCESS(jshort, sp[0].o, (89)) = (1024);
	ARRAY_ACCESS(jshort, sp[0].o, (90)) = (1024);
	clinit_nro_Res(ctx);
	SF_nro_Res_sinz = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"<color=#ff0000ff>[  LOG_CAT  ]</color>"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"<color=#ff0000ff>[LOG_SESSION]</color>"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"<color=#ffff00ff>[LOG_SESSION]</color>"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"<color=#ff0000ff>[LOG_MOBILE ]</color>"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(19);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	clinit_nro_Res(ctx);
	SF_nro_Res_r = sp[0].o;
	LINE_NUMBER(20);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Res[] {
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
	{ "sinz", getArrayClass(&class_short, 1), (intptr_t) &SF_nro_Res_sinz, "[S", 10 },
	{ "cosz", getArrayClass(&class_short, 1), (intptr_t) &SF_nro_Res_cosz, "[S", 10 },
	{ "tanz", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_Res_tanz, "[I", 10 },
	{ "r", &class_java_util_Random, (intptr_t) &SF_nro_Res_r, "Ljava/util/Random;", 9 },
	{ "isIcon", &class_boolean, (intptr_t) &SF_nro_Res_isIcon, "Z", 9 },
	{ "isBig", &class_boolean, (intptr_t) &SF_nro_Res_isBig, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Res, 0, "()V", 1 },
	{ "init", (intptr_t) SM_nro_Res_init, 0, "()V", 9 },
	{ "atan", (intptr_t) SM_nro_Res_atan_int_R_int, 0, "(I)I", 25 },
	{ "cos", (intptr_t) SM_nro_Res_cos_int_R_int, 0, "(I)I", 25 },
	{ "angle", (intptr_t) SM_nro_Res_angle_int_int_R_int, 0, "(II)I", 25 },
	{ "fixangle", (intptr_t) SM_nro_Res_fixangle_int_R_int, 0, "(I)I", 25 },
	{ "paintOnScreenDebug", (intptr_t) SM_nro_Res_paintOnScreenDebug_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "updateOnScreenDebug", (intptr_t) SM_nro_Res_updateOnScreenDebug, 0, "()V", 9 },
	{ "changeString", (intptr_t) SM_nro_Res_changeString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "replace", (intptr_t) SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "rnd", (intptr_t) SM_nro_Res_rnd_int_R_int, 0, "(I)I", 9 },
	{ "random", (intptr_t) SM_nro_Res_random_int_int_R_int, 0, "(II)I", 9 },
	{ "random_Am_0", (intptr_t) SM_nro_Res_random_Am_0_int_R_int, 0, "(I)I", 9 },
	{ "random_Am", (intptr_t) SM_nro_Res_random_Am_int_int_R_int, 0, "(II)I", 9 },
	{ "distance", (intptr_t) SM_nro_Res_distance_int_int_int_int_R_int, 0, "(IIII)I", 9 },
	{ "getDistance", (intptr_t) SM_nro_Res_getDistance_int_int_R_int, 0, "(II)I", 9 },
	{ "sqrt", (intptr_t) SM_nro_Res_sqrt_int_R_int, 0, "(I)I", 9 },
	{ "e", (intptr_t) SM_nro_Res_e_int_int_R_int, 0, "(II)I", 9 },
	{ "abs", (intptr_t) SM_nro_Res_abs_int_R_int, 0, "(I)I", 9 },
	{ "inRect", (intptr_t) SM_nro_Res_inRect_int_int_int_int_int_int_R_boolean, 0, "(IIIIII)Z", 9 },
	{ "err", (intptr_t) SM_nro_Res_err_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "outz", (intptr_t) SM_nro_Res_outz_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "split", (intptr_t) SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;I)[Ljava/lang/String;", 9 },
	{ "formatNumber", (intptr_t) SM_nro_Res_formatNumber_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 9 },
	{ "formatNumber2", (intptr_t) SM_nro_Res_formatNumber2_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_Res, 0, "()V", 8 },
};

Class class_nro_Res{
		.nativeName = (intptr_t) "nro/Res",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Res),
		.classVtable = (intptr_t) vtable_nro_Res,
		.staticInitializer = (intptr_t) clinit_nro_Res,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Res,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Res = registerClass(&class_nro_Res);

}

