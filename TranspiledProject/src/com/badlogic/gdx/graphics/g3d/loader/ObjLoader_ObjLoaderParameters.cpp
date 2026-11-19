#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader_ObjLoaderParameters.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader_ModelParameters.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader_ObjLoaderParameters.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters *) object;
}

void clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader$ObjLoaderParameters:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(76);
	init_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(ctx, (frame[0].o));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader$ObjLoaderParameters:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(79);
	init_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters *) NULL_CHECK((frame[0].o)))->F_flipV = (frame[1].i);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters[] {
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
	{ "flipV", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters, F_flipV), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_boolean, 0, "(Z)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/loader/ObjLoader$ObjLoaderParameters",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters = registerClass(&class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters);

}

