#include "com/badlogic/gdx/scenes/scene2d/utils/TransformDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TransformDrawable.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinSize_float_float,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "getLeftWidth", "()F" },
	{ "setLeftWidth", "(F)V" },
	{ "getRightWidth", "()F" },
	{ "setRightWidth", "(F)V" },
	{ "getTopHeight", "()F" },
	{ "setTopHeight", "(F)V" },
	{ "getBottomHeight", "()F" },
	{ "setBottomHeight", "(F)V" },
	{ "setPadding", "(FFFF)V" },
	{ "setPadding", "(F)V" },
	{ "setPadding", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "getMinWidth", "()F" },
	{ "setMinWidth", "(F)V" },
	{ "getMinHeight", "()F" },
	{ "setMinHeight", "(F)V" },
	{ "setMinSize", "(FF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, };

static MethodMetadata methods[] {
	{ "draw", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V", 1025 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/TransformDrawable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable);

}

