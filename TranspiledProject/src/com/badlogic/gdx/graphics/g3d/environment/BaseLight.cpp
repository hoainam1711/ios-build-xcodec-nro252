#include "com/badlogic/gdx/graphics/g3d/environment/BaseLight.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g3d/environment/BaseLight.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_environment_BaseLight(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_environment_BaseLight *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_environment_BaseLight(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_environment_BaseLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/BaseLight:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_environment_BaseLight(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/BaseLight:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/BaseLight:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_environment_BaseLight[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
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
	{ "setColor", "(FFFF)Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;" },
};

static FieldMetadata fields[] {
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_environment_BaseLight, F_color), "Lcom/badlogic/gdx/graphics/Color;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_environment_BaseLight, 0, "()V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight, "(FFFF)Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_environment_BaseLight{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/environment/BaseLight",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_environment_BaseLight),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_environment_BaseLight = registerClass(&class_com_badlogic_gdx_graphics_g3d_environment_BaseLight);

}

