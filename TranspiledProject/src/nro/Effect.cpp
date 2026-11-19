#include "nro/Effect.h"
#include "java/lang/Exception.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "nro/EffectData.h"
#include "nro/Service.h"
#include "nro/Effect.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/Res.h"
#include "lib/image/MyStream.h"
#include "nro/Char.h"
#include "java/lang/Throwable.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_Effect_vEffData;
jobject SF_nro_Effect_lastEff;
jobject SF_nro_Effect_newEff;
jobject SF_nro_Effect_dowloadEff;

void mark_nro_Effect(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Effect_vEffData)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect_vEffData)->clazz)->markFunction)((jobject) SF_nro_Effect_vEffData, mark, depth + 1);
		if (SF_nro_Effect_lastEff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect_lastEff)->clazz)->markFunction)((jobject) SF_nro_Effect_lastEff, mark, depth + 1);
		if (SF_nro_Effect_newEff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect_newEff)->clazz)->markFunction)((jobject) SF_nro_Effect_newEff, mark, depth + 1);
		if (SF_nro_Effect_dowloadEff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect_dowloadEff)->clazz)->markFunction)((jobject) SF_nro_Effect_dowloadEff, mark, depth + 1);
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
	auto self = (nro_Effect *) object;
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_khangia1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_khangia1)->clazz)->markFunction)((jobject) self->F_khangia1, mark, depth + 1);
	if (self->F_khangia2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_khangia2)->clazz)->markFunction)((jobject) self->F_khangia2, mark, depth + 1);
	if (self->F_khangia3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_khangia3)->clazz)->markFunction)((jobject) self->F_khangia3, mark, depth + 1);
	if (self->F_khangia4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_khangia4)->clazz)->markFunction)((jobject) self->F_khangia4, mark, depth + 1);
	if (self->F_khangia5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_khangia5)->clazz)->markFunction)((jobject) self->F_khangia5, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void SM_nro_Effect_removeEffData_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:removeEffData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(41);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(43);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_EffectData, sp[0].o);
	frame[2].o = sp[0].o;
	if (((jint)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_ID) != (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[2].o)))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(45);
	((nro_EffectData *) NULL_CHECK((frame[2].o)))->F_img = (jref) (jobject(nullptr));
	LINE_NUMBER(46);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(41);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_Effect_getEffDataById_int_R_nro_EffectData(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:getEffDataById", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(54);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(56);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_EffectData, sp[0].o);
	frame[2].o = sp[0].o;
	if (((jint)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_ID) != (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(54);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void init_nro_Effect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(64);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(1));
	LINE_NUMBER(25);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isStand = (jint(0));
	LINE_NUMBER(27);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_trans = (jint(0));
	LINE_NUMBER(28);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_timeExist = (jlong(0));
	LINE_NUMBER(32);
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
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia1 = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(3));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia2 = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(5));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia3 = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (7);
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia4 = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia5 = (jref) sp[1].o;
	LINE_NUMBER(37);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isGetTime = (jint(0));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Effect_int_nro_Char_int_int_int_byte(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jbyte param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(1));
	LINE_NUMBER(25);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isStand = (jint(0));
	LINE_NUMBER(27);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_trans = (jint(0));
	LINE_NUMBER(28);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_timeExist = (jlong(0));
	LINE_NUMBER(32);
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
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia1 = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(3));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia2 = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(5));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia3 = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (7);
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia4 = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia5 = (jref) sp[1].o;
	LINE_NUMBER(37);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isGetTime = (jint(0));
	LINE_NUMBER(68);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[2].o);
	LINE_NUMBER(69);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId = (frame[1].i);
	LINE_NUMBER(70);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_layer = (frame[3].i);
	LINE_NUMBER(71);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_loop = (frame[4].i);
	LINE_NUMBER(72);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoop = (frame[5].i);
	LINE_NUMBER(73);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isStand = (frame[6].i);
	LINE_NUMBER(74);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, (frame[1].i));
	if (sp[0].o != nullptr) goto label_26;
	}
	{
	LINE_NUMBER(76);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_ID = (frame[1].i);
	LINE_NUMBER(77);
	if ((frame[1].i) < (42)) goto label_30;
	}
	{
	if ((frame[1].i) > (46)) goto label_30;
	}
	{
	LINE_NUMBER(78);
	frame[1].i = (106);
	}
label_30:;
	{
	LINE_NUMBER(81);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(82);
	frame[9].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(87);
	goto label_33;
label_2:;
	LINE_NUMBER(86);
	INST_ASTORE(10);
label_33:;
	{
	LINE_NUMBER(89);
	if ((frame[9].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getEffData_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getEffData_short])(ctx, sp[0].o, (jshort((frame[1].i))));
	goto label_35;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(94);
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_io_InputStream_close])(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(97);
	goto label_36;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(95);
	frame[10].o = sp[0].o;
	LINE_NUMBER(96);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[10].o));
	}
label_36:;
	{
	LINE_NUMBER(99);
	if ((frame[1].i) <= (100)) goto label_38;
	}
	{
	if ((frame[1].i) >= (200)) goto label_38;
	}
	{
	LINE_NUMBER(100);
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, (frame[7].o), (frame[8].o));
	goto label_40;
	}
label_38:;
	{
	LINE_NUMBER(102);
	((func_nro_EffectData_readData_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_nro_EffectData_readData_java_lang_String])(ctx, (frame[7].o), (frame[8].o));
	}
label_40:;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[7].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/img.png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
label_35:;
	{
	LINE_NUMBER(108);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	}
label_26:;
	{
	LINE_NUMBER(111);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexFrom = (jint(-1));
	LINE_NUMBER(112);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexTo = (jint(-1));
	LINE_NUMBER(113);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_trans = (jint(-1));
	LINE_NUMBER(114);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff = (jint(4));
	LINE_NUMBER(115);
	if ((frame[1].i) != (78)) goto label_45;
	}
	{
	LINE_NUMBER(116);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff = (jint(5));
	}
label_45:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_nro_Effect_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(121);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(1));
	LINE_NUMBER(25);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isStand = (jint(0));
	LINE_NUMBER(27);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_trans = (jint(0));
	LINE_NUMBER(28);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_timeExist = (jlong(0));
	LINE_NUMBER(32);
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
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia1 = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(3));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia2 = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(5));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia3 = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (7);
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia4 = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_khangia5 = (jref) sp[1].o;
	LINE_NUMBER(37);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isGetTime = (jint(0));
	LINE_NUMBER(122);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].i);
	LINE_NUMBER(123);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].i);
	LINE_NUMBER(124);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId = (frame[1].i);
	LINE_NUMBER(125);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_layer = (frame[4].i);
	LINE_NUMBER(126);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_loop = (frame[5].i);
	LINE_NUMBER(127);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoop = (frame[6].i);
	LINE_NUMBER(128);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, (frame[1].i));
	if (sp[0].o != nullptr) goto label_26;
	}
	{
	LINE_NUMBER(130);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_ID = (frame[1].i);
	LINE_NUMBER(131);
	if ((frame[1].i) < (42)) goto label_30;
	}
	{
	if ((frame[1].i) > (46)) goto label_30;
	}
	{
	LINE_NUMBER(132);
	frame[1].i = (106);
	}
label_30:;
	{
	LINE_NUMBER(135);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(136);
	frame[9].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(141);
	goto label_33;
label_2:;
	LINE_NUMBER(140);
	INST_ASTORE(10);
label_33:;
	{
	LINE_NUMBER(143);
	if ((frame[9].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getEffData_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getEffData_short])(ctx, sp[0].o, (jshort((frame[1].i))));
	goto label_35;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(148);
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_io_InputStream_close])(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(151);
	goto label_36;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(149);
	frame[10].o = sp[0].o;
	LINE_NUMBER(150);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[10].o));
	}
label_36:;
	{
	LINE_NUMBER(153);
	if ((frame[1].i) <= (100)) goto label_38;
	}
	{
	if ((frame[1].i) >= (200)) goto label_38;
	}
	{
	LINE_NUMBER(154);
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, (frame[7].o), (frame[8].o));
	goto label_40;
	}
label_38:;
	{
	LINE_NUMBER(156);
	((func_nro_EffectData_readData_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_nro_EffectData_readData_java_lang_String])(ctx, (frame[7].o), (frame[8].o));
	}
label_40:;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[7].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/img.png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
label_35:;
	{
	LINE_NUMBER(162);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(163);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_lastEff;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (20)) goto label_42;
	}
	{
	LINE_NUMBER(164);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_lastEff;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	SM_nro_Effect_removeEffData_int(ctx, temp0);
	LINE_NUMBER(165);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_lastEff;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	}
label_42:;
	{
	LINE_NUMBER(168);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_lastEff;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(171);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexFrom = (jint(-1));
	LINE_NUMBER(172);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexTo = (jint(-1));
	LINE_NUMBER(173);
	if ((frame[1].i) != (78)) goto label_47;
	}
	{
	LINE_NUMBER(174);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff = (jint(5));
	goto label_49;
	}
label_47:;
	{
	LINE_NUMBER(176);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff = (jint(1));
	}
label_49:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	jint temp0 = (jint)SM_nro_Effect_a_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_50;
	}
	{
	LINE_NUMBER(180);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_newEff;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_50:;
	LINE_NUMBER(183);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_Effect_a_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:a", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(186);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_newEff;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(187);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_newEff;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(186);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_nro_Effect_b_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:b", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isPaint);
	}

	popStackFrame(ctx);
}

void M_nro_Effect_a_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:a", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)M_nro_Effect_b_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	frame[4].o = sp[0].o;
	LINE_NUMBER(202);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[4].o)))->F_img;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(203);
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, (frame[4].o), (frame[1].o), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_currFrame), (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_x) + (frame[2].i)), (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_y) + (frame[3].i)), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_trans), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_1:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:paint", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)M_nro_Effect_b_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, (frame[1].o), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_currFrame), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_trans), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_layer));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(216);
	frame[2].o = sp[0].o;
	LINE_NUMBER(217);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Effect "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" err at frame "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_currFrame));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" vitri "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"   "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_layer));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(218);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Effect_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(228);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId) < (42)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId) > (46)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(229);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId) != (42)) goto label_29;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_khangia1;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_currFrame = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t)));
	}
label_29:;
	{
	LINE_NUMBER(233);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId) != (43)) goto label_31;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_khangia2;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_currFrame = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t)));
	}
label_31:;
	{
	LINE_NUMBER(237);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId) != (44)) goto label_33;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_khangia3;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_currFrame = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t)));
	}
label_33:;
	{
	LINE_NUMBER(241);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId) != (45)) goto label_35;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_khangia4;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_currFrame = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t)));
	}
label_35:;
	{
	LINE_NUMBER(245);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId) != (46)) goto label_37;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_khangia5;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_currFrame = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t)));
	}
label_37:;
	{
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	LINE_NUMBER(250);
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t;
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_khangia1;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_1;
	}
	{
	LINE_NUMBER(251);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t = (jint(0));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(254);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(258);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(265);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (jint(5))) goto label_41;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	frame[1].o = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe);
	LINE_NUMBER(268);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(269);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[3].o)))->F_anim_data;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_46;
	}
	{
	LINE_NUMBER(270);
	frame[2].i = (jint(0));
	}
label_46:;
	{
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[3].o)))->F_anim_data;
	sp += 1;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != nullptr) goto label_48;
	}
	{
	sp[0].o = (jobject) createArray(ctx, &class_short, (jint(1)));
	sp += 1;
	goto label_49;
	}
label_48:;
	{
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK((frame[3].o)))->F_anim_data;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_49:;
	{
	sp -= 2;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(274);
	goto label_51;
	}
label_41:;
	{
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Effect_getEffDataById_int_R_nro_EffectData(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	sp[1].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_arrFrame;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	}
label_51:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	LINE_NUMBER(279);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isGetTime) != 0) goto label_54;
	}
	{
	LINE_NUMBER(280);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isGetTime = (jint(1));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	frame[1].i = temp0;
	if (temp0 <= 0) goto label_58;
	}
	{
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) == (jint(1))) goto label_58;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (frame[1].i));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = temp0;
	}
label_58:;
	{
	LINE_NUMBER(286);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) != 0) goto label_54;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexFrom), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexTo));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = temp0;
	}
label_54:;
	{
	LINE_NUMBER(291);
	switch(((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff)) {
		case 0: goto label_61;
		case 1: goto label_62;
		case 2: goto label_63;
		case 3: goto label_62;
		case 4: goto label_64;
		case 5: goto label_65;
		default: goto label_66;
	}
	}
label_61:;
	{
	LINE_NUMBER(293);
	jint temp0 = ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_x) - (50);
	jint temp1 = ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_y) - (50);
	jint temp2 = 100;
	jint temp3 = 100;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp5 = (jint)SM_nro_Res_inRect_int_int_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy));
	if (temp5 == 0) goto label_67;
	}
	{
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t) <= ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexFrom)) goto label_67;
	}
	{
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t) >= ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexTo)) goto label_67;
	}
	{
	LINE_NUMBER(294);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t) >= ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexTo)) goto label_69;
	}
	{
	LINE_NUMBER(295);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t = ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexTo);
	}
label_69:;
	{
	LINE_NUMBER(298);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_o = (jint(1));
	}
label_67:;
	{
	LINE_NUMBER(301);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_o) != 0) goto label_71;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	LINE_NUMBER(303);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t) != ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexTo)) goto label_66;
	}
	{
	LINE_NUMBER(304);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t = ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_indexFrom);
	goto label_66;
	}
label_71:;
	{
	LINE_NUMBER(306);
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t;
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_66;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	goto label_66;
	}
label_62:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t;
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_66;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	goto label_66;
	}
label_63:;
	{
	LINE_NUMBER(317);
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t;
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_77;
	}
	{
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	}
label_77:;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_tLoopCount = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_tLoopCount) + (jint(1)));
	LINE_NUMBER(322);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoopCount) != ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoop)) goto label_66;
	}
	{
	LINE_NUMBER(323);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoopCount = (jint(0));
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_trans = temp0;
	goto label_66;
	}
label_64:;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy);
	LINE_NUMBER(330);
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t;
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_66;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	goto label_66;
	}
label_65:;
	{
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir) != (jint(1))) goto label_85;
	}
	INST_ICONST(0);
	goto label_86;
label_85:;
	INST_ICONST(1);
label_86:;
	{
	sp -= 2;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_trans = sp[1].i;
	LINE_NUMBER(336);
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir) != (jint(1))) goto label_88;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) - (15));
	goto label_90;
	}
label_88:;
	{
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) + (15));
	}
label_90:;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isMonkey) != 0) goto label_91;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (25));
	goto label_93;
	}
label_91:;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (35));
	}
label_93:;
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t;
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_66;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	}
label_66:;
	{
	LINE_NUMBER(353);
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t;
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 > ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_52;
	}
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_currFrame = ((jint)ARRAY_ACCESS(jshort, sp[1].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t)));
	}
label_52:;
	{
	LINE_NUMBER(358);
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t;
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(359);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(363);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) == 0) goto label_97;
	}
	{
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (jint(3))) goto label_98;
	}
label_97:;
	{
	LINE_NUMBER(364);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(0));
	}
label_98:;
	{
	LINE_NUMBER(367);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoop) != (jint(-1))) goto label_99;
	}
	{
	LINE_NUMBER(368);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_99:;
	{
	LINE_NUMBER(371);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (jint(2))) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(372);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t = (jint(0));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(373);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(376);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (jint(1))) goto label_102;
	}
	{
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_loop) != (jint(1))) goto label_102;
	}
	{
	LINE_NUMBER(377);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(0));
	}
label_102:;
	{
	LINE_NUMBER(380);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) == (jint(4))) goto label_104;
	}
	{
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff) != (jint(5))) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
label_104:;
	{
	LINE_NUMBER(381);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_loop) != (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(382);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t = (jint(0));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(383);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_tLoopCount = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_tLoopCount) + (jint(1)));
	LINE_NUMBER(387);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoopCount) != ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoop)) goto label_20;
	}
	{
	LINE_NUMBER(388);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoopCount = (jint(0));
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_loop = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_loop) - (jint(1)));
	LINE_NUMBER(390);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t = (jint(0));
	LINE_NUMBER(391);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_loop) != 0) goto label_20;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_c;
	((func_nro_Char_removeEffChar_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_removeEffChar_int_int])(ctx, sp[0].o, (jint(0)), ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	}
label_20:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(396);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(399);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_o = (jint(0));
	LINE_NUMBER(400);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_loop) != (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_tLoopCount = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_tLoopCount) + (jint(1)));
	LINE_NUMBER(402);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t = (jint(0));
	LINE_NUMBER(403);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoopCount) != ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoop)) { popExceptionFrames(frameRef, 1); goto label_116; }
	}
	{
	LINE_NUMBER(404);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoopCount = (jint(0));
	LINE_NUMBER(405);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoop) <= (jint(1))) { popExceptionFrames(frameRef, 1); goto label_116; }
	}
	{
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_trans = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(407);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_tLoopCount = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_tLoopCount) + (jint(1)));
	LINE_NUMBER(412);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_t = (jint(0));
	LINE_NUMBER(413);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoopCount) != ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoop)) { popExceptionFrames(frameRef, 1); goto label_116; }
	}
	{
	LINE_NUMBER(414);
	((nro_Effect *) NULL_CHECK((frame[0].o)))->F_tLoopCount = (jint(0));
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_loop = (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_loop) - (jint(1)));
	LINE_NUMBER(416);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_loop) != 0) { popExceptionFrames(frameRef, 1); goto label_116; }
	}
	{
	LINE_NUMBER(417);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(418);
	popStackFrame(ctx);
	INST_RETURN();
label_116:;
	LINE_NUMBER(426);
	goto label_126;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(422);
	frame[1].o = sp[0].o;
	LINE_NUMBER(423);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"err  Effect.update: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_effId));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"  "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Effect *) NULL_CHECK((frame[0].o)))->F_typeEff));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(424);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	LINE_NUMBER(425);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_126:;
	LINE_NUMBER(428);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_Effect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect(ctx);
	{
	LINE_NUMBER(26);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vEffData"_j))));
	clinit_nro_Effect(ctx);
	SF_nro_Effect_vEffData = sp[0].o;
	LINE_NUMBER(29);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vLastEff"_j))));
	clinit_nro_Effect(ctx);
	SF_nro_Effect_lastEff = sp[0].o;
	LINE_NUMBER(30);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vNewEff"_j))));
	clinit_nro_Effect(ctx);
	SF_nro_Effect_newEff = sp[0].o;
	LINE_NUMBER(31);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vdowloadEff"_j))));
	clinit_nro_Effect(ctx);
	SF_nro_Effect_dowloadEff = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Effect[] {
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
	(void *) M_nro_Effect_b_R_boolean,
	(void *) M_nro_Effect_a_lib_mGraphics_int_int,
	(void *) M_nro_Effect_paint_lib_mGraphics,
	(void *) M_nro_Effect_update,
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
	{ "b", "()Z" },
	{ "a", "(Llib/mGraphics;II)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "update", "()V" },
};

static FieldMetadata fields[] {
	{ "effId", &class_int, offsetof(nro_Effect, F_effId), "I", 1 },
	{ "typeEff", &class_int, offsetof(nro_Effect, F_typeEff), "I", 1 },
	{ "indexFrom", &class_int, offsetof(nro_Effect, F_indexFrom), "I", 1 },
	{ "indexTo", &class_int, offsetof(nro_Effect, F_indexTo), "I", 1 },
	{ "o", &class_boolean, offsetof(nro_Effect, F_o), "Z", 2 },
	{ "c", &class_nro_Char, offsetof(nro_Effect, F_c), "Lnro/Char;", 2 },
	{ "t", &class_int, offsetof(nro_Effect, F_t), "I", 1 },
	{ "currFrame", &class_int, offsetof(nro_Effect, F_currFrame), "I", 2 },
	{ "x", &class_int, offsetof(nro_Effect, F_x), "I", 1 },
	{ "y", &class_int, offsetof(nro_Effect, F_y), "I", 1 },
	{ "loop", &class_int, offsetof(nro_Effect, F_loop), "I", 2 },
	{ "tLoop", &class_int, offsetof(nro_Effect, F_tLoop), "I", 2 },
	{ "tLoopCount", &class_int, offsetof(nro_Effect, F_tLoopCount), "I", 2 },
	{ "isPaint", &class_boolean, offsetof(nro_Effect, F_isPaint), "Z", 2 },
	{ "layer", &class_int, offsetof(nro_Effect, F_layer), "I", 1 },
	{ "isStand", &class_int, offsetof(nro_Effect, F_isStand), "I", 1 },
	{ "vEffData", &class_nro_MyVector, (intptr_t) &SF_nro_Effect_vEffData, "Lnro/MyVector;", 9 },
	{ "trans", &class_int, offsetof(nro_Effect, F_trans), "I", 1 },
	{ "timeExist", &class_long, offsetof(nro_Effect, F_timeExist), "J", 1 },
	{ "lastEff", &class_nro_MyVector, (intptr_t) &SF_nro_Effect_lastEff, "Lnro/MyVector;", 9 },
	{ "newEff", &class_nro_MyVector, (intptr_t) &SF_nro_Effect_newEff, "Lnro/MyVector;", 9 },
	{ "dowloadEff", &class_nro_MyVector, (intptr_t) &SF_nro_Effect_dowloadEff, "Lnro/MyVector;", 9 },
	{ "khangia1", getArrayClass(&class_int, 1), offsetof(nro_Effect, F_khangia1), "[I", 2 },
	{ "khangia2", getArrayClass(&class_int, 1), offsetof(nro_Effect, F_khangia2), "[I", 2 },
	{ "khangia3", getArrayClass(&class_int, 1), offsetof(nro_Effect, F_khangia3), "[I", 2 },
	{ "khangia4", getArrayClass(&class_int, 1), offsetof(nro_Effect, F_khangia4), "[I", 2 },
	{ "khangia5", getArrayClass(&class_int, 1), offsetof(nro_Effect, F_khangia5), "[I", 2 },
	{ "isGetTime", &class_boolean, offsetof(nro_Effect, F_isGetTime), "Z", 2 },
	{ "data", getArrayClass(&class_short, 1), offsetof(nro_Effect, F_data), "[S", 2 },
};

static MethodMetadata methods[] {
	{ "removeEffData", (intptr_t) SM_nro_Effect_removeEffData_int, 0, "(I)V", 10 },
	{ "getEffDataById", (intptr_t) SM_nro_Effect_getEffDataById_int_R_nro_EffectData, 0, "(I)Lnro/EffectData;", 9 },
	{ "<init>", (intptr_t) init_nro_Effect, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_nro_Effect_int_nro_Char_int_int_int_byte, 0, "(ILnro/Char;IIIB)V", 1 },
	{ "<init>", (intptr_t) init_nro_Effect_int_int_int_int_int_int, 0, "(IIIIII)V", 1 },
	{ "a", (intptr_t) SM_nro_Effect_a_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 10 },
	{ "b", (intptr_t) M_nro_Effect_b_R_boolean, VTABLE_nro_Effect_b_R_boolean, "()Z", 2 },
	{ "a", (intptr_t) M_nro_Effect_a_lib_mGraphics_int_int, VTABLE_nro_Effect_a_lib_mGraphics_int_int, "(Llib/mGraphics;II)V", 17 },
	{ "paint", (intptr_t) M_nro_Effect_paint_lib_mGraphics, VTABLE_nro_Effect_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_Effect_update, VTABLE_nro_Effect_update, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_Effect, 0, "()V", 8 },
};

Class class_nro_Effect{
		.nativeName = (intptr_t) "nro/Effect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Effect),
		.classVtable = (intptr_t) vtable_nro_Effect,
		.staticInitializer = (intptr_t) clinit_nro_Effect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Effect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Effect = registerClass(&class_nro_Effect);

}

