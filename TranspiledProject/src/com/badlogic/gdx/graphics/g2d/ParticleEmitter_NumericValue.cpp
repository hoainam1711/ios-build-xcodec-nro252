#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_NumericValue.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_NumericValue.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ParticleValue.h"
#include "java/io/BufferedReader.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1286);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_getValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1290);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_setValue_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue:setValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1294);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(1295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_save_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue:save", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1298);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_save_java_io_Writer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1299);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1300);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"value: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue *) NULL_CHECK((frame[0].o)))->F_value));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_load_java_io_BufferedReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1304);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_java_io_BufferedReader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1305);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1306);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue *) NULL_CHECK(sp[0].o))->F_value = temp0;
	LINE_NUMBER(1307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1310);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1311);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue *) NULL_CHECK((frame[0].o)))->F_value = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue *) NULL_CHECK((frame[1].o)))->F_value);
	LINE_NUMBER(1312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_setAlwaysActive_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_isAlwaysActive_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_isActive_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_setActive_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_save_java_io_Writer,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_load_java_io_BufferedReader,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_getValue_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_setValue_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue,
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
	{ "setAlwaysActive", "(Z)V" },
	{ "isAlwaysActive", "()Z" },
	{ "isActive", "()Z" },
	{ "setActive", "(Z)V" },
	{ "save", "(Ljava/io/Writer;)V" },
	{ "load", "(Ljava/io/BufferedReader;)V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ParticleValue;)V" },
	{ "getValue", "()F" },
	{ "setValue", "(F)V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue;)V" },
};

static FieldMetadata fields[] {
	{ "value", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue, F_value), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue, 0, "()V", 1 },
	{ "getValue", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_getValue_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_getValue_R_float, "()F", 1 },
	{ "setValue", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_setValue_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_setValue_float, "(F)V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_save_java_io_Writer, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_save_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_load_java_io_BufferedReader, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_load_java_io_BufferedReader, "(Ljava/io/BufferedReader;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$NumericValue",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue);

}

