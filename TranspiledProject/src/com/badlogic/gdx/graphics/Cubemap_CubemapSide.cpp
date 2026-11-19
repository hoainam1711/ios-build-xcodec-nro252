#include "com/badlogic/gdx/graphics/Cubemap_CubemapSide.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Cubemap_CubemapSide.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/graphics/Cubemap.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector3.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX;
jobject SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX;
jobject SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY;
jobject SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY;
jobject SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ;
jobject SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ;
jobject SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$VALUES;

void mark_com_badlogic_gdx_graphics_Cubemap$CubemapSide(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_Cubemap$CubemapSide *) object;
	if (self->F_up)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_up)->clazz)->markFunction)((jobject) self->F_up, mark, depth + 1);
	if (self->F_direction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_direction)->clazz)->markFunction)((jobject) self->F_direction, mark, depth + 1);
}

jobject SM_com_badlogic_gdx_graphics_Cubemap$CubemapSide_values_R_Array1_com_badlogic_gdx_graphics_Cubemap$CubemapSide(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$CubemapSide:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	{
	LINE_NUMBER(43);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Cubemap$CubemapSide_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Cubemap$CubemapSide(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$CubemapSide:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$CubemapSide:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(66);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(67);
	((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_index = (frame[3].i);
	LINE_NUMBER(68);
	((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_glEnum = (frame[4].i);
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (frame[5].f), (frame[6].f), (frame[7].f));
	((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (frame[8].f), (frame[9].f), (frame[10].f));
	((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getGLEnum_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$CubemapSide:getGLEnum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_glEnum);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getUp_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$CubemapSide:getUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getDirection_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$CubemapSide:getDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$values_R_Array1_com_badlogic_gdx_graphics_Cubemap$CubemapSide(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$CubemapSide:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, (6));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[12];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$CubemapSide:<clinit>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	{
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide);
	init_com_badlogic_gdx_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PositiveX"_j))), (jint(0)), (jint(0)), (jint(34069)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(1)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX = sp[0].o;
	LINE_NUMBER(47);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide);
	init_com_badlogic_gdx_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NegativeX"_j))), (jint(1)), (jint(1)), (jint(34070)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(0)));
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX = sp[0].o;
	LINE_NUMBER(49);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide);
	init_com_badlogic_gdx_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PositiveY"_j))), (jint(2)), (jint(2)), (jint(34071)), (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(0)), (jfloat(1)), (jfloat(0)));
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY = sp[0].o;
	LINE_NUMBER(51);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide);
	init_com_badlogic_gdx_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NegativeY"_j))), (jint(3)), (jint(3)), (jint(34072)), (jfloat(0)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)));
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY = sp[0].o;
	LINE_NUMBER(53);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide);
	init_com_badlogic_gdx_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PositiveZ"_j))), (jint(4)), (jint(4)), (jint(34073)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ = sp[0].o;
	LINE_NUMBER(55);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide);
	init_com_badlogic_gdx_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NegativeZ"_j))), (jint(5)), (jint(5)), (jint(34074)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(-1.0f)));
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$values_R_Array1_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Cubemap$CubemapSide[] {
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
	(void *) M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getGLEnum_R_int,
	(void *) M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getUp_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getDirection_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
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
	{ "getGLEnum", "()I" },
	{ "getUp", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getDirection", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
};

static FieldMetadata fields[] {
	{ "PositiveX", &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX, "Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 16409 },
	{ "NegativeX", &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX, "Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 16409 },
	{ "PositiveY", &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY, "Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 16409 },
	{ "NegativeY", &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY, "Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 16409 },
	{ "PositiveZ", &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ, "Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 16409 },
	{ "NegativeZ", &class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ, "Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 16409 },
	{ "index", &class_int, offsetof(com_badlogic_gdx_graphics_Cubemap$CubemapSide, F_index), "I", 17 },
	{ "glEnum", &class_int, offsetof(com_badlogic_gdx_graphics_Cubemap$CubemapSide, F_glEnum), "I", 17 },
	{ "up", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_Cubemap$CubemapSide, F_up), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "direction", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_Cubemap$CubemapSide, F_direction), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_Cubemap$CubemapSide, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$VALUES, "[Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap$CubemapSide_values_R_Array1_com_badlogic_gdx_graphics_Cubemap$CubemapSide, 0, "()[Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap$CubemapSide_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Cubemap$CubemapSide, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float, 0, "(Ljava/lang/String;IIIFFFFFF)V", 2 },
	{ "getGLEnum", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getGLEnum_R_int, VTABLE_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getGLEnum_R_int, "()I", 1 },
	{ "getUp", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getUp_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getUp_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "getDirection", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getDirection_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_Cubemap$CubemapSide_getDirection_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap$CubemapSide_$values_R_Array1_com_badlogic_gdx_graphics_Cubemap$CubemapSide, 0, "()[Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Cubemap$CubemapSide{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Cubemap$CubemapSide",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_Cubemap$CubemapSide),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Cubemap$CubemapSide,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Cubemap$CubemapSide,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_Cubemap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Cubemap$CubemapSide = registerClass(&class_com_badlogic_gdx_graphics_Cubemap$CubemapSide);

}

