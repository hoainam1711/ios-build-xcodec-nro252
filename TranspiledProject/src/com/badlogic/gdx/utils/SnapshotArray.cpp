#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_utils_SnapshotArray(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_SnapshotArray *) object;
	if (self->F_snapshot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_snapshot)->clazz)->markFunction)((jobject) self->F_snapshot, mark, depth + 1);
	if (self->F_recycled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_recycled)->clazz)->markFunction)((jobject) self->F_recycled, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_SnapshotArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Array(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(49);
	init_com_badlogic_gdx_utils_Array(ctx, (frame[0].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_boolean_int_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(57);
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(62);
	init_com_badlogic_gdx_utils_Array_boolean_int_java_lang_Class(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(66);
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(70);
	init_com_badlogic_gdx_utils_Array_boolean_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_ArraySupplier(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	init_com_badlogic_gdx_utils_Array_java_lang_Class(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	init_com_badlogic_gdx_utils_Array_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SnapshotArray_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	init_com_badlogic_gdx_utils_Array_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK(sp[0].o))->F_snapshot = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK(sp[0].o))->F_snapshots = (((jint)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK(sp[0].o))->F_snapshots) + (jint(1)));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:end", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (((jint)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_snapshots) - (jint(1))));
	((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK(sp[0].o))->F_snapshots = temp0;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_snapshot;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_snapshot;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_snapshots) != 0) goto label_3;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_snapshot;
	((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK(sp[0].o))->F_recycled = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_recycled;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	}
label_3:;
	{
	LINE_NUMBER(107);
	((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_snapshot = (jref) (jobject(nullptr));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_modified(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:modified", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_snapshot;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_snapshot;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_recycled;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_recycled;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_recycled;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_recycled;
	((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(116);
	((com_badlogic_gdx_utils_SnapshotArray *) NULL_CHECK((frame[0].o)))->F_recycled = (jref) (jobject(nullptr));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	}
label_7:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(122);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(123);
	M_com_badlogic_gdx_utils_Array_set_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(127);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(128);
	M_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:insertRange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(132);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(133);
	M_com_badlogic_gdx_utils_Array_insertRange_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:swap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(137);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(138);
	M_com_badlogic_gdx_utils_Array_swap_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_SnapshotArray_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:replaceFirst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(142);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(143);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_SnapshotArray_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:replaceAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(147);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(148);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:removeValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(152);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(153);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:removeIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(158);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:removeRange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(162);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(163);
	M_com_badlogic_gdx_utils_Array_removeRange_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_SnapshotArray_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:removeAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(167);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(168);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_SnapshotArray_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:pop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(173);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(178);
	M_com_badlogic_gdx_utils_Array_clear(ctx, (frame[0].o));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:sort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(183);
	M_com_badlogic_gdx_utils_Array_sort(ctx, (frame[0].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(188);
	M_com_badlogic_gdx_utils_Array_sort_java_util_Comparator(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:reverse", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(193);
	M_com_badlogic_gdx_utils_Array_reverse(ctx, (frame[0].o));
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:shuffle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(198);
	M_com_badlogic_gdx_utils_Array_shuffle(ctx, (frame[0].o));
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SnapshotArray_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:truncate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(202);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(203);
	M_com_badlogic_gdx_utils_Array_truncate_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_SnapshotArray_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:setSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(207);
	M_com_badlogic_gdx_utils_SnapshotArray_modified(ctx, (frame[0].o));
	LINE_NUMBER(208);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_SnapshotArray_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_SnapshotArray(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SnapshotArray:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(213);
	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SnapshotArray);
	init_com_badlogic_gdx_utils_SnapshotArray_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_utils_SnapshotArray;
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

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_utils_SnapshotArray[] {
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
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_set_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_insertRange_int_int,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_swap_int_int,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int,
	(void *) M_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_removeRange_int_int,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_pop_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_first_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_clear,
	(void *) M_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_setSize_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_sort,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_sort_java_util_Comparator,
	(void *) M_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_reverse,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_shuffle,
	(void *) M_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator,
	(void *) M_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_truncate_int,
	(void *) M_com_badlogic_gdx_utils_Array_random_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_end,
	(void *) M_com_badlogic_gdx_utils_SnapshotArray_modified,
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
	{ "begin", "()[Ljava/lang/Object;" },
	{ "end", "()V" },
	{ "modified", "()V" },
};

static FieldMetadata fields[] {
	{ "snapshot", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_SnapshotArray, F_snapshot), "[Ljava/lang/Object;", 2 },
	{ "recycled", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_SnapshotArray, F_recycled), "[Ljava/lang/Object;", 2 },
	{ "snapshots", &class_int, offsetof(com_badlogic_gdx_utils_SnapshotArray, F_snapshots), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_boolean_int_com_badlogic_gdx_utils_ArraySupplier, 0, "(ZILcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_boolean_int_java_lang_Class, 0, "(ZILjava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_boolean_Array1_java_lang_Object_int_int, 0, "(Z[Ljava/lang/Object;II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_com_badlogic_gdx_utils_ArraySupplier, 0, "(Lcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_java_lang_Class, 0, "(Ljava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SnapshotArray_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_end, VTABLE_com_badlogic_gdx_utils_SnapshotArray_end, "()V", 1 },
	{ "modified", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_modified, VTABLE_com_badlogic_gdx_utils_SnapshotArray_modified, "()V", 2 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_set_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_SnapshotArray_set_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insertRange", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_insertRange_int_int, VTABLE_com_badlogic_gdx_utils_SnapshotArray_insertRange_int_int, "(II)V", 1 },
	{ "swap", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_swap_int_int, VTABLE_com_badlogic_gdx_utils_SnapshotArray_swap_int_int, "(II)V", 1 },
	{ "replaceFirst", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_SnapshotArray_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean, "(Ljava/lang/Object;ZLjava/lang/Object;)Z", 1 },
	{ "replaceAll", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_SnapshotArray_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int, "(Ljava/lang/Object;ZLjava/lang/Object;)I", 1 },
	{ "removeValue", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "removeRange", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_removeRange_int_int, VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean, "(Lcom/badlogic/gdx/utils/Array;Z)Z", 1 },
	{ "pop", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_pop_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_SnapshotArray_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_clear, VTABLE_com_badlogic_gdx_utils_SnapshotArray_clear, "()V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_sort, VTABLE_com_badlogic_gdx_utils_SnapshotArray_sort, "()V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_sort_java_util_Comparator, VTABLE_com_badlogic_gdx_utils_SnapshotArray_sort_java_util_Comparator, "(Ljava/util/Comparator;)V", 1 },
	{ "reverse", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_reverse, VTABLE_com_badlogic_gdx_utils_SnapshotArray_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_shuffle, VTABLE_com_badlogic_gdx_utils_SnapshotArray_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_truncate_int, VTABLE_com_badlogic_gdx_utils_SnapshotArray_truncate_int, "(I)V", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_utils_SnapshotArray_setSize_int_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_SnapshotArray_setSize_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 1 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_SnapshotArray_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_SnapshotArray, 0, "([Ljava/lang/Object;)Lcom/badlogic/gdx/utils/SnapshotArray;", 137 },
};

Class class_com_badlogic_gdx_utils_SnapshotArray{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/SnapshotArray",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Array,
		.size = sizeof(com_badlogic_gdx_utils_SnapshotArray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_SnapshotArray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_SnapshotArray,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_SnapshotArray,
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
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_SnapshotArray = registerClass(&class_com_badlogic_gdx_utils_SnapshotArray);

}

