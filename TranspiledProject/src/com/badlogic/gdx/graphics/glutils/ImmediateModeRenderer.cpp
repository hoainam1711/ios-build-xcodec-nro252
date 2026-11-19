#include "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer *) object;
}

void clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer[] {
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
	{ "begin", "(Lcom/badlogic/gdx/math/Matrix4;I)V" },
	{ "flush", "()V" },
	{ "color", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "color", "(FFFF)V" },
	{ "color", "(F)V" },
	{ "texCoord", "(FF)V" },
	{ "normal", "(FFF)V" },
	{ "vertex", "(FFF)V" },
	{ "end", "()V" },
	{ "getNumVertices", "()I" },
	{ "getMaxVertices", "()I" },
	{ "dispose", "()V" },
};

static MethodMetadata methods[] {
	{ "begin", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_begin_com_badlogic_gdx_math_Matrix4_int, "(Lcom/badlogic/gdx/math/Matrix4;I)V", 1025 },
	{ "flush", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_flush, "()V", 1025 },
	{ "color", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1025 },
	{ "color", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float_float_float_float, "(FFFF)V", 1025 },
	{ "color", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_color_float, "(F)V", 1025 },
	{ "texCoord", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_texCoord_float_float, "(FF)V", 1025 },
	{ "normal", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_normal_float_float_float, "(FFF)V", 1025 },
	{ "vertex", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_vertex_float_float_float, "(FFF)V", 1025 },
	{ "end", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_end, "()V", 1025 },
	{ "getNumVertices", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_getNumVertices_R_int, "()I", 1025 },
	{ "getMaxVertices", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_getMaxVertices_R_int, "()I", 1025 },
	{ "dispose", 0, INDEX_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer_dispose, "()V", 1025 },
};

Class class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer = registerClass(&class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer);

}

