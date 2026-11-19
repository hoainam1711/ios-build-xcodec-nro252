#include "com/badlogic/gdx/math/RandomXS128.h"
#include "java/lang/Object.h"
#include "java/util/Random.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/RandomXS128.h"
#include "java/lang/IllegalArgumentException.h"

extern "C" {

jdouble SF_com_badlogic_gdx_math_RandomXS128_NORM_DOUBLE;
jdouble SF_com_badlogic_gdx_math_RandomXS128_NORM_FLOAT;

void mark_com_badlogic_gdx_math_RandomXS128(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Random(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_math_RandomXS128 *) object;
}

void clinit_com_badlogic_gdx_math_RandomXS128(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Random(ctx);
	SF_com_badlogic_gdx_math_RandomXS128_NORM_DOUBLE = jdouble(1.110223e-16);
	SF_com_badlogic_gdx_math_RandomXS128_NORM_FLOAT = jdouble(5.960464e-08);
}

void init_com_badlogic_gdx_math_RandomXS128(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_RandomXS128(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(48);
	init_java_util_Random(ctx, (frame[0].o));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_java_util_Random(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[1].o);
	jlong temp0 = (jlong)((func_java_util_Random_nextLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Random_nextLong_R_long])(ctx, sp[1].o);
	((func_com_badlogic_gdx_math_RandomXS128_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_setSeed_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_RandomXS128_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_RandomXS128(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(54);
	init_java_util_Random(ctx, (frame[0].o));
	LINE_NUMBER(55);
	((func_com_badlogic_gdx_math_RandomXS128_setSeed_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_setSeed_long])(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_RandomXS128_long_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_RandomXS128(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(61);
	init_java_util_Random(ctx, (frame[0].o));
	LINE_NUMBER(62);
	((func_com_badlogic_gdx_math_RandomXS128_setState_long_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_setState_long_long])(ctx, (frame[0].o), (frame[1].l), (frame[3].l));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_math_RandomXS128_nextLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:nextLong", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	frame[1].l = ((jlong)((com_badlogic_gdx_math_RandomXS128 *) NULL_CHECK((frame[0].o)))->F_seed0);
	LINE_NUMBER(71);
	frame[3].l = ((jlong)((com_badlogic_gdx_math_RandomXS128 *) NULL_CHECK((frame[0].o)))->F_seed1);
	LINE_NUMBER(72);
	((com_badlogic_gdx_math_RandomXS128 *) NULL_CHECK((frame[0].o)))->F_seed0 = (frame[3].l);
	LINE_NUMBER(73);
	frame[1].l = ((frame[1].l) ^ ((frame[1].l) << (23)));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jlong temp0 = (((frame[1].l) ^ (frame[3].l)) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (17)))) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[3].l)) >> (26)));
	((com_badlogic_gdx_math_RandomXS128 *) NULL_CHECK(sp[0].o))->F_seed1 = temp0;
	popStackFrame(ctx);
	return (temp0 + (frame[3].l));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_RandomXS128_next_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:next", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(80);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_math_RandomXS128_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint((temp0 & (((jlong(1)) << (frame[1].i)) - (jlong(1))))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_RandomXS128_nextInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:nextInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_math_RandomXS128_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_RandomXS128_nextInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:nextInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(99);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long])(ctx, (frame[0].o), (jlong((frame[1].i))));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:nextLong", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(110);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"n must be positive"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(112);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_math_RandomXS128_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long])(ctx, (frame[0].o));
	frame[3].l = (bit_cast<jlong>(bit_cast<uint64_t>(temp0) >> (jint(1))));
	LINE_NUMBER(113);
	frame[5].l = ((frame[3].l) % (frame[1].l));
	LINE_NUMBER(114);
	if ((longCompare((((frame[3].l) - (frame[5].l)) + ((frame[1].l) - (jlong(1)))), (jlong(0)))) < 0) goto label_4;
	}
	INST_LLOAD(5);
	popStackFrame(ctx);
	INST_LRETURN();
label_4:;
	LINE_NUMBER(115);
	goto label_1;

	popStackFrame(ctx);
}

jdouble M_com_badlogic_gdx_math_RandomXS128_nextDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:nextDouble", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_math_RandomXS128_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jdouble((bit_cast<jlong>(bit_cast<uint64_t>(temp0) >> (11))))) * (jdouble(1.110223e-16)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_RandomXS128_nextFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:nextFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_math_RandomXS128_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jfloat(((jdouble((bit_cast<jlong>(bit_cast<uint64_t>(temp0) >> (40))))) * (jdouble(5.960464e-08)))));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_RandomXS128_nextBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:nextBoolean", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_math_RandomXS128_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long])(ctx, (frame[0].o));
	if ((longCompare((temp0 & (jlong(1))), (jlong(0)))) == 0) goto label_1;
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

void M_com_badlogic_gdx_math_RandomXS128_nextBytes_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:nextBytes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(150);
	frame[2].i = (jint(0));
	LINE_NUMBER(151);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_2:;
	{
	LINE_NUMBER(152);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(153);
	if ((frame[3].i) >= (8)) goto label_5;
	}
	INST_ILOAD(3);
	goto label_6;
label_5:;
	INST_BIPUSH(8);
label_6:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(154);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_math_RandomXS128_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long])(ctx, (frame[0].o));
	frame[4].l = temp0;
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	INST_IINC(3, -1);
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jbyte((jint((frame[4].l)))));
	LINE_NUMBER(154);
	frame[4].l = ((frame[4].l) >> (8));
	goto label_8;
	}
label_9:;
	goto label_2;
label_3:;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_RandomXS128_setSeed_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:setSeed", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(166);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_1;
	}
	(sp++)->l = bit_cast<jlong>(0x8000000000000000ll);
	goto label_2;
label_1:;
	INST_LLOAD(1);
label_2:;
	{
	sp -= 1;
	jlong temp0 = (jlong)SM_com_badlogic_gdx_math_RandomXS128_murmurHash3_long_R_long(ctx, sp[0].l);
	frame[3].l = temp0;
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	jlong temp1 = frame[3].l;
	jlong temp2 = (jlong)SM_com_badlogic_gdx_math_RandomXS128_murmurHash3_long_R_long(ctx, (frame[3].l));
	((func_com_badlogic_gdx_math_RandomXS128_setState_long_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_RandomXS128_setState_long_long])(ctx, sp[0].o, temp1, temp2);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_RandomXS128_setState_long_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:setState", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(174);
	((com_badlogic_gdx_math_RandomXS128 *) NULL_CHECK((frame[0].o)))->F_seed0 = (frame[1].l);
	LINE_NUMBER(175);
	((com_badlogic_gdx_math_RandomXS128 *) NULL_CHECK((frame[0].o)))->F_seed1 = (frame[3].l);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_math_RandomXS128_getState_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:getState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(182);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jlong temp0 = (jlong)((com_badlogic_gdx_math_RandomXS128 *) NULL_CHECK((frame[0].o)))->F_seed0;
	sp[0].l = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].l = ((com_badlogic_gdx_math_RandomXS128 *) NULL_CHECK(sp[-1].o))->F_seed1;
label_2:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_math_RandomXS128_murmurHash3_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/RandomXS128:murmurHash3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_RandomXS128(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(186);
	frame[0].l = ((frame[0].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (33))));
	LINE_NUMBER(187);
	frame[0].l = ((frame[0].l) * (jlong(-49064778989728563ll)));
	LINE_NUMBER(188);
	frame[0].l = ((frame[0].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (33))));
	LINE_NUMBER(189);
	frame[0].l = ((frame[0].l) * (jlong(-4265267296055464877ll)));
	LINE_NUMBER(190);
	frame[0].l = ((frame[0].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (33))));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (frame[0].l);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_RandomXS128[] {
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
	(void *) M_com_badlogic_gdx_math_RandomXS128_next_int_R_int,
	(void *) M_com_badlogic_gdx_math_RandomXS128_nextDouble_R_double,
	(void *) M_com_badlogic_gdx_math_RandomXS128_nextFloat_R_float,
	(void *) M_com_badlogic_gdx_math_RandomXS128_nextInt_R_int,
	(void *) M_com_badlogic_gdx_math_RandomXS128_nextInt_int_R_int,
	(void *) M_com_badlogic_gdx_math_RandomXS128_nextLong_R_long,
	(void *) M_com_badlogic_gdx_math_RandomXS128_setSeed_long,
	(void *) M_com_badlogic_gdx_math_RandomXS128_nextBoolean_R_boolean,
	(void *) M_com_badlogic_gdx_math_RandomXS128_nextBytes_Array1_byte,
	(void *) M_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long,
	(void *) M_com_badlogic_gdx_math_RandomXS128_setState_long_long,
	(void *) M_com_badlogic_gdx_math_RandomXS128_getState_int_R_long,
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
	{ "next", "(I)I" },
	{ "nextDouble", "()D" },
	{ "nextFloat", "()F" },
	{ "nextInt", "()I" },
	{ "nextInt", "(I)I" },
	{ "nextLong", "()J" },
	{ "setSeed", "(J)V" },
	{ "nextBoolean", "()Z" },
	{ "nextBytes", "([B)V" },
	{ "nextLong", "(J)J" },
	{ "setState", "(JJ)V" },
	{ "getState", "(I)J" },
};

static FieldMetadata fields[] {
	{ "NORM_DOUBLE", &class_double, (intptr_t) &SF_com_badlogic_gdx_math_RandomXS128_NORM_DOUBLE, "D", 26 },
	{ "NORM_FLOAT", &class_double, (intptr_t) &SF_com_badlogic_gdx_math_RandomXS128_NORM_FLOAT, "D", 26 },
	{ "seed0", &class_long, offsetof(com_badlogic_gdx_math_RandomXS128, F_seed0), "J", 2 },
	{ "seed1", &class_long, offsetof(com_badlogic_gdx_math_RandomXS128, F_seed1), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_RandomXS128, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_RandomXS128_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_RandomXS128_long_long, 0, "(JJ)V", 1 },
	{ "nextLong", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_nextLong_R_long, VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long, "()J", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_next_int_R_int, VTABLE_com_badlogic_gdx_math_RandomXS128_next_int_R_int, "(I)I", 20 },
	{ "nextInt", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_nextInt_R_int, VTABLE_com_badlogic_gdx_math_RandomXS128_nextInt_R_int, "()I", 1 },
	{ "nextInt", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_nextInt_int_R_int, VTABLE_com_badlogic_gdx_math_RandomXS128_nextInt_int_R_int, "(I)I", 1 },
	{ "nextLong", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long, VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long, "(J)J", 1 },
	{ "nextDouble", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_nextDouble_R_double, VTABLE_com_badlogic_gdx_math_RandomXS128_nextDouble_R_double, "()D", 1 },
	{ "nextFloat", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_nextFloat_R_float, VTABLE_com_badlogic_gdx_math_RandomXS128_nextFloat_R_float, "()F", 1 },
	{ "nextBoolean", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_nextBoolean_R_boolean, VTABLE_com_badlogic_gdx_math_RandomXS128_nextBoolean_R_boolean, "()Z", 1 },
	{ "nextBytes", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_nextBytes_Array1_byte, VTABLE_com_badlogic_gdx_math_RandomXS128_nextBytes_Array1_byte, "([B)V", 1 },
	{ "setSeed", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_setSeed_long, VTABLE_com_badlogic_gdx_math_RandomXS128_setSeed_long, "(J)V", 1 },
	{ "setState", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_setState_long_long, VTABLE_com_badlogic_gdx_math_RandomXS128_setState_long_long, "(JJ)V", 1 },
	{ "getState", (intptr_t) M_com_badlogic_gdx_math_RandomXS128_getState_int_R_long, VTABLE_com_badlogic_gdx_math_RandomXS128_getState_int_R_long, "(I)J", 1 },
	{ "murmurHash3", (intptr_t) SM_com_badlogic_gdx_math_RandomXS128_murmurHash3_long_R_long, 0, "(J)J", 26 },
};

Class class_com_badlogic_gdx_math_RandomXS128{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/RandomXS128",
		.parentClass = (intptr_t) &class_java_util_Random,
		.size = sizeof(com_badlogic_gdx_math_RandomXS128),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_RandomXS128,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_RandomXS128,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_RandomXS128,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_RandomXS128 = registerClass(&class_com_badlogic_gdx_math_RandomXS128);

}

