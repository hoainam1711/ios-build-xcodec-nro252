#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/io/Writer.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/utils/JsonValue_1.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/utils/JsonWriter_OutputType.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/JsonValue_JsonIterator.h"
#include "java/lang/reflect/Method.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/utils/JsonValue_ValueType.h"
#include "java/io/StringWriter.h"
#include "com/badlogic/gdx/utils/SerializationException.h"
#include "java/lang/Throwable.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/Byte.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Enum.h"
#include "java/lang/Long.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/utils/JsonValue_PrettyPrintSettings.h"
#include "java/lang/Object.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/Objects.h"
#include "java/lang/Double.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_utils_JsonValue(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_JsonValue *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_stringValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stringValue)->clazz)->markFunction)((jobject) self->F_stringValue, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_child)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_child)->clazz)->markFunction)((jobject) self->F_child, mark, depth + 1);
	if (self->F_last)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_last)->clazz)->markFunction)((jobject) self->F_last, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_JsonValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue$ValueType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonValue_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(65);
	((func_com_badlogic_gdx_utils_JsonValue_set_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_set_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonValue_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(68);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((func_com_badlogic_gdx_utils_JsonValue_set_double_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_set_double_java_lang_String])(ctx, (frame[0].o), (frame[1].d), (jobject(nullptr)));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonValue_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(72);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(73);
	((func_com_badlogic_gdx_utils_JsonValue_set_long_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_set_long_java_lang_String])(ctx, (frame[0].o), (frame[1].l), (jobject(nullptr)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonValue_double_java_lang_String(jcontext ctx, jobject self, jdouble param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(76);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(77);
	((func_com_badlogic_gdx_utils_JsonValue_set_double_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_set_double_java_lang_String])(ctx, (frame[0].o), (frame[1].d), (frame[3].o));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonValue_long_java_lang_String(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(80);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	((func_com_badlogic_gdx_utils_JsonValue_set_long_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_set_long_java_lang_String])(ctx, (frame[0].o), (frame[1].l), (frame[3].o));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonValue_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(84);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(85);
	((func_com_badlogic_gdx_utils_JsonValue_set_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_set_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(93);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_type;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_stringValue;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_stringValue = (jref) sp[1].o;
	LINE_NUMBER(96);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue = ((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_doubleValue);
	LINE_NUMBER(97);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue = ((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_longValue);
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(99);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[3].o);
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	sp[3].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_last;
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[0].o));
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(101);
	if ((frame[1].o) != (frame[2].o)) goto label_9;
	}
	{
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_last = (jref) (frame[0].o);
	}
label_9:;
	{
	LINE_NUMBER(102);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_next;
	init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue(ctx, sp[1].o, sp[2].o, (frame[2].o), (frame[3].o));
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (frame[0].o);
	}
label_10:;
	{
	LINE_NUMBER(106);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(113);
	if ((frame[1].i) != (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_last;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(115);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	INST_ILOAD(1);
	if ((--sp)->i <= 0) goto label_3;
	{
	LINE_NUMBER(116);
	INST_IINC(1, -1);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(126);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_getIgnoreCase_java_lang_String_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getIgnoreCase", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(135);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_com_badlogic_gdx_utils_JsonValue_iterator_java_lang_String_R_com_badlogic_gdx_utils_JsonValue$JsonIterator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:iterator", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(148);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(149);
	clinit_com_badlogic_gdx_utils_JsonValue$JsonIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue$JsonIterator);
	init_com_badlogic_gdx_utils_JsonValue$JsonIterator_com_badlogic_gdx_utils_JsonValue(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(150);
	((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[3].o)))->F_entry = (jref) (jobject(nullptr));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_iterator_R_com_badlogic_gdx_utils_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_iterator_R_com_badlogic_gdx_utils_JsonValue$JsonIterator])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_require_int_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:require", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(161);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Child not found with index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:require", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(169);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Child not found with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_remove_int_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(178);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != (frame[2].o)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_last = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) sp[1].o;
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (jobject(nullptr));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_remove_java_lang_String_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(195);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != (frame[2].o)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_last = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) sp[1].o;
	LINE_NUMBER(199);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (jobject(nullptr));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(202);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_next;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_last;
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_last = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) sp[1].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_child;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_child;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (jobject(nullptr));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_JsonValue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jint M_com_badlogic_gdx_utils_JsonValue_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, ((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue));
	sp += 1;
	}
label_8:;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, ((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue));
	sp += 1;
	}
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(250);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_12:;
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(254);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to string: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_JsonValue_asFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (jfloat(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)));
	}
label_3:;
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (jfloat(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)));
	}
label_4:;
	{
	LINE_NUMBER(268);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_FCONST(1);
	goto label_7;
label_6:;
	INST_FCONST(0);
label_7:;
	popStackFrame(ctx);
	INST_FRETURN();
label_5:;
	{
	LINE_NUMBER(270);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to float: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jdouble M_com_badlogic_gdx_utils_JsonValue_asDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asDouble", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return ((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue);
	}
label_3:;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (jdouble(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)));
	}
label_4:;
	{
	LINE_NUMBER(284);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_DCONST(1);
	goto label_7;
label_6:;
	INST_DCONST(0);
label_7:;
	popStackFrame(ctx);
	INST_DRETURN();
label_5:;
	{
	LINE_NUMBER(286);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to double: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_JsonValue_asLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return (jlong(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)));
	}
label_3:;
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return ((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue);
	}
label_4:;
	{
	LINE_NUMBER(300);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_LCONST(1);
	goto label_7;
label_6:;
	INST_LCONST(0);
label_7:;
	popStackFrame(ctx);
	INST_LRETURN();
label_5:;
	{
	LINE_NUMBER(302);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to long: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_JsonValue_asInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (jint(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)));
	}
label_3:;
	{
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (jint(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)));
	}
label_4:;
	{
	LINE_NUMBER(316);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(318);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to int: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asBoolean", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(324);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"true"_j))));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(328);
	if ((doubleCompare(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue), (jdouble(0)), -1)) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(330);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(332);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(334);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to boolean: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbyte M_com_badlogic_gdx_utils_JsonValue_asByte_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asByte", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return (jbyte((jint(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)))));
	}
label_3:;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (jbyte((jint(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)))));
	}
label_4:;
	{
	LINE_NUMBER(348);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(350);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to byte: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jshort M_com_badlogic_gdx_utils_JsonValue_asShort_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asShort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (jshort((jint(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)))));
	}
label_3:;
	{
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return (jshort((jint(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)))));
	}
label_4:;
	{
	LINE_NUMBER(364);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(366);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to short: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_JsonValue_asChar_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (jchar((jint(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue)))));
	}
label_3:;
	{
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (jchar((jint(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue)))));
	}
label_4:;
	{
	LINE_NUMBER(380);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue), (jlong(0)))) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(382);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to char: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asStringArray_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asStringArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(390);
	frame[2].i = (jint(0));
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(393);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		case 5: goto label_11;
		default: goto label_12;
	}
	}
label_7:;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	frame[4].o = sp[0].o;
	LINE_NUMBER(396);
	goto label_14;
	}
label_8:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, ((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue));
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(399);
	goto label_14;
	}
label_9:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue;
	sp += 1;
	goto label_19;
	}
label_18:;
	{
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, ((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue));
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(402);
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(404);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_21;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_22;
label_21:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_22:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(405);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(407);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(408);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(410);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to string: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(412);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asFloatArray_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asFloatArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(422);
	frame[2].i = (jint(0));
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(425);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(428);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(430);
	frame[4].f = (jfloat(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)));
	LINE_NUMBER(431);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(433);
	frame[4].f = (jfloat(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)));
	LINE_NUMBER(434);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(436);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_FCONST(1);
	goto label_17;
label_16:;
	INST_FCONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(437);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(439);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to float: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(441);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)) = (frame[4].f);
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asDoubleArray_R_Array1_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asDoubleArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject) createArray(ctx, &class_double, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(451);
	frame[2].i = (jint(0));
	LINE_NUMBER(452);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(454);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, sp[0].o);
	frame[4].d = temp0;
	LINE_NUMBER(457);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(459);
	frame[4].d = ((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue);
	LINE_NUMBER(460);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(462);
	frame[4].d = (jdouble(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)));
	LINE_NUMBER(463);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(465);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_DCONST(1);
	goto label_17;
label_16:;
	INST_DCONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].d = sp[0].d;
	LINE_NUMBER(466);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(468);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to double: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(470);
	ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)) = (frame[4].d);
	LINE_NUMBER(452);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asLongArray_R_Array1_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asLongArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject) createArray(ctx, &class_long, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(480);
	frame[2].i = (jint(0));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(483);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	frame[4].l = temp0;
	LINE_NUMBER(486);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(488);
	frame[4].l = (jlong(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)));
	LINE_NUMBER(489);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(491);
	frame[4].l = ((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue);
	LINE_NUMBER(492);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(494);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_LCONST(1);
	goto label_17;
label_16:;
	INST_LCONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].l = sp[0].l;
	LINE_NUMBER(495);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(497);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to long: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(499);
	ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)) = (frame[4].l);
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asIntArray_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asIntArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(509);
	frame[2].i = (jint(0));
	LINE_NUMBER(510);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(512);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(515);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(517);
	frame[4].i = (jint(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)));
	LINE_NUMBER(518);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(520);
	frame[4].i = (jint(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)));
	LINE_NUMBER(521);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(523);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(524);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(526);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to int: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(528);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(510);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asBooleanArray_R_Array1_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asBooleanArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(538);
	frame[2].i = (jint(0));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(541);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(544);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(546);
	if ((doubleCompare(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue), (jdouble(0)), -1)) != 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(547);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(549);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) != 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(550);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(552);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(553);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(555);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to boolean: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(557);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asByteArray_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asByteArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(567);
	frame[2].i = (jint(0));
	LINE_NUMBER(568);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(570);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_R_byte(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(573);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(575);
	frame[4].i = (jbyte((jint(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)))));
	LINE_NUMBER(576);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(578);
	frame[4].i = (jbyte((jint(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)))));
	LINE_NUMBER(579);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(581);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(582);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(584);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to byte: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(586);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(568);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asShortArray_R_Array1_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asShortArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject) createArray(ctx, &class_short, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(596);
	frame[2].i = (jint(0));
	LINE_NUMBER(597);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(599);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(602);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(604);
	frame[4].i = (jshort((jint(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)))));
	LINE_NUMBER(605);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(607);
	frame[4].i = (jshort((jint(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)))));
	LINE_NUMBER(608);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(610);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(611);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(613);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to short: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(615);
	ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(597);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_asCharArray_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:asCharArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value is not an array: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(625);
	frame[2].i = (jint(0));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(628);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	INST_ICONST(0);
	goto label_13;
label_12:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_stringValue;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(631);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(633);
	frame[4].i = (jchar((jint(((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_doubleValue)))));
	LINE_NUMBER(634);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(636);
	frame[4].i = (jchar((jint(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue)))));
	LINE_NUMBER(637);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(639);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_longValue), (jlong(0)))) == 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(640);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(642);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value cannot be converted to char: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(644);
	ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(626);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_hasChild_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:hasChild", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(658);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[-1].o))->F_child;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(665);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ALOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(671);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_FLOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asFloat_R_float])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jdouble M_com_badlogic_gdx_utils_JsonValue_getDouble_java_lang_String_double_R_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(677);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_DLOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->d = (jdouble)((func_com_badlogic_gdx_utils_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asDouble_R_double])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_JsonValue_getLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(682);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(683);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_LLOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->l = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_JsonValue_getInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(689);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_com_badlogic_gdx_utils_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asInt_R_int])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_getBoolean_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getBoolean", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(695);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbyte M_com_badlogic_gdx_utils_JsonValue_getByte_java_lang_String_byte_R_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getByte", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(701);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_com_badlogic_gdx_utils_JsonValue_asByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asByte_R_byte])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jshort M_com_badlogic_gdx_utils_JsonValue_getShort_java_lang_String_short_R_short(jcontext ctx, jobject self, jobject param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(707);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_com_badlogic_gdx_utils_JsonValue_asShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asShort_R_short])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_JsonValue_getChar_java_lang_String_char_R_char(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(713);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_com_badlogic_gdx_utils_JsonValue_asChar_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asChar_R_char])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(720);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(721);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getFloat", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(728);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(729);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asFloat_R_float])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_com_badlogic_gdx_utils_JsonValue_getDouble_java_lang_String_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(736);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(737);
	jdouble temp0 = (jdouble)((func_com_badlogic_gdx_utils_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asDouble_R_double])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_JsonValue_getLong_java_lang_String_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(743);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(744);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(745);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_JsonValue_getInt_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(751);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(752);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(753);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asInt_R_int])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_getBoolean_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getBoolean", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(760);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(761);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_com_badlogic_gdx_utils_JsonValue_getByte_java_lang_String_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getByte", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(768);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(769);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asByte_R_byte])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort M_com_badlogic_gdx_utils_JsonValue_getShort_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getShort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(775);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(776);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(777);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asShort_R_short])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_JsonValue_getChar_java_lang_String_R_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(784);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Named value not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(785);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asChar_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asChar_R_char])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_getString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(792);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(793);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getFloat", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(799);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(800);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(801);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asFloat_R_float])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_com_badlogic_gdx_utils_JsonValue_getDouble_int_R_double(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(807);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(808);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(809);
	jdouble temp0 = (jdouble)((func_com_badlogic_gdx_utils_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asDouble_R_double])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_JsonValue_getLong_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(815);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(816);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(817);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_JsonValue_getInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(824);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(825);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asInt_R_int])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_getBoolean_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getBoolean", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(832);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(833);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_com_badlogic_gdx_utils_JsonValue_getByte_int_R_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getByte", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(840);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(841);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asByte_R_byte])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort M_com_badlogic_gdx_utils_JsonValue_getShort_int_R_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getShort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(848);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(849);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asShort_R_short])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_JsonValue_getChar_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:getChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(856);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Indexed value not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(857);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asChar_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asChar_R_char])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_type_R_com_badlogic_gdx_utils_JsonValue$ValueType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:type", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(861);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_setType_com_badlogic_gdx_utils_JsonValue$ValueType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:setType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(865);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"type cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(866);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(867);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isObject", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_object;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_com_badlogic_gdx_utils_JsonValue_isString_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_stringValue;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_com_badlogic_gdx_utils_JsonValue_isNumber_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isNumber", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(883);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_doubleValue;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_longValue;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isDouble", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(887);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_doubleValue;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(891);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_longValue;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_booleanValue;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(899);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_nullValue;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(904);
	clinit_com_badlogic_gdx_utils_JsonValue$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$1_$SwitchMap$com$badlogic$gdx$utils$JsonValue$ValueType;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$ValueType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_1;
		case 5: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(910);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(912);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:name", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(918);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(923);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(924);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_parent_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:parent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(929);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_child_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:child", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_last_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:last", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(941);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_last;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_setChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:setChild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(947);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(948);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(949);
	((func_com_badlogic_gdx_utils_JsonValue_setChild_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_setChild_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(950);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_setChild_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:setChild", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(954);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	frame[2].o = sp[0].o;
	LINE_NUMBER(955);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"An object child requires a name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(956);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(957);
	if ((frame[3].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(958);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(959);
	((func_com_badlogic_gdx_utils_JsonValue_replace_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_replace_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(960);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(962);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(964);
	((func_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(965);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_replace_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:replace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(969);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_last;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_last = (jref) (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(971);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(973);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(974);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(975);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(976);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (frame[1].o);
	}
label_7:;
	{
	LINE_NUMBER(977);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_parent = (jref) sp[1].o;
	LINE_NUMBER(978);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev = (jref) (jobject(nullptr));
	LINE_NUMBER(979);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(980);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:addChild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(985);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(986);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(987);
	((func_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(988);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:addChild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(993);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_object;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(994);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"An object child requires a name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(995);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(996);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(997);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(998);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_prev = (jref) (jobject(nullptr));
	LINE_NUMBER(999);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child = (jref) (frame[1].o);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(1001);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_last;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(1002);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_last;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(1004);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[1].o);
	LINE_NUMBER(1005);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(1006);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_addChildFirst_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:addChildFirst", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_object;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1012);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"An object child requires a name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1013);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(1014);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(1015);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_prev = (jref) (jobject(nullptr));
	LINE_NUMBER(1016);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1017);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child = (jref) (frame[1].o);
	LINE_NUMBER(1018);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[1].o);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (frame[1].o);
	LINE_NUMBER(1021);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child = (jref) (frame[1].o);
	}
label_9:;
	{
	LINE_NUMBER(1023);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(1024);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_next_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1029);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_setNext_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:setNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1035);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(1036);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_prev_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:prev", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_setPrev_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:setPrev", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1047);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_prev = (jref) (frame[1].o);
	LINE_NUMBER(1048);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_set_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1052);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_type;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1053);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_stringValue;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_stringValue = (jref) sp[1].o;
	LINE_NUMBER(1054);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue = ((jdouble)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_doubleValue);
	LINE_NUMBER(1055);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue = ((jlong)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_longValue);
	LINE_NUMBER(1056);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_set_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1060);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue = (jref) (frame[1].o);
	LINE_NUMBER(1061);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	(sp++)->o = SF_com_badlogic_gdx_utils_JsonValue$ValueType_nullValue;
	goto label_3;
label_2:;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	(sp++)->o = SF_com_badlogic_gdx_utils_JsonValue$ValueType_stringValue;
label_3:;
	{
	sp -= 2;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1062);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_setNull(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:setNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1065);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue = (jref) (jobject(nullptr));
	LINE_NUMBER(1066);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_nullValue;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1067);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_set_double_java_lang_String(jcontext ctx, jobject self, jdouble param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1071);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue = (frame[1].d);
	LINE_NUMBER(1072);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue = (jlong((frame[1].d)));
	LINE_NUMBER(1073);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue = (jref) (frame[3].o);
	LINE_NUMBER(1074);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_doubleValue;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1075);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_set_long_java_lang_String(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1079);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_longValue = (frame[1].l);
	LINE_NUMBER(1080);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_doubleValue = (jdouble((frame[1].l)));
	LINE_NUMBER(1081);
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_stringValue = (jref) (frame[3].o);
	LINE_NUMBER(1082);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_longValue;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1083);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_set_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1086);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_LCONST(1);
	goto label_2;
label_1:;
	INST_LCONST(0);
label_2:;
	{
	sp -= 2;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_longValue = sp[1].l;
	LINE_NUMBER(1087);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_booleanValue;
	((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1088);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_equalsString_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:equalsString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue_nameEquals_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:nameEquals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:toJson", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1099);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1100);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter_int(ctx, sp[0].o, (512));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1102);
	((func_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1105);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1103);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1104);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1106);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:toJson", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1110);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1111);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (123));
	LINE_NUMBER(1112);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(1113);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_name;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1114);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (58));
	LINE_NUMBER(1115);
	((func_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer])(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (44));
	}
label_10:;
	{
	LINE_NUMBER(1112);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1118);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (125));
	goto label_11;
	}
label_1:;
	{
	LINE_NUMBER(1119);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(1120);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (91));
	LINE_NUMBER(1121);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[3].o = sp[0].o;
	}
label_15:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_16;
	{
	LINE_NUMBER(1122);
	((func_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer])(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (44));
	}
label_19:;
	{
	LINE_NUMBER(1121);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1125);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (93));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1126);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isString_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(1127);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_20:;
	{
	LINE_NUMBER(1128);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(1129);
	jdouble temp0 = (jdouble)((func_com_badlogic_gdx_utils_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asDouble_R_double])(ctx, (frame[0].o));
	frame[3].d = temp0;
	LINE_NUMBER(1130);
	jlong temp1 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[0].o));
	frame[5].l = temp1;
	LINE_NUMBER(1131);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((doubleCompare((frame[3].d), (jdouble((frame[5].l))), -1)) != 0) goto label_26;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[5].l));
	sp += 1;
	goto label_27;
	}
label_26:;
	INST_DLOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, sp[0].d);
	sp++;
label_27:;
	{
	sp -= 2;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1132);
	goto label_11;
	}
label_22:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1133);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, temp0);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_29:;
	{
	LINE_NUMBER(1134);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(1135);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_33;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_34;
label_33:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_34:;
	POP_N(2); // Pop method args
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_11;
label_31:;
	{
	LINE_NUMBER(1136);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(1137);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_11;
	}
label_35:;
	{
	LINE_NUMBER(1139);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown object type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	LINE_NUMBER(1140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_iterator_R_com_badlogic_gdx_utils_JsonValue$JsonIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1144);
	clinit_com_badlogic_gdx_utils_JsonValue$JsonIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue$JsonIterator);
	init_com_badlogic_gdx_utils_JsonValue$JsonIterator_com_badlogic_gdx_utils_JsonValue(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1148);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1149);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	if (sp[0].o != nullptr) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_5;
label_4:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_int_R_java_lang_String])(ctx, sp[1].o, sp[2].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:trace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1155);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(1156);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_object;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(1157);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_1:;
	{
	LINE_NUMBER(1160);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_type;
	clinit_com_badlogic_gdx_utils_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonValue$ValueType_array;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(1161);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	LINE_NUMBER(1162);
	frame[2].i = (jint(0));
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[0].o))->F_child;
	frame[3].o = sp[0].o;
	}
label_9:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_10;
	{
	LINE_NUMBER(1164);
	if ((frame[3].o) != (frame[0].o)) goto label_12;
	}
	{
	LINE_NUMBER(1165);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1166);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(1169);
	goto label_15;
label_5:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (46));
	if (temp0 == (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(1170);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".\""_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))), (((jobject) createStringLiteral(ctx, u8"\\\""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1172);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (46));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1173);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:prettyPrint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1177);
	clinit_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings);
	init_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1178);
	((com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[3].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(1179);
	((com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[3].o)))->F_singleLineColumns = (frame[2].i);
	LINE_NUMBER(1180);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:prettyPrint", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1184);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (512));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1185);
	M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_lang_StringBuilder_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[0].o), (frame[2].o), (jint(0)), (frame[1].o));
	LINE_NUMBER(1186);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_lang_StringBuilder_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:prettyPrint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1190);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_outputType;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1191);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1193);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1195);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_JsonValue_isFlat_com_badlogic_gdx_utils_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1196);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	frame[7].i = temp0;
	}
label_10:;
	{
	LINE_NUMBER(1199);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{\n"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{ "_j));
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1200);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_14:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_15;
	{
	LINE_NUMBER(1201);
	if ((frame[6].i) == 0) goto label_17;
	}
	{
	SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_lang_StringBuilder(ctx, (frame[3].i), (frame[2].o));
	}
label_17:;
	{
	LINE_NUMBER(1202);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1203);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8": "_j))));
	LINE_NUMBER(1204);
	M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_lang_StringBuilder_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[8].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	LINE_NUMBER(1205);
	if ((frame[6].i) == 0) goto label_21;
	}
	{
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	if (sp[0].o == sp[1].o) goto label_22;
	}
label_21:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (44));
	}
label_22:;
	{
	LINE_NUMBER(1206);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_23;
	}
	INST_BIPUSH(10);
	goto label_24;
label_23:;
	INST_BIPUSH(32);
label_24:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1207);
	if ((frame[6].i) != 0) goto label_26;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	if ((temp0 - (frame[7].i)) <= ((jint)((com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_singleLineColumns)) goto label_26;
	}
	{
	LINE_NUMBER(1208);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[2].o), (frame[7].i));
	LINE_NUMBER(1209);
	frame[6].i = (jint(1));
	LINE_NUMBER(1210);
	goto label_10;
	}
label_26:;
	{
	LINE_NUMBER(1200);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_14;
	}
label_15:;
	LINE_NUMBER(1213);
	goto label_30;
label_30:;
	{
	LINE_NUMBER(1215);
	if ((frame[6].i) == 0) goto label_31;
	}
	{
	SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_lang_StringBuilder(ctx, ((frame[3].i) - (jint(1))), (frame[2].o));
	}
label_31:;
	{
	LINE_NUMBER(1216);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (125));
	LINE_NUMBER(1217);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1218);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1219);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_35;
	}
	{
	LINE_NUMBER(1220);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	goto label_6;
	}
label_35:;
	{
	LINE_NUMBER(1222);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_JsonValue_isFlat_com_badlogic_gdx_utils_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1223);
	if (((jint)((com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_wrapNumericArrays) != 0) goto label_40;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_JsonValue_isNumeric_com_badlogic_gdx_utils_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_41;
	}
label_40:;
	INST_ICONST(1);
	goto label_42;
label_41:;
	INST_ICONST(0);
label_42:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1224);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	frame[8].i = temp0;
	}
label_44:;
	{
	LINE_NUMBER(1227);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_45;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[\n"_j));
	goto label_46;
label_45:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[ "_j));
label_46:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1228);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[9].o = sp[0].o;
	}
label_48:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_49;
	{
	LINE_NUMBER(1229);
	if ((frame[6].i) == 0) goto label_51;
	}
	{
	SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_lang_StringBuilder(ctx, (frame[3].i), (frame[2].o));
	}
label_51:;
	{
	LINE_NUMBER(1230);
	M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_lang_StringBuilder_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[9].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	LINE_NUMBER(1231);
	if ((frame[6].i) == 0) goto label_53;
	}
	{
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	if (sp[0].o == sp[1].o) goto label_54;
	}
label_53:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (44));
	}
label_54:;
	{
	LINE_NUMBER(1232);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_55;
	}
	INST_BIPUSH(10);
	goto label_56;
label_55:;
	INST_BIPUSH(32);
label_56:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1233);
	if ((frame[7].i) == 0) goto label_58;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_58;
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	if ((temp0 - (frame[8].i)) <= ((jint)((com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_singleLineColumns)) goto label_58;
	}
	{
	LINE_NUMBER(1234);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[2].o), (frame[8].i));
	LINE_NUMBER(1235);
	frame[6].i = (jint(1));
	LINE_NUMBER(1236);
	goto label_44;
	}
label_58:;
	{
	LINE_NUMBER(1228);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[9].o)))->F_next;
	frame[9].o = sp[0].o;
	goto label_48;
	}
label_49:;
	LINE_NUMBER(1239);
	goto label_62;
label_62:;
	{
	LINE_NUMBER(1241);
	if ((frame[6].i) == 0) goto label_63;
	}
	{
	SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_lang_StringBuilder(ctx, ((frame[3].i) - (jint(1))), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(1242);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(1243);
	goto label_6;
	}
label_33:;
	{
	LINE_NUMBER(1244);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_65;
	}
	{
	LINE_NUMBER(1245);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_65:;
	{
	LINE_NUMBER(1246);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_67;
	}
	{
	LINE_NUMBER(1247);
	jdouble temp0 = (jdouble)((func_com_badlogic_gdx_utils_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asDouble_R_double])(ctx, (frame[1].o));
	frame[6].d = temp0;
	LINE_NUMBER(1248);
	jlong temp1 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	frame[8].l = temp1;
	LINE_NUMBER(1249);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((doubleCompare((frame[6].d), (jdouble((frame[8].l))), -1)) != 0) goto label_71;
	}
	{
	jdouble temp0 = jdouble((frame[8].l));
	sp[0].d = temp0;
	sp += 1;
	goto label_72;
	}
label_71:;
	INST_DLOAD(6);
label_72:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].d);
	LINE_NUMBER(1250);
	goto label_6;
	}
label_67:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_74;
	}
	{
	LINE_NUMBER(1251);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	goto label_6;
	}
label_74:;
	{
	LINE_NUMBER(1252);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(1253);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	goto label_6;
	}
label_76:;
	{
	LINE_NUMBER(1254);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_78;
	}
	{
	LINE_NUMBER(1255);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_6;
	}
label_78:;
	{
	LINE_NUMBER(1257);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown object type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(1258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:prettyPrint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1263);
	clinit_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings);
	init_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1264);
	((com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[3].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(1265);
	M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_io_Writer_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[0].o), (frame[2].o), (jint(0)), (frame[3].o));
	LINE_NUMBER(1266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_io_Writer_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:prettyPrint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1269);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings *) NULL_CHECK((frame[4].o)))->F_outputType;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1270);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1272);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1274);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_JsonValue_isFlat_com_badlogic_gdx_utils_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_size) <= (6)) goto label_8;
	}
label_7:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1275);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{\n"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{ "_j));
label_12:;
	{
	sp -= 2;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1276);
	frame[7].i = (jint(0));
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_15:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_16;
	{
	LINE_NUMBER(1278);
	if ((frame[6].i) == 0) goto label_18;
	}
	{
	SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_io_Writer(ctx, (frame[3].i), (frame[2].o));
	}
label_18:;
	{
	LINE_NUMBER(1279);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1280);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8": "_j))));
	LINE_NUMBER(1281);
	M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_io_Writer_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[8].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	LINE_NUMBER(1282);
	if ((frame[6].i) == 0) goto label_22;
	}
	{
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	if (sp[0].o == sp[1].o) goto label_23;
	}
label_22:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (44));
	}
label_23:;
	{
	LINE_NUMBER(1283);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_24;
	}
	INST_BIPUSH(10);
	goto label_25;
label_24:;
	INST_BIPUSH(32);
label_25:;
	{
	sp -= 2;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1285);
	if ((frame[6].i) == 0) goto label_27;
	}
	{
	SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_io_Writer(ctx, ((frame[3].i) - (jint(1))), (frame[2].o));
	}
label_27:;
	{
	LINE_NUMBER(1286);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (125));
	LINE_NUMBER(1287);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1288);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1289);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(1290);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	goto label_6;
	}
label_31:;
	{
	LINE_NUMBER(1292);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_JsonValue_isFlat_com_badlogic_gdx_utils_JsonValue_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1293);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_36;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[\n"_j));
	goto label_37;
label_36:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[ "_j));
label_37:;
	{
	sp -= 2;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1294);
	frame[7].i = (jint(0));
	LINE_NUMBER(1295);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_40:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_41;
	{
	LINE_NUMBER(1296);
	if ((frame[6].i) == 0) goto label_43;
	}
	{
	SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_io_Writer(ctx, (frame[3].i), (frame[2].o));
	}
label_43:;
	{
	LINE_NUMBER(1297);
	M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_io_Writer_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings(ctx, (frame[0].o), (frame[8].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	LINE_NUMBER(1298);
	if ((frame[6].i) == 0) goto label_45;
	}
	{
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	if (sp[0].o == sp[1].o) goto label_46;
	}
label_45:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (44));
	}
label_46:;
	{
	LINE_NUMBER(1299);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_47;
	}
	INST_BIPUSH(10);
	goto label_48;
label_47:;
	INST_BIPUSH(32);
label_48:;
	{
	sp -= 2;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1295);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(1301);
	if ((frame[6].i) == 0) goto label_50;
	}
	{
	SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_io_Writer(ctx, ((frame[3].i) - (jint(1))), (frame[2].o));
	}
label_50:;
	{
	LINE_NUMBER(1302);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[2].o), (93));
	LINE_NUMBER(1303);
	goto label_6;
	}
label_29:;
	{
	LINE_NUMBER(1304);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_52;
	}
	{
	LINE_NUMBER(1305);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_52:;
	{
	LINE_NUMBER(1306);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_54;
	}
	{
	LINE_NUMBER(1307);
	jdouble temp0 = (jdouble)((func_com_badlogic_gdx_utils_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asDouble_R_double])(ctx, (frame[1].o));
	frame[6].d = temp0;
	LINE_NUMBER(1308);
	jlong temp1 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	frame[8].l = temp1;
	LINE_NUMBER(1309);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((doubleCompare((frame[6].d), (jdouble((frame[8].l))), -1)) != 0) goto label_58;
	}
	{
	jdouble temp0 = jdouble((frame[8].l));
	sp[0].d = temp0;
	sp += 1;
	goto label_59;
	}
label_58:;
	INST_DLOAD(6);
label_59:;
	{
	sp -= 2;
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, sp[1].d);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1310);
	goto label_6;
	}
label_54:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(1311);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, temp0);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_61:;
	{
	LINE_NUMBER(1312);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_63;
	}
	{
	LINE_NUMBER(1313);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Boolean_toString_boolean_R_java_lang_String(ctx, temp0);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_63:;
	{
	LINE_NUMBER(1314);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_65;
	}
	{
	LINE_NUMBER(1315);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_6;
	}
label_65:;
	{
	LINE_NUMBER(1317);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown object type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(1318);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_JsonValue_isFlat_com_badlogic_gdx_utils_JsonValue_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isFlat", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1321);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[1].o = sp[0].o;
	}
label_1:;
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(1322);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1321);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1323);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_JsonValue_isNumeric_com_badlogic_gdx_utils_JsonValue_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:isNumeric", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1327);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[0].o)))->F_child;
	frame[1].o = sp[0].o;
	}
label_1:;
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(1328);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNumber_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(1327);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1329);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_lang_StringBuilder(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:indent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1333);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(1334);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (9));
	LINE_NUMBER(1333);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1335);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_io_Writer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:indent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1338);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(1339);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (9));
	LINE_NUMBER(1338);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1340);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_iterator_R_com_badlogic_gdx_utils_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_iterator_R_com_badlogic_gdx_utils_JsonValue$JsonIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_utils_JsonValue;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[5])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[6])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[7])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[8])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method size
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_utils_JsonValue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_JsonValue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_JsonValue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getIgnoreCase_java_lang_String_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_has_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_iterator_java_lang_String_R_com_badlogic_gdx_utils_JsonValue$JsonIterator,
	(void *) M_com_badlogic_gdx_utils_JsonValue_require_int_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_remove_int_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_remove_java_lang_String_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_remove,
	(void *) M_com_badlogic_gdx_utils_JsonValue_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_size_R_int,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asFloat_R_float,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asDouble_R_double,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asLong_R_long,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asInt_R_int,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asByte_R_byte,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asShort_R_short,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asChar_R_char,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asStringArray_R_Array1_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asFloatArray_R_Array1_float,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asDoubleArray_R_Array1_double,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asLongArray_R_Array1_long,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asIntArray_R_Array1_int,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asBooleanArray_R_Array1_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asByteArray_R_Array1_byte,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asShortArray_R_Array1_short,
	(void *) M_com_badlogic_gdx_utils_JsonValue_asCharArray_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_JsonValue_hasChild_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getDouble_java_lang_String_double_R_double,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getLong_java_lang_String_long_R_long,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getInt_java_lang_String_int_R_int,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getBoolean_java_lang_String_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getByte_java_lang_String_byte_R_byte,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getShort_java_lang_String_short_R_short,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getChar_java_lang_String_char_R_char,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_R_float,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getDouble_java_lang_String_R_double,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getLong_java_lang_String_R_long,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getInt_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getBoolean_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getByte_java_lang_String_R_byte,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getShort_java_lang_String_R_short,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getChar_java_lang_String_R_char,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getString_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getDouble_int_R_double,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getLong_int_R_long,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getInt_int_R_int,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getBoolean_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getByte_int_R_byte,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getShort_int_R_short,
	(void *) M_com_badlogic_gdx_utils_JsonValue_getChar_int_R_char,
	(void *) M_com_badlogic_gdx_utils_JsonValue_type_R_com_badlogic_gdx_utils_JsonValue$ValueType,
	(void *) M_com_badlogic_gdx_utils_JsonValue_setType_com_badlogic_gdx_utils_JsonValue$ValueType,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isString_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isNumber_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_parent_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_child_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_last_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_setChild_java_lang_String_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_setChild_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_replace_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_addChildFirst_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_next_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_setNext_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_prev_R_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_setPrev_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_set_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_JsonValue_set_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_setNull,
	(void *) M_com_badlogic_gdx_utils_JsonValue_set_double_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_set_long_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_set_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_equalsString_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_nameEquals_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_JsonValue_iterator_R_com_badlogic_gdx_utils_JsonValue$JsonIterator,
	(void *) M_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_lang_StringBuilder_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings,
	(void *) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_io_Writer_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings,
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
	{ "get", "(I)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "get", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "getIgnoreCase", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "iterator", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue$JsonIterator;" },
	{ "require", "(I)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "require", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "remove", "(I)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "remove", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "remove", "()V" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "size", "()I" },
	{ "asString", "()Ljava/lang/String;" },
	{ "asFloat", "()F" },
	{ "asDouble", "()D" },
	{ "asLong", "()J" },
	{ "asInt", "()I" },
	{ "asBoolean", "()Z" },
	{ "asByte", "()B" },
	{ "asShort", "()S" },
	{ "asChar", "()C" },
	{ "asStringArray", "()[Ljava/lang/String;" },
	{ "asFloatArray", "()[F" },
	{ "asDoubleArray", "()[D" },
	{ "asLongArray", "()[J" },
	{ "asIntArray", "()[I" },
	{ "asBooleanArray", "()[Z" },
	{ "asByteArray", "()[B" },
	{ "asShortArray", "()[S" },
	{ "asCharArray", "()[C" },
	{ "hasChild", "(Ljava/lang/String;)Z" },
	{ "getChild", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getFloat", "(Ljava/lang/String;F)F" },
	{ "getDouble", "(Ljava/lang/String;D)D" },
	{ "getLong", "(Ljava/lang/String;J)J" },
	{ "getInt", "(Ljava/lang/String;I)I" },
	{ "getBoolean", "(Ljava/lang/String;Z)Z" },
	{ "getByte", "(Ljava/lang/String;B)B" },
	{ "getShort", "(Ljava/lang/String;S)S" },
	{ "getChar", "(Ljava/lang/String;C)C" },
	{ "getString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getFloat", "(Ljava/lang/String;)F" },
	{ "getDouble", "(Ljava/lang/String;)D" },
	{ "getLong", "(Ljava/lang/String;)J" },
	{ "getInt", "(Ljava/lang/String;)I" },
	{ "getBoolean", "(Ljava/lang/String;)Z" },
	{ "getByte", "(Ljava/lang/String;)B" },
	{ "getShort", "(Ljava/lang/String;)S" },
	{ "getChar", "(Ljava/lang/String;)C" },
	{ "getString", "(I)Ljava/lang/String;" },
	{ "getFloat", "(I)F" },
	{ "getDouble", "(I)D" },
	{ "getLong", "(I)J" },
	{ "getInt", "(I)I" },
	{ "getBoolean", "(I)Z" },
	{ "getByte", "(I)B" },
	{ "getShort", "(I)S" },
	{ "getChar", "(I)C" },
	{ "type", "()Lcom/badlogic/gdx/utils/JsonValue$ValueType;" },
	{ "setType", "(Lcom/badlogic/gdx/utils/JsonValue$ValueType;)V" },
	{ "isArray", "()Z" },
	{ "isObject", "()Z" },
	{ "isString", "()Z" },
	{ "isNumber", "()Z" },
	{ "isDouble", "()Z" },
	{ "isLong", "()Z" },
	{ "isBoolean", "()Z" },
	{ "isNull", "()Z" },
	{ "isValue", "()Z" },
	{ "name", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "parent", "()Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "child", "()Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "last", "()Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "setChild", "(Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "setChild", "(Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "replace", "(Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "addChild", "(Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "addChild", "(Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "addChildFirst", "(Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "next", "()Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "setNext", "(Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "prev", "()Lcom/badlogic/gdx/utils/JsonValue;" },
	{ "setPrev", "(Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "set", "(Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "set", "(Ljava/lang/String;)V" },
	{ "setNull", "()V" },
	{ "set", "(DLjava/lang/String;)V" },
	{ "set", "(JLjava/lang/String;)V" },
	{ "set", "(Z)V" },
	{ "equalsString", "(Ljava/lang/String;)Z" },
	{ "nameEquals", "(Ljava/lang/String;)Z" },
	{ "toJson", "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;)Ljava/lang/String;" },
	{ "toJson", "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;Ljava/io/Writer;)V" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/JsonValue$JsonIterator;" },
	{ "trace", "()Ljava/lang/String;" },
	{ "prettyPrint", "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;I)Ljava/lang/String;" },
	{ "prettyPrint", "(Lcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)Ljava/lang/String;" },
	{ "prettyPrint", "(Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/StringBuilder;ILcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)V" },
	{ "prettyPrint", "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;Ljava/io/Writer;)V" },
	{ "prettyPrint", "(Lcom/badlogic/gdx/utils/JsonValue;Ljava/io/Writer;ILcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_JsonValue$ValueType,
	&class_com_badlogic_gdx_utils_JsonValue$JsonIterator,
	&class_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings,
};

static FieldMetadata fields[] {
	{ "type", &class_com_badlogic_gdx_utils_JsonValue$ValueType, offsetof(com_badlogic_gdx_utils_JsonValue, F_type), "Lcom/badlogic/gdx/utils/JsonValue$ValueType;", 2 },
	{ "stringValue", &class_java_lang_String, offsetof(com_badlogic_gdx_utils_JsonValue, F_stringValue), "Ljava/lang/String;", 2 },
	{ "doubleValue", &class_double, offsetof(com_badlogic_gdx_utils_JsonValue, F_doubleValue), "D", 2 },
	{ "longValue", &class_long, offsetof(com_badlogic_gdx_utils_JsonValue, F_longValue), "J", 2 },
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_utils_JsonValue, F_name), "Ljava/lang/String;", 1 },
	{ "child", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonValue, F_child), "Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "last", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonValue, F_last), "Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "parent", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonValue, F_parent), "Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "next", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonValue, F_next), "Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "prev", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonValue, F_prev), "Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_JsonValue, F_size), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue$ValueType, 0, "(Lcom/badlogic/gdx/utils/JsonValue$ValueType;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_double, 0, "(D)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_double_java_lang_String, 0, "(DLjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_long_java_lang_String, 0, "(JLjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue, 0, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue_com_badlogic_gdx_utils_JsonValue, 0, "(Lcom/badlogic/gdx/utils/JsonValue;Lcom/badlogic/gdx/utils/JsonValue;Lcom/badlogic/gdx/utils/JsonValue;)V", 2 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_get_int_R_com_badlogic_gdx_utils_JsonValue, "(I)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "getIgnoreCase", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getIgnoreCase_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_getIgnoreCase_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "has", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_has_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_iterator_java_lang_String_R_com_badlogic_gdx_utils_JsonValue$JsonIterator, VTABLE_com_badlogic_gdx_utils_JsonValue_iterator_java_lang_String_R_com_badlogic_gdx_utils_JsonValue$JsonIterator, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue$JsonIterator;", 1 },
	{ "require", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_require_int_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_require_int_R_com_badlogic_gdx_utils_JsonValue, "(I)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "require", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_remove_int_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_remove_int_R_com_badlogic_gdx_utils_JsonValue, "(I)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_remove_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_remove_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_remove, VTABLE_com_badlogic_gdx_utils_JsonValue_remove, "()V", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_size_R_int, VTABLE_com_badlogic_gdx_utils_JsonValue_size_R_int, "()I", 131073 },
	{ "asString", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "asFloat", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asFloat_R_float, VTABLE_com_badlogic_gdx_utils_JsonValue_asFloat_R_float, "()F", 1 },
	{ "asDouble", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asDouble_R_double, VTABLE_com_badlogic_gdx_utils_JsonValue_asDouble_R_double, "()D", 1 },
	{ "asLong", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asLong_R_long, VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long, "()J", 1 },
	{ "asInt", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asInt_R_int, VTABLE_com_badlogic_gdx_utils_JsonValue_asInt_R_int, "()I", 1 },
	{ "asBoolean", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean, "()Z", 1 },
	{ "asByte", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asByte_R_byte, VTABLE_com_badlogic_gdx_utils_JsonValue_asByte_R_byte, "()B", 1 },
	{ "asShort", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asShort_R_short, VTABLE_com_badlogic_gdx_utils_JsonValue_asShort_R_short, "()S", 1 },
	{ "asChar", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asChar_R_char, VTABLE_com_badlogic_gdx_utils_JsonValue_asChar_R_char, "()C", 1 },
	{ "asStringArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asStringArray_R_Array1_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_asStringArray_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "asFloatArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asFloatArray_R_Array1_float, VTABLE_com_badlogic_gdx_utils_JsonValue_asFloatArray_R_Array1_float, "()[F", 1 },
	{ "asDoubleArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asDoubleArray_R_Array1_double, VTABLE_com_badlogic_gdx_utils_JsonValue_asDoubleArray_R_Array1_double, "()[D", 1 },
	{ "asLongArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asLongArray_R_Array1_long, VTABLE_com_badlogic_gdx_utils_JsonValue_asLongArray_R_Array1_long, "()[J", 1 },
	{ "asIntArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asIntArray_R_Array1_int, VTABLE_com_badlogic_gdx_utils_JsonValue_asIntArray_R_Array1_int, "()[I", 1 },
	{ "asBooleanArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asBooleanArray_R_Array1_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_asBooleanArray_R_Array1_boolean, "()[Z", 1 },
	{ "asByteArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asByteArray_R_Array1_byte, VTABLE_com_badlogic_gdx_utils_JsonValue_asByteArray_R_Array1_byte, "()[B", 1 },
	{ "asShortArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asShortArray_R_Array1_short, VTABLE_com_badlogic_gdx_utils_JsonValue_asShortArray_R_Array1_short, "()[S", 1 },
	{ "asCharArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_asCharArray_R_Array1_char, VTABLE_com_badlogic_gdx_utils_JsonValue_asCharArray_R_Array1_char, "()[C", 1 },
	{ "hasChild", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_hasChild_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_hasChild_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getChild", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "getString", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getFloat", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float, VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float, "(Ljava/lang/String;F)F", 1 },
	{ "getDouble", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getDouble_java_lang_String_double_R_double, VTABLE_com_badlogic_gdx_utils_JsonValue_getDouble_java_lang_String_double_R_double, "(Ljava/lang/String;D)D", 1 },
	{ "getLong", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getLong_java_lang_String_long_R_long, VTABLE_com_badlogic_gdx_utils_JsonValue_getLong_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
	{ "getInt", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getInt_java_lang_String_int_R_int, VTABLE_com_badlogic_gdx_utils_JsonValue_getInt_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "getBoolean", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getBoolean_java_lang_String_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_getBoolean_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Z)Z", 1 },
	{ "getByte", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getByte_java_lang_String_byte_R_byte, VTABLE_com_badlogic_gdx_utils_JsonValue_getByte_java_lang_String_byte_R_byte, "(Ljava/lang/String;B)B", 1 },
	{ "getShort", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getShort_java_lang_String_short_R_short, VTABLE_com_badlogic_gdx_utils_JsonValue_getShort_java_lang_String_short_R_short, "(Ljava/lang/String;S)S", 1 },
	{ "getChar", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getChar_java_lang_String_char_R_char, VTABLE_com_badlogic_gdx_utils_JsonValue_getChar_java_lang_String_char_R_char, "(Ljava/lang/String;C)C", 1 },
	{ "getString", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getFloat", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_R_float, VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_R_float, "(Ljava/lang/String;)F", 1 },
	{ "getDouble", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getDouble_java_lang_String_R_double, VTABLE_com_badlogic_gdx_utils_JsonValue_getDouble_java_lang_String_R_double, "(Ljava/lang/String;)D", 1 },
	{ "getLong", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getLong_java_lang_String_R_long, VTABLE_com_badlogic_gdx_utils_JsonValue_getLong_java_lang_String_R_long, "(Ljava/lang/String;)J", 1 },
	{ "getInt", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getInt_java_lang_String_R_int, VTABLE_com_badlogic_gdx_utils_JsonValue_getInt_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getBoolean", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getBoolean_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_getBoolean_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getByte", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getByte_java_lang_String_R_byte, VTABLE_com_badlogic_gdx_utils_JsonValue_getByte_java_lang_String_R_byte, "(Ljava/lang/String;)B", 1 },
	{ "getShort", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getShort_java_lang_String_R_short, VTABLE_com_badlogic_gdx_utils_JsonValue_getShort_java_lang_String_R_short, "(Ljava/lang/String;)S", 1 },
	{ "getChar", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getChar_java_lang_String_R_char, VTABLE_com_badlogic_gdx_utils_JsonValue_getChar_java_lang_String_R_char, "(Ljava/lang/String;)C", 1 },
	{ "getString", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getString_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_getString_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getFloat", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float, VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float, "(I)F", 1 },
	{ "getDouble", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getDouble_int_R_double, VTABLE_com_badlogic_gdx_utils_JsonValue_getDouble_int_R_double, "(I)D", 1 },
	{ "getLong", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getLong_int_R_long, VTABLE_com_badlogic_gdx_utils_JsonValue_getLong_int_R_long, "(I)J", 1 },
	{ "getInt", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getInt_int_R_int, VTABLE_com_badlogic_gdx_utils_JsonValue_getInt_int_R_int, "(I)I", 1 },
	{ "getBoolean", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getBoolean_int_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_getBoolean_int_R_boolean, "(I)Z", 1 },
	{ "getByte", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getByte_int_R_byte, VTABLE_com_badlogic_gdx_utils_JsonValue_getByte_int_R_byte, "(I)B", 1 },
	{ "getShort", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getShort_int_R_short, VTABLE_com_badlogic_gdx_utils_JsonValue_getShort_int_R_short, "(I)S", 1 },
	{ "getChar", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_getChar_int_R_char, VTABLE_com_badlogic_gdx_utils_JsonValue_getChar_int_R_char, "(I)C", 1 },
	{ "type", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_type_R_com_badlogic_gdx_utils_JsonValue$ValueType, VTABLE_com_badlogic_gdx_utils_JsonValue_type_R_com_badlogic_gdx_utils_JsonValue$ValueType, "()Lcom/badlogic/gdx/utils/JsonValue$ValueType;", 1 },
	{ "setType", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_setType_com_badlogic_gdx_utils_JsonValue$ValueType, VTABLE_com_badlogic_gdx_utils_JsonValue_setType_com_badlogic_gdx_utils_JsonValue$ValueType, "(Lcom/badlogic/gdx/utils/JsonValue$ValueType;)V", 1 },
	{ "isArray", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean, "()Z", 1 },
	{ "isObject", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean, "()Z", 1 },
	{ "isString", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isString_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isString_R_boolean, "()Z", 1 },
	{ "isNumber", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isNumber_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isNumber_R_boolean, "()Z", 1 },
	{ "isDouble", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isDouble_R_boolean, "()Z", 1 },
	{ "isLong", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isLong_R_boolean, "()Z", 1 },
	{ "isBoolean", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean, "()Z", 1 },
	{ "isNull", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isNull_R_boolean, "()Z", 1 },
	{ "isValue", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_isValue_R_boolean, "()Z", 1 },
	{ "name", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_setName_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "parent", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_parent_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_parent_R_com_badlogic_gdx_utils_JsonValue, "()Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "child", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_child_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_child_R_com_badlogic_gdx_utils_JsonValue, "()Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "last", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_last_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_last_R_com_badlogic_gdx_utils_JsonValue, "()Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "setChild", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_setChild_java_lang_String_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_setChild_java_lang_String_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "setChild", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_setChild_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_setChild_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "replace", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_replace_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_replace_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "addChild", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_addChild_java_lang_String_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "addChild", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_addChild_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "addChildFirst", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_addChildFirst_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_addChildFirst_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_next_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_next_R_com_badlogic_gdx_utils_JsonValue, "()Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "setNext", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_setNext_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_setNext_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "prev", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_prev_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_prev_R_com_badlogic_gdx_utils_JsonValue, "()Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "setPrev", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_setPrev_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_setPrev_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_set_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue_set_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_set_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_set_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setNull", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_setNull, VTABLE_com_badlogic_gdx_utils_JsonValue_setNull, "()V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_set_double_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_set_double_java_lang_String, "(DLjava/lang/String;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_set_long_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_set_long_java_lang_String, "(JLjava/lang/String;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_set_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_set_boolean, "(Z)V", 1 },
	{ "equalsString", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_equalsString_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_equalsString_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "nameEquals", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_nameEquals_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue_nameEquals_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_R_java_lang_String, "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;)Ljava/lang/String;", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer, VTABLE_com_badlogic_gdx_utils_JsonValue_toJson_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer, "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;Ljava/io/Writer;)V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_iterator_R_com_badlogic_gdx_utils_JsonValue$JsonIterator, VTABLE_com_badlogic_gdx_utils_JsonValue_iterator_R_com_badlogic_gdx_utils_JsonValue$JsonIterator, "()Lcom/badlogic/gdx/utils/JsonValue$JsonIterator;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "trace", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_int_R_java_lang_String, "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;I)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String, "(Lcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_lang_StringBuilder_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings, VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_lang_StringBuilder_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings, "(Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/StringBuilder;ILcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)V", 2 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer, VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_java_io_Writer, "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;Ljava/io/Writer;)V", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_io_Writer_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings, VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue_java_io_Writer_int_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings, "(Lcom/badlogic/gdx/utils/JsonValue;Ljava/io/Writer;ILcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)V", 2 },
	{ "isFlat", (intptr_t) SM_com_badlogic_gdx_utils_JsonValue_isFlat_com_badlogic_gdx_utils_JsonValue_R_boolean, 0, "(Lcom/badlogic/gdx/utils/JsonValue;)Z", 10 },
	{ "isNumeric", (intptr_t) SM_com_badlogic_gdx_utils_JsonValue_isNumeric_com_badlogic_gdx_utils_JsonValue_R_boolean, 0, "(Lcom/badlogic/gdx/utils/JsonValue;)Z", 10 },
	{ "indent", (intptr_t) SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_lang_StringBuilder, 0, "(ILjava/lang/StringBuilder;)V", 10 },
	{ "indent", (intptr_t) SM_com_badlogic_gdx_utils_JsonValue_indent_int_java_io_Writer, 0, "(ILjava/io/Writer;)V", 10 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_JsonValue_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_JsonValue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_com_badlogic_gdx_utils_JsonValue{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/JsonValue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_JsonValue),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_JsonValue,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_JsonValue,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_JsonValue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 118,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 117,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_JsonValue = registerClass(&class_com_badlogic_gdx_utils_JsonValue);

}

