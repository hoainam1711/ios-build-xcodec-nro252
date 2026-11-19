#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
jobject SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
jobject SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMap;
jobject SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestNearest;
jobject SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearNearest;
jobject SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestLinear;
jobject SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearLinear;
jobject SF_com_badlogic_gdx_graphics_Texture$TextureFilter_$VALUES;

void mark_com_badlogic_gdx_graphics_Texture$TextureFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMap)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMap, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestNearest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestNearest)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestNearest, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearNearest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearNearest)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearNearest, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestLinear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestLinear)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestLinear, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearLinear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearLinear)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearLinear, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Texture$TextureFilter_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture$TextureFilter_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_Texture$TextureFilter *) object;
}

jobject SM_com_badlogic_gdx_graphics_Texture$TextureFilter_values_R_Array1_com_badlogic_gdx_graphics_Texture$TextureFilter(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture$TextureFilter:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	{
	LINE_NUMBER(52);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_Texture$TextureFilter, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Texture$TextureFilter_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Texture$TextureFilter(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture$TextureFilter:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_Texture$TextureFilter)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture$TextureFilter:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(80);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(81);
	((com_badlogic_gdx_graphics_Texture$TextureFilter *) NULL_CHECK((frame[0].o)))->F_glEnum = (frame[3].i);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_Texture$TextureFilter_isMipMap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture$TextureFilter:isMipMap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	if (((jint)((com_badlogic_gdx_graphics_Texture$TextureFilter *) NULL_CHECK((frame[0].o)))->F_glEnum) == (9728)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_Texture$TextureFilter *) NULL_CHECK((frame[0].o)))->F_glEnum) == (9729)) goto label_1;
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

jint M_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture$TextureFilter:getGLEnum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_Texture$TextureFilter *) NULL_CHECK((frame[0].o)))->F_glEnum);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Texture$TextureFilter_$values_R_Array1_com_badlogic_gdx_graphics_Texture$TextureFilter(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture$TextureFilter:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter, (7));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMap;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestNearest;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearNearest;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestLinear;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearLinear;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture$TextureFilter:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	{
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter);
	init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nearest"_j))), (jint(0)), (9728));
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest = sp[0].o;
	LINE_NUMBER(57);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter);
	init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Linear"_j))), (jint(1)), (9729));
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear = sp[0].o;
	LINE_NUMBER(60);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter);
	init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MipMap"_j))), (jint(2)), (9987));
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMap = sp[0].o;
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter);
	init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MipMapNearestNearest"_j))), (jint(3)), (9984));
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestNearest = sp[0].o;
	LINE_NUMBER(68);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter);
	init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MipMapLinearNearest"_j))), (jint(4)), (9985));
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearNearest = sp[0].o;
	LINE_NUMBER(72);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter);
	init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MipMapNearestLinear"_j))), (jint(5)), (9986));
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestLinear = sp[0].o;
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture$TextureFilter);
	init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MipMapLinearLinear"_j))), (6), (9987));
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearLinear = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Texture$TextureFilter_$values_R_Array1_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	SF_com_badlogic_gdx_graphics_Texture$TextureFilter_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Texture$TextureFilter[] {
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
	(void *) M_com_badlogic_gdx_graphics_Texture$TextureFilter_isMipMap_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int,
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
	{ "isMipMap", "()Z" },
	{ "getGLEnum", "()I" },
};

static FieldMetadata fields[] {
	{ "Nearest", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest, "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 16409 },
	{ "Linear", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear, "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 16409 },
	{ "MipMap", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMap, "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 16409 },
	{ "MipMapNearestNearest", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestNearest, "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 16409 },
	{ "MipMapLinearNearest", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearNearest, "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 16409 },
	{ "MipMapNearestLinear", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapNearestLinear, "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 16409 },
	{ "MipMapLinearLinear", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture$TextureFilter_MipMapLinearLinear, "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 16409 },
	{ "glEnum", &class_int, offsetof(com_badlogic_gdx_graphics_Texture$TextureFilter, F_glEnum), "I", 16 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_Texture$TextureFilter, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_Texture$TextureFilter_$VALUES, "[Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_Texture$TextureFilter_values_R_Array1_com_badlogic_gdx_graphics_Texture$TextureFilter, 0, "()[Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_Texture$TextureFilter_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Texture$TextureFilter, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture$TextureFilter_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 2 },
	{ "isMipMap", (intptr_t) M_com_badlogic_gdx_graphics_Texture$TextureFilter_isMipMap_R_boolean, VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_isMipMap_R_boolean, "()Z", 1 },
	{ "getGLEnum", (intptr_t) M_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int, VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int, "()I", 1 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_Texture$TextureFilter_$values_R_Array1_com_badlogic_gdx_graphics_Texture$TextureFilter, 0, "()[Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Texture$TextureFilter, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Texture$TextureFilter{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Texture$TextureFilter",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_Texture$TextureFilter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Texture$TextureFilter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Texture$TextureFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Texture$TextureFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_Texture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Texture$TextureFilter = registerClass(&class_com_badlogic_gdx_graphics_Texture$TextureFilter);

}

