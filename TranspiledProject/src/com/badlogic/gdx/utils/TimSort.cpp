#include "com/badlogic/gdx/utils/TimSort.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/utils/TimSort.h"
#include "java/util/Comparator.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jint SF_com_badlogic_gdx_utils_TimSort_MIN_MERGE;
jint SF_com_badlogic_gdx_utils_TimSort_MIN_GALLOP;
jint SF_com_badlogic_gdx_utils_TimSort_INITIAL_TMP_STORAGE_LENGTH;
jbool SF_com_badlogic_gdx_utils_TimSort_DEBUG;

void mark_com_badlogic_gdx_utils_TimSort(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_TimSort *) object;
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
	if (self->F_runBase)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runBase)->clazz)->markFunction)((jobject) self->F_runBase, mark, depth + 1);
	if (self->F_runLen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runLen)->clazz)->markFunction)((jobject) self->F_runLen, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_TimSort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_TimSort_MIN_MERGE = jint(32);
	SF_com_badlogic_gdx_utils_TimSort_MIN_GALLOP = jint(7);
	SF_com_badlogic_gdx_utils_TimSort_INITIAL_TMP_STORAGE_LENGTH = jint(256);
	SF_com_badlogic_gdx_utils_TimSort_DEBUG = jint(0);
}

void init_com_badlogic_gdx_utils_TimSort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(90);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(82);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (256));
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (40));
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_runBase = (jref) sp[1].o;
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (40));
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_runLen = (jref) sp[1].o;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:doSort", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(97);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(98);
	SM_com_badlogic_gdx_utils_TimSort_rangeCheck_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[3].i), (frame[4].i));
	LINE_NUMBER(99);
	frame[5].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(100);
	if ((frame[5].i) >= (jint(2))) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(103);
	if ((frame[5].i) >= (32)) goto label_11;
	}
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[1].o), (frame[3].i), (frame[4].i), (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(105);
	SM_com_badlogic_gdx_utils_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(ctx, (frame[1].o), (frame[3].i), (frame[4].i), ((frame[3].i) + (frame[6].i)), (frame[2].o));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(109);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(110);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[2].o);
	LINE_NUMBER(111);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_minGallop = (7);
	LINE_NUMBER(112);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_TimSort_minRunLength_int_R_int(ctx, (frame[5].i));
	frame[6].i = temp0;
	}
label_18:;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[1].o), (frame[3].i), (frame[4].i), (frame[2].o));
	frame[7].i = temp0;
	LINE_NUMBER(122);
	if ((frame[7].i) >= (frame[6].i)) goto label_20;
	}
	{
	LINE_NUMBER(123);
	if ((frame[5].i) > (frame[6].i)) goto label_22;
	}
	INST_ILOAD(5);
	goto label_23;
label_22:;
	INST_ILOAD(6);
label_23:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(124);
	SM_com_badlogic_gdx_utils_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(ctx, (frame[1].o), (frame[3].i), ((frame[3].i) + (frame[8].i)), ((frame[3].i) + (frame[7].i)), (frame[2].o));
	LINE_NUMBER(125);
	frame[7].i = (frame[8].i);
	}
label_20:;
	{
	LINE_NUMBER(129);
	M_com_badlogic_gdx_utils_TimSort_pushRun_int_int(ctx, (frame[0].o), (frame[3].i), (frame[7].i));
	LINE_NUMBER(130);
	M_com_badlogic_gdx_utils_TimSort_mergeCollapse(ctx, (frame[0].o));
	LINE_NUMBER(133);
	frame[3].i = ((frame[3].i) + (frame[7].i));
	LINE_NUMBER(134);
	frame[5].i = ((frame[5].i) - (frame[7].i));
	LINE_NUMBER(135);
	if ((frame[5].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(139);
	M_com_badlogic_gdx_utils_TimSort_mergeForceCollapse(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(142);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (jobject(nullptr));
	LINE_NUMBER(143);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_c = (jref) (jobject(nullptr));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount), (jobject(nullptr)));
	LINE_NUMBER(145);
	goto label_34;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(142);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (jobject(nullptr));
	LINE_NUMBER(143);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_c = (jref) (jobject(nullptr));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount), (jobject(nullptr)));
	LINE_NUMBER(145);
	throwException(ctx, (frame[9].o));	}
label_34:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_TimSort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(152);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(82);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(153);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(154);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[2].o);
	LINE_NUMBER(155);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_minGallop = (7);
	LINE_NUMBER(158);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(159);
	if ((frame[3].i) >= (512)) goto label_7;
	}
	{
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_SIPUSH(256);
label_8:;
	{
	sp -= 1;
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, sp[0].i);
	frame[4].o = sp[0].o;
	LINE_NUMBER(160);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp = (jref) (frame[4].o);
	LINE_NUMBER(169);
	if ((frame[3].i) >= (120)) goto label_11;
	}
	INST_ICONST(5);
	goto label_12;
label_11:;
	{
	if ((frame[3].i) >= (1542)) goto label_13;
	}
	INST_BIPUSH(10);
	goto label_12;
label_13:;
	{
	if ((frame[3].i) >= (jint(119151))) goto label_14;
	}
	INST_BIPUSH(19);
	goto label_12;
label_14:;
	INST_BIPUSH(40);
label_12:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_runBase = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_runLen = (jref) sp[1].o;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_TimSort_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(180);
	SM_com_badlogic_gdx_utils_TimSort_sort_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_TimSort_sort_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:sort", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(184);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(185);
	SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(189);
	SM_com_badlogic_gdx_utils_TimSort_rangeCheck_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(190);
	frame[4].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(191);
	if ((frame[4].i) >= (jint(2))) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(194);
	if ((frame[4].i) >= (32)) goto label_7;
	}
	{
	LINE_NUMBER(195);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	frame[5].i = temp0;
	LINE_NUMBER(196);
	SM_com_badlogic_gdx_utils_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((frame[1].i) + (frame[5].i)), (frame[3].o));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(202);
	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_TimSort);
	init_com_badlogic_gdx_utils_TimSort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, (frame[0].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(203);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_TimSort_minRunLength_int_R_int(ctx, (frame[4].i));
	frame[6].i = temp0;
	}
label_12:;
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	frame[7].i = temp0;
	LINE_NUMBER(209);
	if ((frame[7].i) >= (frame[6].i)) goto label_14;
	}
	{
	LINE_NUMBER(210);
	if ((frame[4].i) > (frame[6].i)) goto label_16;
	}
	INST_ILOAD(4);
	goto label_17;
label_16:;
	INST_ILOAD(6);
label_17:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(211);
	SM_com_badlogic_gdx_utils_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(ctx, (frame[0].o), (frame[1].i), ((frame[1].i) + (frame[8].i)), ((frame[1].i) + (frame[7].i)), (frame[3].o));
	LINE_NUMBER(212);
	frame[7].i = (frame[8].i);
	}
label_14:;
	{
	LINE_NUMBER(216);
	M_com_badlogic_gdx_utils_TimSort_pushRun_int_int(ctx, (frame[5].o), (frame[1].i), (frame[7].i));
	LINE_NUMBER(217);
	M_com_badlogic_gdx_utils_TimSort_mergeCollapse(ctx, (frame[5].o));
	LINE_NUMBER(220);
	frame[1].i = ((frame[1].i) + (frame[7].i));
	LINE_NUMBER(221);
	frame[4].i = ((frame[4].i) - (frame[7].i));
	LINE_NUMBER(222);
	if ((frame[4].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(226);
	M_com_badlogic_gdx_utils_TimSort_mergeForceCollapse(ctx, (frame[5].o));
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:binarySort", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(244);
	if ((frame[3].i) != (frame[1].i)) goto label_1;
	}
	INST_IINC(3, 1);
label_1:;
	{
	LINE_NUMBER(245);
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(246);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(249);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(250);
	frame[7].i = (frame[3].i);
	}
label_6:;
	{
	LINE_NUMBER(255);
	if ((frame[6].i) >= (frame[7].i)) goto label_7;
	}
	{
	LINE_NUMBER(256);
	frame[8].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[6].i) + (frame[7].i))) >> (jint(1))));
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[8].i))));
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(258);
	frame[7].i = (frame[8].i);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(260);
	frame[6].i = ((frame[8].i) + (jint(1)));
	}
label_12:;
	LINE_NUMBER(261);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(269);
	frame[8].i = ((frame[3].i) - (frame[6].i));
	LINE_NUMBER(271);
	switch((frame[8].i)) {
		case 1: goto label_14;
		case 2: goto label_15;
		default: goto label_16;
	}
	}
label_15:;
	{
	LINE_NUMBER(273);
	ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) + (jint(2)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) + (jint(1)))));
	}
label_14:;
	{
	LINE_NUMBER(275);
	ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) + (jint(1)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(276);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(278);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[6].i), (frame[0].o), ((frame[6].i) + (jint(1))), (frame[8].i));
	}
label_18:;
	{
	LINE_NUMBER(280);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i)) = (frame[5].o);
	LINE_NUMBER(245);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:countRunAndMakeAscending", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(305);
	frame[4].i = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(306);
	if ((frame[4].i) != (frame[2].i)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	if (temp1 >= 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(310);
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[3].o)))(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[4].i) - (jint(1))))));
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(311);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(312);
	SM_com_badlogic_gdx_utils_TimSort_reverseRange_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(314);
	if ((frame[4].i) >= (frame[2].i)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[3].o)))(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[4].i) - (jint(1))))));
	if (temp0 < 0) goto label_7;
	}
	{
	LINE_NUMBER(315);
	INST_IINC(4, 1);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return ((frame[4].i) - (frame[1].i));
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_TimSort_reverseRange_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:reverseRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	LINE_NUMBER(327);
	INST_IINC(2, -1);
label_1:;
	{
	LINE_NUMBER(328);
	if ((frame[1].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(329);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	jint temp1 = frame[2].i;
	INST_IINC(2, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[3].o);
	LINE_NUMBER(332);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(333);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_TimSort_minRunLength_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:minRunLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(350);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(351);
	if ((frame[0].i) < (32)) goto label_2;
	}
	{
	LINE_NUMBER(352);
	frame[1].i = ((frame[1].i) | ((frame[0].i) & (jint(1))));
	LINE_NUMBER(353);
	frame[0].i = ((frame[0].i) >> (jint(1)));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return ((frame[0].i) + (frame[1].i));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_TimSort_pushRun_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:pushRun", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize)) = (frame[1].i);
	LINE_NUMBER(364);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize)) = (frame[2].i);
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_stackSize = (((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_stackSize) + (jint(1)));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_TimSort_mergeCollapse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:mergeCollapse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(381);
	if (((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(382);
	frame[1].i = (((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(2)));
	LINE_NUMBER(383);
	if ((frame[1].i) < (jint(1))) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 <= (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1))))))) goto label_5;
	}
label_4:;
	{
	if ((frame[1].i) < (jint(2))) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 > (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))))))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_7;
	}
	INST_IINC(1, -1);
	goto label_7;
label_6:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 <= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_7;
	}
	LINE_NUMBER(386);
	goto label_1;
label_7:;
	{
	LINE_NUMBER(388);
	M_com_badlogic_gdx_utils_TimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(389);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(390);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_TimSort_mergeForceCollapse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:mergeForceCollapse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(394);
	if (((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(395);
	frame[1].i = (((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(2)));
	LINE_NUMBER(396);
	if ((frame[1].i) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_4;
	}
	INST_IINC(1, -1);
label_4:;
	{
	LINE_NUMBER(397);
	M_com_badlogic_gdx_utils_TimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(398);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(399);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_TimSort_mergeAt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:mergeAt", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(411);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(413);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = ((frame[3].i) + (frame[5].i));
	LINE_NUMBER(422);
	if ((frame[1].i) != (((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(3)))) goto label_6;
	}
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[1].i) + (jint(2)))));
	LINE_NUMBER(424);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[1].i) + (jint(2)))));
	}
label_6:;
	{
	LINE_NUMBER(426);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_stackSize = (((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_stackSize) - (jint(1)));
	LINE_NUMBER(432);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	frame[6].i = temp3;
	LINE_NUMBER(434);
	frame[2].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(435);
	frame[3].i = ((frame[3].i) - (frame[6].i));
	LINE_NUMBER(436);
	if ((frame[3].i) != 0) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((frame[2].i) + (frame[3].i)) - (jint(1))));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	jint temp2 = (frame[5].i) - (jint(1));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	frame[5].i = temp3;
	LINE_NUMBER(444);
	if ((frame[5].i) != 0) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(447);
	if ((frame[3].i) > (frame[5].i)) goto label_16;
	}
	{
	LINE_NUMBER(448);
	M_com_badlogic_gdx_utils_TimSort_mergeLo_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(450);
	M_com_badlogic_gdx_utils_TimSort_mergeHi_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	}
label_18:;
	LINE_NUMBER(451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:gallopLeft", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(468);
	frame[6].i = (jint(0));
	LINE_NUMBER(469);
	frame[7].i = (jint(1));
	LINE_NUMBER(470);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(472);
	frame[8].i = ((frame[3].i) - (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(473);
	if ((frame[7].i) >= (frame[8].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) + (frame[7].i)))));
	if (temp0 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(474);
	frame[6].i = (frame[7].i);
	LINE_NUMBER(475);
	frame[7].i = (((frame[7].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(476);
	if ((frame[7].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(477);
	frame[7].i = (frame[8].i);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(479);
	if ((frame[7].i) <= (frame[8].i)) goto label_11;
	}
	INST_ILOAD(8);
	INST_ISTORE(7);
label_11:;
	{
	LINE_NUMBER(482);
	frame[6].i = ((frame[6].i) + (frame[4].i));
	LINE_NUMBER(483);
	frame[7].i = ((frame[7].i) + (frame[4].i));
	LINE_NUMBER(484);
	goto label_14;
	}
label_3:;
	{
	LINE_NUMBER(486);
	frame[8].i = ((frame[4].i) + (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(487);
	if ((frame[7].i) >= (frame[8].i)) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) - (frame[7].i)))));
	if (temp0 > 0) goto label_16;
	}
	{
	LINE_NUMBER(488);
	frame[6].i = (frame[7].i);
	LINE_NUMBER(489);
	frame[7].i = (((frame[7].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(490);
	if ((frame[7].i) > 0) goto label_15;
	}
	{
	LINE_NUMBER(491);
	frame[7].i = (frame[8].i);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(493);
	if ((frame[7].i) <= (frame[8].i)) goto label_21;
	}
	INST_ILOAD(8);
	INST_ISTORE(7);
label_21:;
	{
	LINE_NUMBER(496);
	frame[9].i = (frame[6].i);
	LINE_NUMBER(497);
	frame[6].i = ((frame[4].i) - (frame[7].i));
	LINE_NUMBER(498);
	frame[7].i = ((frame[4].i) - (frame[9].i));
	}
label_14:;
	LINE_NUMBER(506);
	INST_IINC(6, 1);
label_24:;
	{
	LINE_NUMBER(507);
	if ((frame[6].i) >= (frame[7].i)) goto label_25;
	}
	{
	LINE_NUMBER(508);
	frame[8].i = ((frame[6].i) + (bit_cast<jint>(bit_cast<uint32_t>(((frame[7].i) - (frame[6].i))) >> (jint(1)))));
	LINE_NUMBER(510);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[8].i)))));
	if (temp0 <= 0) goto label_28;
	}
	{
	LINE_NUMBER(511);
	frame[6].i = ((frame[8].i) + (jint(1)));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(513);
	frame[7].i = (frame[8].i);
	}
label_30:;
	LINE_NUMBER(514);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:gallopRight", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(533);
	frame[6].i = (jint(1));
	LINE_NUMBER(534);
	frame[7].i = (jint(0));
	LINE_NUMBER(535);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(537);
	frame[8].i = ((frame[4].i) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(538);
	if ((frame[6].i) >= (frame[8].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) - (frame[6].i)))));
	if (temp0 >= 0) goto label_6;
	}
	{
	LINE_NUMBER(539);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(540);
	frame[6].i = (((frame[6].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(541);
	if ((frame[6].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(542);
	frame[6].i = (frame[8].i);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(544);
	if ((frame[6].i) <= (frame[8].i)) goto label_11;
	}
	INST_ILOAD(8);
	INST_ISTORE(6);
label_11:;
	{
	LINE_NUMBER(547);
	frame[9].i = (frame[7].i);
	LINE_NUMBER(548);
	frame[7].i = ((frame[4].i) - (frame[6].i));
	LINE_NUMBER(549);
	frame[6].i = ((frame[4].i) - (frame[9].i));
	LINE_NUMBER(550);
	goto label_15;
	}
label_3:;
	{
	LINE_NUMBER(552);
	frame[8].i = ((frame[3].i) - (frame[4].i));
	}
label_16:;
	{
	LINE_NUMBER(553);
	if ((frame[6].i) >= (frame[8].i)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) + (frame[6].i)))));
	if (temp0 < 0) goto label_17;
	}
	{
	LINE_NUMBER(554);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(555);
	frame[6].i = (((frame[6].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(556);
	if ((frame[6].i) > 0) goto label_16;
	}
	{
	LINE_NUMBER(557);
	frame[6].i = (frame[8].i);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(559);
	if ((frame[6].i) <= (frame[8].i)) goto label_22;
	}
	INST_ILOAD(8);
	INST_ISTORE(6);
label_22:;
	{
	LINE_NUMBER(562);
	frame[7].i = ((frame[7].i) + (frame[4].i));
	LINE_NUMBER(563);
	frame[6].i = ((frame[6].i) + (frame[4].i));
	}
label_15:;
	LINE_NUMBER(571);
	INST_IINC(7, 1);
label_24:;
	{
	LINE_NUMBER(572);
	if ((frame[7].i) >= (frame[6].i)) goto label_25;
	}
	{
	LINE_NUMBER(573);
	frame[8].i = ((frame[7].i) + (bit_cast<jint>(bit_cast<uint32_t>(((frame[6].i) - (frame[7].i))) >> (jint(1)))));
	LINE_NUMBER(575);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[8].i)))));
	if (temp0 >= 0) goto label_28;
	}
	{
	LINE_NUMBER(576);
	frame[6].i = (frame[8].i);
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(578);
	frame[7].i = ((frame[8].i) + (jint(1)));
	}
label_30:;
	LINE_NUMBER(579);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_TimSort_mergeLo_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:mergeLo", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	frame[5].o = sp[0].o;
	LINE_NUMBER(600);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[2].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(601);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[1].i), (frame[6].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(603);
	frame[7].i = (jint(0));
	LINE_NUMBER(604);
	frame[8].i = (frame[3].i);
	LINE_NUMBER(605);
	frame[9].i = (frame[1].i);
	LINE_NUMBER(608);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(609);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(610);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[2].i));
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(613);
	if ((frame[2].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(614);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[4].i));
	LINE_NUMBER(615);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[9].i) + (frame[4].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_c;
	frame[10].o = sp[0].o;
	LINE_NUMBER(620);
	frame[11].i = ((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_minGallop);
	}
label_16:;
	{
	LINE_NUMBER(623);
	frame[12].i = (jint(0));
	LINE_NUMBER(624);
	frame[13].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(631);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[10].o)))(ctx, (frame[10].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))));
	if (temp0 >= 0) goto label_19;
	}
	{
	LINE_NUMBER(632);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(633);
	INST_IINC(13, 1);
	LINE_NUMBER(634);
	frame[12].i = (jint(0));
	LINE_NUMBER(635);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_24;
	}
	goto label_25;
label_19:;
	{
	LINE_NUMBER(637);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(638);
	INST_IINC(12, 1);
	LINE_NUMBER(639);
	frame[13].i = (jint(0));
	LINE_NUMBER(640);
	INST_IINC(2, -1);
	if ((frame[2].i) != (jint(1))) goto label_24;
	}
	goto label_25;
label_24:;
	{
	LINE_NUMBER(642);
	if (((frame[12].i) | (frame[13].i)) < (frame[11].i)) goto label_18;
	}
label_29:;
	{
	LINE_NUMBER(650);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))), (frame[6].o), (frame[7].i), (frame[2].i), (jint(0)), (frame[10].o));
	frame[12].i = temp0;
	LINE_NUMBER(651);
	if ((frame[12].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(652);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[12].i));
	LINE_NUMBER(653);
	frame[9].i = ((frame[9].i) + (frame[12].i));
	LINE_NUMBER(654);
	frame[7].i = ((frame[7].i) + (frame[12].i));
	LINE_NUMBER(655);
	frame[2].i = ((frame[2].i) - (frame[12].i));
	LINE_NUMBER(656);
	if ((frame[2].i) > (jint(1))) goto label_31;
	}
	LINE_NUMBER(657);
	goto label_25;
label_31:;
	{
	LINE_NUMBER(659);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(660);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_39;
	}
	goto label_25;
label_39:;
	{
	LINE_NUMBER(662);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))), (frame[5].o), (frame[8].i), (frame[4].i), (jint(0)), (frame[10].o));
	frame[13].i = temp0;
	LINE_NUMBER(663);
	if ((frame[13].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(664);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[13].i));
	LINE_NUMBER(665);
	frame[9].i = ((frame[9].i) + (frame[13].i));
	LINE_NUMBER(666);
	frame[8].i = ((frame[8].i) + (frame[13].i));
	LINE_NUMBER(667);
	frame[4].i = ((frame[4].i) - (frame[13].i));
	LINE_NUMBER(668);
	if ((frame[4].i) != 0) goto label_41;
	}
	goto label_25;
label_41:;
	{
	LINE_NUMBER(670);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(671);
	INST_IINC(2, -1);
	if ((frame[2].i) != (jint(1))) goto label_48;
	}
	goto label_25;
label_48:;
	{
	LINE_NUMBER(672);
	INST_IINC(11, -1);
	LINE_NUMBER(673);
	if ((frame[12].i) < (7)) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	if ((frame[13].i) < (7)) goto label_52;
	}
	INST_ICONST(1);
	goto label_53;
label_52:;
	INST_ICONST(0);
label_53:;
	INST_IOR();
	if ((--sp)->i != 0) goto label_29;
	{
	LINE_NUMBER(674);
	if ((frame[11].i) >= 0) goto label_55;
	}
	INST_ICONST(0);
	INST_ISTORE(11);
label_55:;
	{
	LINE_NUMBER(675);
	INST_IINC(11, 2);
	LINE_NUMBER(676);
	goto label_16;
	}
label_25:;
	{
	LINE_NUMBER(677);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[11].i) >= (jint(1))) goto label_57;
	}
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ILOAD(11);
label_58:;
	{
	sp -= 2;
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_minGallop = sp[1].i;
	LINE_NUMBER(679);
	if ((frame[2].i) != (jint(1))) goto label_60;
	}
	{
	LINE_NUMBER(681);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[4].i));
	LINE_NUMBER(682);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[9].i) + (frame[4].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	goto label_63;
	}
label_60:;
	{
	LINE_NUMBER(683);
	if ((frame[2].i) != 0) goto label_64;
	}
	{
	LINE_NUMBER(684);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Comparison method violates its general contract!"_j))));
	throwException(ctx, sp[0].o);	}
label_64:;
	{
	LINE_NUMBER(688);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[2].i));
	}
label_63:;
	LINE_NUMBER(690);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_TimSort_mergeHi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:mergeHi", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	frame[5].o = sp[0].o;
	LINE_NUMBER(704);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(705);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[3].i), (frame[6].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(707);
	frame[7].i = (((frame[1].i) + (frame[2].i)) - (jint(1)));
	LINE_NUMBER(708);
	frame[8].i = ((frame[4].i) - (jint(1)));
	LINE_NUMBER(709);
	frame[9].i = (((frame[3].i) + (frame[4].i)) - (jint(1)));
	LINE_NUMBER(712);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(713);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(714);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[5].o), ((frame[9].i) - ((frame[4].i) - (jint(1)))), (frame[4].i));
	LINE_NUMBER(715);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(717);
	if ((frame[4].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(718);
	frame[9].i = ((frame[9].i) - (frame[2].i));
	LINE_NUMBER(719);
	frame[7].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(720);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[2].i));
	LINE_NUMBER(721);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(722);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_c;
	frame[10].o = sp[0].o;
	LINE_NUMBER(726);
	frame[11].i = ((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_minGallop);
	}
label_18:;
	{
	LINE_NUMBER(729);
	frame[12].i = (jint(0));
	LINE_NUMBER(730);
	frame[13].i = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(737);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[10].o)))(ctx, (frame[10].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))));
	if (temp0 >= 0) goto label_21;
	}
	{
	LINE_NUMBER(738);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(739);
	INST_IINC(12, 1);
	LINE_NUMBER(740);
	frame[13].i = (jint(0));
	LINE_NUMBER(741);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_26;
	}
	goto label_27;
label_21:;
	{
	LINE_NUMBER(743);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(744);
	INST_IINC(13, 1);
	LINE_NUMBER(745);
	frame[12].i = (jint(0));
	LINE_NUMBER(746);
	INST_IINC(4, -1);
	if ((frame[4].i) != (jint(1))) goto label_26;
	}
	goto label_27;
label_26:;
	{
	LINE_NUMBER(748);
	if (((frame[12].i) | (frame[13].i)) < (frame[11].i)) goto label_20;
	}
label_31:;
	{
	LINE_NUMBER(756);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))), (frame[5].o), (frame[1].i), (frame[2].i), ((frame[2].i) - (jint(1))), (frame[10].o));
	frame[12].i = (temp0 - temp1);
	LINE_NUMBER(757);
	if ((frame[12].i) == 0) goto label_33;
	}
	{
	LINE_NUMBER(758);
	frame[9].i = ((frame[9].i) - (frame[12].i));
	LINE_NUMBER(759);
	frame[7].i = ((frame[7].i) - (frame[12].i));
	LINE_NUMBER(760);
	frame[2].i = ((frame[2].i) - (frame[12].i));
	LINE_NUMBER(761);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[12].i));
	LINE_NUMBER(762);
	if ((frame[2].i) != 0) goto label_33;
	}
	goto label_27;
label_33:;
	{
	LINE_NUMBER(764);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(765);
	INST_IINC(4, -1);
	if ((frame[4].i) != (jint(1))) goto label_40;
	}
	goto label_27;
label_40:;
	{
	LINE_NUMBER(767);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))), (frame[6].o), (jint(0)), (frame[4].i), ((frame[4].i) - (jint(1))), (frame[10].o));
	frame[13].i = (temp0 - temp1);
	LINE_NUMBER(768);
	if ((frame[13].i) == 0) goto label_42;
	}
	{
	LINE_NUMBER(769);
	frame[9].i = ((frame[9].i) - (frame[13].i));
	LINE_NUMBER(770);
	frame[8].i = ((frame[8].i) - (frame[13].i));
	LINE_NUMBER(771);
	frame[4].i = ((frame[4].i) - (frame[13].i));
	LINE_NUMBER(772);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), ((frame[8].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[13].i));
	LINE_NUMBER(773);
	if ((frame[4].i) > (jint(1))) goto label_42;
	}
	LINE_NUMBER(774);
	goto label_27;
label_42:;
	{
	LINE_NUMBER(776);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(777);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_50;
	}
	goto label_27;
label_50:;
	{
	LINE_NUMBER(778);
	INST_IINC(11, -1);
	LINE_NUMBER(779);
	if ((frame[12].i) < (7)) goto label_52;
	}
	INST_ICONST(1);
	goto label_53;
label_52:;
	INST_ICONST(0);
label_53:;
	{
	if ((frame[13].i) < (7)) goto label_54;
	}
	INST_ICONST(1);
	goto label_55;
label_54:;
	INST_ICONST(0);
label_55:;
	INST_IOR();
	if ((--sp)->i != 0) goto label_31;
	{
	LINE_NUMBER(780);
	if ((frame[11].i) >= 0) goto label_57;
	}
	INST_ICONST(0);
	INST_ISTORE(11);
label_57:;
	{
	LINE_NUMBER(781);
	INST_IINC(11, 2);
	LINE_NUMBER(782);
	goto label_18;
	}
label_27:;
	{
	LINE_NUMBER(783);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[11].i) >= (jint(1))) goto label_59;
	}
	INST_ICONST(1);
	goto label_60;
label_59:;
	INST_ILOAD(11);
label_60:;
	{
	sp -= 2;
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_minGallop = sp[1].i;
	LINE_NUMBER(785);
	if ((frame[4].i) != (jint(1))) goto label_62;
	}
	{
	LINE_NUMBER(787);
	frame[9].i = ((frame[9].i) - (frame[2].i));
	LINE_NUMBER(788);
	frame[7].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(789);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[2].i));
	LINE_NUMBER(790);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	goto label_67;
	}
label_62:;
	{
	LINE_NUMBER(791);
	if ((frame[4].i) != 0) goto label_68;
	}
	{
	LINE_NUMBER(792);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Comparison method violates its general contract!"_j))));
	throwException(ctx, sp[0].o);	}
label_68:;
	{
	LINE_NUMBER(796);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[5].o), ((frame[9].i) - ((frame[4].i) - (jint(1)))), (frame[4].i));
	}
label_67:;
	LINE_NUMBER(798);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(806);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount), (frame[1].i));
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK(sp[0].o))->F_tmpCount = temp0;
	LINE_NUMBER(807);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(809);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(810);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(1))));
	LINE_NUMBER(811);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(2))));
	LINE_NUMBER(812);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(4))));
	LINE_NUMBER(813);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (8)));
	LINE_NUMBER(814);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (16)));
	LINE_NUMBER(815);
	INST_IINC(2, 1);
	LINE_NUMBER(817);
	if ((frame[2].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(818);
	frame[2].i = (frame[1].i);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(820);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (bit_cast<jint>(bit_cast<uint32_t>((((jarray) nullCheck(ctx, sp[0].o))->length)) >> (jint(1)))));
	frame[2].i = temp1;
	}
label_13:;
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(823);
	((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp = (jref) (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(825);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_TimSort_rangeCheck_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TimSort:rangeCheck", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TimSort(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(836);
	if ((frame[1].i) <= (frame[2].i)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"fromIndex("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8") > toIndex("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(837);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(838);
	if ((frame[2].i) <= (frame[0].i)) goto label_3;
	}
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(839);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_TimSort[] {
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
	(void *) M_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int,
	(void *) M_com_badlogic_gdx_utils_TimSort_pushRun_int_int,
	(void *) M_com_badlogic_gdx_utils_TimSort_mergeCollapse,
	(void *) M_com_badlogic_gdx_utils_TimSort_mergeForceCollapse,
	(void *) M_com_badlogic_gdx_utils_TimSort_mergeAt_int,
	(void *) M_com_badlogic_gdx_utils_TimSort_mergeLo_int_int_int_int,
	(void *) M_com_badlogic_gdx_utils_TimSort_mergeHi_int_int_int_int,
	(void *) M_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object,
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
	{ "doSort", "([Ljava/lang/Object;Ljava/util/Comparator;II)V" },
	{ "pushRun", "(II)V" },
	{ "mergeCollapse", "()V" },
	{ "mergeForceCollapse", "()V" },
	{ "mergeAt", "(I)V" },
	{ "mergeLo", "(IIII)V" },
	{ "mergeHi", "(IIII)V" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "MIN_MERGE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_TimSort_MIN_MERGE, "I", 26 },
	{ "a", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_TimSort, F_a), "[Ljava/lang/Object;", 2 },
	{ "c", &class_java_util_Comparator, offsetof(com_badlogic_gdx_utils_TimSort, F_c), "Ljava/util/Comparator;", 2 },
	{ "MIN_GALLOP", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_TimSort_MIN_GALLOP, "I", 26 },
	{ "minGallop", &class_int, offsetof(com_badlogic_gdx_utils_TimSort, F_minGallop), "I", 2 },
	{ "INITIAL_TMP_STORAGE_LENGTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_TimSort_INITIAL_TMP_STORAGE_LENGTH, "I", 26 },
	{ "tmp", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_TimSort, F_tmp), "[Ljava/lang/Object;", 2 },
	{ "tmpCount", &class_int, offsetof(com_badlogic_gdx_utils_TimSort, F_tmpCount), "I", 2 },
	{ "stackSize", &class_int, offsetof(com_badlogic_gdx_utils_TimSort, F_stackSize), "I", 2 },
	{ "runBase", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_utils_TimSort, F_runBase), "[I", 18 },
	{ "runLen", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_utils_TimSort, F_runLen), "[I", 18 },
	{ "DEBUG", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_TimSort_DEBUG, "Z", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_TimSort, 0, "()V", 0 },
	{ "doSort", (intptr_t) M_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int, VTABLE_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int, "([Ljava/lang/Object;Ljava/util/Comparator;II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_TimSort_Array1_java_lang_Object_java_util_Comparator, 0, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 2 },
	{ "sort", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_sort_Array1_java_lang_Object_java_util_Comparator, 0, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 8 },
	{ "sort", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_sort_Array1_java_lang_Object_int_int_java_util_Comparator, 0, "([Ljava/lang/Object;IILjava/util/Comparator;)V", 8 },
	{ "binarySort", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator, 0, "([Ljava/lang/Object;IIILjava/util/Comparator;)V", 10 },
	{ "countRunAndMakeAscending", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int, 0, "([Ljava/lang/Object;IILjava/util/Comparator;)I", 10 },
	{ "reverseRange", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_reverseRange_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;II)V", 10 },
	{ "minRunLength", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_minRunLength_int_R_int, 0, "(I)I", 10 },
	{ "pushRun", (intptr_t) M_com_badlogic_gdx_utils_TimSort_pushRun_int_int, VTABLE_com_badlogic_gdx_utils_TimSort_pushRun_int_int, "(II)V", 2 },
	{ "mergeCollapse", (intptr_t) M_com_badlogic_gdx_utils_TimSort_mergeCollapse, VTABLE_com_badlogic_gdx_utils_TimSort_mergeCollapse, "()V", 2 },
	{ "mergeForceCollapse", (intptr_t) M_com_badlogic_gdx_utils_TimSort_mergeForceCollapse, VTABLE_com_badlogic_gdx_utils_TimSort_mergeForceCollapse, "()V", 2 },
	{ "mergeAt", (intptr_t) M_com_badlogic_gdx_utils_TimSort_mergeAt_int, VTABLE_com_badlogic_gdx_utils_TimSort_mergeAt_int, "(I)V", 2 },
	{ "gallopLeft", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int, 0, "(Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)I", 10 },
	{ "gallopRight", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int, 0, "(Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)I", 10 },
	{ "mergeLo", (intptr_t) M_com_badlogic_gdx_utils_TimSort_mergeLo_int_int_int_int, VTABLE_com_badlogic_gdx_utils_TimSort_mergeLo_int_int_int_int, "(IIII)V", 2 },
	{ "mergeHi", (intptr_t) M_com_badlogic_gdx_utils_TimSort_mergeHi_int_int_int_int, VTABLE_com_badlogic_gdx_utils_TimSort_mergeHi_int_int_int_int, "(IIII)V", 2 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 2 },
	{ "rangeCheck", (intptr_t) SM_com_badlogic_gdx_utils_TimSort_rangeCheck_int_int_int, 0, "(III)V", 10 },
};

Class class_com_badlogic_gdx_utils_TimSort{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/TimSort",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_TimSort),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_TimSort,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_TimSort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_TimSort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_TimSort = registerClass(&class_com_badlogic_gdx_utils_TimSort);

}

