#include "nro/Effect_End.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/MyVector.h"
#include "nro/FrameImage.h"
#include "nro/Res.h"
#include "nro/Line.h"
#include "nro/Mob.h"
#include "nro/Effect_End.h"
#include "nro/Point.h"
#include "nro/Char.h"
#include "java/lang/Throwable.h"
#include "lib/mSystem.h"
#include "nro/TileMap.h"

extern "C" {

jobject SF_nro_Effect_End_arrInfoEff;
jobject SF_nro_Effect_End_colorStar;

void mark_nro_Effect_End(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Effect_End_arrInfoEff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect_End_arrInfoEff)->clazz)->markFunction)((jobject) SF_nro_Effect_End_arrInfoEff, mark, depth + 1);
		if (SF_nro_Effect_End_colorStar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect_End_colorStar)->clazz)->markFunction)((jobject) SF_nro_Effect_End_colorStar, mark, depth + 1);
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
	auto self = (nro_Effect_End *) object;
	if (self->F_VecEffEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_VecEffEnd)->clazz)->markFunction)((jobject) self->F_VecEffEnd, mark, depth + 1);
	if (self->F_fraImgEff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraImgEff)->clazz)->markFunction)((jobject) self->F_fraImgEff, mark, depth + 1);
	if (self->F_mpaintone_Arrow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mpaintone_Arrow)->clazz)->markFunction)((jobject) self->F_mpaintone_Arrow, mark, depth + 1);
	if (self->F_mImageArrow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mImageArrow)->clazz)->markFunction)((jobject) self->F_mImageArrow, mark, depth + 1);
	if (self->F_charUse)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charUse)->clazz)->markFunction)((jobject) self->F_charUse, mark, depth + 1);
	if (self->F_listObj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listObj)->clazz)->markFunction)((jobject) self->F_listObj, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_colorpaint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorpaint)->clazz)->markFunction)((jobject) self->F_colorpaint, mark, depth + 1);
	if (self->F_S)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_S)->clazz)->markFunction)((jobject) self->F_S, mark, depth + 1);
	if (self->F_T)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_T)->clazz)->markFunction)((jobject) self->F_T, mark, depth + 1);
	if (self->F_U)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_U)->clazz)->markFunction)((jobject) self->F_U, mark, depth + 1);
	if (self->F_mXoayArrow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mXoayArrow)->clazz)->markFunction)((jobject) self->F_mXoayArrow, mark, depth + 1);
	if (self->F_fra_skill)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fra_skill)->clazz)->markFunction)((jobject) self->F_fra_skill, mark, depth + 1);
}

jobject SM_nro_Effect_End_getImage_int_R_javax_microedition_lcdui_Image(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:getImage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect_End(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(65);
	if ((frame[0].i) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(68);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/e/e_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(69);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(74);
	goto label_8;
label_2:;
	LINE_NUMBER(73);
	INST_ASTORE(3);
label_8:;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void init_nro_Effect_End_int_int_int_nro_Char_nro_Point_int_short_short(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3, jobject param4, jint param5, jshort param6, jshort param7) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect_End(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(80);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"EffectEnd VecEffEnd"_j))));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_VecEffEnd = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (10));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (10));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mImageArrow = (jref) sp[1].o;
	LINE_NUMBER(14);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typePaint = (jint(0));
	LINE_NUMBER(15);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect = (jint(0));
	LINE_NUMBER(16);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub = (jint(0));
	LINE_NUMBER(17);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_range = (jint(0));
	LINE_NUMBER(81);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (22);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (20);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (18);
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (14);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (13);
	frame[9].o = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(2));
	frame[9].o = sp[0].o;
	LINE_NUMBER(83);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(2));
	frame[9].o = sp[0].o;
	LINE_NUMBER(84);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_indexColorStar = (jint(0));
	LINE_NUMBER(85);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f = (jint(0));
	LINE_NUMBER(86);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax = (jint(0));
	LINE_NUMBER(87);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect = (frame[1].i);
	LINE_NUMBER(88);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub = (frame[2].i);
	LINE_NUMBER(89);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typePaint = (frame[3].i);
	LINE_NUMBER(90);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse = (jref) (frame[4].o);
	LINE_NUMBER(91);
	jint temp0 = (jint)((func_nro_Char_containsCaiTrang_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Char_containsCaiTrang_int_R_boolean])(ctx, (frame[4].o), (1265));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(93);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) == (21)) goto label_21;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) == (22)) goto label_21;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) == (23)) goto label_21;
	}
	{
	LINE_NUMBER(94);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) == (18)) goto label_23;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) == (19)) goto label_23;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) == (20)) goto label_23;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	frame[10].o = sp[0].o;
	LINE_NUMBER(96);
	sp[0].o = frame[10].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	jint temp1 = 15;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 + (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir)));
	goto label_19;
	}
label_23:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	frame[10].o = sp[0].o;
	LINE_NUMBER(99);
	sp[0].o = frame[10].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	jint temp1 = -15;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 + (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir)));
	goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	frame[10].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = frame[10].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	jint temp1 = 10;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 + (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir)));
	}
label_19:;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy);
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_dir = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir);
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(-1))) goto label_31;
	}
	INST_ICONST(2);
	goto label_32;
label_31:;
	INST_ICONST(0);
label_32:;
	{
	sp -= 2;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_dir_nguoc = sp[1].i;
	LINE_NUMBER(111);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[5].o);
	LINE_NUMBER(112);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_levelPaint = (frame[6].i);
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(114);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove = (frame[7].i);
	LINE_NUMBER(115);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_range = (frame[8].i);
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp1 = jint(0);
	((nro_Effect_End *) NULL_CHECK(sp[1].o))->F_isAddSub = temp1;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_isRemove = temp1;
	LINE_NUMBER(117);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame = (jint(4));
	LINE_NUMBER(118);
	M_nro_Effect_End_get_Img_Skill(ctx, (frame[0].o));
	LINE_NUMBER(119);
	M_nro_Effect_End_create_Effect(ctx, (frame[0].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Effect_End_int_int_int_int_int_int_int_short_Array1_nro_Point(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jshort param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect_End(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(122);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"EffectEnd VecEffEnd"_j))));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_VecEffEnd = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (10));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (10));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mImageArrow = (jref) sp[1].o;
	LINE_NUMBER(14);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typePaint = (jint(0));
	LINE_NUMBER(15);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect = (jint(0));
	LINE_NUMBER(16);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub = (jint(0));
	LINE_NUMBER(17);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_range = (jint(0));
	LINE_NUMBER(123);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (22);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (20);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (18);
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (14);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (13);
	frame[10].o = sp[0].o;
	LINE_NUMBER(124);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(2));
	frame[10].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(2));
	frame[10].o = sp[0].o;
	LINE_NUMBER(126);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_indexColorStar = (jint(0));
	LINE_NUMBER(127);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f = (jint(0));
	LINE_NUMBER(128);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax = (jint(0));
	LINE_NUMBER(129);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect = (frame[1].i);
	LINE_NUMBER(130);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub = (frame[2].i);
	LINE_NUMBER(131);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typePaint = (frame[3].i);
	LINE_NUMBER(132);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x = (frame[4].i);
	LINE_NUMBER(133);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].i);
	LINE_NUMBER(134);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_levelPaint = (frame[6].i);
	LINE_NUMBER(135);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir = (frame[7].i);
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[7].i) != (jint(-1))) goto label_22;
	}
	INST_ICONST(2);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 2;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_dir_nguoc = sp[1].i;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(138);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove = (frame[8].i);
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp1 = jint(0);
	((nro_Effect_End *) NULL_CHECK(sp[1].o))->F_isAddSub = temp1;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_isRemove = temp1;
	LINE_NUMBER(140);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame = (jint(4));
	LINE_NUMBER(141);
	if ((frame[9].o) == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_Point, (((jarray) nullCheck(ctx, (frame[9].o)))->length));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_listObj = (jref) sp[1].o;
	LINE_NUMBER(144);
	frame[1].i = (jint(0));
	}
label_32:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_29;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[1].i)));
	LINE_NUMBER(144);
	INST_IINC(1, 1);
	goto label_32;
	}
label_29:;
	{
	LINE_NUMBER(149);
	M_nro_Effect_End_get_Img_Skill(ctx, (frame[0].o));
	LINE_NUMBER(150);
	M_nro_Effect_End_create_Effect(ctx, (frame[0].o));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Effect_End_create_Effect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:create_Effect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[10]{};

	frame[0].o = self;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(155);
	frame[1].i = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(156);
	frame[2].i = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (jint(3)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(162);
	goto label_36;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(160);
	frame[3].o = sp[0].o;
	LINE_NUMBER(161);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ERR setSoundSkill_END: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_toString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_36:;
	{
	LINE_NUMBER(164);
	switch(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect)) {
		case 0: goto label_38;
		case 1: goto label_38;
		case 2: goto label_38;
		case 3: { popExceptionFrames(frameRef, 1); goto label_8; }
		case 4: { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_16; } // goto label_15
		case 5: { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_16; } // goto label_15
		case 6: { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_16; } // goto label_15
		case 7: { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_16; } // goto label_15
		case 8: { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_16; } // goto label_15
		case 9: { popExceptionFrames(frameRef, 1); goto label_11; }
		case 10: { popExceptionFrames(frameRef, 1); goto label_14; }
		case 11: { popExceptionFrames(frameRef, 1); goto label_14; }
		case 12: { popExceptionFrames(frameRef, 1); bypasses[6] = true; goto label_16; } // goto label_15
		case 13: { popExceptionFrames(frameRef, 1); bypasses[7] = true; goto label_16; } // goto label_15
		case 14: { popExceptionFrames(frameRef, 1); bypasses[8] = true; goto label_16; } // goto label_15
		case 15: { popExceptionFrames(frameRef, 1); bypasses[9] = true; goto label_16; } // goto label_15
		case 16: { popExceptionFrames(frameRef, 1); goto label_17; }
		case 17: { popExceptionFrames(frameRef, 1); goto label_17; }
		case 18: { popExceptionFrames(frameRef, 1); goto label_20; }
		case 19: { popExceptionFrames(frameRef, 1); goto label_20; }
		case 20: { popExceptionFrames(frameRef, 1); goto label_20; }
		case 21: { popExceptionFrames(frameRef, 1); goto label_23; }
		case 22: { popExceptionFrames(frameRef, 1); goto label_23; }
		case 23: { popExceptionFrames(frameRef, 1); goto label_23; }
		case 24: { popExceptionFrames(frameRef, 1); goto label_26; }
		case 25: { popExceptionFrames(frameRef, 1); goto label_29; }
		case 26: { popExceptionFrames(frameRef, 1); goto label_32; }
		default: { bypasses[0] = true; goto label_16; } // goto label_15
	}
	}
label_38:;
	{
	LINE_NUMBER(168);
	frame[1].i = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect);
	LINE_NUMBER(169);
	switch((frame[1].i)) {
		case 0: goto label_40;
		case 1: goto label_41;
		case 2: goto label_42;
		default: goto label_43;
	}
	}
label_40:;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_nro_FrameImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_int(ctx, sp[1].o, (jint(4)));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fraImgEff = (jref) sp[1].o;
	LINE_NUMBER(172);
	goto label_43;
	}
label_41:;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	clinit_nro_FrameImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_int(ctx, sp[1].o, (jint(5)));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fraImgEff = (jref) sp[1].o;
	LINE_NUMBER(175);
	goto label_43;
	}
label_42:;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	clinit_nro_FrameImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_int(ctx, sp[1].o, (6));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fraImgEff = (jref) sp[1].o;
	}
label_43:;
	{
	LINE_NUMBER(180);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fRemove = (100);
	LINE_NUMBER(181);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000 = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(3))) + (10));
	LINE_NUMBER(182);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx = (10);
	LINE_NUMBER(183);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000 = (jint(0));
	LINE_NUMBER(184);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isAddSub = (jint(0));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(187);
	M_nro_Effect_End_set_FireWork(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(190);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_indexColorStar = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub);
	LINE_NUMBER(191);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy = (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x) * (1000));
	LINE_NUMBER(192);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000 = (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y) * (1000));
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(4)), (6));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fRemove = temp0;
	LINE_NUMBER(194);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000 = (jint(5));
	LINE_NUMBER(195);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_xline = (10);
	LINE_NUMBER(196);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_yline = (20);
	LINE_NUMBER(197);
	M_nro_Effect_End_a_int_int_int_int(ctx, (frame[0].o), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_xline), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_yline), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_15; }
	if (bypasses[1]) { bypasses[1] = false; goto label_15; }
	if (bypasses[2]) { bypasses[2] = false; goto label_15; }
	if (bypasses[3]) { bypasses[3] = false; goto label_15; }
	if (bypasses[4]) { bypasses[4] = false; goto label_15; }
	if (bypasses[5]) { bypasses[5] = false; goto label_15; }
	if (bypasses[6]) { bypasses[6] = false; goto label_15; }
	if (bypasses[7]) { bypasses[7] = false; goto label_15; }
	if (bypasses[8]) { bypasses[8] = false; goto label_15; }
	if (bypasses[9]) { bypasses[9] = false; goto label_15; }
	{
	LINE_NUMBER(201);
	M_nro_Effect_End_set_End_Rock(ctx, (frame[0].o));
	}
label_15:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(215);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (17)) goto label_18;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir) != 0) goto label_58;
	}
	INST_ICONST(0);
	goto label_59;
label_58:;
	{
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	jint temp0 = -((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_frameWidth);
	sp[0].i = temp0;
	sp += 1;
	}
label_59:;
	{
	sp -= 3;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = (sp[1].i + sp[2].i);
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = (temp0 - (((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_frameHeight) / (jint(2))));
	}
label_18:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(224);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow = (jref) (jobject(nullptr));
	LINE_NUMBER(225);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame = (jint(3));
	LINE_NUMBER(226);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (18)) goto label_21;
	}
	{
	LINE_NUMBER(227);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != 0) goto label_64;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (9));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(2));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	LINE_NUMBER(229);
	{ popExceptionFrames(frameRef, 1); goto label_67; }
	}
label_64:;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (12));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (6);
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (6);
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (6);
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	}
label_21:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();
label_23:;
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(240);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (21)) goto label_69;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	jint temp1 = jint(3);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = (temp0 - (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir)));
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy);
	LINE_NUMBER(243);
	{ popExceptionFrames(frameRef, 1); goto label_67; }
	}
label_69:;
	{
	LINE_NUMBER(246);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (22)) goto label_73;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	jint temp1 = 20;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir)));
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (jint(4)));
	LINE_NUMBER(249);
	{ popExceptionFrames(frameRef, 1); goto label_67; }
	}
label_73:;
	{
	LINE_NUMBER(252);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (23)) goto label_77;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (50));
	LINE_NUMBER(255);
	{ popExceptionFrames(frameRef, 1); goto label_67; }
	}
label_77:;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy);
	}
label_24:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
label_28: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_frameWidth);
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_frameHeight);
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Point *) NULL_CHECK(sp[1].o))->F_x)));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vy1000 = temp1;
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (6));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(1));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	LINE_NUMBER(268);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isAddSub = (jint(0));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(269);
	popStackFrame(ctx);
	INST_RETURN();
label_29:;
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(271);
	M_nro_Effect_End_set_Skill_Destroy(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();
label_32:;
label_34: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (9));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(2));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	LINE_NUMBER(275);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isAddSub = (jint(0));
	LINE_NUMBER(276);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fMove = (10);
	LINE_NUMBER(277);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(278);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000 = (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y) + (12));
	LINE_NUMBER(279);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_toX = (25);
	LINE_NUMBER(280);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000 = (19);
	LINE_NUMBER(281);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != (jint(1))) goto label_93;
	}
	{
	LINE_NUMBER(282);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000 = (21);
	goto label_95;
	}
label_93:;
	{
	LINE_NUMBER(283);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != (jint(2))) goto label_95;
	}
	{
	LINE_NUMBER(284);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000 = (31);
	}
label_95:;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_h = ((((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1))))))->F_frameHeight) + (50)) - ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000));
	LINE_NUMBER(288);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx = (jint(1));
	LINE_NUMBER(289);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y1000 = (jint(1));
	LINE_NUMBER(290);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y = (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000) - ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_h));
	LINE_NUMBER(291);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_goc_Arc = (90);
	LINE_NUMBER(292);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000 = (jint(1));
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = 25;
	((nro_Effect_End *) NULL_CHECK(sp[1].o))->F_gocT_Arc = temp0;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va = temp0;
	LINE_NUMBER(294);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_Q = (jint(1));
	LINE_NUMBER(295);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	if (sp[0].o == nullptr) goto label_105;
	}
	{
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_105;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_Q = (((jarray) nullCheck(ctx, sp[1].o))->length);
	}
label_105:;
	{
	LINE_NUMBER(299);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_P = ((360) / ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_Q));
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_Q));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_colorpaint = (jref) sp[1].o;
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_Q));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_S = (jref) sp[1].o;
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_Q));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_T = (jref) sp[1].o;
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_Q));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_U = (jref) sp[1].o;
	LINE_NUMBER(304);
	SM_nro_GameScr_addEffectEnd_int_int_int_int_int_int_int_short_Array1_nro_Point(ctx, (16), (jint(0)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typePaint), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000), (jint(1)), (jint(0)), (jint(-1)), (checkCast(ctx, getArrayClass(&class_nro_Point, 1), (jobject(nullptr)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	INST_RETURN();
label_67:;
	LINE_NUMBER(310);
	goto label_112;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(307);
	frame[1].o = sp[0].o;
	LINE_NUMBER(308);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ERR create_Effect: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(309);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_112:;
	LINE_NUMBER(312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_upd_End_Rock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:upd_End_Rock", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[16]{};

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_f = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_f) + (jint(1)));
	LINE_NUMBER(321);
	switch(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect)) {
		case 0: goto label_44;
		case 1: goto label_44;
		case 2: goto label_44;
		case 3: { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_45
		case 4: { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_12; } // goto label_11
		case 5: { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_12; } // goto label_11
		case 6: { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_12; } // goto label_11
		case 7: { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_12; } // goto label_11
		case 8: { popExceptionFrames(frameRef, 1); bypasses[6] = true; goto label_12; } // goto label_11
		case 9: { popExceptionFrames(frameRef, 1); goto label_7; }
		case 10: { popExceptionFrames(frameRef, 1); goto label_10; }
		case 11: { popExceptionFrames(frameRef, 1); goto label_10; }
		case 12: { popExceptionFrames(frameRef, 1); bypasses[7] = true; goto label_12; } // goto label_11
		case 13: { popExceptionFrames(frameRef, 1); bypasses[8] = true; goto label_12; } // goto label_11
		case 14: { popExceptionFrames(frameRef, 1); bypasses[9] = true; goto label_12; } // goto label_11
		case 15: { popExceptionFrames(frameRef, 1); bypasses[10] = true; goto label_12; } // goto label_11
		case 16: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 17: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 18: { popExceptionFrames(frameRef, 1); goto label_16; }
		case 19: { popExceptionFrames(frameRef, 1); goto label_16; }
		case 20: { popExceptionFrames(frameRef, 1); goto label_16; }
		case 21: { popExceptionFrames(frameRef, 1); goto label_19; }
		case 22: { popExceptionFrames(frameRef, 1); goto label_19; }
		case 23: { popExceptionFrames(frameRef, 1); goto label_19; }
		case 24: { popExceptionFrames(frameRef, 1); goto label_22; }
		case 25: { popExceptionFrames(frameRef, 1); goto label_25; }
		case 26: { popExceptionFrames(frameRef, 1); goto label_28; }
		default: { bypasses[1] = true; goto label_12; } // goto label_11
	}
	}
label_44:;
	{
	LINE_NUMBER(325);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw);
	LINE_NUMBER(326);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000);
	LINE_NUMBER(327);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) <= ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fRemove)) goto label_48;
	}
	{
	LINE_NUMBER(328);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_48:;
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vx = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vx) + (jint(1)));
	LINE_NUMBER(332);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx) <= (15)) goto label_51;
	}
	{
	LINE_NUMBER(333);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx = (15);
	}
label_51:;
	{
	LINE_NUMBER(336);
	if ((((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000) + ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx)) < ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(337);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000 = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000);
	LINE_NUMBER(338);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isAddSub) != 0) goto label_1;
	}
	{
	LINE_NUMBER(339);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isAddSub = (jint(1));
	LINE_NUMBER(340);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(341);
	SM_nro_GameScr_addEffectEnd_int_int_int_int_int_int_int_short_Array1_nro_Point(ctx, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub), (jint(0)), (jint(0)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_levelPaint), (jint(0)), (jint(-1)), (checkCast(ctx, getArrayClass(&class_nro_Point, 1), (jobject(nullptr)))));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(345);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_45; }
	{
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x1000 = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x1000) + ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx));
	LINE_NUMBER(349);
	{ popExceptionFrames(frameRef, 1); goto label_59; }
	}
label_45:;
	{
	LINE_NUMBER(351);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(353);
	frame[2].i = (jint(0));
	}
label_61:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_62;
	}
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Point, sp[0].o);
	frame[4].o = sp[0].o;
	((func_nro_Point_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Point_update])(ctx, sp[0].o);
	LINE_NUMBER(355);
	jint temp0 = ((jint)((nro_Point *) NULL_CHECK((frame[4].o)))->F_color) - ((jint)((nro_Point *) NULL_CHECK((frame[4].o)))->F_limitY);
	sp[0].o = (jobject)((nro_Point *) NULL_CHECK((frame[4].o)))->F_fraImgEff;
	if (temp0 <= ((((jint)((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_nFrame) * (jint(3))) - (jint(1)))) goto label_66;
	}
	{
	LINE_NUMBER(356);
	((nro_Point *) NULL_CHECK((frame[4].o)))->F_color = (jint(0));
	LINE_NUMBER(357);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_typeSub) != 0) goto label_66;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (10));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_limitY = temp0;
	LINE_NUMBER(359);
	frame[5].i = (jint(1));
	LINE_NUMBER(360);
	if (((frame[2].i) % (jint(2))) != 0) goto label_72;
	}
	{
	LINE_NUMBER(361);
	frame[5].i = (jint(-1));
	}
label_72:;
	{
	LINE_NUMBER(364);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_nro_Effect_End(ctx);
	sp[1].o = (jobject)SF_nro_Effect_End_arrInfoEff;
	jint temp1 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))), (jint(0)))) / (jint(2))));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp1 * (frame[5].i)));
	LINE_NUMBER(365);
	sp[0].o = frame[4].o;
	jint temp2 = (jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_nro_Effect_End(ctx);
	sp[1].o = (jobject)SF_nro_Effect_End_arrInfoEff;
	jint temp3 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))), (jint(1)))) / (jint(2))));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_y = (temp2 - temp3);
	}
label_66:;
	{
	LINE_NUMBER(353);
	INST_IINC(2, 1);
	goto label_61;
	}
label_62:;
	{
	LINE_NUMBER(370);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_f) < ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_fRemove)) goto label_5;
	}
	{
	LINE_NUMBER(371);
	((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_isRemove = (jint(1));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(376);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(378);
	frame[2].i = (jint(0));
	}
label_77:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_78;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Line, sp[0].o);
	frame[5].o = sp[0].o;
	frame[6].o = sp[0].o;
	frame[7].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = frame[7].o;
	((nro_Line *) NULL_CHECK(sp[0].o))->F_x0 = (((jint)((nro_Line *) NULL_CHECK(sp[0].o))->F_x0) + ((jint)((nro_Line *) NULL_CHECK((frame[6].o)))->F_vx));
	LINE_NUMBER(383);
	sp[0].o = frame[6].o;
	((nro_Line *) NULL_CHECK(sp[0].o))->F_x1 = (((jint)((nro_Line *) NULL_CHECK(sp[0].o))->F_x1) + ((jint)((nro_Line *) NULL_CHECK((frame[6].o)))->F_vx));
	LINE_NUMBER(384);
	sp[0].o = frame[6].o;
	((nro_Line *) NULL_CHECK(sp[0].o))->F_y0 = (((jint)((nro_Line *) NULL_CHECK(sp[0].o))->F_y0) + ((jint)((nro_Line *) NULL_CHECK((frame[6].o)))->F_vy));
	LINE_NUMBER(385);
	sp[0].o = frame[6].o;
	((nro_Line *) NULL_CHECK(sp[0].o))->F_y1 = (((jint)((nro_Line *) NULL_CHECK(sp[0].o))->F_y1) + ((jint)((nro_Line *) NULL_CHECK((frame[6].o)))->F_vy));
	LINE_NUMBER(386);
	sp[0].o = frame[6].o;
	((nro_Line *) NULL_CHECK(sp[0].o))->F_g = (((jint)((nro_Line *) NULL_CHECK(sp[0].o))->F_g) + (jint(1)));
	LINE_NUMBER(387);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_f) < ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_fRemove)) goto label_88;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(389);
	INST_IINC(2, -1);
	}
label_88:;
	{
	LINE_NUMBER(378);
	INST_IINC(2, 1);
	goto label_77;
	}
label_78:;
	{
	LINE_NUMBER(393);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_f) < ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_fRemove)) goto label_8;
	}
	{
	LINE_NUMBER(394);
	if ((longCompare(((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) - ((jlong)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_time)), (jlong(((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_timeRemove))))) < 0) goto label_92;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(396);
	((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_isRemove = (jint(1));
	LINE_NUMBER(397);
	{ popExceptionFrames(frameRef, 1); goto label_59; }
	}
label_92:;
	{
	LINE_NUMBER(400);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(4)), (6));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fRemove = temp0;
	LINE_NUMBER(401);
	((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_f = (jint(0));
	LINE_NUMBER(402);
	M_nro_Effect_End_a_int_int_int_int(ctx, (frame[1].o), ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_vy1000), ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_xline), ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_yline), (jint(0)));
	}
label_8:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	if (bypasses[2]) { bypasses[2] = false; goto label_11; }
	if (bypasses[3]) { bypasses[3] = false; goto label_11; }
	if (bypasses[4]) { bypasses[4] = false; goto label_11; }
	if (bypasses[5]) { bypasses[5] = false; goto label_11; }
	if (bypasses[6]) { bypasses[6] = false; goto label_11; }
	if (bypasses[7]) { bypasses[7] = false; goto label_11; }
	if (bypasses[8]) { bypasses[8] = false; goto label_11; }
	if (bypasses[9]) { bypasses[9] = false; goto label_11; }
	if (bypasses[10]) { bypasses[10] = false; goto label_11; }
	{
	LINE_NUMBER(408);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(410);
	frame[2].i = (jint(0));
	}
label_99:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_100;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Point, sp[0].o);
	frame[4].o = sp[0].o;
	((func_nro_Point_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Point_update])(ctx, sp[0].o);
	LINE_NUMBER(412);
	if (((jint)((nro_Point *) NULL_CHECK((frame[4].o)))->F_y) >= ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_dy_throw)) goto label_104;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(414);
	INST_IINC(2, -1);
	}
label_104:;
	{
	LINE_NUMBER(410);
	INST_IINC(2, 1);
	goto label_99;
	}
label_100:;
	{
	LINE_NUMBER(418);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_f) < ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_fRemove)) goto label_11;
	}
	{
	LINE_NUMBER(419);
	((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_isRemove = (jint(1));
	}
label_11:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(431);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(434);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove) <= 0) goto label_108;
	}
	{
	LINE_NUMBER(435);
	if ((longCompare(((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) - ((jlong)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_time)), (jlong(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove))))) < 0) goto label_14;
	}
	{
	LINE_NUMBER(436);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	LINE_NUMBER(437);
	{ popExceptionFrames(frameRef, 1); goto label_59; }
	}
label_108:;
	{
	LINE_NUMBER(439);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (temp0 < (((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_nFrame) * ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame))) goto label_14;
	}
	{
	LINE_NUMBER(440);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_14:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(443);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	if (sp[0].o == nullptr) goto label_113;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) + (13));
	}
label_113:;
	{
	LINE_NUMBER(452);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove) <= 0) goto label_116;
	}
	{
	LINE_NUMBER(453);
	if ((longCompare(((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) - ((jlong)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_time)), (jlong(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove))))) < 0) goto label_17;
	}
	{
	LINE_NUMBER(454);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	LINE_NUMBER(455);
	{ popExceptionFrames(frameRef, 1); goto label_59; }
	}
label_116:;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	if (sp[0].o == nullptr) goto label_120;
	}
	{
	LINE_NUMBER(458);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_17;
	}
	{
	LINE_NUMBER(459);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	LINE_NUMBER(460);
	{ popExceptionFrames(frameRef, 1); goto label_59; }
	}
label_120:;
	{
	LINE_NUMBER(462);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (temp0 < (((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_nFrame) * ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame))) goto label_17;
	}
	{
	LINE_NUMBER(463);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_17:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(466);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	if (sp[0].o == nullptr) goto label_125;
	}
	{
	LINE_NUMBER(471);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (21)) goto label_127;
	}
	{
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	jint temp1 = jint(3);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = (temp0 - (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir)));
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy);
	goto label_125;
	}
label_127:;
	{
	LINE_NUMBER(474);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (22)) goto label_130;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	jint temp1 = 20;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir)));
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (jint(4)));
	goto label_125;
	}
label_130:;
	{
	LINE_NUMBER(477);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (23)) goto label_133;
	}
	{
	LINE_NUMBER(478);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(479);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (50));
	goto label_125;
	}
label_133:;
	{
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy);
	}
label_125:;
	{
	LINE_NUMBER(486);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove) <= 0) goto label_137;
	}
	{
	LINE_NUMBER(487);
	if ((longCompare(((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) - ((jlong)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_time)), (jlong(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove))))) < 0) goto label_20;
	}
	{
	LINE_NUMBER(488);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	LINE_NUMBER(489);
	{ popExceptionFrames(frameRef, 1); goto label_59; }
	}
label_137:;
	{
	LINE_NUMBER(491);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (temp0 < (((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_nFrame) * ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame))) goto label_20;
	}
	{
	LINE_NUMBER(492);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_20:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(495);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fSpeed = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fSpeed) + (jint(1)));
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_w = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_w) + (20));
	LINE_NUMBER(499);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_w) <= ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000)) goto label_144;
	}
	{
	LINE_NUMBER(500);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_w = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000);
	}
label_144:;
	{
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) + (10));
	LINE_NUMBER(504);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (jint(3)));
	LINE_NUMBER(505);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(-1))) goto label_148;
	}
	{
	LINE_NUMBER(506);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = ((((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) - ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_w)) - (10));
	}
label_148:;
	{
	LINE_NUMBER(509);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isAddSub) != 0) goto label_150;
	}
	{
	if ((longCompare(((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) - ((jlong)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_time)), (jlong(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove))))) < 0) goto label_150;
	}
	{
	LINE_NUMBER(510);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f = (jint(0));
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (6));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(3));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	LINE_NUMBER(512);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isAddSub = (jint(1));
	}
label_150:;
	{
	LINE_NUMBER(515);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_23;
	}
	{
	LINE_NUMBER(516);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isAddSub) == 0) goto label_155;
	}
	{
	LINE_NUMBER(517);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	LINE_NUMBER(518);
	{ popExceptionFrames(frameRef, 1); goto label_59; }
	}
label_155:;
	{
	LINE_NUMBER(521);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f = (jint(0));
	}
label_23:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(524);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(526);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(527);
	frame[2].i = (jint(0));
	LINE_NUMBER(529);
	frame[3].i = (jint(0));
	}
label_160:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_161;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_Point, sp[0].o);
	frame[5].o = sp[0].o;
	if (((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_isSmall) != 0) goto label_164;
	}
	{
	if ((longCompare(((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) - ((jlong)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_time)), (jlong(((frame[3].i) * ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_fMove)))))) < 0) goto label_164;
	}
	{
	LINE_NUMBER(532);
	((nro_Point *) NULL_CHECK((frame[5].o)))->F_isSmall = (jint(1));
	LINE_NUMBER(533);
	jint temp0 = 17;
	jint temp1 = jint(0);
	jint temp2 = (jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_typePaint;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	jint temp3 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	SM_nro_GameScr_addEffectEnd_int_int_int_int_int_int_int_short_Array1_nro_Point(ctx, temp0, temp1, temp2, temp3, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (jint(3))), (jint(2)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_dir_nguoc), (jint(-1)), (checkCast(ctx, getArrayClass(&class_nro_Point, 1), (jobject(nullptr)))));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	jint temp4 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	}
label_164:;
	{
	LINE_NUMBER(537);
	if (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_isSmall) == 0) goto label_168;
	}
	{
	if (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_isRemove) != 0) goto label_168;
	}
	{
	LINE_NUMBER(538);
	sp[0].o = frame[5].o;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_color = (((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_color) + (jint(1)));
	LINE_NUMBER(539);
	if (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_isPaint) != 0) goto label_171;
	}
	{
	LINE_NUMBER(540);
	if (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_color) >= (10)) goto label_173;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != (temp1 - (jint(1)))) goto label_173;
	}
	{
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	if (sp[0].o == nullptr) goto label_173;
	}
	{
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_chw) + (jint(1));
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	jint temp2 = temp0 - (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir));
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	jint temp3 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	jobject temp4 = sp[0].o;
	sp[0].i = temp2;
	sp[1].i = temp3;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK(temp4))->F_cdir) != (jint(1))) goto label_174;
	}
	INST_BIPUSH(8);
	goto label_175;
label_174:;
	INST_ICONST(4);
label_175:;
	POP_N(3); // Pop method args
	sp->i = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, sp[0].i, sp[1].i, sp[2].i);
	sp++;
	if ((--sp)->i != 0) goto label_173;
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	frame[6].o = sp[0].o;
	LINE_NUMBER(542);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_charUse;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir));
	}
label_173:;
	{
	LINE_NUMBER(545);
	frame[6].i = ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_h);
	LINE_NUMBER(546);
	frame[7].i = ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_w);
	LINE_NUMBER(547);
	frame[8].i = ((frame[7].i) - ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_x));
	LINE_NUMBER(548);
	frame[9].i = ((frame[6].i) - ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_y));
	LINE_NUMBER(549);
	if ((frame[8].i) <= (jint(1))) goto label_182;
	}
	{
	LINE_NUMBER(550);
	jint temp0 = (jint)SM_nro_Res_angle_int_int_R_int(ctx, (frame[8].i), (frame[9].i));
	frame[8].i = temp0;
	LINE_NUMBER(551);
	sp[0].o = frame[5].o;
	jint temp1 = (jint)((func_nro_Point_setFrameAngle_int_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Point_setFrameAngle_int_R_int])(ctx, (frame[5].o), (frame[8].i));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_vx = temp1;
	}
label_182:;
	{
	LINE_NUMBER(554);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_v));
	if (temp0 <= 0) goto label_185;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_x) - (frame[7].i)));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_v));
	if (temp0 < temp1) goto label_185;
	}
	{
	LINE_NUMBER(555);
	sp[0].o = frame[5].o;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_x) + ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_v));
	goto label_187;
	}
label_185:;
	{
	LINE_NUMBER(557);
	((nro_Point *) NULL_CHECK((frame[5].o)))->F_x = (frame[7].i);
	LINE_NUMBER(558);
	((nro_Point *) NULL_CHECK((frame[5].o)))->F_v = (jint(0));
	}
label_187:;
	{
	LINE_NUMBER(561);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_vMax));
	if (temp0 <= 0) goto label_189;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_y) - (frame[6].i)));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_vMax));
	if (temp0 < temp1) goto label_189;
	}
	{
	LINE_NUMBER(562);
	sp[0].o = frame[5].o;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_vMax));
	goto label_191;
	}
label_189:;
	{
	LINE_NUMBER(564);
	((nro_Point *) NULL_CHECK((frame[5].o)))->F_y = (frame[6].i);
	LINE_NUMBER(565);
	((nro_Point *) NULL_CHECK((frame[5].o)))->F_vMax = (jint(0));
	}
label_191:;
	{
	LINE_NUMBER(568);
	if (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_x) != ((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_w)) goto label_171;
	}
	{
	LINE_NUMBER(569);
	((nro_Point *) NULL_CHECK((frame[5].o)))->F_isPaint = (jint(1));
	LINE_NUMBER(570);
	((nro_Point *) NULL_CHECK((frame[5].o)))->F_color = (jint(0));
	}
label_171:;
	{
	LINE_NUMBER(574);
	if (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_isPaint) == 0) goto label_168;
	}
	{
	jint temp0 = (jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_color;
	jint temp1 = (jint)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_n_frame;
	sp[0].o = (jobject)((nro_Point *) NULL_CHECK((frame[5].o)))->F_fraImgEff_2;
	if (temp0 < (temp1 * ((jint)((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_nFrame))) goto label_168;
	}
	{
	LINE_NUMBER(575);
	((nro_Point *) NULL_CHECK((frame[5].o)))->F_isRemove = (jint(1));
	}
label_168:;
	{
	LINE_NUMBER(579);
	if (((jint)((nro_Point *) NULL_CHECK((frame[5].o)))->F_isRemove) == 0) goto label_196;
	}
	LINE_NUMBER(580);
	INST_IINC(2, 1);
label_196:;
	{
	LINE_NUMBER(529);
	INST_IINC(3, 1);
	goto label_160;
	}
label_161:;
	{
	LINE_NUMBER(584);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_26;
	}
	{
	LINE_NUMBER(585);
	((nro_Effect_End *) NULL_CHECK((frame[1].o)))->F_isRemove = (jint(1));
	}
label_26:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(588);
	popStackFrame(ctx);
	INST_RETURN();
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(590);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax) != 0) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_frame = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_frame) + (jint(1)));
	LINE_NUMBER(592);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_201;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_frame = ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)));
	}
label_201:;
	{
	LINE_NUMBER(596);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) != (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fMove) + (jint(4)))) goto label_203;
	}
	{
	LINE_NUMBER(597);
	SM_nro_GameScr_addEffectEnd_int_int_int_int_int_int_int_short_Array1_nro_Point(ctx, (16), (jint(1)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typePaint), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y), (jint(3)), (jint(0)), (2945), (checkCast(ctx, getArrayClass(&class_nro_Point, 1), (jobject(nullptr)))));
	}
label_203:;
	{
	LINE_NUMBER(600);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) <= (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fMove) + (jint(4)))) { popExceptionFrames(frameRef, 1); bypasses[11] = true; goto label_42; } // goto label_41
	}
	{
	LINE_NUMBER(601);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_goc_Arc = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_goc_Arc) - (jint(1)));
	LINE_NUMBER(603);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_goc_Arc) >= 0) goto label_207;
	}
	{
	LINE_NUMBER(604);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_goc_Arc = (jint(0));
	LINE_NUMBER(605);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f = (jint(0));
	LINE_NUMBER(606);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fSpeed = (jint(0));
	LINE_NUMBER(607);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (22));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (13)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (14)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (15)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (17)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (18)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (19)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (20)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (21)) = (jint(2));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mImageArrow = (jref) sp[1].o;
	LINE_NUMBER(608);
	frame[6].i = (jint(1));
	LINE_NUMBER(609);
	frame[5].o = (frame[0].o);
	LINE_NUMBER(610);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	if (sp[0].o == nullptr) goto label_215;
	}
	{
	LINE_NUMBER(611);
	frame[7].i = (jint(0));
	}
label_217:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_listObj;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_215;
	}
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_listObj;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))) == nullptr) goto label_219;
	}
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_listObj;
	if (((jint)((nro_Point *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))))->F_type) != 0) goto label_221;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_listObj;
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_int_R_nro_Mob(ctx, ((jint)((nro_Point *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))))->F_id));
	frame[8].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_224;
	}
	{
	LINE_NUMBER(616);
	((nro_Mob *) NULL_CHECK((frame[8].o)))->F_isHide = (jint(1));
	}
label_224:;
	LINE_NUMBER(618);
	goto label_219;
label_221:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_listObj;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)));
	LINE_NUMBER(621);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID) != ((jint)((nro_Point *) NULL_CHECK((frame[8].o)))->F_id)) goto label_227;
	}
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[9].o = sp[0].o;
	goto label_230;
	}
label_227:;
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_listObj;
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Point *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))))->F_id));
	frame[9].o = sp[0].o;
	}
label_230:;
	{
	LINE_NUMBER(627);
	if ((frame[9].o) == nullptr) goto label_219;
	}
	{
	LINE_NUMBER(628);
	((nro_Char *) NULL_CHECK((frame[9].o)))->F_isHide = (jint(1));
	}
label_219:;
	{
	LINE_NUMBER(611);
	INST_IINC(7, 1);
	goto label_217;
	}
label_215:;
	{
	LINE_NUMBER(635);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax = (jint(1));
	LINE_NUMBER(636);
	goto label_29;
	}
label_207:;
	{
	LINE_NUMBER(637);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000) >= (40)) goto label_233;
	}
	{
	LINE_NUMBER(638);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vy1000 = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vy1000) + (jint(2)));
	}
label_233:;
	{
	LINE_NUMBER(641);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_va = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_gocT_Arc);
	LINE_NUMBER(642);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va) - ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000));
	LINE_NUMBER(643);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_va) < (360)) goto label_237;
	}
	{
	LINE_NUMBER(644);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va) - (360));
	}
label_237:;
	{
	LINE_NUMBER(647);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_va) >= 0) goto label_239;
	}
	{
	LINE_NUMBER(648);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va) + (360));
	}
label_239:;
	{
	LINE_NUMBER(651);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_gocT_Arc = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_va);
	LINE_NUMBER(652);
	frame[5].o = (frame[0].o);
	LINE_NUMBER(654);
	frame[3].i = (jint(0));
	}
label_243:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_S;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_244;
	}
	{
	LINE_NUMBER(655);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va) < (360)) goto label_246;
	}
	{
	LINE_NUMBER(656);
	sp[0].o = frame[5].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va) - (360));
	}
label_246:;
	{
	LINE_NUMBER(659);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va) >= 0) goto label_248;
	}
	{
	LINE_NUMBER(660);
	sp[0].o = frame[5].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va) + (360));
	}
label_248:;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_S;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_goc_Arc;
	jint temp2 = (jint)SM_nro_Res_atan_int_R_int(ctx, ((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va));
	jint temp3 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((temp1 * temp2) / (1024)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp3;
	LINE_NUMBER(664);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_colorpaint;
	jint temp4 = frame[3].i;
	jint temp5 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_goc_Arc;
	jint temp6 = (jint)SM_nro_Res_cos_int_R_int(ctx, ((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va));
	jint temp7 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((temp5 * temp6) / (1024)));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp7;
	LINE_NUMBER(665);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va) >= (90)) goto label_252;
	}
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_T;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_x;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_colorpaint;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(667);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_U;
	jint temp2 = frame[3].i;
	jint temp3 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_y;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_S;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	goto label_255;
	}
label_252:;
	{
	LINE_NUMBER(668);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va) < (90)) goto label_256;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va) >= (180)) goto label_256;
	}
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_T;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_x;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_colorpaint;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(670);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_U;
	jint temp2 = frame[3].i;
	jint temp3 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_y;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_S;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	goto label_255;
	}
label_256:;
	{
	LINE_NUMBER(671);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va) < (180)) goto label_259;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_va) >= (270)) goto label_259;
	}
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_T;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_x;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_colorpaint;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(673);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_U;
	jint temp2 = frame[3].i;
	jint temp3 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_y;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_S;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	goto label_255;
	}
label_259:;
	{
	LINE_NUMBER(675);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_T;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_x;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_colorpaint;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	LINE_NUMBER(676);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_U;
	jint temp2 = frame[3].i;
	jint temp3 = (jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_y;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_S;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	}
label_255:;
	{
	LINE_NUMBER(679);
	sp[0].o = frame[5].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_va) - ((jint)((nro_Effect_End *) NULL_CHECK((frame[5].o)))->F_P));
	LINE_NUMBER(654);
	INST_IINC(3, 1);
	goto label_243;
	}
label_244:;
	{
	LINE_NUMBER(682);
	M_nro_Effect_End_a_boolean(ctx, (frame[0].o), (jint(1)));
	}
label_29:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(685);
	popStackFrame(ctx);
	INST_RETURN();
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(687);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	{
	LINE_NUMBER(688);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fSpeed = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fSpeed) + (jint(1)));
	LINE_NUMBER(689);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fSpeed;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mImageArrow;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) { popExceptionFrames(frameRef, 1); bypasses[12] = true; goto label_42; } // goto label_41
	}
	{
	LINE_NUMBER(690);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mImageArrow;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fSpeed = ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)));
	LINE_NUMBER(691);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_268;
	}
	{
	LINE_NUMBER(692);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y1000 = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_y1000) + (jint(1)));
	}
label_268:;
	{
	LINE_NUMBER(695);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vx = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vx) + ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y1000));
	LINE_NUMBER(696);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx;
	jint temp1 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_h;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (temp0 < (((temp1 - ((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_frameHeight)) - ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_toX)) + ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000))) { popExceptionFrames(frameRef, 1); bypasses[13] = true; goto label_42; } // goto label_41
	}
	{
	LINE_NUMBER(697);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_h;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vx = (((temp0 - ((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_frameHeight)) - ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_toX)) + ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx1000));
	LINE_NUMBER(698);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f = (jint(0));
	LINE_NUMBER(699);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fSpeed = (jint(0));
	LINE_NUMBER(700);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax = (jint(2));
	LINE_NUMBER(701);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (11));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (jint(5));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mImageArrow = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(702);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(705);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax) != (jint(2))) { popExceptionFrames(frameRef, 1); goto label_37; }
	}
	{
	LINE_NUMBER(706);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fSpeed = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fSpeed) + (jint(1)));
	LINE_NUMBER(707);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fSpeed;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mImageArrow;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) { popExceptionFrames(frameRef, 1); bypasses[14] = true; goto label_42; } // goto label_41
	}
	{
	LINE_NUMBER(708);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax = (jint(3));
	LINE_NUMBER(709);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_frame = (jint(0));
	LINE_NUMBER(710);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (17));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (12)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (13)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (14)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (16)) = (jint(0));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(711);
	popStackFrame(ctx);
	INST_RETURN();
label_37:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(713);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax) != (jint(3))) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(714);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_frame = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_frame) + (jint(1)));
	LINE_NUMBER(715);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) { popExceptionFrames(frameRef, 1); bypasses[15] = true; goto label_42; } // goto label_41
	}
	{
	LINE_NUMBER(716);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_frame = (jint(0));
	LINE_NUMBER(717);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax = (jint(4));
	LINE_NUMBER(718);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (51));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (14)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (17)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (18)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (19)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (22)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (23)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (24)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (25)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (26)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (27)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (28)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (29)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (30)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (31)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (32)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (33)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (34)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (35)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (36)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (38)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (39)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (40)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (41)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (42)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (43)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (44)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (45)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (46)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (47)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (48)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (49)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (50)) = (jint(4));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(719);
	popStackFrame(ctx);
	INST_RETURN();
label_40:;
label_42: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[11]) { bypasses[11] = false; goto label_41; }
	if (bypasses[12]) { bypasses[12] = false; goto label_41; }
	if (bypasses[13]) { bypasses[13] = false; goto label_41; }
	if (bypasses[14]) { bypasses[14] = false; goto label_41; }
	if (bypasses[15]) { bypasses[15] = false; goto label_41; }
	{
	LINE_NUMBER(722);
	sp[0].o = frame[0].o;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_frame = (((jint)((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_frame) + (jint(1)));
	LINE_NUMBER(723);
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_frame;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_287;
	}
	{
	LINE_NUMBER(724);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_frame = (jint(0));
	}
label_287:;
	{
	LINE_NUMBER(727);
	if ((longCompare(((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) - ((jlong)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_time)), (jlong(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove))))) < 0) goto label_41;
	}
	{
	LINE_NUMBER(728);
	SM_nro_GameScr_addEffectEnd_int_int_int_int_int_int_int_short_Array1_nro_Point(ctx, (16), (jint(0)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typePaint), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000), (jint(1)), (jint(0)), (jint(-1)), (checkCast(ctx, getArrayClass(&class_nro_Point, 1), (jobject(nullptr)))));
	LINE_NUMBER(729);
	M_nro_Effect_End_a_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(730);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_41:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(734);
	popStackFrame(ctx);
	INST_RETURN();
label_59:;
	LINE_NUMBER(739);
	goto label_292;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(736);
	frame[1].o = sp[0].o;
	LINE_NUMBER(737);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ERR update: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(738);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_292:;
	LINE_NUMBER(741);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_pnt_End_Rock_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:pnt_End_Rock", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[10]{};

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(745);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) >= 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(746);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(754);
	switch(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect)) {
		case 0: goto label_40;
		case 1: goto label_40;
		case 2: goto label_40;
		case 3: { popExceptionFrames(frameRef, 1); goto label_7; }
		case 4: { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_15; } // goto label_14
		case 5: { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_15; } // goto label_14
		case 6: { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_15; } // goto label_14
		case 7: { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_15; } // goto label_14
		case 8: { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_15; } // goto label_14
		case 9: { popExceptionFrames(frameRef, 1); goto label_10; }
		case 10: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 11: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 12: { popExceptionFrames(frameRef, 1); bypasses[6] = true; goto label_15; } // goto label_14
		case 13: { popExceptionFrames(frameRef, 1); bypasses[7] = true; goto label_15; } // goto label_14
		case 14: { popExceptionFrames(frameRef, 1); bypasses[8] = true; goto label_15; } // goto label_14
		case 15: { popExceptionFrames(frameRef, 1); bypasses[9] = true; goto label_15; } // goto label_14
		case 16: { popExceptionFrames(frameRef, 1); goto label_16; }
		case 17: { popExceptionFrames(frameRef, 1); goto label_22; }
		case 18: { popExceptionFrames(frameRef, 1); goto label_25; }
		case 19: { popExceptionFrames(frameRef, 1); goto label_25; }
		case 20: { popExceptionFrames(frameRef, 1); goto label_25; }
		case 21: { popExceptionFrames(frameRef, 1); goto label_28; }
		case 22: { popExceptionFrames(frameRef, 1); goto label_28; }
		case 23: { popExceptionFrames(frameRef, 1); goto label_28; }
		case 24: { popExceptionFrames(frameRef, 1); goto label_31; }
		case 25: { popExceptionFrames(frameRef, 1); goto label_34; }
		case 26: { popExceptionFrames(frameRef, 1); goto label_37; }
		default: { bypasses[0] = true; goto label_15; } // goto label_14
	}
	}
label_40:;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fraImgEff;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fraImgEff;
	jint temp0 = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) / (jint(5));
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fraImgEff;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, (temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y), (jint(0)), (33), (frame[1].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(762);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(764);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(765);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(767);
	frame[3].i = (jint(0));
	}
label_44:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_VecEffEnd;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_Point, sp[0].o);
	frame[6].o = sp[0].o;
	if ((((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_color) - ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_limitY)) < 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((nro_Point *) NULL_CHECK((frame[6].o)))->F_fraImgEff;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)((nro_Point *) NULL_CHECK((frame[6].o)))->F_fraImgEff;
	jint temp0 = (((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_color) - ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_limitY)) / (jint(3));
	sp[1].o = (jobject)((nro_Point *) NULL_CHECK((frame[6].o)))->F_fraImgEff;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, (temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame)), ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_y), (jint(0)), (jint(3)), (frame[2].o));
	}
label_47:;
	{
	LINE_NUMBER(767);
	INST_IINC(3, 1);
	goto label_44;
	}
label_8:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(773);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(775);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(776);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(778);
	frame[3].i = (jint(0));
	}
label_51:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_11;
	}
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_VecEffEnd;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_Line, sp[0].o);
	frame[7].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(781);
	frame[8].i = (jint(0));
	LINE_NUMBER(782);
	jint temp0 = (frame[3].i) / (jint(2));
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_mXoayArrow;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_57;
	}
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_mXoayArrow;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) / (jint(2)))));
	}
label_57:;
	{
	LINE_NUMBER(786);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[2].o), (frame[8].i));
	LINE_NUMBER(787);
	((func_lib_mGraphics_drawLine_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_drawLine_int_int_int_int])(ctx, (frame[2].o), (((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_x0) / (1000)), (((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_y0) / (1000)), (((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_x1) / (1000)), (((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_y1) / (1000)));
	LINE_NUMBER(788);
	if (((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_is2Line) == 0) goto label_54;
	}
	{
	LINE_NUMBER(789);
	((func_lib_mGraphics_drawLine_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_drawLine_int_int_int_int])(ctx, (frame[2].o), ((((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_x0) / (1000)) + (jint(1))), (((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_y0) / (1000)), ((((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_x1) / (1000)) + (jint(1))), (((jint)((nro_Line *) NULL_CHECK((frame[7].o)))->F_y1) / (1000)));
	}
label_54:;
	{
	LINE_NUMBER(778);
	INST_IINC(3, 1);
	goto label_51;
	}
label_11:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(794);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_14; }
	if (bypasses[1]) { bypasses[1] = false; goto label_14; }
	if (bypasses[2]) { bypasses[2] = false; goto label_14; }
	if (bypasses[3]) { bypasses[3] = false; goto label_14; }
	if (bypasses[4]) { bypasses[4] = false; goto label_14; }
	if (bypasses[5]) { bypasses[5] = false; goto label_14; }
	if (bypasses[6]) { bypasses[6] = false; goto label_14; }
	if (bypasses[7]) { bypasses[7] = false; goto label_14; }
	if (bypasses[8]) { bypasses[8] = false; goto label_14; }
	if (bypasses[9]) { bypasses[9] = false; goto label_14; }
	{
	LINE_NUMBER(797);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(798);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(800);
	frame[3].i = (jint(0));
	}
label_64:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_14;
	}
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_VecEffEnd;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[6].o = (checkCast(ctx, &class_nro_Point, sp[0].o));
	LINE_NUMBER(802);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_fraImgEff;
	if (sp[0].o == nullptr) goto label_67;
	}
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_fraImgEff;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_vx), ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_y), (jint(0)), (jint(3)), (frame[2].o));
	}
label_67:;
	{
	LINE_NUMBER(800);
	INST_IINC(3, 1);
	goto label_64;
	}
label_14:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(816);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(818);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != 0) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(819);
	M_nro_Effect_End_a_lib_mGraphics_int(ctx, (frame[0].o), (frame[1].o), (33));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(820);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(823);
	M_nro_Effect_End_a_lib_mGraphics_int(ctx, (frame[0].o), (frame[1].o), (jint(3)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(824);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(826);
	M_nro_Effect_End_a_lib_mGraphics_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(827);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(831);
	frame[5].i = (jint(1));
	LINE_NUMBER(832);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	if (sp[0].o == nullptr) goto label_72;
	}
	{
	LINE_NUMBER(834);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f;
	sp[2].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length)))), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir_nguoc), (33), (frame[1].o));
	LINE_NUMBER(835);
	{ popExceptionFrames(frameRef, 1); goto label_75; }
	}
label_72:;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	jint temp0 = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) / ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, (temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_nFrame)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir_nguoc), (33), (frame[1].o));
	}
label_26:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(841);
	popStackFrame(ctx);
	INST_RETURN();
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(845);
	frame[5].i = (jint(1));
	LINE_NUMBER(846);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	jint temp0 = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) / ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, (temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_nFrame)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir_nguoc), (jint(3)), (frame[1].o));
	}
label_29:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(850);
	popStackFrame(ctx);
	INST_RETURN();
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(852);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(853);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y) - (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_h) / (jint(2)))), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_h));
	LINE_NUMBER(854);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(855);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))));
	LINE_NUMBER(856);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2))));
	LINE_NUMBER(857);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	frame[10].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f)));
	LINE_NUMBER(858);
	frame[11].i = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000);
	LINE_NUMBER(859);
	frame[12].i = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(860);
	frame[13].i = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(861);
	frame[14].i = (frame[10].i);
	LINE_NUMBER(862);
	frame[15].o = (frame[9].o);
	LINE_NUMBER(863);
	frame[16].o = (frame[8].o);
	LINE_NUMBER(864);
	frame[17].o = (frame[7].o);
	LINE_NUMBER(865);
	frame[18].o = (frame[1].o);
	LINE_NUMBER(866);
	frame[19].i = (frame[11].i);
	LINE_NUMBER(867);
	frame[20].i = (jint(0));
	LINE_NUMBER(868);
	if ((frame[17].o) == nullptr) goto label_94;
	}
	INST_ALOAD(15);
	if ((--sp)->o == nullptr) goto label_94;
	{
	LINE_NUMBER(869);
	frame[20].i = (jint(1));
	LINE_NUMBER(870);
	frame[19].i = ((frame[11].i) - (((jint)((nro_FrameImage *) NULL_CHECK((frame[17].o)))->F_frameWidth) + ((jint)((nro_FrameImage *) NULL_CHECK((frame[15].o)))->F_frameWidth)));
	}
label_94:;
	{
	LINE_NUMBER(873);
	if ((frame[19].i) <= 0) goto label_97;
	}
	{
	LINE_NUMBER(874);
	frame[21].i = ((frame[19].i) / ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth));
	LINE_NUMBER(875);
	if (((frame[19].i) % ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth)) <= 0) goto label_100;
	}
	LINE_NUMBER(876);
	INST_IINC(21, 1);
label_100:;
	{
	LINE_NUMBER(880);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(-1))) goto label_102;
	}
	{
	LINE_NUMBER(881);
	frame[19].i = (jint(0));
	}
label_104:;
	{
	if ((frame[19].i) >= (frame[21].i)) goto label_97;
	}
	{
	LINE_NUMBER(882);
	if ((frame[19].i) != ((frame[21].i) - (jint(1)))) goto label_106;
	}
	{
	LINE_NUMBER(883);
	if ((frame[20].i) == 0) goto label_108;
	}
	{
	LINE_NUMBER(884);
	frame[22].i = ((frame[13].i) + ((jint)((nro_FrameImage *) NULL_CHECK((frame[15].o)))->F_frameWidth));
	goto label_111;
	}
label_108:;
	{
	LINE_NUMBER(886);
	frame[22].i = (((frame[13].i) + (frame[11].i)) - ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth));
	goto label_111;
	}
label_106:;
	{
	LINE_NUMBER(888);
	if ((frame[20].i) == 0) goto label_113;
	}
	{
	LINE_NUMBER(889);
	frame[22].i = ((((frame[13].i) + ((jint)((nro_FrameImage *) NULL_CHECK((frame[15].o)))->F_frameWidth)) + ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth)) + ((frame[19].i) * ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth)));
	goto label_111;
	}
label_113:;
	{
	LINE_NUMBER(891);
	frame[22].i = ((frame[13].i) + ((frame[19].i) * ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth)));
	}
label_111:;
	{
	LINE_NUMBER(894);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[16].o), (frame[14].i), (frame[22].i), ((frame[12].i) - (((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameHeight) / (jint(2)))), (jint(2)), (jint(0)), (frame[18].o));
	LINE_NUMBER(881);
	INST_IINC(19, 1);
	goto label_104;
	}
label_102:;
	{
	LINE_NUMBER(897);
	frame[19].i = (jint(0));
	}
label_117:;
	{
	if ((frame[19].i) >= (frame[21].i)) goto label_97;
	}
	{
	LINE_NUMBER(898);
	if ((frame[19].i) != ((frame[21].i) - (jint(1)))) goto label_119;
	}
	{
	LINE_NUMBER(899);
	if ((frame[20].i) == 0) goto label_121;
	}
	{
	LINE_NUMBER(900);
	frame[22].i = (((frame[13].i) + (frame[11].i)) - (((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth) + ((jint)((nro_FrameImage *) NULL_CHECK((frame[15].o)))->F_frameWidth)));
	goto label_124;
	}
label_121:;
	{
	LINE_NUMBER(902);
	frame[22].i = (((frame[13].i) + (frame[11].i)) - ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth));
	goto label_124;
	}
label_119:;
	{
	LINE_NUMBER(904);
	if ((frame[20].i) == 0) goto label_126;
	}
	{
	LINE_NUMBER(905);
	frame[22].i = (((frame[13].i) + ((frame[19].i) * ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth))) + ((jint)((nro_FrameImage *) NULL_CHECK((frame[17].o)))->F_frameWidth));
	goto label_124;
	}
label_126:;
	{
	LINE_NUMBER(907);
	frame[22].i = ((frame[13].i) + ((frame[19].i) * ((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameWidth)));
	}
label_124:;
	{
	LINE_NUMBER(910);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[16].o), (frame[14].i), (frame[22].i), ((frame[12].i) - (((jint)((nro_FrameImage *) NULL_CHECK((frame[16].o)))->F_frameHeight) / (jint(2)))), (jint(0)), (jint(0)), (frame[18].o));
	LINE_NUMBER(897);
	INST_IINC(19, 1);
	goto label_117;
	}
label_97:;
	{
	LINE_NUMBER(915);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(-1))) goto label_130;
	}
	{
	LINE_NUMBER(916);
	if ((frame[17].o) == nullptr) goto label_132;
	}
	{
	LINE_NUMBER(917);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[17].o), (frame[14].i), (((frame[13].i) + (frame[11].i)) - ((jint)((nro_FrameImage *) NULL_CHECK((frame[17].o)))->F_frameWidth)), ((frame[12].i) - (((jint)((nro_FrameImage *) NULL_CHECK((frame[17].o)))->F_frameHeight) / (jint(2)))), (jint(2)), (jint(0)), (frame[18].o));
	}
label_132:;
	{
	LINE_NUMBER(920);
	if ((frame[15].o) == nullptr) goto label_134;
	}
	{
	LINE_NUMBER(921);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[15].o), (frame[14].i), (frame[13].i), ((frame[12].i) - (((jint)((nro_FrameImage *) NULL_CHECK((frame[15].o)))->F_frameHeight) / (jint(2)))), (jint(2)), (jint(0)), (frame[18].o));
	goto label_134;
	}
label_130:;
	{
	LINE_NUMBER(924);
	if ((frame[17].o) == nullptr) goto label_136;
	}
	{
	LINE_NUMBER(925);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[17].o), (frame[14].i), (frame[13].i), ((frame[12].i) - (((jint)((nro_FrameImage *) NULL_CHECK((frame[17].o)))->F_frameHeight) / (jint(2)))), (jint(0)), (jint(0)), (frame[18].o));
	}
label_136:;
	{
	LINE_NUMBER(928);
	if ((frame[15].o) == nullptr) goto label_134;
	}
	{
	LINE_NUMBER(929);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[15].o), (frame[14].i), ((((frame[13].i) + (frame[11].i)) - ((jint)((nro_FrameImage *) NULL_CHECK((frame[15].o)))->F_frameWidth)) - (jint(1))), ((frame[12].i) - (((jint)((nro_FrameImage *) NULL_CHECK((frame[15].o)))->F_frameHeight) / (jint(2)))), (jint(0)), (jint(0)), (frame[18].o));
	}
label_134:;
	{
	LINE_NUMBER(933);
	SM_main_GameCanvas_resetTransGameScr_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(934);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(-1))) goto label_32;
	}
	{
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	jint temp0 = (jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f));
	jint temp1 = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_w);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	jint temp2 = temp1 - ((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_frameWidth);
	jint temp3 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, temp0, temp2, ((temp3 - (((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_frameHeight) / (jint(2)))) - (jint(1))), (jint(2)), (jint(0)), (frame[1].o));
	}
label_32:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(939);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(941);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(942);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(944);
	frame[3].i = (jint(0));
	}
label_143:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_VecEffEnd;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_35;
	}
	{
	LINE_NUMBER(945);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_VecEffEnd;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_Point, sp[0].o);
	frame[6].o = sp[0].o;
	if (((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_isSmall) == 0) goto label_146;
	}
	{
	if (((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_isRemove) != 0) goto label_146;
	}
	{
	LINE_NUMBER(946);
	if (((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_isPaint) != 0) goto label_148;
	}
	{
	LINE_NUMBER(947);
	sp[0].o = frame[6].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((nro_Point *) NULL_CHECK((frame[6].o)))->F_fraImgEff;
	((func_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(3)), (jint(0)));
	}
label_148:;
	{
	LINE_NUMBER(950);
	if (((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_isPaint) == 0) goto label_146;
	}
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)((nro_Point *) NULL_CHECK((frame[6].o)))->F_fraImgEff_2;
	jint temp0 = ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_color) / ((jint)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_n_frame);
	sp[1].o = (jobject)((nro_Point *) NULL_CHECK((frame[6].o)))->F_fraImgEff_2;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, (temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame)), ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((nro_Point *) NULL_CHECK((frame[6].o)))->F_y), ((jint)((nro_Effect_End *) NULL_CHECK((frame[4].o)))->F_dir_nguoc), (jint(3)), (frame[2].o));
	}
label_146:;
	{
	LINE_NUMBER(944);
	INST_IINC(3, 1);
	goto label_143;
	}
label_35:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(956);
	popStackFrame(ctx);
	INST_RETURN();
label_37:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(958);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(959);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	if (sp[0].o == nullptr) goto label_152;
	}
	{
	LINE_NUMBER(960);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_frame))), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000), (jint(0)), (33), (frame[1].o));
	}
label_152:;
	{
	LINE_NUMBER(963);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax) == (jint(1))) goto label_154;
	}
	{
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vMax) != (jint(2))) goto label_38;
	}
label_154:;
	{
	LINE_NUMBER(964);
	frame[3].i = (33);
	LINE_NUMBER(965);
	frame[7].i = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_toX);
	LINE_NUMBER(966);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mImageArrow;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fSpeed))) == 0) goto label_157;
	}
	{
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mImageArrow;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fSpeed))) != (jint(1))) goto label_158;
	}
label_157:;
	{
	LINE_NUMBER(967);
	frame[3].i = (jint(3));
	LINE_NUMBER(968);
	frame[7].i = (jint(0));
	}
label_158:;
	{
	LINE_NUMBER(971);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mImageArrow;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fSpeed))), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y) + (frame[7].i)) + ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vx)), (jint(0)), (frame[3].i), (frame[1].o));
	}
label_38:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(975);
	popStackFrame(ctx);
	INST_RETURN();
label_75:;
	LINE_NUMBER(980);
	goto label_160;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(977);
	frame[2].o = sp[0].o;
	LINE_NUMBER(978);
	sp[0].o = (jobject)((func_java_lang_Exception_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_toString_R_java_lang_String])(ctx, (frame[2].o));
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(979);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_160:;
	LINE_NUMBER(982);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_set_FireWork(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:set_FireWork", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(985);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(3)), (jint(5)));
	frame[1].i = temp0;
	LINE_NUMBER(986);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fRemove = (90);
	LINE_NUMBER(988);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(990);
	clinit_nro_Point(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Point);
	init_nro_Point(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)SM_nro_Res_random_Am_0_int_R_int(ctx, (jint(4)));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_x = (temp0 + temp1);
	LINE_NUMBER(991);
	sp[0].o = frame[3].o;
	jint temp2 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp3 = (jint)SM_nro_Res_random_Am_0_int_R_int(ctx, (jint(5)));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_y = (temp2 + temp3);
	LINE_NUMBER(992);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != 0) goto label_9;
	}
	{
	LINE_NUMBER(993);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (10));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_limitY = temp0;
	LINE_NUMBER(994);
	frame[4].i = (jint(1));
	LINE_NUMBER(995);
	if (((frame[2].i) % (jint(2))) != 0) goto label_13;
	}
	{
	LINE_NUMBER(996);
	frame[4].i = (jint(-1));
	}
label_13:;
	{
	LINE_NUMBER(999);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_nro_Effect_End(ctx);
	sp[1].o = (jobject)SF_nro_Effect_End_arrInfoEff;
	jint temp1 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))), (jint(0)))) / (jint(2))));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp1 * (frame[4].i)));
	LINE_NUMBER(1000);
	sp[0].o = frame[3].o;
	jint temp2 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_nro_Effect_End(ctx);
	sp[1].o = (jobject)SF_nro_Effect_End_arrInfoEff;
	jint temp3 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))), (jint(1)))) / (jint(2))));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_y = (temp2 - temp3);
	LINE_NUMBER(1001);
	sp[0].o = frame[3].o;
	clinit_nro_FrameImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_int(ctx, sp[1].o, (7));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_fraImgEff = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_VecEffEnd;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(988);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1007);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_set_Skill_Destroy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:set_Skill_Destroy", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1010);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	jint temp1 = 20;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_charUse;
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp1 * ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir)));
	LINE_NUMBER(1011);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fMove = (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_timeRemove) / (15));
	LINE_NUMBER(1012);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1013);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	if ((frame[1].i) >= (15)) goto label_6;
	}
	{
	LINE_NUMBER(1015);
	clinit_nro_Point(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Point);
	init_nro_Point(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_fraImgEff = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))));
	LINE_NUMBER(1016);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_fraImgEff_2 = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2))));
	LINE_NUMBER(1017);
	((nro_Point *) NULL_CHECK((frame[2].o)))->F_x = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1018);
	((nro_Point *) NULL_CHECK((frame[2].o)))->F_y = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1020);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_target;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_Point *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(1021);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_target;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_Point *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(1022);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_range) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(1023);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_w;
	jint temp1 = (jint)SM_nro_Res_random_Am_int_int_R_int(ctx, (jint(0)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_range));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_w = (temp0 + temp1);
	LINE_NUMBER(1024);
	sp[0].o = frame[2].o;
	jint temp2 = (jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_h;
	jint temp3 = (jint)SM_nro_Res_random_Am_int_int_R_int(ctx, (jint(0)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_range));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_h = (temp2 + temp3);
	}
label_13:;
	{
	LINE_NUMBER(1028);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (9), (12));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_vy1000 = temp0;
	LINE_NUMBER(1029);
	if ((frame[1].i) != (14)) goto label_20;
	}
	{
	LINE_NUMBER(1030);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_fraImgEff = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1))));
	LINE_NUMBER(1031);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_fraImgEff_2 = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3))));
	LINE_NUMBER(1032);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_target;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_Point *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(1033);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_target;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_Point *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(1034);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000 = (9);
	}
label_20:;
	{
	LINE_NUMBER(1037);
	((nro_Point *) NULL_CHECK((frame[2].o)))->F_isSmall = (jint(0));
	LINE_NUMBER(1038);
	((nro_Point *) NULL_CHECK((frame[2].o)))->F_isPaint = (jint(0));
	LINE_NUMBER(1039);
	((nro_Point *) NULL_CHECK((frame[2].o)))->F_isRemove = (jint(0));
	LINE_NUMBER(1040);
	frame[3].i = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy1000);
	LINE_NUMBER(1041);
	((nro_Point *) NULL_CHECK((frame[2].o)))->F_g = (frame[3].i);
	LINE_NUMBER(1042);
	frame[3].i = (((jint)((nro_Point *) NULL_CHECK((frame[2].o)))->F_w) - ((jint)((nro_Point *) NULL_CHECK((frame[2].o)))->F_x));
	LINE_NUMBER(1043);
	frame[4].i = (((jint)((nro_Point *) NULL_CHECK((frame[2].o)))->F_h) - ((jint)((nro_Point *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(1044);
	jint temp0 = (jint)SM_nro_Res_angle_int_int_R_int(ctx, (frame[3].i), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(1045);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_nro_Point_setFrameAngle_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Point_setFrameAngle_int_R_int])(ctx, (frame[2].o), (frame[5].i));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_vx = temp1;
	LINE_NUMBER(1047);
	jint temp2 = (jint)SM_nro_Res_getDistance_int_int_R_int(ctx, (frame[3].i), (frame[4].i));
	jint temp3 = temp2 / ((jint)((nro_Point *) NULL_CHECK((frame[2].o)))->F_g);
	frame[6].i = temp3;
	if (temp3 != 0) goto label_36;
	}
	{
	LINE_NUMBER(1048);
	frame[6].i = (jint(1));
	}
label_36:;
	{
	LINE_NUMBER(1051);
	frame[5].i = ((frame[3].i) / (frame[6].i));
	LINE_NUMBER(1052);
	frame[7].i = ((frame[4].i) / (frame[6].i));
	LINE_NUMBER(1053);
	if ((frame[5].i) != 0) goto label_40;
	}
	{
	if ((frame[3].i) >= (frame[6].i)) goto label_40;
	}
	{
	LINE_NUMBER(1054);
	if ((frame[3].i) >= 0) goto label_42;
	}
	INST_ICONST(-1);
	goto label_43;
label_42:;
	INST_ICONST(1);
label_43:;
	INST_ISTORE(5);
label_40:;
	{
	LINE_NUMBER(1057);
	if ((frame[7].i) != 0) goto label_44;
	}
	{
	if ((frame[4].i) >= (frame[6].i)) goto label_44;
	}
	{
	LINE_NUMBER(1058);
	if ((frame[4].i) >= 0) goto label_46;
	}
	INST_ICONST(-1);
	goto label_47;
label_46:;
	INST_ICONST(1);
label_47:;
	INST_ISTORE(7);
label_44:;
	{
	LINE_NUMBER(1061);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[5].i));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[3].i));
	if (temp0 <= temp1) goto label_48;
	}
	{
	LINE_NUMBER(1062);
	frame[5].i = (frame[3].i);
	}
label_48:;
	{
	LINE_NUMBER(1065);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[7].i));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[4].i));
	if (temp0 <= temp1) goto label_50;
	}
	{
	LINE_NUMBER(1066);
	frame[7].i = (frame[4].i);
	}
label_50:;
	{
	LINE_NUMBER(1069);
	((nro_Point *) NULL_CHECK((frame[2].o)))->F_v = (frame[5].i);
	LINE_NUMBER(1070);
	((nro_Point *) NULL_CHECK((frame[2].o)))->F_vMax = (frame[7].i);
	LINE_NUMBER(1071);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_VecEffEnd;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1013);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	goto label_55;
label_3:;
	{
	LINE_NUMBER(1075);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(1));
	}
label_55:;
	LINE_NUMBER(1077);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_a_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:a", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1080);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_VecEffEnd;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(1084);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_mXoayArrow = (jref) sp[1].o;
	LINE_NUMBER(1085);
	if ((frame[3].i) > (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(1086);
	frame[3].i = ((frame[2].i) + (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(1089);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_7;
	}
	{
	LINE_NUMBER(1090);
	jint temp0 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (jint(2)));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mXoayArrow;
	jint temp0 = frame[4].i;
	clinit_nro_Effect_End(ctx);
	sp[1].o = (jobject)SF_nro_Effect_End_colorStar;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_indexColorStar));
	jint temp1 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, temp1));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_mXoayArrow;
	jint temp0 = frame[4].i;
	clinit_nro_Effect_End(ctx);
	sp[1].o = (jobject)SF_nro_Effect_End_colorStar;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_indexColorStar))), (jint(2))));
	}
label_11:;
	{
	LINE_NUMBER(1089);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1097);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_13;
	}
	{
	LINE_NUMBER(1098);
	clinit_nro_Line(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Line);
	init_nro_Line(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1099);
	frame[6].i = ((jint(5)) + ((frame[4].i) * (45)));
	LINE_NUMBER(1101);
	jint temp0 = ((45) + ((frame[4].i) * (45))) - (jint(5));
	frame[7].i = temp0;
	if (temp0 > (frame[6].i)) goto label_18;
	}
	{
	LINE_NUMBER(1102);
	frame[7].i = ((frame[6].i) + (jint(1)));
	}
label_18:;
	{
	LINE_NUMBER(1105);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (frame[2].i), (frame[3].i));
	frame[8].i = temp0;
	LINE_NUMBER(1106);
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (frame[1].i), ((frame[1].i) + (jint(3))));
	frame[9].i = temp1;
	LINE_NUMBER(1107);
	jint temp2 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (frame[6].i), (frame[7].i));
	frame[6].i = temp2;
	LINE_NUMBER(1108);
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (13), (23));
	frame[7].i = temp3;
	LINE_NUMBER(1109);
	jint temp4 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (jint(4)));
	if (temp4 != 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(1110);
	jint temp0 = (jint)SM_nro_Res_fixangle_int_R_int(ctx, ((frame[6].i) % (360)));
	frame[6].i = temp0;
	LINE_NUMBER(1111);
	sp[0].o = frame[5].o;
	jint temp1 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy;
	jint temp2 = (jint)SM_nro_Res_atan_int_R_int(ctx, (frame[6].i));
	jint temp3 = temp1 - (temp2 * ((frame[8].i) + (frame[7].i)));
	jint temp4 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000;
	jint temp5 = (jint)SM_nro_Res_cos_int_R_int(ctx, (frame[6].i));
	jint temp6 = temp4 - (temp5 * ((frame[8].i) + (frame[7].i)));
	jint temp7 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy;
	jint temp8 = (jint)SM_nro_Res_atan_int_R_int(ctx, (frame[6].i));
	jint temp9 = temp7 - (temp8 * (frame[7].i));
	jint temp10 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000;
	jint temp11 = (jint)SM_nro_Res_cos_int_R_int(ctx, (frame[6].i));
	jint temp12 = temp10 - (temp11 * (frame[7].i));
	jint temp13 = (jint)SM_nro_Res_atan_int_R_int(ctx, (frame[6].i));
	jint temp14 = temp13 * (frame[9].i);
	jint temp15 = (jint)SM_nro_Res_cos_int_R_int(ctx, (frame[6].i));
	((func_nro_Line_setLine_int_int_int_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Line_setLine_int_int_int_int_int_int_boolean])(ctx, sp[0].o, temp3, temp6, temp9, temp12, temp14, (temp15 * (frame[9].i)), (frame[10].i));
	LINE_NUMBER(1112);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_VecEffEnd;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(1113);
	clinit_nro_Line(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Line);
	init_nro_Line(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1114);
	jint temp16 = (frame[6].i) + (180);
	jint temp17 = (jint)SM_nro_Res_random_Am_int_int_R_int(ctx, (jint(2)), (jint(5)));
	jint temp18 = (jint)SM_nro_Res_fixangle_int_R_int(ctx, ((temp16 + temp17) % (360)));
	frame[6].i = temp18;
	LINE_NUMBER(1115);
	sp[0].o = frame[5].o;
	jint temp19 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy;
	jint temp20 = (jint)SM_nro_Res_atan_int_R_int(ctx, (frame[6].i));
	jint temp21 = temp19 - (temp20 * ((frame[8].i) + (frame[7].i)));
	jint temp22 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000;
	jint temp23 = (jint)SM_nro_Res_cos_int_R_int(ctx, (frame[6].i));
	jint temp24 = temp22 - (temp23 * ((frame[8].i) + (frame[7].i)));
	jint temp25 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_vy;
	jint temp26 = (jint)SM_nro_Res_atan_int_R_int(ctx, (frame[6].i));
	jint temp27 = temp25 - (temp26 * (frame[7].i));
	jint temp28 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x1000;
	jint temp29 = (jint)SM_nro_Res_cos_int_R_int(ctx, (frame[6].i));
	jint temp30 = temp28 - (temp29 * (frame[7].i));
	jint temp31 = (jint)SM_nro_Res_atan_int_R_int(ctx, (frame[6].i));
	jint temp32 = temp31 * (frame[9].i);
	jint temp33 = (jint)SM_nro_Res_cos_int_R_int(ctx, (frame[6].i));
	((func_nro_Line_setLine_int_int_int_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Line_setLine_int_int_int_int_int_int_boolean])(ctx, sp[0].o, temp21, temp24, temp27, temp30, temp32, (temp33 * (frame[9].i)), (frame[10].i));
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_VecEffEnd;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(1097);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(1119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_set_End_Rock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:set_End_Rock", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1122);
	sp[0].o = frame[0].o;
	clinit_nro_FrameImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_int(ctx, sp[1].o, (8));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fraImgEff = (jref) sp[1].o;
	LINE_NUMBER(1123);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (23), (27));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fRemove = temp0;
	LINE_NUMBER(1124);
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(3)));
	frame[1].i = temp1;
	LINE_NUMBER(1125);
	((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dy_throw = (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y) - (40));
	LINE_NUMBER(1127);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(1129);
	clinit_nro_Point(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Point);
	init_nro_Point(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	jint temp0 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)SM_nro_Res_random_Am_int_int_R_int(ctx, (jint(0)), (20));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_x = (temp0 + temp1);
	LINE_NUMBER(1130);
	sp[0].o = frame[3].o;
	jint temp2 = (jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp3 = (jint)SM_nro_Res_random_Am_0_int_R_int(ctx, (7));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_y = (temp2 + temp3);
	LINE_NUMBER(1131);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (10)) goto label_11;
	}
	{
	LINE_NUMBER(1132);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fraImgEff;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, temp0, (((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame) - (jint(2))));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_vx = temp1;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1133);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect) != (11)) goto label_14;
	}
	{
	LINE_NUMBER(1134);
	sp[0].o = frame[3].o;
	jint temp0 = jint(2);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fraImgEff;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, temp0, ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_vx = temp1;
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1136);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fraImgEff;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, temp0, ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_vx = temp1;
	}
label_13:;
	{
	LINE_NUMBER(1139);
	jint temp0 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (jint(2)));
	LINE_NUMBER(1140);
	sp[0].o = frame[3].o;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(4)));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_vMax = (-temp1);
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_VecEffEnd;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(1127);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(1144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_a_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:a", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1147);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1148);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1150);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	if (((jint)((nro_Point *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_type) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1152);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	sp[0].o = (jobject)SM_nro_GameScr_findMobInMap_int_R_nro_Mob(ctx, ((jint)((nro_Point *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_id));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1153);
	((nro_Mob *) NULL_CHECK((frame[3].o)))->F_isMafuba = (frame[1].i);
	LINE_NUMBER(1154);
	((nro_Mob *) NULL_CHECK((frame[3].o)))->F_isHide = (jint(0));
	LINE_NUMBER(1155);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_T;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_xMFB = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	LINE_NUMBER(1156);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_U;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_yMFB = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	}
label_10:;
	LINE_NUMBER(1158);
	goto label_5;
label_7:;
	{
	LINE_NUMBER(1159);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1161);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID) != ((jint)((nro_Point *) NULL_CHECK((frame[3].o)))->F_id)) goto label_16;
	}
	{
	LINE_NUMBER(1162);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].o = sp[0].o;
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_listObj;
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Point *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_id));
	frame[4].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(1167);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1168);
	((nro_Char *) NULL_CHECK((frame[4].o)))->F_isMafuba = (frame[1].i);
	LINE_NUMBER(1169);
	((nro_Char *) NULL_CHECK((frame[4].o)))->F_isHide = (jint(0));
	LINE_NUMBER(1170);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_T;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_xMFB = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	LINE_NUMBER(1171);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_U;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_yMFB = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	}
label_5:;
	{
	LINE_NUMBER(1148);
	INST_IINC(2, 1);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(1178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_get_Img_Skill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:get_Img_Skill", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1181);
	frame[1].i = (jint(0));
	LINE_NUMBER(1182);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(1183);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1185);
	switch(((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeEffect)) {
		case 16: goto label_4;
		case 17: goto label_5;
		case 18: goto label_6;
		case 19: goto label_7;
		case 20: goto label_8;
		case 21: goto label_9;
		case 22: goto label_10;
		case 23: goto label_11;
		case 24: goto label_12;
		case 25: goto label_13;
		case 26: goto label_14;
		default: goto label_15;
	}
	}
label_4:;
	{
	LINE_NUMBER(1187);
	frame[1].i = (26);
	LINE_NUMBER(1188);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != 0) goto label_17;
	}
	{
	LINE_NUMBER(1189);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (7);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1190);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (28);
	frame[3].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(1193);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != (jint(1))) goto label_15;
	}
	{
	LINE_NUMBER(1194);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(2));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1195);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (23);
	frame[3].o = sp[0].o;
	goto label_15;
	}
label_5:;
	{
	LINE_NUMBER(1199);
	frame[1].i = (25);
	LINE_NUMBER(1200);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(2));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1201);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (16);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1202);
	goto label_15;
	}
label_6:;
	{
	LINE_NUMBER(1204);
	frame[1].i = (24);
	LINE_NUMBER(1205);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1206);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (9);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1207);
	goto label_15;
	}
label_7:;
	{
	LINE_NUMBER(1209);
	frame[1].i = (25);
	LINE_NUMBER(1210);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1211);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (14);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1212);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(1214);
	frame[1].i = (26);
	LINE_NUMBER(1215);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1216);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (21);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1217);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(1219);
	frame[1].i = (24);
	LINE_NUMBER(1220);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1221);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (10);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1222);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(1224);
	frame[1].i = (25);
	LINE_NUMBER(1225);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1226);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (15);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1227);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(1229);
	frame[1].i = (26);
	LINE_NUMBER(1230);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1231);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (22);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1232);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(1234);
	frame[1].i = (24);
	LINE_NUMBER(1235);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(4));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1236);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (13);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1237);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(1239);
	frame[1].i = (25);
	LINE_NUMBER(1240);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (6);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1241);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (18);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (19);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (20);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1242);
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1244);
	frame[1].i = (26);
	LINE_NUMBER(1245);
	frame[4].i = (jint(0));
	LINE_NUMBER(1246);
	frame[5].i = (jint(0));
	LINE_NUMBER(1247);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != 0) goto label_52;
	}
	{
	LINE_NUMBER(1248);
	frame[4].i = (jint(4));
	LINE_NUMBER(1249);
	frame[5].i = (25);
	goto label_55;
	}
label_52:;
	{
	LINE_NUMBER(1250);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != (jint(1))) goto label_56;
	}
	{
	LINE_NUMBER(1251);
	frame[4].i = (jint(5));
	LINE_NUMBER(1252);
	frame[5].i = (26);
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(1253);
	if (((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typeSub) != (jint(2))) goto label_55;
	}
	{
	LINE_NUMBER(1254);
	frame[4].i = (6);
	LINE_NUMBER(1255);
	frame[5].i = (27);
	}
label_55:;
	{
	LINE_NUMBER(1258);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[4].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(3));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1259);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[5].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (24);
	frame[3].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1262);
	if ((frame[2].o) == nullptr) goto label_62;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_62;
	{
	LINE_NUMBER(1263);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_FrameImage, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	((nro_Effect_End *) NULL_CHECK(sp[0].o))->F_fra_skill = (jref) sp[1].o;
	LINE_NUMBER(1265);
	frame[4].i = (jint(0));
	}
label_65:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_62;
	}
	{
	LINE_NUMBER(1267);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Skills_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_typePaint));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_68;
	}
	{
	LINE_NUMBER(1268);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))));
	frame[5].o = sp[0].o;
	}
label_68:;
	{
	LINE_NUMBER(1271);
	if ((frame[5].o) == nullptr) goto label_70;
	}
	{
	LINE_NUMBER(1272);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[5].o);
	}
label_70:;
	{
	LINE_NUMBER(1265);
	INST_IINC(4, 1);
	goto label_65;
	}
label_62:;
	LINE_NUMBER(1277);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_End_a_lib_mGraphics_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:a", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1280);
	sp[0].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	jint temp0 = ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_f) / ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_n_frame);
	sp[1].o = (jobject)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_fra_skill;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, (temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_nFrame)), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Effect_End *) NULL_CHECK((frame[0].o)))->F_dir), (frame[2].i), (frame[1].o));
	LINE_NUMBER(1281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_Effect_End(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect_End:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect_End(ctx);
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_short, 1), (29));
	jint temp0 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (68);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (264);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (30);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (120);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (66);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (280);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (111);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (68);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (90);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (68);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (125);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (68);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (47);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (282);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (10);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (40);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (92);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (525);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (7);
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (62);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (372);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (80);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (352);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (80);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (352);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (80);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (352);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (72);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (240);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (20);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (42);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (65);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (160);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (50);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (300);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (84);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (168);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (90);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (540);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (180);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (900);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (62);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (186);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (34);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (80);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (140);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (560);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (64);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (600);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (36);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (200);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (35);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (200);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (50);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (250);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(3)));
	ARRAY_ACCESS(jshort, sp[1].o, (jint(0))) = (50);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(1))) = (240);
	ARRAY_ACCESS(jshort, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	clinit_nro_Effect_End(ctx);
	SF_nro_Effect_End_arrInfoEff = sp[0].o;
	LINE_NUMBER(57);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(3)));
	jint temp29 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(16310304));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(16298056));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(16777215));
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(7045120));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(12643960));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(16777215));
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2407423));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(11987199));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(16777215));
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	clinit_nro_Effect_End(ctx);
	SF_nro_Effect_End_colorStar = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Effect_End[] {
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
	(void *) M_nro_Effect_End_create_Effect,
	(void *) M_nro_Effect_End_upd_End_Rock,
	(void *) M_nro_Effect_End_pnt_End_Rock_lib_mGraphics,
	(void *) M_nro_Effect_End_set_FireWork,
	(void *) M_nro_Effect_End_set_Skill_Destroy,
	(void *) M_nro_Effect_End_a_int_int_int_int,
	(void *) M_nro_Effect_End_set_End_Rock,
	(void *) M_nro_Effect_End_a_boolean,
	(void *) M_nro_Effect_End_get_Img_Skill,
	(void *) M_nro_Effect_End_a_lib_mGraphics_int,
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
	{ "create_Effect", "()V" },
	{ "upd_End_Rock", "()V" },
	{ "pnt_End_Rock", "(Llib/mGraphics;)V" },
	{ "set_FireWork", "()V" },
	{ "set_Skill_Destroy", "()V" },
	{ "a", "(IIII)V" },
	{ "set_End_Rock", "()V" },
	{ "a", "(Z)V" },
	{ "get_Img_Skill", "()V" },
	{ "a", "(Llib/mGraphics;I)V" },
};

static FieldMetadata fields[] {
	{ "VecEffEnd", &class_nro_MyVector, offsetof(nro_Effect_End, F_VecEffEnd), "Lnro/MyVector;", 2 },
	{ "fraImgEff", &class_nro_FrameImage, offsetof(nro_Effect_End, F_fraImgEff), "Lnro/FrameImage;", 2 },
	{ "mpaintone_Arrow", getArrayClass(&class_byte, 1), offsetof(nro_Effect_End, F_mpaintone_Arrow), "[B", 2 },
	{ "mImageArrow", getArrayClass(&class_byte, 1), offsetof(nro_Effect_End, F_mImageArrow), "[B", 2 },
	{ "typePaint", &class_int, offsetof(nro_Effect_End, F_typePaint), "I", 2 },
	{ "typeEffect", &class_int, offsetof(nro_Effect_End, F_typeEffect), "I", 2 },
	{ "typeSub", &class_int, offsetof(nro_Effect_End, F_typeSub), "I", 2 },
	{ "range", &class_int, offsetof(nro_Effect_End, F_range), "I", 2 },
	{ "fRemove", &class_int, offsetof(nro_Effect_End, F_fRemove), "I", 2 },
	{ "fMove", &class_int, offsetof(nro_Effect_End, F_fMove), "I", 2 },
	{ "n_frame", &class_int, offsetof(nro_Effect_End, F_n_frame), "I", 2 },
	{ "x", &class_int, offsetof(nro_Effect_End, F_x), "I", 2 },
	{ "y", &class_int, offsetof(nro_Effect_End, F_y), "I", 2 },
	{ "w", &class_int, offsetof(nro_Effect_End, F_w), "I", 2 },
	{ "h", &class_int, offsetof(nro_Effect_End, F_h), "I", 2 },
	{ "dir", &class_int, offsetof(nro_Effect_End, F_dir), "I", 2 },
	{ "dir_nguoc", &class_int, offsetof(nro_Effect_End, F_dir_nguoc), "I", 2 },
	{ "levelPaint", &class_int, offsetof(nro_Effect_End, F_levelPaint), "I", 1 },
	{ "f", &class_int, offsetof(nro_Effect_End, F_f), "I", 2 },
	{ "frame", &class_int, offsetof(nro_Effect_End, F_frame), "I", 2 },
	{ "fSpeed", &class_int, offsetof(nro_Effect_End, F_fSpeed), "I", 2 },
	{ "vx", &class_int, offsetof(nro_Effect_End, F_vx), "I", 2 },
	{ "vy", &class_int, offsetof(nro_Effect_End, F_vy), "I", 2 },
	{ "x1000", &class_int, offsetof(nro_Effect_End, F_x1000), "I", 2 },
	{ "y1000", &class_int, offsetof(nro_Effect_End, F_y1000), "I", 2 },
	{ "vx1000", &class_int, offsetof(nro_Effect_End, F_vx1000), "I", 2 },
	{ "vy1000", &class_int, offsetof(nro_Effect_End, F_vy1000), "I", 2 },
	{ "dy_throw", &class_int, offsetof(nro_Effect_End, F_dy_throw), "I", 2 },
	{ "vMax", &class_int, offsetof(nro_Effect_End, F_vMax), "I", 2 },
	{ "toX", &class_int, offsetof(nro_Effect_End, F_toX), "I", 2 },
	{ "timeRemove", &class_short, offsetof(nro_Effect_End, F_timeRemove), "S", 2 },
	{ "time", &class_long, offsetof(nro_Effect_End, F_time), "J", 2 },
	{ "isRemove", &class_boolean, offsetof(nro_Effect_End, F_isRemove), "Z", 1 },
	{ "isAddSub", &class_boolean, offsetof(nro_Effect_End, F_isAddSub), "Z", 2 },
	{ "charUse", &class_nro_Char, offsetof(nro_Effect_End, F_charUse), "Lnro/Char;", 2 },
	{ "listObj", getArrayClass(&class_nro_Point, 1), offsetof(nro_Effect_End, F_listObj), "[Lnro/Point;", 2 },
	{ "target", &class_nro_Point, offsetof(nro_Effect_End, F_target), "Lnro/Point;", 2 },
	{ "arrInfoEff", getArrayClass(&class_short, 2), (intptr_t) &SF_nro_Effect_End_arrInfoEff, "[[S", 9 },
	{ "goc_Arc", &class_int, offsetof(nro_Effect_End, F_goc_Arc), "I", 2 },
	{ "va", &class_int, offsetof(nro_Effect_End, F_va), "I", 2 },
	{ "gocT_Arc", &class_int, offsetof(nro_Effect_End, F_gocT_Arc), "I", 2 },
	{ "P", &class_int, offsetof(nro_Effect_End, F_P), "I", 2 },
	{ "Q", &class_int, offsetof(nro_Effect_End, F_Q), "I", 2 },
	{ "colorpaint", getArrayClass(&class_int, 1), offsetof(nro_Effect_End, F_colorpaint), "[I", 2 },
	{ "S", getArrayClass(&class_int, 1), offsetof(nro_Effect_End, F_S), "[I", 2 },
	{ "T", getArrayClass(&class_int, 1), offsetof(nro_Effect_End, F_T), "[I", 2 },
	{ "U", getArrayClass(&class_int, 1), offsetof(nro_Effect_End, F_U), "[I", 2 },
	{ "colorStar", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_Effect_End_colorStar, "[[I", 10 },
	{ "mXoayArrow", getArrayClass(&class_int, 1), offsetof(nro_Effect_End, F_mXoayArrow), "[I", 2 },
	{ "indexColorStar", &class_int, offsetof(nro_Effect_End, F_indexColorStar), "I", 2 },
	{ "xline", &class_int, offsetof(nro_Effect_End, F_xline), "I", 2 },
	{ "yline", &class_int, offsetof(nro_Effect_End, F_yline), "I", 2 },
	{ "fra_skill", getArrayClass(&class_nro_FrameImage, 1), offsetof(nro_Effect_End, F_fra_skill), "[Lnro/FrameImage;", 2 },
};

static MethodMetadata methods[] {
	{ "getImage", (intptr_t) SM_nro_Effect_End_getImage_int_R_javax_microedition_lcdui_Image, 0, "(I)Ljavax/microedition/lcdui/Image;", 9 },
	{ "<init>", (intptr_t) init_nro_Effect_End_int_int_int_nro_Char_nro_Point_int_short_short, 0, "(IIILnro/Char;Lnro/Point;ISS)V", 1 },
	{ "<init>", (intptr_t) init_nro_Effect_End_int_int_int_int_int_int_int_short_Array1_nro_Point, 0, "(IIIIIIIS[Lnro/Point;)V", 1 },
	{ "create_Effect", (intptr_t) M_nro_Effect_End_create_Effect, VTABLE_nro_Effect_End_create_Effect, "()V", 2 },
	{ "upd_End_Rock", (intptr_t) M_nro_Effect_End_upd_End_Rock, VTABLE_nro_Effect_End_upd_End_Rock, "()V", 17 },
	{ "pnt_End_Rock", (intptr_t) M_nro_Effect_End_pnt_End_Rock_lib_mGraphics, VTABLE_nro_Effect_End_pnt_End_Rock_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "set_FireWork", (intptr_t) M_nro_Effect_End_set_FireWork, VTABLE_nro_Effect_End_set_FireWork, "()V", 2 },
	{ "set_Skill_Destroy", (intptr_t) M_nro_Effect_End_set_Skill_Destroy, VTABLE_nro_Effect_End_set_Skill_Destroy, "()V", 2 },
	{ "a", (intptr_t) M_nro_Effect_End_a_int_int_int_int, VTABLE_nro_Effect_End_a_int_int_int_int, "(IIII)V", 2 },
	{ "set_End_Rock", (intptr_t) M_nro_Effect_End_set_End_Rock, VTABLE_nro_Effect_End_set_End_Rock, "()V", 2 },
	{ "a", (intptr_t) M_nro_Effect_End_a_boolean, VTABLE_nro_Effect_End_a_boolean, "(Z)V", 2 },
	{ "get_Img_Skill", (intptr_t) M_nro_Effect_End_get_Img_Skill, VTABLE_nro_Effect_End_get_Img_Skill, "()V", 2 },
	{ "a", (intptr_t) M_nro_Effect_End_a_lib_mGraphics_int, VTABLE_nro_Effect_End_a_lib_mGraphics_int, "(Llib/mGraphics;I)V", 2 },
	{ "<clinit>", (intptr_t) clinit_nro_Effect_End, 0, "()V", 8 },
};

Class class_nro_Effect_End{
		.nativeName = (intptr_t) "nro/Effect_End",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Effect_End),
		.classVtable = (intptr_t) vtable_nro_Effect_End,
		.staticInitializer = (intptr_t) clinit_nro_Effect_End,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Effect_End,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 53,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Effect_End = registerClass(&class_nro_Effect_End);

}

