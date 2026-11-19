#include "com/badlogic/gdx/graphics/glutils/HdpiUtils.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/glutils/HdpiMode.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/glutils/HdpiUtils.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode;

void mark_com_badlogic_gdx_graphics_glutils_HdpiUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_glutils_HdpiUtils *) object;
}

void init_com_badlogic_gdx_graphics_glutils_HdpiUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_setMode_com_badlogic_gdx_graphics_glutils_HdpiMode(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:setMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode = (frame[0].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glScissor_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:glScissor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(52);
	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode;
	clinit_com_badlogic_gdx_graphics_glutils_HdpiMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_HdpiMode_Logical;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 != temp1) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferX_int_R_int(ctx, (frame[0].i));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferY_int_R_int(ctx, (frame[1].i));
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferX_int_R_int(ctx, (frame[2].i));
	jint temp3 = (jint)SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferY_int_R_int(ctx, (frame[3].i));
	((func_com_badlogic_gdx_graphics_GL20_glScissor_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glScissor_int_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(56);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glScissor_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glScissor_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	}
label_4:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glViewport_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:glViewport", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(63);
	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode;
	clinit_com_badlogic_gdx_graphics_glutils_HdpiMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_HdpiMode_Logical;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 != temp1) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	LINE_NUMBER(64);
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferX_int_R_int(ctx, (frame[0].i));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferY_int_R_int(ctx, (frame[1].i));
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferX_int_R_int(ctx, (frame[2].i));
	jint temp3 = (jint)SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferY_int_R_int(ctx, (frame[3].i));
	((func_com_badlogic_gdx_graphics_GL20_glViewport_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glViewport_int_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(67);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glViewport_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glViewport_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	}
label_4:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toLogicalX_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:toLogicalX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(73);
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = jfloat((temp0 * temp1));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp3 = (jint)((func_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint((temp2 / (jfloat(temp3)))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toLogicalY_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:toLogicalY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(78);
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = jfloat((temp0 * temp1));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp3 = (jint)((func_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint((temp2 / (jfloat(temp3)))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferX_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:toBackBufferX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(83);
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = jfloat((temp0 * temp1));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp3 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint((temp2 / (jfloat(temp3)))));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferY_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:toBackBufferY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(88);
	jint temp0 = frame[0].i;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = jfloat((temp0 * temp1));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp3 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint((temp2 / (jfloat(temp3)))));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/HdpiUtils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	{
	LINE_NUMBER(29);
	clinit_com_badlogic_gdx_graphics_glutils_HdpiMode(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_HdpiMode_Logical;
	clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(ctx);
	SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_HdpiUtils[] {
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
	{ "mode", &class_com_badlogic_gdx_graphics_glutils_HdpiMode, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode, "Lcom/badlogic/gdx/graphics/glutils/HdpiMode;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_HdpiUtils, 0, "()V", 1 },
	{ "setMode", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_setMode_com_badlogic_gdx_graphics_glutils_HdpiMode, 0, "(Lcom/badlogic/gdx/graphics/glutils/HdpiMode;)V", 9 },
	{ "glScissor", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glScissor_int_int_int_int, 0, "(IIII)V", 9 },
	{ "glViewport", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glViewport_int_int_int_int, 0, "(IIII)V", 9 },
	{ "toLogicalX", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toLogicalX_int_R_int, 0, "(I)I", 9 },
	{ "toLogicalY", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toLogicalY_int_R_int, 0, "(I)I", 9 },
	{ "toBackBufferX", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferX_int_R_int, 0, "(I)I", 9 },
	{ "toBackBufferY", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferY_int_R_int, 0, "(I)I", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_glutils_HdpiUtils{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/HdpiUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_HdpiUtils),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_HdpiUtils,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_HdpiUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_HdpiUtils = registerClass(&class_com_badlogic_gdx_graphics_glutils_HdpiUtils);

}

