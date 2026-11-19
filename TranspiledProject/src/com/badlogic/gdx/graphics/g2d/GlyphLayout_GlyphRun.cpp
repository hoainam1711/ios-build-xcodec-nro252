#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_WrapState.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_Glyph.h"
#include "com/badlogic/gdx/utils/Pool_Poolable.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) object;
	if (self->F_glyphs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphs)->clazz)->markFunction)((jobject) self->F_glyphs, mark, depth + 1);
	if (self->F_xAdvances)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xAdvances)->clazz)->markFunction)((jobject) self->F_xAdvances, mark, depth + 1);
	if (self->F_wrapState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapState)->clazz)->markFunction)((jobject) self->F_wrapState, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(586);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_glyphs = (jref) sp[1].o;
	LINE_NUMBER(593);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_FloatArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_FloatArray);
	init_com_badlogic_gdx_utils_FloatArray(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_xAdvances = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun:appendRun", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_glyphs;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_glyphs;
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(602);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_xAdvances;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_FloatArray_notEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_notEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_xAdvances;
	((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_xAdvances;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_xAdvances;
	((func_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(607);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_glyphs;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(608);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_xAdvances;
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(609);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_notWrapped;
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_wrapState = (jref) sp[1].o;
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun:toString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(613);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_glyphs;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size) + (32)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(614);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[2].o = sp[0].o;
	LINE_NUMBER(615);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, sp[0].o));
	LINE_NUMBER(617);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (jchar(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[5].o)))->F_id))));
	LINE_NUMBER(615);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(621);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(624);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(626);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_wrapState;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(627);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_reset,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun,
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
	{ "reset", "()V" },
	{ "appendRun", "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "glyphs", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, F_glyphs), "Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "xAdvances", &class_com_badlogic_gdx_utils_FloatArray, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, F_xAdvances), "Lcom/badlogic/gdx/utils/FloatArray;", 1 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, F_x), "F", 1 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, F_y), "F", 1 },
	{ "width", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, F_width), "F", 1 },
	{ "wrapState", &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, F_wrapState), "Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, 0, "()V", 1 },
	{ "appendRun", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;)V", 0 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_reset, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_reset, "()V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_GlyphLayout,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun = registerClass(&class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun);

}

