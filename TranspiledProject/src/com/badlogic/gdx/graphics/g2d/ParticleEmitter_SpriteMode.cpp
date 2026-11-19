#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpriteMode.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpriteMode.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single;
jobject SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_random;
jobject SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated;
jobject SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$VALUES;

void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_random)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_random)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_random, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode *) object;
}

jobject SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_values_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	{
	LINE_NUMBER(1744);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1744);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1744);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$values_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	{
	LINE_NUMBER(1744);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, (jint(3)));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_random;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	{
	LINE_NUMBER(1745);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"single"_j))), (jint(0)));
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single = sp[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"random"_j))), (jint(1)));
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_random = sp[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"animated"_j))), (jint(2)));
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated = sp[0].o;
	LINE_NUMBER(1744);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$values_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode[] {
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
	{ "single", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single, "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 16409 },
	{ "random", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_random, "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 16409 },
	{ "animated", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated, "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$VALUES, "[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_values_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, 0, "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_$values_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, 0, "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode);

}

