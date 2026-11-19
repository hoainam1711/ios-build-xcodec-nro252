#include "com/badlogic/gdx/utils/ComparableTimSort.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/util/Arrays.h"
#include "java/lang/Comparable.h"
#include "com/badlogic/gdx/utils/ComparableTimSort.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jint SF_com_badlogic_gdx_utils_ComparableTimSort_MIN_MERGE;
jint SF_com_badlogic_gdx_utils_ComparableTimSort_MIN_GALLOP;
jint SF_com_badlogic_gdx_utils_ComparableTimSort_INITIAL_TMP_STORAGE_LENGTH;
jbool SF_com_badlogic_gdx_utils_ComparableTimSort_DEBUG;

void mark_com_badlogic_gdx_utils_ComparableTimSort(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_ComparableTimSort *) object;
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
	if (self->F_runBase)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runBase)->clazz)->markFunction)((jobject) self->F_runBase, mark, depth + 1);
	if (self->F_runLen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runLen)->clazz)->markFunction)((jobject) self->F_runLen, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_ComparableTimSort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_ComparableTimSort_MIN_MERGE = jint(32);
	SF_com_badlogic_gdx_utils_ComparableTimSort_MIN_GALLOP = jint(7);
	SF_com_badlogic_gdx_utils_ComparableTimSort_INITIAL_TMP_STORAGE_LENGTH = jint(256);
	SF_com_badlogic_gdx_utils_ComparableTimSort_DEBUG = jint(0);
}

void init_com_badlogic_gdx_utils_ComparableTimSort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(72);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(64);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (256));
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (40));
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_runBase = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (40));
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_runLen = (jref) sp[1].o;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:doSort", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(79);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(80);
	SM_com_badlogic_gdx_utils_ComparableTimSort_rangeCheck_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i), (frame[3].i));
	LINE_NUMBER(81);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(82);
	if ((frame[4].i) >= (jint(2))) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(85);
	if ((frame[4].i) >= (32)) goto label_11;
	}
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(87);
	SM_com_badlogic_gdx_utils_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i), ((frame[2].i) + (frame[5].i)));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(91);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(92);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_minGallop = (7);
	LINE_NUMBER(93);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_minRunLength_int_R_int(ctx, (frame[4].i));
	frame[5].i = temp0;
	}
label_17:;
	{
	LINE_NUMBER(100);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[6].i = temp0;
	LINE_NUMBER(103);
	if ((frame[6].i) >= (frame[5].i)) goto label_19;
	}
	{
	LINE_NUMBER(104);
	if ((frame[4].i) > (frame[5].i)) goto label_21;
	}
	INST_ILOAD(4);
	goto label_22;
label_21:;
	INST_ILOAD(5);
label_22:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(105);
	SM_com_badlogic_gdx_utils_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(ctx, (frame[1].o), (frame[2].i), ((frame[2].i) + (frame[7].i)), ((frame[2].i) + (frame[6].i)));
	LINE_NUMBER(106);
	frame[6].i = (frame[7].i);
	}
label_19:;
	{
	LINE_NUMBER(110);
	M_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int(ctx, (frame[0].o), (frame[2].i), (frame[6].i));
	LINE_NUMBER(111);
	M_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse(ctx, (frame[0].o));
	LINE_NUMBER(114);
	frame[2].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(115);
	frame[4].i = ((frame[4].i) - (frame[6].i));
	LINE_NUMBER(116);
	if ((frame[4].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(120);
	M_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(123);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (jobject(nullptr));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount), (jobject(nullptr)));
	LINE_NUMBER(125);
	goto label_32;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(123);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (jobject(nullptr));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount), (jobject(nullptr)));
	LINE_NUMBER(125);
	throwException(ctx, (frame[8].o));	}
label_32:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ComparableTimSort_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(64);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(132);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(133);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_minGallop = (7);
	LINE_NUMBER(136);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(137);
	if ((frame[2].i) >= (512)) goto label_6;
	}
	{
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_SIPUSH(256);
label_7:;
	{
	sp -= 1;
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, sp[0].i);
	frame[3].o = sp[0].o;
	LINE_NUMBER(138);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp = (jref) (frame[3].o);
	LINE_NUMBER(147);
	if ((frame[2].i) >= (120)) goto label_10;
	}
	INST_ICONST(5);
	goto label_11;
label_10:;
	{
	if ((frame[2].i) >= (1542)) goto label_12;
	}
	INST_BIPUSH(10);
	goto label_11;
label_12:;
	{
	if ((frame[2].i) >= (jint(119151))) goto label_13;
	}
	INST_BIPUSH(19);
	goto label_11;
label_13:;
	INST_BIPUSH(40);
label_11:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_runBase = (jref) sp[1].o;
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_runLen = (jref) sp[1].o;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_ComparableTimSort_sort_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(158);
	SM_com_badlogic_gdx_utils_ComparableTimSort_sort_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_ComparableTimSort_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:sort", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(162);
	SM_com_badlogic_gdx_utils_ComparableTimSort_rangeCheck_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(163);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(164);
	if ((frame[3].i) >= (jint(2))) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(167);
	if ((frame[3].i) >= (32)) goto label_4;
	}
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(169);
	SM_com_badlogic_gdx_utils_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((frame[1].i) + (frame[4].i)));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(175);
	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ComparableTimSort);
	init_com_badlogic_gdx_utils_ComparableTimSort_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(176);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_minRunLength_int_R_int(ctx, (frame[3].i));
	frame[5].i = temp0;
	}
label_9:;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[6].i = temp0;
	LINE_NUMBER(182);
	if ((frame[6].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(183);
	if ((frame[3].i) > (frame[5].i)) goto label_13;
	}
	INST_ILOAD(3);
	goto label_14;
label_13:;
	INST_ILOAD(5);
label_14:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(184);
	SM_com_badlogic_gdx_utils_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(ctx, (frame[0].o), (frame[1].i), ((frame[1].i) + (frame[7].i)), ((frame[1].i) + (frame[6].i)));
	LINE_NUMBER(185);
	frame[6].i = (frame[7].i);
	}
label_11:;
	{
	LINE_NUMBER(189);
	M_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int(ctx, (frame[4].o), (frame[1].i), (frame[6].i));
	LINE_NUMBER(190);
	M_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse(ctx, (frame[4].o));
	LINE_NUMBER(193);
	frame[1].i = ((frame[1].i) + (frame[6].i));
	LINE_NUMBER(194);
	frame[3].i = ((frame[3].i) - (frame[6].i));
	LINE_NUMBER(195);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(199);
	M_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse(ctx, (frame[4].o));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:binarySort", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(216);
	if ((frame[3].i) != (frame[1].i)) goto label_1;
	}
	INST_IINC(3, 1);
label_1:;
	{
	LINE_NUMBER(217);
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(219);
	frame[4].o = (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))));
	LINE_NUMBER(222);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(223);
	frame[6].i = (frame[3].i);
	}
label_6:;
	{
	LINE_NUMBER(228);
	if ((frame[5].i) >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(229);
	frame[7].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) + (frame[6].i))) >> (jint(1))));
	LINE_NUMBER(230);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[7].i))));
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(231);
	frame[6].i = (frame[7].i);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(233);
	frame[5].i = ((frame[7].i) + (jint(1)));
	}
label_12:;
	LINE_NUMBER(234);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(242);
	frame[7].i = ((frame[3].i) - (frame[5].i));
	LINE_NUMBER(244);
	switch((frame[7].i)) {
		case 1: goto label_14;
		case 2: goto label_15;
		default: goto label_16;
	}
	}
label_15:;
	{
	LINE_NUMBER(246);
	ARRAY_ACCESS(jobject, (frame[0].o), ((frame[5].i) + (jint(2)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[5].i) + (jint(1)))));
	}
label_14:;
	{
	LINE_NUMBER(248);
	ARRAY_ACCESS(jobject, (frame[0].o), ((frame[5].i) + (jint(1)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i)));
	LINE_NUMBER(249);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(251);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[5].i), (frame[0].o), ((frame[5].i) + (jint(1))), (frame[7].i));
	}
label_18:;
	{
	LINE_NUMBER(253);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i)) = (frame[4].o);
	LINE_NUMBER(217);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(255);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:countRunAndMakeAscending", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(278);
	frame[3].i = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(279);
	if ((frame[3].i) != (frame[2].i)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	if (temp1 >= 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(283);
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[3].i) - (jint(1))))));
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(284);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(285);
	SM_com_badlogic_gdx_utils_ComparableTimSort_reverseRange_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[3].i));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(287);
	if ((frame[3].i) >= (frame[2].i)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[3].i) - (jint(1))))));
	if (temp0 < 0) goto label_7;
	}
	{
	LINE_NUMBER(288);
	INST_IINC(3, 1);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return ((frame[3].i) - (frame[1].i));
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_ComparableTimSort_reverseRange_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:reverseRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	LINE_NUMBER(300);
	INST_IINC(2, -1);
label_1:;
	{
	LINE_NUMBER(301);
	if ((frame[1].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(302);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	jint temp1 = frame[2].i;
	INST_IINC(2, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[3].o);
	LINE_NUMBER(305);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(306);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_ComparableTimSort_minRunLength_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:minRunLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(323);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(324);
	if ((frame[0].i) < (32)) goto label_2;
	}
	{
	LINE_NUMBER(325);
	frame[1].i = ((frame[1].i) | ((frame[0].i) & (jint(1))));
	LINE_NUMBER(326);
	frame[0].i = ((frame[0].i) >> (jint(1)));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return ((frame[0].i) + (frame[1].i));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:pushRun", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize)) = (frame[1].i);
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize)) = (frame[2].i);
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_stackSize = (((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_stackSize) + (jint(1)));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:mergeCollapse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(354);
	if (((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(355);
	frame[1].i = (((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(2)));
	LINE_NUMBER(356);
	if ((frame[1].i) < (jint(1))) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 <= (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1))))))) goto label_5;
	}
label_4:;
	{
	if ((frame[1].i) < (jint(2))) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(2))));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 > (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))))))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_7;
	}
	INST_IINC(1, -1);
	goto label_7;
label_6:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 <= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_7;
	}
	LINE_NUMBER(359);
	goto label_1;
label_7:;
	{
	LINE_NUMBER(361);
	M_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(362);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(363);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:mergeForceCollapse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(367);
	if (((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(368);
	frame[1].i = (((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(2)));
	LINE_NUMBER(369);
	if ((frame[1].i) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_4;
	}
	INST_IINC(1, -1);
label_4:;
	{
	LINE_NUMBER(370);
	M_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(371);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:mergeAt", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(385);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(386);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(387);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = ((frame[3].i) + (frame[5].i));
	LINE_NUMBER(396);
	if ((frame[1].i) != (((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(3)))) goto label_6;
	}
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[1].i) + (jint(2)))));
	LINE_NUMBER(398);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[1].i) + (jint(2)))));
	}
label_6:;
	{
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_stackSize = (((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_stackSize) - (jint(1)));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i), (jint(0)));
	frame[6].i = temp0;
	LINE_NUMBER(408);
	frame[2].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(409);
	frame[3].i = ((frame[3].i) - (frame[6].i));
	LINE_NUMBER(410);
	if ((frame[3].i) != 0) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((frame[2].i) + (frame[3].i)) - (jint(1))))));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, sp[0].o, sp[1].o, (frame[4].i), (frame[5].i), ((frame[5].i) - (jint(1))));
	frame[5].i = temp0;
	LINE_NUMBER(418);
	if ((frame[5].i) != 0) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(421);
	if ((frame[3].i) > (frame[5].i)) goto label_16;
	}
	{
	LINE_NUMBER(422);
	M_com_badlogic_gdx_utils_ComparableTimSort_mergeLo_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(424);
	M_com_badlogic_gdx_utils_ComparableTimSort_mergeHi_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	}
label_18:;
	LINE_NUMBER(425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:gallopLeft", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(442);
	frame[5].i = (jint(0));
	LINE_NUMBER(443);
	frame[6].i = (jint(1));
	LINE_NUMBER(444);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(446);
	frame[7].i = ((frame[3].i) - (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(447);
	if ((frame[6].i) >= (frame[7].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) + (frame[6].i)))));
	if (temp0 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(448);
	frame[5].i = (frame[6].i);
	LINE_NUMBER(449);
	frame[6].i = (((frame[6].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(450);
	if ((frame[6].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(451);
	frame[6].i = (frame[7].i);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(453);
	if ((frame[6].i) <= (frame[7].i)) goto label_11;
	}
	INST_ILOAD(7);
	INST_ISTORE(6);
label_11:;
	{
	LINE_NUMBER(456);
	frame[5].i = ((frame[5].i) + (frame[4].i));
	LINE_NUMBER(457);
	frame[6].i = ((frame[6].i) + (frame[4].i));
	LINE_NUMBER(458);
	goto label_14;
	}
label_3:;
	{
	LINE_NUMBER(460);
	frame[7].i = ((frame[4].i) + (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(461);
	if ((frame[6].i) >= (frame[7].i)) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) - (frame[6].i)))));
	if (temp0 > 0) goto label_16;
	}
	{
	LINE_NUMBER(462);
	frame[5].i = (frame[6].i);
	LINE_NUMBER(463);
	frame[6].i = (((frame[6].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(464);
	if ((frame[6].i) > 0) goto label_15;
	}
	{
	LINE_NUMBER(465);
	frame[6].i = (frame[7].i);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(467);
	if ((frame[6].i) <= (frame[7].i)) goto label_21;
	}
	INST_ILOAD(7);
	INST_ISTORE(6);
label_21:;
	{
	LINE_NUMBER(470);
	frame[8].i = (frame[5].i);
	LINE_NUMBER(471);
	frame[5].i = ((frame[4].i) - (frame[6].i));
	LINE_NUMBER(472);
	frame[6].i = ((frame[4].i) - (frame[8].i));
	}
label_14:;
	LINE_NUMBER(480);
	INST_IINC(5, 1);
label_24:;
	{
	LINE_NUMBER(481);
	if ((frame[5].i) >= (frame[6].i)) goto label_25;
	}
	{
	LINE_NUMBER(482);
	frame[7].i = ((frame[5].i) + (bit_cast<jint>(bit_cast<uint32_t>(((frame[6].i) - (frame[5].i))) >> (jint(1)))));
	LINE_NUMBER(484);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[7].i)))));
	if (temp0 <= 0) goto label_28;
	}
	{
	LINE_NUMBER(485);
	frame[5].i = ((frame[7].i) + (jint(1)));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(487);
	frame[6].i = (frame[7].i);
	}
label_30:;
	LINE_NUMBER(488);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:gallopRight", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(506);
	frame[5].i = (jint(1));
	LINE_NUMBER(507);
	frame[6].i = (jint(0));
	LINE_NUMBER(508);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(510);
	frame[7].i = ((frame[4].i) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(511);
	if ((frame[5].i) >= (frame[7].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) - (frame[5].i)))));
	if (temp0 >= 0) goto label_6;
	}
	{
	LINE_NUMBER(512);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(513);
	frame[5].i = (((frame[5].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(514);
	if ((frame[5].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(515);
	frame[5].i = (frame[7].i);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(517);
	if ((frame[5].i) <= (frame[7].i)) goto label_11;
	}
	INST_ILOAD(7);
	INST_ISTORE(5);
label_11:;
	{
	LINE_NUMBER(520);
	frame[8].i = (frame[6].i);
	LINE_NUMBER(521);
	frame[6].i = ((frame[4].i) - (frame[5].i));
	LINE_NUMBER(522);
	frame[5].i = ((frame[4].i) - (frame[8].i));
	LINE_NUMBER(523);
	goto label_15;
	}
label_3:;
	{
	LINE_NUMBER(525);
	frame[7].i = ((frame[3].i) - (frame[4].i));
	}
label_16:;
	{
	LINE_NUMBER(526);
	if ((frame[5].i) >= (frame[7].i)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) + (frame[5].i)))));
	if (temp0 < 0) goto label_17;
	}
	{
	LINE_NUMBER(527);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(528);
	frame[5].i = (((frame[5].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(529);
	if ((frame[5].i) > 0) goto label_16;
	}
	{
	LINE_NUMBER(530);
	frame[5].i = (frame[7].i);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(532);
	if ((frame[5].i) <= (frame[7].i)) goto label_22;
	}
	INST_ILOAD(7);
	INST_ISTORE(5);
label_22:;
	{
	LINE_NUMBER(535);
	frame[6].i = ((frame[6].i) + (frame[4].i));
	LINE_NUMBER(536);
	frame[5].i = ((frame[5].i) + (frame[4].i));
	}
label_15:;
	LINE_NUMBER(544);
	INST_IINC(6, 1);
label_24:;
	{
	LINE_NUMBER(545);
	if ((frame[6].i) >= (frame[5].i)) goto label_25;
	}
	{
	LINE_NUMBER(546);
	frame[7].i = ((frame[6].i) + (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) - (frame[6].i))) >> (jint(1)))));
	LINE_NUMBER(548);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[7].i)))));
	if (temp0 >= 0) goto label_28;
	}
	{
	LINE_NUMBER(549);
	frame[5].i = (frame[7].i);
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(551);
	frame[6].i = ((frame[7].i) + (jint(1)));
	}
label_30:;
	LINE_NUMBER(552);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ComparableTimSort_mergeLo_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:mergeLo", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	frame[5].o = sp[0].o;
	LINE_NUMBER(574);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[2].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(575);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[1].i), (frame[6].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(577);
	frame[7].i = (jint(0));
	LINE_NUMBER(578);
	frame[8].i = (frame[3].i);
	LINE_NUMBER(579);
	frame[9].i = (frame[1].i);
	LINE_NUMBER(582);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(583);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(584);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[2].i));
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(587);
	if ((frame[2].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(588);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[4].i));
	LINE_NUMBER(589);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[9].i) + (frame[4].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(593);
	frame[10].i = ((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_minGallop);
	}
label_15:;
	{
	LINE_NUMBER(596);
	frame[11].i = (jint(0));
	LINE_NUMBER(597);
	frame[12].i = (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))));
	if (temp0 >= 0) goto label_18;
	}
	{
	LINE_NUMBER(605);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(606);
	INST_IINC(12, 1);
	LINE_NUMBER(607);
	frame[11].i = (jint(0));
	LINE_NUMBER(608);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_23;
	}
	goto label_24;
label_18:;
	{
	LINE_NUMBER(610);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(611);
	INST_IINC(11, 1);
	LINE_NUMBER(612);
	frame[12].i = (jint(0));
	LINE_NUMBER(613);
	INST_IINC(2, -1);
	if ((frame[2].i) != (jint(1))) goto label_23;
	}
	goto label_24;
label_23:;
	{
	LINE_NUMBER(615);
	if (((frame[11].i) | (frame[12].i)) < (frame[10].i)) goto label_17;
	}
label_28:;
	{
	LINE_NUMBER(623);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))))), (frame[6].o), (frame[7].i), (frame[2].i), (jint(0)));
	frame[11].i = temp0;
	LINE_NUMBER(624);
	if ((frame[11].i) == 0) goto label_30;
	}
	{
	LINE_NUMBER(625);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[11].i));
	LINE_NUMBER(626);
	frame[9].i = ((frame[9].i) + (frame[11].i));
	LINE_NUMBER(627);
	frame[7].i = ((frame[7].i) + (frame[11].i));
	LINE_NUMBER(628);
	frame[2].i = ((frame[2].i) - (frame[11].i));
	LINE_NUMBER(629);
	if ((frame[2].i) > (jint(1))) goto label_30;
	}
	LINE_NUMBER(630);
	goto label_24;
label_30:;
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
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_38;
	}
	goto label_24;
label_38:;
	{
	LINE_NUMBER(635);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))))), (frame[5].o), (frame[8].i), (frame[4].i), (jint(0)));
	frame[12].i = temp0;
	LINE_NUMBER(636);
	if ((frame[12].i) == 0) goto label_40;
	}
	{
	LINE_NUMBER(637);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[12].i));
	LINE_NUMBER(638);
	frame[9].i = ((frame[9].i) + (frame[12].i));
	LINE_NUMBER(639);
	frame[8].i = ((frame[8].i) + (frame[12].i));
	LINE_NUMBER(640);
	frame[4].i = ((frame[4].i) - (frame[12].i));
	LINE_NUMBER(641);
	if ((frame[4].i) != 0) goto label_40;
	}
	goto label_24;
label_40:;
	{
	LINE_NUMBER(643);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(644);
	INST_IINC(2, -1);
	if ((frame[2].i) != (jint(1))) goto label_47;
	}
	goto label_24;
label_47:;
	{
	LINE_NUMBER(645);
	INST_IINC(10, -1);
	LINE_NUMBER(646);
	if ((frame[11].i) < (7)) goto label_49;
	}
	INST_ICONST(1);
	goto label_50;
label_49:;
	INST_ICONST(0);
label_50:;
	{
	if ((frame[12].i) < (7)) goto label_51;
	}
	INST_ICONST(1);
	goto label_52;
label_51:;
	INST_ICONST(0);
label_52:;
	INST_IOR();
	if ((--sp)->i != 0) goto label_28;
	{
	LINE_NUMBER(647);
	if ((frame[10].i) >= 0) goto label_54;
	}
	INST_ICONST(0);
	INST_ISTORE(10);
label_54:;
	{
	LINE_NUMBER(648);
	INST_IINC(10, 2);
	LINE_NUMBER(649);
	goto label_15;
	}
label_24:;
	{
	LINE_NUMBER(650);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[10].i) >= (jint(1))) goto label_56;
	}
	INST_ICONST(1);
	goto label_57;
label_56:;
	INST_ILOAD(10);
label_57:;
	{
	sp -= 2;
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_minGallop = sp[1].i;
	LINE_NUMBER(652);
	if ((frame[2].i) != (jint(1))) goto label_59;
	}
	{
	LINE_NUMBER(654);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[4].i));
	LINE_NUMBER(655);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[9].i) + (frame[4].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	goto label_62;
	}
label_59:;
	{
	LINE_NUMBER(656);
	if ((frame[2].i) != 0) goto label_63;
	}
	{
	LINE_NUMBER(657);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Comparison method violates its general contract!"_j))));
	throwException(ctx, sp[0].o);	}
label_63:;
	{
	LINE_NUMBER(661);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[2].i));
	}
label_62:;
	LINE_NUMBER(663);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ComparableTimSort_mergeHi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:mergeHi", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	frame[5].o = sp[0].o;
	LINE_NUMBER(678);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(679);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[3].i), (frame[6].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(681);
	frame[7].i = (((frame[1].i) + (frame[2].i)) - (jint(1)));
	LINE_NUMBER(682);
	frame[8].i = ((frame[4].i) - (jint(1)));
	LINE_NUMBER(683);
	frame[9].i = (((frame[3].i) + (frame[4].i)) - (jint(1)));
	LINE_NUMBER(686);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(687);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(688);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[5].o), ((frame[9].i) - ((frame[4].i) - (jint(1)))), (frame[4].i));
	LINE_NUMBER(689);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(691);
	if ((frame[4].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(692);
	frame[9].i = ((frame[9].i) - (frame[2].i));
	LINE_NUMBER(693);
	frame[7].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(694);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[2].i));
	LINE_NUMBER(695);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(696);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(699);
	frame[10].i = ((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_minGallop);
	}
label_17:;
	{
	LINE_NUMBER(702);
	frame[11].i = (jint(0));
	LINE_NUMBER(703);
	frame[12].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(710);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))));
	if (temp0 >= 0) goto label_20;
	}
	{
	LINE_NUMBER(711);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(712);
	INST_IINC(11, 1);
	LINE_NUMBER(713);
	frame[12].i = (jint(0));
	LINE_NUMBER(714);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_25;
	}
	goto label_26;
label_20:;
	{
	LINE_NUMBER(716);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(717);
	INST_IINC(12, 1);
	LINE_NUMBER(718);
	frame[11].i = (jint(0));
	LINE_NUMBER(719);
	INST_IINC(4, -1);
	if ((frame[4].i) != (jint(1))) goto label_25;
	}
	goto label_26;
label_25:;
	{
	LINE_NUMBER(721);
	if (((frame[11].i) | (frame[12].i)) < (frame[10].i)) goto label_19;
	}
label_30:;
	{
	LINE_NUMBER(729);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))))), (frame[5].o), (frame[1].i), (frame[2].i), ((frame[2].i) - (jint(1))));
	frame[11].i = (temp0 - temp1);
	LINE_NUMBER(730);
	if ((frame[11].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(731);
	frame[9].i = ((frame[9].i) - (frame[11].i));
	LINE_NUMBER(732);
	frame[7].i = ((frame[7].i) - (frame[11].i));
	LINE_NUMBER(733);
	frame[2].i = ((frame[2].i) - (frame[11].i));
	LINE_NUMBER(734);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[11].i));
	LINE_NUMBER(735);
	if ((frame[2].i) != 0) goto label_32;
	}
	goto label_26;
label_32:;
	{
	LINE_NUMBER(737);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(738);
	INST_IINC(4, -1);
	if ((frame[4].i) != (jint(1))) goto label_39;
	}
	goto label_26;
label_39:;
	{
	LINE_NUMBER(740);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))))), (frame[6].o), (jint(0)), (frame[4].i), ((frame[4].i) - (jint(1))));
	frame[12].i = (temp0 - temp1);
	LINE_NUMBER(741);
	if ((frame[12].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(742);
	frame[9].i = ((frame[9].i) - (frame[12].i));
	LINE_NUMBER(743);
	frame[8].i = ((frame[8].i) - (frame[12].i));
	LINE_NUMBER(744);
	frame[4].i = ((frame[4].i) - (frame[12].i));
	LINE_NUMBER(745);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), ((frame[8].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[12].i));
	LINE_NUMBER(746);
	if ((frame[4].i) > (jint(1))) goto label_41;
	}
	goto label_26;
label_41:;
	{
	LINE_NUMBER(748);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(749);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_48;
	}
	goto label_26;
label_48:;
	{
	LINE_NUMBER(750);
	INST_IINC(10, -1);
	LINE_NUMBER(751);
	if ((frame[11].i) < (7)) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	if ((frame[12].i) < (7)) goto label_52;
	}
	INST_ICONST(1);
	goto label_53;
label_52:;
	INST_ICONST(0);
label_53:;
	INST_IOR();
	if ((--sp)->i != 0) goto label_30;
	{
	LINE_NUMBER(752);
	if ((frame[10].i) >= 0) goto label_55;
	}
	INST_ICONST(0);
	INST_ISTORE(10);
label_55:;
	{
	LINE_NUMBER(753);
	INST_IINC(10, 2);
	LINE_NUMBER(754);
	goto label_17;
	}
label_26:;
	{
	LINE_NUMBER(755);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[10].i) >= (jint(1))) goto label_57;
	}
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ILOAD(10);
label_58:;
	{
	sp -= 2;
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_minGallop = sp[1].i;
	LINE_NUMBER(757);
	if ((frame[4].i) != (jint(1))) goto label_60;
	}
	{
	LINE_NUMBER(759);
	frame[9].i = ((frame[9].i) - (frame[2].i));
	LINE_NUMBER(760);
	frame[7].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(761);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[2].i));
	LINE_NUMBER(762);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	goto label_65;
	}
label_60:;
	{
	LINE_NUMBER(763);
	if ((frame[4].i) != 0) goto label_66;
	}
	{
	LINE_NUMBER(764);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Comparison method violates its general contract!"_j))));
	throwException(ctx, sp[0].o);	}
label_66:;
	{
	LINE_NUMBER(768);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[5].o), ((frame[9].i) - ((frame[4].i) - (jint(1)))), (frame[4].i));
	}
label_65:;
	LINE_NUMBER(770);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(778);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount), (frame[1].i));
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_tmpCount = temp0;
	LINE_NUMBER(779);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(781);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(782);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(1))));
	LINE_NUMBER(783);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(2))));
	LINE_NUMBER(784);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(4))));
	LINE_NUMBER(785);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (8)));
	LINE_NUMBER(786);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (16)));
	LINE_NUMBER(787);
	INST_IINC(2, 1);
	LINE_NUMBER(789);
	if ((frame[2].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(790);
	frame[2].i = (frame[1].i);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(792);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (bit_cast<jint>(bit_cast<uint32_t>((((jarray) nullCheck(ctx, sp[0].o))->length)) >> (jint(1)))));
	frame[2].i = temp1;
	}
label_13:;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(795);
	((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp = (jref) (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_ComparableTimSort_rangeCheck_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ComparableTimSort:rangeCheck", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ComparableTimSort(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(808);
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
	LINE_NUMBER(809);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(810);
	if ((frame[2].i) <= (frame[0].i)) goto label_3;
	}
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(811);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ComparableTimSort[] {
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
	(void *) M_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int,
	(void *) M_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int,
	(void *) M_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse,
	(void *) M_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse,
	(void *) M_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int,
	(void *) M_com_badlogic_gdx_utils_ComparableTimSort_mergeLo_int_int_int_int,
	(void *) M_com_badlogic_gdx_utils_ComparableTimSort_mergeHi_int_int_int_int,
	(void *) M_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object,
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
	{ "doSort", "([Ljava/lang/Object;II)V" },
	{ "pushRun", "(II)V" },
	{ "mergeCollapse", "()V" },
	{ "mergeForceCollapse", "()V" },
	{ "mergeAt", "(I)V" },
	{ "mergeLo", "(IIII)V" },
	{ "mergeHi", "(IIII)V" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "MIN_MERGE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_ComparableTimSort_MIN_MERGE, "I", 26 },
	{ "a", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_ComparableTimSort, F_a), "[Ljava/lang/Object;", 2 },
	{ "MIN_GALLOP", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_ComparableTimSort_MIN_GALLOP, "I", 26 },
	{ "minGallop", &class_int, offsetof(com_badlogic_gdx_utils_ComparableTimSort, F_minGallop), "I", 2 },
	{ "INITIAL_TMP_STORAGE_LENGTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_ComparableTimSort_INITIAL_TMP_STORAGE_LENGTH, "I", 26 },
	{ "tmp", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_ComparableTimSort, F_tmp), "[Ljava/lang/Object;", 2 },
	{ "tmpCount", &class_int, offsetof(com_badlogic_gdx_utils_ComparableTimSort, F_tmpCount), "I", 2 },
	{ "stackSize", &class_int, offsetof(com_badlogic_gdx_utils_ComparableTimSort, F_stackSize), "I", 2 },
	{ "runBase", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_utils_ComparableTimSort, F_runBase), "[I", 18 },
	{ "runLen", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_utils_ComparableTimSort, F_runLen), "[I", 18 },
	{ "DEBUG", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_ComparableTimSort_DEBUG, "Z", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ComparableTimSort, 0, "()V", 0 },
	{ "doSort", (intptr_t) M_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int, VTABLE_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int, "([Ljava/lang/Object;II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ComparableTimSort_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 2 },
	{ "sort", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_sort_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 8 },
	{ "sort", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_sort_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;II)V", 8 },
	{ "binarySort", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int, 0, "([Ljava/lang/Object;III)V", 10 },
	{ "countRunAndMakeAscending", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int, 0, "([Ljava/lang/Object;II)I", 10 },
	{ "reverseRange", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_reverseRange_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;II)V", 10 },
	{ "minRunLength", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_minRunLength_int_R_int, 0, "(I)I", 10 },
	{ "pushRun", (intptr_t) M_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int, VTABLE_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int, "(II)V", 2 },
	{ "mergeCollapse", (intptr_t) M_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse, VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse, "()V", 2 },
	{ "mergeForceCollapse", (intptr_t) M_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse, VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse, "()V", 2 },
	{ "mergeAt", (intptr_t) M_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int, VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int, "(I)V", 2 },
	{ "gallopLeft", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int, 0, "(Ljava/lang/Comparable;[Ljava/lang/Object;III)I", 10 },
	{ "gallopRight", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int, 0, "(Ljava/lang/Comparable;[Ljava/lang/Object;III)I", 10 },
	{ "mergeLo", (intptr_t) M_com_badlogic_gdx_utils_ComparableTimSort_mergeLo_int_int_int_int, VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeLo_int_int_int_int, "(IIII)V", 2 },
	{ "mergeHi", (intptr_t) M_com_badlogic_gdx_utils_ComparableTimSort_mergeHi_int_int_int_int, VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeHi_int_int_int_int, "(IIII)V", 2 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 2 },
	{ "rangeCheck", (intptr_t) SM_com_badlogic_gdx_utils_ComparableTimSort_rangeCheck_int_int_int, 0, "(III)V", 10 },
};

Class class_com_badlogic_gdx_utils_ComparableTimSort{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ComparableTimSort",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ComparableTimSort),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ComparableTimSort,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ComparableTimSort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ComparableTimSort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ComparableTimSort = registerClass(&class_com_badlogic_gdx_utils_ComparableTimSort);

}

