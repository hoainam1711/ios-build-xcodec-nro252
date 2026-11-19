#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial_MaterialType.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_ambient)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambient)->clazz)->markFunction)((jobject) self->F_ambient, mark, depth + 1);
	if (self->F_diffuse)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_diffuse)->clazz)->markFunction)((jobject) self->F_diffuse, mark, depth + 1);
	if (self->F_specular)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_specular)->clazz)->markFunction)((jobject) self->F_specular, mark, depth + 1);
	if (self->F_emissive)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_emissive)->clazz)->markFunction)((jobject) self->F_emissive, mark, depth + 1);
	if (self->F_reflection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reflection)->clazz)->markFunction)((jobject) self->F_reflection, mark, depth + 1);
	if (self->F_textures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textures)->clazz)->markFunction)((jobject) self->F_textures, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[0].o)))->F_opacity = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial[] {
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

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial$MaterialType,
};

static FieldMetadata fields[] {
	{ "id", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_id), "Ljava/lang/String;", 1 },
	{ "type", &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial$MaterialType, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_type), "Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial$MaterialType;", 1 },
	{ "ambient", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_ambient), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "diffuse", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_diffuse), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "specular", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_specular), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "emissive", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_emissive), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "reflection", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_reflection), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "shininess", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_shininess), "F", 1 },
	{ "opacity", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_opacity), "F", 1 },
	{ "textures", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, F_textures), "Lcom/badlogic/gdx/utils/Array;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial = registerClass(&class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial);

}

