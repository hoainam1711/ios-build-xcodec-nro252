#include "com/badlogic/gdx/graphics/Cursor_SystemCursor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Cursor_SystemCursor.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/Cursor.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Arrow;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Ibeam;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Crosshair;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Hand;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_HorizontalResize;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_VerticalResize;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NWSEResize;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NESWResize;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_AllResize;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NotAllowed;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_None;
jobject SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_$VALUES;

void mark_com_badlogic_gdx_graphics_Cursor$SystemCursor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Arrow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Arrow)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Arrow, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Ibeam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Ibeam)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Ibeam, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Crosshair)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Crosshair)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Crosshair, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Hand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Hand)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Hand, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_HorizontalResize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_HorizontalResize)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_HorizontalResize, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_VerticalResize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_VerticalResize)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_VerticalResize, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NWSEResize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NWSEResize)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NWSEResize, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NESWResize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NESWResize)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NESWResize, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_AllResize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_AllResize)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_AllResize, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NotAllowed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NotAllowed)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NotAllowed, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_None)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_None)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_None, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_Cursor$SystemCursor *) object;
}

jobject SM_com_badlogic_gdx_graphics_Cursor$SystemCursor_values_R_Array1_com_badlogic_gdx_graphics_Cursor$SystemCursor(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cursor$SystemCursor:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	{
	LINE_NUMBER(15);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_Cursor$SystemCursor, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Cursor$SystemCursor_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Cursor$SystemCursor(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cursor$SystemCursor:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_Cursor$SystemCursor)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cursor$SystemCursor:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(15);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Cursor$SystemCursor_$values_R_Array1_com_badlogic_gdx_graphics_Cursor$SystemCursor(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cursor$SystemCursor:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (11));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Arrow;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Ibeam;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Crosshair;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Hand;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_HorizontalResize;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_VerticalResize;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NWSEResize;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NESWResize;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_AllResize;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NotAllowed;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_None;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cursor$SystemCursor:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	{
	LINE_NUMBER(16);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Arrow"_j))), (jint(0)));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Arrow = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Ibeam"_j))), (jint(1)));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Ibeam = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Crosshair"_j))), (jint(2)));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Crosshair = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Hand"_j))), (jint(3)));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Hand = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HorizontalResize"_j))), (jint(4)));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_HorizontalResize = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"VerticalResize"_j))), (jint(5)));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_VerticalResize = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NWSEResize"_j))), (6));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NWSEResize = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NESWResize"_j))), (7));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NESWResize = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AllResize"_j))), (8));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_AllResize = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NotAllowed"_j))), (9));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NotAllowed = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cursor$SystemCursor);
	init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"None"_j))), (10));
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_None = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Cursor$SystemCursor_$values_R_Array1_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor(ctx);
	SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Cursor$SystemCursor[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "Arrow", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Arrow, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "Ibeam", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Ibeam, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "Crosshair", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Crosshair, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "Hand", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_Hand, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "HorizontalResize", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_HorizontalResize, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "VerticalResize", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_VerticalResize, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "NWSEResize", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NWSEResize, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "NESWResize", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NESWResize, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "AllResize", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_AllResize, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "NotAllowed", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_NotAllowed, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "None", &class_com_badlogic_gdx_graphics_Cursor$SystemCursor, (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_None, "Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_Cursor$SystemCursor, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_Cursor$SystemCursor_$VALUES, "[Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_Cursor$SystemCursor_values_R_Array1_com_badlogic_gdx_graphics_Cursor$SystemCursor, 0, "()[Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_Cursor$SystemCursor_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Cursor$SystemCursor, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cursor$SystemCursor_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_Cursor$SystemCursor_$values_R_Array1_com_badlogic_gdx_graphics_Cursor$SystemCursor, 0, "()[Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Cursor$SystemCursor{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Cursor$SystemCursor",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_Cursor$SystemCursor),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Cursor$SystemCursor,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Cursor$SystemCursor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Cursor$SystemCursor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_Cursor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Cursor$SystemCursor = registerClass(&class_com_badlogic_gdx_graphics_Cursor$SystemCursor);

}

