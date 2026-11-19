#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_Layout(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_Layout *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_Layout(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_Layout[] {
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
	{ "layout", "()V" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "validate", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
};

static MethodMetadata methods[] {
	{ "layout", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_layout, "()V", 1025 },
	{ "invalidate", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_invalidate, "()V", 1025 },
	{ "invalidateHierarchy", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_invalidateHierarchy, "()V", 1025 },
	{ "validate", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate, "()V", 1025 },
	{ "pack", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_pack, "()V", 1025 },
	{ "setFillParent", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_setFillParent_boolean, "(Z)V", 1025 },
	{ "setLayoutEnabled", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_setLayoutEnabled_boolean, "(Z)V", 1025 },
	{ "getMinWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float, "()F", 1025 },
	{ "getMinHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float, "()F", 1025 },
	{ "getPrefWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float, "()F", 1025 },
	{ "getPrefHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float, "()F", 1025 },
	{ "getMaxWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMaxWidth_R_float, "()F", 1025 },
	{ "getMaxHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMaxHeight_R_float, "()F", 1025 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_Layout{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/Layout",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_Layout),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_Layout,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_Layout,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_Layout,
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
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_Layout = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_Layout);

}

