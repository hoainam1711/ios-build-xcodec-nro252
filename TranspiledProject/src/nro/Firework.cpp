#include "nro/Firework.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "nro/Controller2.h"
#include "java/util/Random.h"
#include "java/util/Vector.h"
#include "nro/Res.h"
#include "lib/mGraphics.h"
#include "lib/image/MyStream.h"
#include "main/GameCanvas.h"
#include "nro/Firework.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_Firework_random;
jobject SF_nro_Firework_b;
jint SF_nro_Firework_x;
jint SF_nro_Firework_y;
jint SF_nro_Firework_angle;
jint SF_nro_Firework_x0;
jint SF_nro_Firework_g;
jint SF_nro_Firework_t;
jint SF_nro_Firework_v;
jfloat SF_nro_Firework_a;
jobject SF_nro_Firework_arr_x;
jobject SF_nro_Firework_arr_y;
jbool SF_nro_Firework_act;
jlong SF_nro_Firework_last;
jlong SF_nro_Firework_delay;

void mark_nro_Firework(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Firework_random)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Firework_random)->clazz)->markFunction)((jobject) SF_nro_Firework_random, mark, depth + 1);
		if (SF_nro_Firework_b)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Firework_b)->clazz)->markFunction)((jobject) SF_nro_Firework_b, mark, depth + 1);
		if (SF_nro_Firework_arr_x)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Firework_arr_x)->clazz)->markFunction)((jobject) SF_nro_Firework_arr_x, mark, depth + 1);
		if (SF_nro_Firework_arr_y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Firework_arr_y)->clazz)->markFunction)((jobject) SF_nro_Firework_arr_y, mark, depth + 1);
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
	auto self = (nro_Firework *) object;
}

void init_nro_Firework(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Firework:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Firework(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Firework_paint_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Firework:paint", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Firework(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	if ((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_act) == 0) goto label_1;
	}
	{
	LINE_NUMBER(29);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_arr_y;
	jint temp0 = jint(2);
	clinit_nro_Firework(ctx);
	sp[1].o = (jobject)SF_nro_Firework_arr_y;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))));
	LINE_NUMBER(30);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_arr_x;
	jint temp1 = jint(2);
	clinit_nro_Firework(ctx);
	sp[1].o = (jobject)SF_nro_Firework_arr_x;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))));
	LINE_NUMBER(31);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_arr_y;
	jint temp2 = jint(1);
	clinit_nro_Firework(ctx);
	sp[1].o = (jobject)SF_nro_Firework_arr_y;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(32);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_arr_x;
	jint temp3 = jint(1);
	clinit_nro_Firework(ctx);
	sp[1].o = (jobject)SF_nro_Firework_arr_x;
	ARRAY_ACCESS(jint, sp[0].o, temp3) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(33);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_arr_y;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_nro_Firework(ctx), (jint)SF_nro_Firework_y);
	LINE_NUMBER(34);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_arr_x;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_nro_Firework(ctx), (jint)SF_nro_Firework_x);
	LINE_NUMBER(35);
	jdouble temp4 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (((jdouble((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_angle))) * (jdouble(3.141592653589793))) / (jdouble(180.0))));
	clinit_nro_Firework(ctx);
	SF_nro_Firework_x = ((jint(((temp4 * (jdouble((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_v)))) * (jdouble((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_t)))))) + (clinit_nro_Firework(ctx), (jint)SF_nro_Firework_x0));
	LINE_NUMBER(36);
	jdouble temp5 = jdouble((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_v));
	jdouble temp6 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (((jdouble((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_angle))) * (jdouble(3.141592653589793))) / (jdouble(180.0))));
	clinit_nro_Firework(ctx);
	SF_nro_Firework_y = (jint((((temp5 * temp6) * (jdouble((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_t)))) - (jdouble(((((jfloat(0)) * (jfloat((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_t)))) * (jfloat((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_t)))) / (jfloat(2))))))));
	LINE_NUMBER(37);
	jlong temp7 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp7 - (clinit_nro_Firework(ctx), (jlong)SF_nro_Firework_last)), (clinit_nro_Firework(ctx), (jlong)SF_nro_Firework_delay))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(38);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_t = ((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_t) + (jint(1)));
	LINE_NUMBER(39);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_last = temp0;
	}
label_1:;
	{
	LINE_NUMBER(43);
	if ((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_t) <= (32)) goto label_13;
	}
	clinit_nro_Firework(ctx);
	(sp++)->i = SF_nro_Firework_act;
	if ((--sp)->i == 0) goto label_13;
	{
	LINE_NUMBER(44);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_act = (jint(0));
	LINE_NUMBER(45);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_b;
	((func_java_util_Vector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(46);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_b;
	clinit_lib_image_MyStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_image_MyStream);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (50), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (50)));
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (100)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	init_lib_image_MyStream_int_int_int_int(ctx, sp[1].o, temp0, temp1, (jint(5)), (72));
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(49);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(50);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(51);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(16711680)));
	LINE_NUMBER(53);
	frame[1].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_b;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_21;
	}
	{
	LINE_NUMBER(54);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_b;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_lib_image_MyStream, sp[0].o));
	LINE_NUMBER(55);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(56);
	frame[4].o = (frame[2].o);
	LINE_NUMBER(58);
	frame[5].i = (jint(0));
	}
label_26:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((lib_image_MyStream *) NULL_CHECK((frame[4].o)))->F_a;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_27;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((lib_image_MyStream *) NULL_CHECK((frame[4].o)))->F_a;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_nro_Controller2, sp[0].o);
	frame[6].o = sp[0].o;
	if (((jint)((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_f) >= (-200)) goto label_30;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((lib_image_MyStream *) NULL_CHECK((frame[4].o)))->F_a;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (frame[5].i));
	}
label_30:;
	{
	LINE_NUMBER(64);
	frame[7].o = (frame[3].o);
	LINE_NUMBER(65);
	frame[6].o = (frame[6].o);
	LINE_NUMBER(66);
	SM_nro_Controller2_a_lib_mGraphics_int_int_int(ctx, (frame[3].o), (((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_a) - ((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_e)), (((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_b) - ((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_f)), ((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_j));
	LINE_NUMBER(68);
	frame[8].i = (jint(0));
	}
label_35:;
	{
	if ((frame[8].i) >= (jint(2))) goto label_36;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = frame[7].o;
	jint temp0 = (jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_a;
	sp[1].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_o;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[8].i)));
	jint temp2 = (jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_b;
	sp[1].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_p;
	SM_nro_Controller2_a_lib_mGraphics_int_int_int(ctx, sp[0].o, temp1, (temp2 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[8].i)))), ((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_j));
	LINE_NUMBER(68);
	INST_IINC(8, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(72);
	if (((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_n) == 0) goto label_39;
	}
	{
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_l)), ((jlong)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_m))) < 0) goto label_39;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = frame[6].o;
	((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	LINE_NUMBER(74);
	sp[0].o = frame[6].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_l = temp0;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_o;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_p;
	jint temp2 = jint(1);
	sp[1].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_p;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_o;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_e);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_p;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_f);
	LINE_NUMBER(79);
	sp[0].o = frame[6].o;
	jdouble temp3 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (((jdouble(((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_h))) * (jdouble(3.141592653589793))) / (jdouble(180.0))));
	((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_e = ((jint(((temp3 * (jdouble(((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_c)))) * (jdouble(((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_t)))))) + ((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_d));
	LINE_NUMBER(80);
	sp[0].o = frame[6].o;
	jdouble temp4 = jdouble(((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_c));
	jdouble temp5 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (((jdouble(((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_h))) * (jdouble(3.141592653589793))) / (jdouble(180.0))));
	((nro_Controller2 *) NULL_CHECK(sp[0].o))->F_f = ((jint((((temp4 * temp5) * (jdouble(((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_t)))) - (jdouble((((((jfloat)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_k) * (jfloat(((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_t)))) * (jfloat(((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_t)))) / (jfloat(2)))))))) + ((jint)((nro_Controller2 *) NULL_CHECK((frame[6].o)))->F_y0));
	}
label_39:;
	{
	LINE_NUMBER(58);
	INST_IINC(5, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(53);
	INST_IINC(1, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(85);
	if ((clinit_nro_Firework(ctx), (jint)SF_nro_Firework_act) != 0) goto label_48;
	}
	{
	LINE_NUMBER(87);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_random;
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 % (jint(3))));
	jint temp2 = -(temp1 + (jint(5)));
	frame[1].i = temp2;
	if (temp2 != (-5)) goto label_51;
	}
	clinit_nro_Firework(ctx);
	(sp++)->i = SF_nro_Firework_act;
	if ((--sp)->i != 0) goto label_51;
	{
	LINE_NUMBER(88);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_x0 = (jint(0));
	LINE_NUMBER(89);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_angle = (80);
	LINE_NUMBER(90);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_act = (jint(1));
	LINE_NUMBER(91);
	SM_nro_Firework_a(ctx);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}
label_51:;
	{
	LINE_NUMBER(95);
	if ((frame[1].i) != (-7)) goto label_57;
	}
	clinit_nro_Firework(ctx);
	(sp++)->i = SF_nro_Firework_act;
	if ((--sp)->i != 0) goto label_57;
	{
	LINE_NUMBER(96);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_angle = (60);
	LINE_NUMBER(97);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_x0 = (jint(0));
	LINE_NUMBER(98);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_act = (jint(1));
	LINE_NUMBER(99);
	SM_nro_Firework_a(ctx);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}
label_57:;
	{
	LINE_NUMBER(103);
	if ((frame[1].i) != (-6)) goto label_48;
	}
	clinit_nro_Firework(ctx);
	(sp++)->i = SF_nro_Firework_act;
	if ((--sp)->i != 0) goto label_48;
	{
	LINE_NUMBER(104);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_angle = (120);
	LINE_NUMBER(105);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_x0 = (jint(0));
	LINE_NUMBER(106);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_act = (jint(1));
	LINE_NUMBER(107);
	SM_nro_Firework_a(ctx);
	}
label_48:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Firework_a(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Firework:a", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Firework(ctx);
	{
	LINE_NUMBER(114);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_g = (jint(0));
	LINE_NUMBER(115);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_v = (16);
	LINE_NUMBER(116);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_t = (jint(0));
	LINE_NUMBER(117);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_a = (jfloat(0));
	LINE_NUMBER(119);
	frame[0].i = (jint(0));
	}
label_5:;
	{
	if ((frame[0].i) >= (jint(3))) goto label_6;
	}
	{
	LINE_NUMBER(120);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_arr_y;
	ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)) = (jint(0));
	LINE_NUMBER(121);
	clinit_nro_Firework(ctx);
	sp[0].o = (jobject)SF_nro_Firework_arr_x;
	ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)) = (clinit_nro_Firework(ctx), (jint)SF_nro_Firework_x0);
	LINE_NUMBER(119);
	INST_IINC(0, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(124);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_act = (jint(1));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_Firework(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Firework:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Firework(ctx);
	{
	LINE_NUMBER(11);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_random = sp[0].o;
	LINE_NUMBER(12);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_b = sp[0].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	clinit_nro_Firework(ctx);
	SF_nro_Firework_arr_x = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	clinit_nro_Firework(ctx);
	SF_nro_Firework_arr_y = sp[0].o;
	LINE_NUMBER(23);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_act = (jint(0));
	LINE_NUMBER(24);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_last = (jlong(0));
	LINE_NUMBER(25);
	clinit_nro_Firework(ctx);
	SF_nro_Firework_delay = (jlong(150ll));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Firework[] {
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
	{ "random", &class_java_util_Random, (intptr_t) &SF_nro_Firework_random, "Ljava/util/Random;", 10 },
	{ "b", &class_java_util_Vector, (intptr_t) &SF_nro_Firework_b, "Ljava/util/Vector;", 10 },
	{ "x", &class_int, (intptr_t) &SF_nro_Firework_x, "I", 10 },
	{ "y", &class_int, (intptr_t) &SF_nro_Firework_y, "I", 10 },
	{ "angle", &class_int, (intptr_t) &SF_nro_Firework_angle, "I", 10 },
	{ "x0", &class_int, (intptr_t) &SF_nro_Firework_x0, "I", 10 },
	{ "g", &class_int, (intptr_t) &SF_nro_Firework_g, "I", 10 },
	{ "t", &class_int, (intptr_t) &SF_nro_Firework_t, "I", 10 },
	{ "v", &class_int, (intptr_t) &SF_nro_Firework_v, "I", 10 },
	{ "a", &class_float, (intptr_t) &SF_nro_Firework_a, "F", 10 },
	{ "arr_x", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_Firework_arr_x, "[I", 10 },
	{ "arr_y", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_Firework_arr_y, "[I", 10 },
	{ "act", &class_boolean, (intptr_t) &SF_nro_Firework_act, "Z", 10 },
	{ "last", &class_long, (intptr_t) &SF_nro_Firework_last, "J", 10 },
	{ "delay", &class_long, (intptr_t) &SF_nro_Firework_delay, "J", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Firework, 0, "()V", 1 },
	{ "paint", (intptr_t) SM_nro_Firework_paint_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "a", (intptr_t) SM_nro_Firework_a, 0, "()V", 10 },
	{ "<clinit>", (intptr_t) clinit_nro_Firework, 0, "()V", 8 },
};

Class class_nro_Firework{
		.nativeName = (intptr_t) "nro/Firework",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Firework),
		.classVtable = (intptr_t) vtable_nro_Firework,
		.staticInitializer = (intptr_t) clinit_nro_Firework,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Firework,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Firework = registerClass(&class_nro_Firework);

}

