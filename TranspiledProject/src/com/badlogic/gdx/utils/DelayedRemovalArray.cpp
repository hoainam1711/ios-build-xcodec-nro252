#include "com/badlogic/gdx/utils/DelayedRemovalArray.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "java/util/Comparator.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/utils/DelayedRemovalArray.h"
#include "java/lang/Class.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_utils_DelayedRemovalArray(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_Array(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_DelayedRemovalArray *) object;
	if (self->F_remove)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_remove)->clazz)->markFunction)((jobject) self->F_remove, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_DelayedRemovalArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Array(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_com_badlogic_gdx_utils_Array(ctx, (frame[0].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_boolean_int_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(46);
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(51);
	init_com_badlogic_gdx_utils_Array_boolean_int_java_lang_Class(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(55);
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(59);
	init_com_badlogic_gdx_utils_Array_boolean_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_ArraySupplier(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	init_com_badlogic_gdx_utils_Array_java_lang_Class(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(72);
	init_com_badlogic_gdx_utils_Array_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DelayedRemovalArray_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	init_com_badlogic_gdx_utils_Array_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_remove = (jref) sp[1].o;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_iterating = (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_iterating) + (jint(1)));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:end", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"begin must be called before end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_iterating = (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK(sp[0].o))->F_iterating) - (jint(1)));
	LINE_NUMBER(86);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) != 0) goto label_3;
	}
	{
	LINE_NUMBER(87);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_clear) <= 0) goto label_5;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_clear) != ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_remove;
	((func_com_badlogic_gdx_utils_IntArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(89);
	((func_com_badlogic_gdx_utils_DelayedRemovalArray_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_clear])(ctx, (frame[0].o));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(91);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_remove;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size);
	}
label_10:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_remove;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_pop_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_pop_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(93);
	if ((frame[3].i) < ((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_clear)) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_DelayedRemovalArray_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	}
label_14:;
	{
	LINE_NUMBER(91);
	INST_IINC(1, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(95);
	frame[1].i = (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_clear) - (jint(1)));
	}
label_15:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_DelayedRemovalArray_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(95);
	INST_IINC(1, -1);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(98);
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_clear = (jint(0));
	}
label_3:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_remove_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	if ((frame[1].i) >= ((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_clear)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(104);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_remove;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_remove;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(106);
	if ((frame[1].i) != (frame[4].i)) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(107);
	if ((frame[1].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_remove;
	((func_com_badlogic_gdx_utils_IntArray_insert_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_insert_int_int])(ctx, sp[0].o, (frame[2].i), (frame[1].i));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(104);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_remove;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_DelayedRemovalArray_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:removeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(116);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_DelayedRemovalArray_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(118);
	if ((frame[3].i) != (jint(-1))) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(119);
	M_com_badlogic_gdx_utils_DelayedRemovalArray_remove_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_DelayedRemovalArray_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:removeIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(126);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	M_com_badlogic_gdx_utils_DelayedRemovalArray_remove_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_DelayedRemovalArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:removeRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(134);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(135);
	frame[3].i = (frame[2].i);
	}
label_3:;
	{
	if ((frame[3].i) < (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(136);
	M_com_badlogic_gdx_utils_DelayedRemovalArray_remove_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(135);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	goto label_7;
label_1:;
	{
	LINE_NUMBER(138);
	M_com_badlogic_gdx_utils_Array_removeRange_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_7:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_clear = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(146);
	M_com_badlogic_gdx_utils_Array_clear(ctx, (frame[0].o));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(150);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(151);
	M_com_badlogic_gdx_utils_Array_set_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(155);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(156);
	M_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:insertRange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(160);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(161);
	M_com_badlogic_gdx_utils_Array_insertRange_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:swap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(165);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(166);
	M_com_badlogic_gdx_utils_Array_swap_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_DelayedRemovalArray_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:replaceFirst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(170);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_DelayedRemovalArray_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:replaceAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(175);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_DelayedRemovalArray_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:pop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(186);
	M_com_badlogic_gdx_utils_Array_sort(ctx, (frame[0].o));
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:sort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(191);
	M_com_badlogic_gdx_utils_Array_sort_java_util_Comparator(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:reverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(196);
	M_com_badlogic_gdx_utils_Array_reverse(ctx, (frame[0].o));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:shuffle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(201);
	M_com_badlogic_gdx_utils_Array_shuffle(ctx, (frame[0].o));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_DelayedRemovalArray_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:truncate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(205);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(206);
	M_com_badlogic_gdx_utils_Array_truncate_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_DelayedRemovalArray_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(210);
	if (((jint)((com_badlogic_gdx_utils_DelayedRemovalArray *) NULL_CHECK((frame[0].o)))->F_iterating) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid between begin/end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_DelayedRemovalArray_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_DelayedRemovalArray(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DelayedRemovalArray:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(216);
	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_DelayedRemovalArray);
	init_com_badlogic_gdx_utils_DelayedRemovalArray_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_utils_DelayedRemovalArray;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method <init>
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[5])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[6])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method <init>
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[7])->F_method)->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[8])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[9])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_utils_DelayedRemovalArray[] {
	(void *) M_com_badlogic_gdx_utils_Array_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Array_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_Array_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_Array_add_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int,
	(void *) M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int,
	(void *) M_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_set_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_insert_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_insertRange_int_int,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_swap_int_int,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_removeValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_removeIndex_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_removeRange_int_int,
	(void *) M_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_pop_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_first_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_clear,
	(void *) M_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_setSize_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_sort,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_sort_java_util_Comparator,
	(void *) M_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_reverse,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_shuffle,
	(void *) M_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator,
	(void *) M_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_truncate_int,
	(void *) M_com_badlogic_gdx_utils_Array_random_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_begin,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_end,
	(void *) M_com_badlogic_gdx_utils_DelayedRemovalArray_remove_int,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;II)V" },
	{ "addAll", "([Ljava/lang/Object;)V" },
	{ "addAll", "([Ljava/lang/Object;II)V" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)V" },
	{ "insert", "(ILjava/lang/Object;)V" },
	{ "insertRange", "(II)V" },
	{ "swap", "(II)V" },
	{ "replaceFirst", "(Ljava/lang/Object;ZLjava/lang/Object;)Z" },
	{ "replaceAll", "(Ljava/lang/Object;ZLjava/lang/Object;)I" },
	{ "contains", "(Ljava/lang/Object;Z)Z" },
	{ "containsAll", "(Lcom/badlogic/gdx/utils/Array;Z)Z" },
	{ "containsAny", "(Lcom/badlogic/gdx/utils/Array;Z)Z" },
	{ "indexOf", "(Ljava/lang/Object;Z)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;Z)I" },
	{ "removeValue", "(Ljava/lang/Object;Z)Z" },
	{ "removeIndex", "(I)Ljava/lang/Object;" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Lcom/badlogic/gdx/utils/Array;Z)Z" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "shrink", "()[Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
	{ "setSize", "(I)[Ljava/lang/Object;" },
	{ "resize", "(I)[Ljava/lang/Object;" },
	{ "sort", "()V" },
	{ "sort", "(Ljava/util/Comparator;)V" },
	{ "selectRanked", "(Ljava/util/Comparator;I)Ljava/lang/Object;" },
	{ "selectRankedIndex", "(Ljava/util/Comparator;I)I" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/Array$ArrayIterator;" },
	{ "select", "(Lcom/badlogic/gdx/utils/Predicate;)Ljava/lang/Iterable;" },
	{ "truncate", "(I)V" },
	{ "random", "()Ljava/lang/Object;" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "(Lcom/badlogic/gdx/utils/ArraySupplier;)[Ljava/lang/Object;" },
	{ "toArray", "(Ljava/lang/Class;)[Ljava/lang/Object;" },
	{ "equalsIdentity", "(Ljava/lang/Object;)Z" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "remove", "(I)V" },
};

static FieldMetadata fields[] {
	{ "iterating", &class_int, offsetof(com_badlogic_gdx_utils_DelayedRemovalArray, F_iterating), "I", 2 },
	{ "remove", &class_com_badlogic_gdx_utils_IntArray, offsetof(com_badlogic_gdx_utils_DelayedRemovalArray, F_remove), "Lcom/badlogic/gdx/utils/IntArray;", 2 },
	{ "clear", &class_int, offsetof(com_badlogic_gdx_utils_DelayedRemovalArray, F_clear), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_boolean_int_com_badlogic_gdx_utils_ArraySupplier, 0, "(ZILcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_boolean_int_java_lang_Class, 0, "(ZILjava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_boolean_Array1_java_lang_Object_int_int, 0, "(Z[Ljava/lang/Object;II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_com_badlogic_gdx_utils_ArraySupplier, 0, "(Lcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_java_lang_Class, 0, "(Ljava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DelayedRemovalArray_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_begin, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_begin, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_end, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_end, "()V", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_remove_int, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_remove_int, "(I)V", 2 },
	{ "removeValue", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_removeValue_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_removeValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_removeIndex_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_removeIndex_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "removeRange", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_removeRange_int_int, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_removeRange_int_int, "(II)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_clear, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_clear, "()V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_set_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_set_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_insert_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_insert_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insertRange", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_insertRange_int_int, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_insertRange_int_int, "(II)V", 1 },
	{ "swap", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_swap_int_int, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_swap_int_int, "(II)V", 1 },
	{ "replaceFirst", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean, "(Ljava/lang/Object;ZLjava/lang/Object;)Z", 1 },
	{ "replaceAll", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int, "(Ljava/lang/Object;ZLjava/lang/Object;)I", 1 },
	{ "pop", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_pop_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_sort, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_sort, "()V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_sort_java_util_Comparator, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_sort_java_util_Comparator, "(Ljava/util/Comparator;)V", 1 },
	{ "reverse", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_reverse, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_shuffle, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_truncate_int, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_truncate_int, "(I)V", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_utils_DelayedRemovalArray_setSize_int_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_setSize_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 1 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_DelayedRemovalArray_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_DelayedRemovalArray, 0, "([Ljava/lang/Object;)Lcom/badlogic/gdx/utils/DelayedRemovalArray;", 137 },
};

Class class_com_badlogic_gdx_utils_DelayedRemovalArray{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/DelayedRemovalArray",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Array,
		.size = sizeof(com_badlogic_gdx_utils_DelayedRemovalArray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_DelayedRemovalArray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_DelayedRemovalArray,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_DelayedRemovalArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_DelayedRemovalArray = registerClass(&class_com_badlogic_gdx_utils_DelayedRemovalArray);

}

