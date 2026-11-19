#include "com/badlogic/gdx/graphics/g3d/Shader.h"
#include "com/badlogic/gdx/graphics/g3d/utils/RenderContext.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "com/badlogic/gdx/graphics/g3d/Shader.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/g3d/Renderable.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_Shader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_Shader *) object;
}

void clinit_com_badlogic_gdx_graphics_g3d_Shader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_graphics_g3d_Shader[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "dispose", "()V" },
	{ "init", "()V" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/Shader;)I" },
	{ "canRender", "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)Z" },
	{ "begin", "(Lcom/badlogic/gdx/graphics/Camera;Lcom/badlogic/gdx/graphics/g3d/utils/RenderContext;)V" },
	{ "render", "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)V" },
	{ "end", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static MethodMetadata methods[] {
	{ "init", 0, INDEX_com_badlogic_gdx_graphics_g3d_Shader_init, "()V", 1025 },
	{ "compareTo", 0, INDEX_com_badlogic_gdx_graphics_g3d_Shader_compareTo_com_badlogic_gdx_graphics_g3d_Shader_R_int, "(Lcom/badlogic/gdx/graphics/g3d/Shader;)I", 1025 },
	{ "canRender", 0, INDEX_com_badlogic_gdx_graphics_g3d_Shader_canRender_com_badlogic_gdx_graphics_g3d_Renderable_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)Z", 1025 },
	{ "begin", 0, INDEX_com_badlogic_gdx_graphics_g3d_Shader_begin_com_badlogic_gdx_graphics_Camera_com_badlogic_gdx_graphics_g3d_utils_RenderContext, "(Lcom/badlogic/gdx/graphics/Camera;Lcom/badlogic/gdx/graphics/g3d/utils/RenderContext;)V", 1025 },
	{ "render", 0, INDEX_com_badlogic_gdx_graphics_g3d_Shader_render_com_badlogic_gdx_graphics_g3d_Renderable, "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)V", 1025 },
	{ "end", 0, INDEX_com_badlogic_gdx_graphics_g3d_Shader_end, "()V", 1025 },
};

Class class_com_badlogic_gdx_graphics_g3d_Shader{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/Shader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_Shader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_Shader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Shader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_Shader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_Shader = registerClass(&class_com_badlogic_gdx_graphics_g3d_Shader);

}

