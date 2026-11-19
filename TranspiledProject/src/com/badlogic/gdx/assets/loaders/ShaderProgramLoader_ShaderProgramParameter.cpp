#include "com/badlogic/gdx/assets/loaders/ShaderProgramLoader_ShaderProgramParameter.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/assets/loaders/ShaderProgramLoader_ShaderProgramParameter.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/assets/loaders/ShaderProgramLoader.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) object;
	if (self->F_vertexFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertexFile)->clazz)->markFunction)((jobject) self->F_vertexFile, mark, depth + 1);
	if (self->F_fragmentFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fragmentFile)->clazz)->markFunction)((jobject) self->F_fragmentFile, mark, depth + 1);
	if (self->F_prependVertexCode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prependVertexCode)->clazz)->markFunction)((jobject) self->F_prependVertexCode, mark, depth + 1);
	if (self->F_prependFragmentCode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prependFragmentCode)->clazz)->markFunction)((jobject) self->F_prependFragmentCode, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ShaderProgramLoader$ShaderProgramParameter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(90);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(98);
	((com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[0].o)))->F_logOnCompileFailure = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter[] {
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
	{ "vertexFile", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, F_vertexFile), "Ljava/lang/String;", 1 },
	{ "fragmentFile", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, F_fragmentFile), "Ljava/lang/String;", 1 },
	{ "logOnCompileFailure", &class_boolean, offsetof(com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, F_logOnCompileFailure), "Z", 1 },
	{ "prependVertexCode", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, F_prependVertexCode), "Ljava/lang/String;", 1 },
	{ "prependFragmentCode", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, F_prependFragmentCode), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/ShaderProgramLoader$ShaderProgramParameter",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_ShaderProgramLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter = registerClass(&class_com_badlogic_gdx_assets_loaders_ShaderProgramLoader$ShaderProgramParameter);

}

