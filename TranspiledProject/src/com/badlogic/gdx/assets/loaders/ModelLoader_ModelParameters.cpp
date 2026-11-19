#include "com/badlogic/gdx/assets/loaders/ModelLoader_ModelParameters.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader_ModelParameters.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureParameter.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_AssetLoaderParameters(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters *) object;
	if (self->F_textureParameter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureParameter)->clazz)->markFunction)((jobject) self->F_textureParameter, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(129);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter);
	init_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx, sp[1].o);
	((com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters *) NULL_CHECK(sp[0].o))->F_textureParameter = (jref) sp[1].o;
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters *) NULL_CHECK((frame[0].o)))->F_textureParameter;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters *) NULL_CHECK((frame[0].o)))->F_textureParameter;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[1].o))->F_magFilter = (jref) sp[2].o;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[2].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters *) NULL_CHECK((frame[0].o)))->F_textureParameter;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters *) NULL_CHECK((frame[0].o)))->F_textureParameter;
	clinit_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureWrap_Repeat;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[1].o))->F_wrapV = (jref) sp[2].o;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_wrapU = (jref) sp[2].o;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters[] {
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
	{ "textureParameter", &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, offsetof(com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters, F_textureParameter), "Lcom/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_ModelLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters = registerClass(&class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters);

}

