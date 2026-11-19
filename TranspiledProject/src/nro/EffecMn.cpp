#include "nro/EffecMn.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "nro/Effect.h"

extern "C" {

jobject SF_nro_EffecMn_effId;

void mark_nro_EffecMn(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_EffecMn_effId)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_EffecMn_effId)->clazz)->markFunction)((jobject) SF_nro_EffecMn_effId, mark, depth + 1);
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
	auto self = (nro_EffecMn *) object;
}

void init_nro_EffecMn(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_EffecMn_addEff_nro_Effect(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:addEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(9);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_EffecMn_removeEff_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:removeEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_nro_EffecMn_getEffById_int_R_nro_Effect(ctx, (frame[0].i));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(14);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[1].o = (jobject)SM_nro_EffecMn_getEffById_int_R_nro_Effect(ctx, (frame[0].i));
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_EffecMn_getEffById_int_R_nro_Effect(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:getEffById", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(20);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(22);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect, sp[0].o);
	frame[2].o = sp[0].o;
	if (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_effId) != (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(20);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_nro_EffecMn_paintBackGroundUnderLayer_lib_mGraphics_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:paintBackGroundUnderLayer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(31);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[4].i;
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(32);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	if (((jint)((nro_Effect *) NULL_CHECK((checkCast(ctx, &class_nro_Effect, sp[0].o))))->F_layer) != (-(frame[3].i))) goto label_4;
	}
	{
	LINE_NUMBER(33);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	((func_nro_Effect_a_lib_mGraphics_int_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)))->vtable)[VTABLE_nro_Effect_a_lib_mGraphics_int_int])(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)), (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_4:;
	{
	LINE_NUMBER(31);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_EffecMn_paintLayer1_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:paintLayer1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(40);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(41);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_Effect *) NULL_CHECK((checkCast(ctx, &class_nro_Effect, sp[0].o))))->F_layer) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(42);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)))->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)), (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(40);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_EffecMn_paintLayer2_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:paintLayer2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(49);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(50);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_Effect *) NULL_CHECK((checkCast(ctx, &class_nro_Effect, sp[0].o))))->F_layer) != (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(51);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)))->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)), (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(49);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_EffecMn_paintLayer3_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:paintLayer3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(59);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_Effect *) NULL_CHECK((checkCast(ctx, &class_nro_Effect, sp[0].o))))->F_layer) != (jint(3))) goto label_4;
	}
	{
	LINE_NUMBER(60);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)))->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)), (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(58);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_EffecMn_paintLayer4_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:paintLayer4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(67);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(68);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_Effect *) NULL_CHECK((checkCast(ctx, &class_nro_Effect, sp[0].o))))->F_layer) != (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(69);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)))->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)), (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(67);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_EffecMn_update(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	{
	LINE_NUMBER(76);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(77);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	((func_nro_Effect_update) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)))->vtable)[VTABLE_nro_Effect_update])(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)));
	LINE_NUMBER(76);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_EffecMn(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffecMn:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffecMn(ctx);
	{
	LINE_NUMBER(6);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vEff"_j))));
	clinit_nro_EffecMn(ctx);
	SF_nro_EffecMn_effId = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_EffecMn[] {
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
	{ "effId", &class_nro_MyVector, (intptr_t) &SF_nro_EffecMn_effId, "Lnro/MyVector;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_EffecMn, 0, "()V", 1 },
	{ "addEff", (intptr_t) SM_nro_EffecMn_addEff_nro_Effect, 0, "(Lnro/Effect;)V", 9 },
	{ "removeEff", (intptr_t) SM_nro_EffecMn_removeEff_int, 0, "(I)V", 9 },
	{ "getEffById", (intptr_t) SM_nro_EffecMn_getEffById_int_R_nro_Effect, 0, "(I)Lnro/Effect;", 10 },
	{ "paintBackGroundUnderLayer", (intptr_t) SM_nro_EffecMn_paintBackGroundUnderLayer_lib_mGraphics_int_int_int, 0, "(Llib/mGraphics;III)V", 9 },
	{ "paintLayer1", (intptr_t) SM_nro_EffecMn_paintLayer1_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paintLayer2", (intptr_t) SM_nro_EffecMn_paintLayer2_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paintLayer3", (intptr_t) SM_nro_EffecMn_paintLayer3_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paintLayer4", (intptr_t) SM_nro_EffecMn_paintLayer4_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "update", (intptr_t) SM_nro_EffecMn_update, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_EffecMn, 0, "()V", 8 },
};

Class class_nro_EffecMn{
		.nativeName = (intptr_t) "nro/EffecMn",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_EffecMn),
		.classVtable = (intptr_t) vtable_nro_EffecMn,
		.staticInitializer = (intptr_t) clinit_nro_EffecMn,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_EffecMn,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_EffecMn = registerClass(&class_nro_EffecMn);

}

