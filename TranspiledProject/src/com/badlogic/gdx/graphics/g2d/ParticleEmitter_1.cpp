#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_1.h"
#include "java/lang/NoSuchFieldError.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnShape.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnEllipseSide.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_1.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpriteMode.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode;
jobject SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide;
jobject SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape;

void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$1 *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$1:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_values_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_square;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_4;
label_2:;
	INST_ASTORE(0);
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ellipse;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_6:;
	INST_ASTORE(0);
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_line;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_33;
label_10:;
	INST_ASTORE(0);
label_33:;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_values_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide = sp[0].o;
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_top;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_14:;
	INST_ASTORE(0);
label_16:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_bottom;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_34;
label_18:;
	INST_ASTORE(0);
label_34:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_values_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode = sp[0].o;
	}
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_24;
label_22:;
	INST_ASTORE(0);
label_24:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_26; }
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_28;
label_26:;
	INST_ASTORE(0);
label_28:;
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_30; }
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_random;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_35;
label_30:;
	INST_ASTORE(0);
label_35:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1[] {
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
};

static FieldMetadata fields[] {
	{ "$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode", getArrayClass(&class_int, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode, "[I", 4120 },
	{ "$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide", getArrayClass(&class_int, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide, "[I", 4120 },
	{ "$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape", getArrayClass(&class_int, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape, "[I", 4120 },
};

static MethodMetadata methods[] {
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 4128,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = true,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1 = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1);

}

