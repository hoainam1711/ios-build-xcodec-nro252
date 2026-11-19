#include "com/badlogic/gdx/utils/OrderedMap.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectMap_Values.h"
#include "com/badlogic/gdx/utils/OrderedMap_OrderedMapKeys.h"
#include "com/badlogic/gdx/utils/OrderedMap_OrderedMapValues.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "com/badlogic/gdx/utils/ObjectMap_Keys.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/OrderedMap_OrderedMapEntries.h"
#include "com/badlogic/gdx/utils/OrderedMap.h"

extern "C" {


void mark_com_badlogic_gdx_utils_OrderedMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_ObjectMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_OrderedMap *) object;
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_OrderedMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
}

void init_com_badlogic_gdx_utils_OrderedMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_OrderedMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(54);
	init_com_badlogic_gdx_utils_ObjectMap_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_OrderedMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(62);
	init_com_badlogic_gdx_utils_ObjectMap_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_OrderedMap_com_badlogic_gdx_utils_OrderedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_OrderedMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	init_com_badlogic_gdx_utils_ObjectMap_com_badlogic_gdx_utils_ObjectMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[1].o)))->F_keys;
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(74);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(79);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_OrderedMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_10:;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(89);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_2:;
	{
	LINE_NUMBER(90);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_OrderedMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_7:;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_OrderedMap_putAll_com_badlogic_gdx_utils_OrderedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:putAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	((func_com_badlogic_gdx_utils_OrderedMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(101);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[1].o)))->F_keys;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(102);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(101);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(109);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:removeIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_OrderedMap_alter_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:alter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	frame[3].i = temp0;
	LINE_NUMBER(126);
	if ((frame[3].i) != (jint(-1))) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	((func_com_badlogic_gdx_utils_Array_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_set_int_java_lang_Object])(ctx, sp[0].o, (frame[3].i), (frame[2].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_OrderedMap_alterIndex_int_java_lang_Object_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:alterIndex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(139);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[3].o, (frame[1].i));
	sp[2].o = (jobject)M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object(ctx, sp[2].o, sp[3].o);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	((func_com_badlogic_gdx_utils_Array_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_set_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_OrderedMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(147);
	M_com_badlogic_gdx_utils_ObjectMap_clear_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_OrderedMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(152);
	M_com_badlogic_gdx_utils_ObjectMap_clear(ctx, (frame[0].o));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_orderedKeys_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:orderedKeys", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries_com_badlogic_gdx_utils_OrderedMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries_com_badlogic_gdx_utils_OrderedMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries_com_badlogic_gdx_utils_OrderedMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_com_badlogic_gdx_utils_ObjectMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_com_badlogic_gdx_utils_ObjectMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(181);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues_com_badlogic_gdx_utils_OrderedMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues_com_badlogic_gdx_utils_OrderedMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues_com_badlogic_gdx_utils_OrderedMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_com_badlogic_gdx_utils_ObjectMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_com_badlogic_gdx_utils_ObjectMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(202);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys_com_badlogic_gdx_utils_OrderedMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys_com_badlogic_gdx_utils_OrderedMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys);
	init_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys_com_badlogic_gdx_utils_OrderedMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_com_badlogic_gdx_utils_ObjectMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(219);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_com_badlogic_gdx_utils_ObjectMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:toString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(230);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(231);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(232);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	}
label_5:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[4].o = sp[0].o;
	LINE_NUMBER(234);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[4].o)))->F_size);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(236);
	if ((frame[5].i) <= 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	}
label_12:;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[7].o) != (frame[0].o)) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_14;
label_13:;
	INST_ALOAD(7);
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[8].o) != (frame[0].o)) goto label_18;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_19;
label_18:;
	INST_ALOAD(8);
label_19:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(234);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(242);
	if ((frame[2].i) == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	}
label_21:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_OrderedMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/OrderedMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_OrderedMap[] {
	(void *) M_com_badlogic_gdx_utils_ObjectMap_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_shrink_int,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_clear_int,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_clear,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_resize_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_putAll_com_badlogic_gdx_utils_OrderedMap,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_removeIndex_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_alter_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_alterIndex_int_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_OrderedMap_orderedKeys_R_com_badlogic_gdx_utils_Array,
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
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putMissing", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Lcom/badlogic/gdx/utils/ObjectMap;)V" },
	{ "putResize", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "equalsIdentity", "(Ljava/lang/Object;)Z" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;" },
	{ "entries", "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;" },
	{ "values", "()Lcom/badlogic/gdx/utils/ObjectMap$Values;" },
	{ "keys", "()Lcom/badlogic/gdx/utils/ObjectMap$Keys;" },
	{ "putAll", "(Lcom/badlogic/gdx/utils/OrderedMap;)V" },
	{ "removeIndex", "(I)Ljava/lang/Object;" },
	{ "alter", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "alterIndex", "(ILjava/lang/Object;)Z" },
	{ "orderedKeys", "()Lcom/badlogic/gdx/utils/Array;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_OrderedMap$OrderedMapEntries,
	&class_com_badlogic_gdx_utils_OrderedMap$OrderedMapValues,
	&class_com_badlogic_gdx_utils_OrderedMap$OrderedMapKeys,
};

static FieldMetadata fields[] {
	{ "keys", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_utils_OrderedMap, F_keys), "Lcom/badlogic/gdx/utils/Array;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_OrderedMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_OrderedMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_OrderedMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_OrderedMap_com_badlogic_gdx_utils_OrderedMap, 0, "(Lcom/badlogic/gdx/utils/OrderedMap;)V", 1 },
	{ "put", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putMissing", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_OrderedMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_putAll_com_badlogic_gdx_utils_OrderedMap, VTABLE_com_badlogic_gdx_utils_OrderedMap_putAll_com_badlogic_gdx_utils_OrderedMap, "(Lcom/badlogic/gdx/utils/OrderedMap;)V", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_OrderedMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_removeIndex_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_OrderedMap_removeIndex_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "alter", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_alter_java_lang_Object_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_OrderedMap_alter_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 1 },
	{ "alterIndex", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_alterIndex_int_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_OrderedMap_alterIndex_int_java_lang_Object_R_boolean, "(ILjava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_clear_int, VTABLE_com_badlogic_gdx_utils_OrderedMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_clear, VTABLE_com_badlogic_gdx_utils_OrderedMap_clear, "()V", 1 },
	{ "orderedKeys", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_orderedKeys_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_OrderedMap_orderedKeys_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries, VTABLE_com_badlogic_gdx_utils_OrderedMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries, "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;", 1 },
	{ "entries", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries, VTABLE_com_badlogic_gdx_utils_OrderedMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries, "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;", 1 },
	{ "values", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values, VTABLE_com_badlogic_gdx_utils_OrderedMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values, "()Lcom/badlogic/gdx/utils/ObjectMap$Values;", 1 },
	{ "keys", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys, VTABLE_com_badlogic_gdx_utils_OrderedMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys, "()Lcom/badlogic/gdx/utils/ObjectMap$Keys;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_toString_java_lang_String_boolean_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_OrderedMap_toString_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;Z)Ljava/lang/String;", 4 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_OrderedMap_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_OrderedMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_com_badlogic_gdx_utils_OrderedMap{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/OrderedMap",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectMap,
		.size = sizeof(com_badlogic_gdx_utils_OrderedMap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_OrderedMap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_OrderedMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_OrderedMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_OrderedMap = registerClass(&class_com_badlogic_gdx_utils_OrderedMap);

}

