#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_Hinting.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_Hinting.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_None;
jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Slight;
jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Medium;
jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Full;
jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoSlight;
jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoMedium;
jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoFull;
jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$VALUES;

void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_None)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_None)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_None, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Slight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Slight)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Slight, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Medium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Medium)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Medium, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Full)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Full)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Full, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoSlight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoSlight)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoSlight, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoMedium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoMedium)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoMedium, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoFull)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoFull)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoFull, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting *) object;
}

jobject SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_values_R_Array1_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	{
	LINE_NUMBER(724);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(724);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$values_R_Array1_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, (7));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_None;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Slight;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Medium;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Full;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoSlight;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoMedium;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoFull;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	{
	LINE_NUMBER(726);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"None"_j))), (jint(0)));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_None = sp[0].o;
	LINE_NUMBER(728);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Slight"_j))), (jint(1)));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Slight = sp[0].o;
	LINE_NUMBER(730);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Medium"_j))), (jint(2)));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Medium = sp[0].o;
	LINE_NUMBER(732);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Full"_j))), (jint(3)));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Full = sp[0].o;
	LINE_NUMBER(734);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AutoSlight"_j))), (jint(4)));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoSlight = sp[0].o;
	LINE_NUMBER(736);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AutoMedium"_j))), (jint(5)));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoMedium = sp[0].o;
	LINE_NUMBER(738);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AutoFull"_j))), (6));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoFull = sp[0].o;
	LINE_NUMBER(724);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$values_R_Array1_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting[] {
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
	{ "None", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_None, "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "Slight", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Slight, "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "Medium", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Medium, "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "Full", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_Full, "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "AutoSlight", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoSlight, "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "AutoMedium", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoMedium, "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "AutoFull", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_AutoFull, "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$VALUES, "[Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_values_R_Array1_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, 0, "()[Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_$values_R_Array1_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, 0, "()[Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$Hinting",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting);

}

