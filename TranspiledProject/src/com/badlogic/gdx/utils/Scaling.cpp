#include "com/badlogic/gdx/utils/Scaling.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Scaling_1.h"
#include "com/badlogic/gdx/utils/Scaling_2.h"
#include "com/badlogic/gdx/utils/Scaling_3.h"
#include "com/badlogic/gdx/utils/Scaling_4.h"
#include "com/badlogic/gdx/utils/Scaling_5.h"
#include "com/badlogic/gdx/utils/Scaling.h"
#include "com/badlogic/gdx/utils/Scaling_6.h"
#include "com/badlogic/gdx/utils/Scaling_7.h"
#include "com/badlogic/gdx/utils/Scaling_8.h"
#include "com/badlogic/gdx/utils/Scaling_9.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_Scaling_temp;
jobject SF_com_badlogic_gdx_utils_Scaling_fit;
jobject SF_com_badlogic_gdx_utils_Scaling_contain;
jobject SF_com_badlogic_gdx_utils_Scaling_fill;
jobject SF_com_badlogic_gdx_utils_Scaling_fillX;
jobject SF_com_badlogic_gdx_utils_Scaling_fillY;
jobject SF_com_badlogic_gdx_utils_Scaling_stretch;
jobject SF_com_badlogic_gdx_utils_Scaling_stretchX;
jobject SF_com_badlogic_gdx_utils_Scaling_stretchY;
jobject SF_com_badlogic_gdx_utils_Scaling_none;

void mark_com_badlogic_gdx_utils_Scaling(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_Scaling_temp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_temp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_temp, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_fit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_fit)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_fit, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_contain)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_contain)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_contain, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_fill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_fill)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_fill, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_fillX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_fillX)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_fillX, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_fillY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_fillY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_fillY, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_stretch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_stretch)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_stretch, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_stretchX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_stretchX)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_stretchX, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_stretchY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_stretchY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_stretchY, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Scaling_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Scaling_none)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Scaling_none, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_Scaling *) object;
}

void init_com_badlogic_gdx_utils_Scaling(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Scaling:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_Scaling(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Scaling:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	{
	LINE_NUMBER(24);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_temp = sp[0].o;
	LINE_NUMBER(32);
	clinit_com_badlogic_gdx_utils_Scaling$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$1);
	init_com_badlogic_gdx_utils_Scaling$1(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_fit = sp[0].o;
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_utils_Scaling$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$2);
	init_com_badlogic_gdx_utils_Scaling$2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_contain = sp[0].o;
	LINE_NUMBER(59);
	clinit_com_badlogic_gdx_utils_Scaling$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$3);
	init_com_badlogic_gdx_utils_Scaling$3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_fill = sp[0].o;
	LINE_NUMBER(72);
	clinit_com_badlogic_gdx_utils_Scaling$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$4);
	init_com_badlogic_gdx_utils_Scaling$4(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_fillX = sp[0].o;
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_utils_Scaling$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$5);
	init_com_badlogic_gdx_utils_Scaling$5(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_fillY = sp[0].o;
	LINE_NUMBER(93);
	clinit_com_badlogic_gdx_utils_Scaling$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$6);
	init_com_badlogic_gdx_utils_Scaling$6(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_stretch = sp[0].o;
	LINE_NUMBER(103);
	clinit_com_badlogic_gdx_utils_Scaling$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$7);
	init_com_badlogic_gdx_utils_Scaling$7(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_stretchX = sp[0].o;
	LINE_NUMBER(113);
	clinit_com_badlogic_gdx_utils_Scaling$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$8);
	init_com_badlogic_gdx_utils_Scaling$8(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_stretchY = sp[0].o;
	LINE_NUMBER(122);
	clinit_com_badlogic_gdx_utils_Scaling$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Scaling$9);
	init_com_badlogic_gdx_utils_Scaling$9(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	SF_com_badlogic_gdx_utils_Scaling_none = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Scaling[] {
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
	(void *) nullptr,
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
	{ "apply", "(FFFF)Lcom/badlogic/gdx/math/Vector2;" },
};

static FieldMetadata fields[] {
	{ "temp", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_temp, "Lcom/badlogic/gdx/math/Vector2;", 28 },
	{ "fit", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_fit, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
	{ "contain", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_contain, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
	{ "fill", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_fill, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
	{ "fillX", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_fillX, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
	{ "fillY", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_fillY, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
	{ "stretch", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_stretch, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
	{ "stretchX", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_stretchX, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
	{ "stretchY", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_stretchY, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
	{ "none", &class_com_badlogic_gdx_utils_Scaling, (intptr_t) &SF_com_badlogic_gdx_utils_Scaling_none, "Lcom/badlogic/gdx/utils/Scaling;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Scaling, 0, "()V", 1 },
	{ "apply", 0, VTABLE_com_badlogic_gdx_utils_Scaling_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2, "(FFFF)Lcom/badlogic/gdx/math/Vector2;", 1025 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_Scaling, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_Scaling{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Scaling",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Scaling),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Scaling,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Scaling,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Scaling,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Scaling = registerClass(&class_com_badlogic_gdx_utils_Scaling);

}

