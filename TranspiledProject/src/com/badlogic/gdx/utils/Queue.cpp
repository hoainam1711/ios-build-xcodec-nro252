#include "com/badlogic/gdx/utils/Queue.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "com/badlogic/gdx/utils/Queue_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/utils/Queue.h"
#include "com/badlogic/gdx/utils/reflect/ArrayReflection.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/utils/Queue_QueueIterator.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Queue_QueueIterable.h"
#include "java/lang/System.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Queue(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Queue *) object;
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
	if (self->F_iterable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterable)->clazz)->markFunction)((jobject) self->F_iterable, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Queue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Queue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_com_badlogic_gdx_utils_Queue_int(ctx, (frame[0].o), (16));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Queue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_ArraySupplier_object_R_com_badlogic_gdx_utils_ArraySupplier(ctx);
	init_com_badlogic_gdx_utils_Queue_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Queue_int_java_lang_Class(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_utils_Queue_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_utils_Queue_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_utils_Queue_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Queue_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Queue_int_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(37);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(40);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_ArraySupplier, INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_values = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:addLast", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(73);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(74);
	((func_com_badlogic_gdx_utils_Queue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) << (jint(1))));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[1].o))->F_tail;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[1].o))->F_tail = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[1].o);
	LINE_NUMBER(79);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(80);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Queue_addFirst_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:addFirst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(91);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(92);
	((func_com_badlogic_gdx_utils_Queue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) << (jint(1))));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(96);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(97);
	INST_IINC(3, -1);
	LINE_NUMBER(98);
	if ((frame[3].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(99);
	frame[3].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(101);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(103);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head = (frame[3].i);
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Queue_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(110);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(112);
	((func_com_badlogic_gdx_utils_Queue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Queue_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:resize", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(119);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(120);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(122);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[2].o), (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(123);
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(125);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[5].o), (jint(0)), ((frame[4].i) - (frame[3].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(126);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(128);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i));
	LINE_NUMBER(129);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[5].o), (jint(0)), (frame[6].i));
	LINE_NUMBER(130);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[5].o), (frame[6].i), (frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(132);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values = (jref) (frame[5].o);
	LINE_NUMBER(133);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(134);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:removeFirst", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(148);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head)));
	LINE_NUMBER(149);
	ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head)) = (jobject(nullptr));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_head = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_head) + (jint(1)));
	LINE_NUMBER(151);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head) != (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(152);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:removeLast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(165);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(169);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(170);
	INST_IINC(2, -1);
	LINE_NUMBER(171);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(172);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(174);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(175);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(176);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (frame[2].i);
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:indexOf", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(186);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(189);
	if ((frame[2].i) != 0) goto label_5;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_6;
label_5:;
	{
	LINE_NUMBER(190);
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(191);
	frame[6].i = (frame[4].i);
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(192);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) != (frame[1].o)) goto label_12;
	}
	{
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[4].i));
	}
label_12:;
	{
	LINE_NUMBER(191);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	goto label_13;
label_7:;
	{
	LINE_NUMBER(194);
	frame[6].i = (frame[4].i);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_15:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_16;
	}
	{
	LINE_NUMBER(195);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) != (frame[1].o)) goto label_18;
	}
	{
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[4].i));
	}
label_18:;
	{
	LINE_NUMBER(194);
	INST_IINC(6, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(196);
	frame[6].i = (jint(0));
	}
label_19:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_20;
	}
	{
	LINE_NUMBER(197);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) != (frame[1].o)) goto label_22;
	}
	{
	popStackFrame(ctx);
	return (((frame[6].i) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)) - (frame[4].i));
	}
label_22:;
	{
	LINE_NUMBER(196);
	INST_IINC(6, 1);
	goto label_19;
	}
label_20:;
	goto label_13;
label_6:;
	{
	LINE_NUMBER(200);
	if ((frame[4].i) >= (frame[5].i)) goto label_23;
	}
	{
	LINE_NUMBER(201);
	frame[6].i = (frame[4].i);
	}
label_25:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_26;
	}
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))));
	if (temp0 == 0) goto label_28;
	}
	{
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[4].i));
	}
label_28:;
	{
	LINE_NUMBER(201);
	INST_IINC(6, 1);
	goto label_25;
	}
label_26:;
	goto label_13;
label_23:;
	{
	LINE_NUMBER(204);
	frame[6].i = (frame[4].i);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_30:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_31;
	}
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))));
	if (temp0 == 0) goto label_33;
	}
	{
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[4].i));
	}
label_33:;
	{
	LINE_NUMBER(204);
	INST_IINC(6, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(206);
	frame[6].i = (jint(0));
	}
label_34:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_13;
	}
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))));
	if (temp0 == 0) goto label_36;
	}
	{
	popStackFrame(ctx);
	return (((frame[6].i) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)) - (frame[4].i));
	}
label_36:;
	{
	LINE_NUMBER(206);
	INST_IINC(6, 1);
	goto label_34;
	}
label_13:;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Queue_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:removeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(218);
	if ((frame[3].i) != (jint(-1))) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:removeIndex", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(225);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(226);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(229);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(230);
	frame[1].i = ((frame[1].i) + (frame[3].i));
	LINE_NUMBER(232);
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(233);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(234);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(235);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_tail = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_tail) - (jint(1)));
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(237);
	if ((frame[1].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_13;
	}
	{
	LINE_NUMBER(238);
	frame[1].i = ((frame[1].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(239);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(240);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_tail = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_tail) - (jint(1)));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(243);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(244);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[2].o), ((frame[3].i) + (jint(1))), ((frame[1].i) - (frame[3].i)));
	LINE_NUMBER(245);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_head = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_head) + (jint(1)));
	LINE_NUMBER(247);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(248);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Queue_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_Queue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jobject M_com_badlogic_gdx_utils_Queue_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(272);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue_last_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:last", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(284);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(287);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(288);
	INST_IINC(2, -1);
	LINE_NUMBER(289);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(290);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(299);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(300);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(303);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head) + (frame[1].i));
	LINE_NUMBER(304);
	if ((frame[3].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(305);
	frame[3].i = ((frame[3].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_5:;
	{
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Queue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:clear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(315);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(316);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(318);
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(320);
	frame[4].i = (frame[2].i);
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(321);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(320);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	goto label_11;
label_5:;
	{
	LINE_NUMBER(325);
	frame[4].i = (frame[2].i);
	}
label_12:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_13;
	}
	{
	LINE_NUMBER(326);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(325);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(328);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(329);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(328);
	INST_IINC(4, 1);
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(332);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(333);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(334);
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_Queue$QueueIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Queue$QueueIterator);
	init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue_boolean(ctx, sp[0].o, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_iterable;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Queue$QueueIterable(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Queue$QueueIterable);
	init_com_badlogic_gdx_utils_Queue$QueueIterable_com_badlogic_gdx_utils_Queue(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_iterable = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_iterable;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue$QueueIterable_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue$QueueIterable_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_1:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(352);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(353);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(355);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (64));
	frame[4].o = sp[0].o;
	LINE_NUMBER(356);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (91));
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(358);
	frame[5].i = (((frame[2].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	}
label_9:;
	{
	if ((frame[5].i) == (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(358);
	frame[5].i = (((frame[5].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (93));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:toString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(368);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(369);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(371);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (64));
	frame[5].o = sp[0].o;
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(373);
	frame[6].i = (((frame[3].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_7:;
	{
	if ((frame[6].i) == (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[6].i))));
	LINE_NUMBER(373);
	frame[6].i = (((frame[6].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_Queue_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(379);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(380);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(381);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(382);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(384);
	frame[5].i = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(385);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(386);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(388);
	frame[5].i = ((frame[5].i) * (31));
	LINE_NUMBER(389);
	if ((frame[7].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[7].o));
	frame[5].i = (temp0 + temp1);
	}
label_11:;
	{
	LINE_NUMBER(391);
	INST_IINC(4, 1);
	LINE_NUMBER(392);
	if ((frame[4].i) != (frame[3].i)) goto label_13;
	}
	INST_ICONST(0);
	INST_ISTORE(4);
label_13:;
	{
	LINE_NUMBER(385);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Queue_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:equals", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(399);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(400);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_Queue)) != 0) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(402);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Queue, (frame[1].o)));
	LINE_NUMBER(403);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(405);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[2].o)))->F_size) == (frame[3].i)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(408);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(409);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[2].o)))->F_values;
	frame[6].o = sp[0].o;
	LINE_NUMBER(410);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	LINE_NUMBER(412);
	frame[8].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(413);
	frame[9].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[2].o)))->F_head);
	LINE_NUMBER(414);
	frame[10].i = (jint(0));
	}
label_13:;
	{
	if ((frame[10].i) >= (frame[3].i)) goto label_14;
	}
	{
	LINE_NUMBER(415);
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i)));
	LINE_NUMBER(416);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[9].i)));
	LINE_NUMBER(418);
	if ((frame[11].o) != nullptr) goto label_18;
	}
	INST_ALOAD(12);
	if ((--sp)->o != nullptr) goto label_19;
	goto label_20;
label_18:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[11].o), (frame[12].o));
	if (temp0 != 0) goto label_20;
	}
label_19:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_20:;
	{
	LINE_NUMBER(419);
	INST_IINC(8, 1);
	LINE_NUMBER(420);
	INST_IINC(9, 1);
	LINE_NUMBER(421);
	if ((frame[8].i) != (frame[5].i)) goto label_23;
	}
	INST_ICONST(0);
	INST_ISTORE(8);
label_23:;
	{
	LINE_NUMBER(422);
	if ((frame[9].i) != (frame[7].i)) goto label_24;
	}
	INST_ICONST(0);
	INST_ISTORE(9);
label_24:;
	{
	LINE_NUMBER(414);
	INST_IINC(10, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Queue_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:equalsIdentity", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(429);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(430);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_Queue)) != 0) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(432);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Queue, (frame[1].o)));
	LINE_NUMBER(433);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(435);
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[2].o)))->F_size) == (frame[3].i)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(438);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(439);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[2].o)))->F_values;
	frame[6].o = sp[0].o;
	LINE_NUMBER(440);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	LINE_NUMBER(442);
	frame[8].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(443);
	frame[9].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[2].o)))->F_head);
	LINE_NUMBER(444);
	frame[10].i = (jint(0));
	}
label_13:;
	{
	if ((frame[10].i) >= (frame[3].i)) goto label_14;
	}
	{
	LINE_NUMBER(445);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i))) == ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[9].i)))) goto label_16;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(446);
	INST_IINC(8, 1);
	LINE_NUMBER(447);
	INST_IINC(9, 1);
	LINE_NUMBER(448);
	if ((frame[8].i) != (frame[5].i)) goto label_19;
	}
	INST_ICONST(0);
	INST_ISTORE(8);
label_19:;
	{
	LINE_NUMBER(449);
	if ((frame[9].i) != (frame[7].i)) goto label_20;
	}
	INST_ICONST(0);
	INST_ISTORE(9);
label_20:;
	{
	LINE_NUMBER(444);
	INST_IINC(10, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Queue_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_utils_Queue;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method <init>
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

void *vtable_com_badlogic_gdx_utils_Queue[] {
	(void *) M_com_badlogic_gdx_utils_Queue_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_Queue_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Queue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_Queue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue_addFirst_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_Queue_resize_int,
	(void *) M_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int,
	(void *) M_com_badlogic_gdx_utils_Queue_removeValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Queue_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Queue_first_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue_last_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue_clear,
	(void *) M_com_badlogic_gdx_utils_Queue_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Queue_equalsIdentity_java_lang_Object_R_boolean,
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
	{ "addLast", "(Ljava/lang/Object;)V" },
	{ "addFirst", "(Ljava/lang/Object;)V" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "removeFirst", "()Ljava/lang/Object;" },
	{ "removeLast", "()Ljava/lang/Object;" },
	{ "indexOf", "(Ljava/lang/Object;Z)I" },
	{ "removeValue", "(Ljava/lang/Object;Z)Z" },
	{ "removeIndex", "(I)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "first", "()Ljava/lang/Object;" },
	{ "last", "()Ljava/lang/Object;" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "clear", "()V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "equalsIdentity", "(Ljava/lang/Object;)Z" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_Queue$QueueIterator,
	&class_com_badlogic_gdx_utils_Queue$QueueIterable,
};

static FieldMetadata fields[] {
	{ "values", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_Queue, F_values), "[Ljava/lang/Object;", 4 },
	{ "head", &class_int, offsetof(com_badlogic_gdx_utils_Queue, F_head), "I", 4 },
	{ "tail", &class_int, offsetof(com_badlogic_gdx_utils_Queue, F_tail), "I", 4 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_Queue, F_size), "I", 1 },
	{ "iterable", &class_com_badlogic_gdx_utils_Queue$QueueIterable, offsetof(com_badlogic_gdx_utils_Queue, F_iterable), "Lcom/badlogic/gdx/utils/Queue$QueueIterable;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Queue, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Queue_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Queue_int_java_lang_Class, 0, "(ILjava/lang/Class;)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Queue_int_com_badlogic_gdx_utils_ArraySupplier, 0, "(ILcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "addLast", (intptr_t) M_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "addFirst", (intptr_t) M_com_badlogic_gdx_utils_Queue_addFirst_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue_addFirst_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_Queue_ensureCapacity_int, VTABLE_com_badlogic_gdx_utils_Queue_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_Queue_resize_int, VTABLE_com_badlogic_gdx_utils_Queue_resize_int, "(I)V", 4 },
	{ "removeFirst", (intptr_t) M_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "removeLast", (intptr_t) M_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int, VTABLE_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int, "(Ljava/lang/Object;Z)I", 1 },
	{ "removeValue", (intptr_t) M_com_badlogic_gdx_utils_Queue_removeValue_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_Queue_removeValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_Queue_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_Queue_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_Queue_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_Queue_isEmpty_R_boolean, "()Z", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_utils_Queue_first_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "last", (intptr_t) M_com_badlogic_gdx_utils_Queue_last_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue_last_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_Queue_clear, VTABLE_com_badlogic_gdx_utils_Queue_clear, "()V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_Queue_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_Queue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_Queue_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Queue_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_Queue_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Queue_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_Queue_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_Queue_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_Queue_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_Queue_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equalsIdentity", (intptr_t) M_com_badlogic_gdx_utils_Queue_equalsIdentity_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_Queue_equalsIdentity_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_utils_Queue_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object, 0, "(Ljava/lang/Class;I)[Ljava/lang/Object;", 4106 },
};

Class class_com_badlogic_gdx_utils_Queue{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Queue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Queue),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Queue,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Queue,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Queue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Queue = registerClass(&class_com_badlogic_gdx_utils_Queue);

}

