#include "com/badlogic/gdx/graphics/g3d/model/data/ModelTexture.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_UNKNOWN;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_NONE;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_DIFFUSE;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_EMISSIVE;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_AMBIENT;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_SPECULAR;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_SHININESS;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_NORMAL;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_BUMP;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_TRANSPARENCY;
jint SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_REFLECTION;

void mark_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_fileName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fileName)->clazz)->markFunction)((jobject) self->F_fileName, mark, depth + 1);
	if (self->F_uvTranslation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uvTranslation)->clazz)->markFunction)((jobject) self->F_uvTranslation, mark, depth + 1);
	if (self->F_uvScaling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uvScaling)->clazz)->markFunction)((jobject) self->F_uvScaling, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_UNKNOWN = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_NONE = jint(1);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_DIFFUSE = jint(2);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_EMISSIVE = jint(3);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_AMBIENT = jint(4);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_SPECULAR = jint(5);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_SHININESS = jint(6);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_NORMAL = jint(7);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_BUMP = jint(8);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_TRANSPARENCY = jint(9);
	SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_REFLECTION = jint(10);
}

void init_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/data/ModelTexture:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture[] {
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
	{ "USAGE_UNKNOWN", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_UNKNOWN, "I", 25 },
	{ "USAGE_NONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_NONE, "I", 25 },
	{ "USAGE_DIFFUSE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_DIFFUSE, "I", 25 },
	{ "USAGE_EMISSIVE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_EMISSIVE, "I", 25 },
	{ "USAGE_AMBIENT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_AMBIENT, "I", 25 },
	{ "USAGE_SPECULAR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_SPECULAR, "I", 25 },
	{ "USAGE_SHININESS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_SHININESS, "I", 25 },
	{ "USAGE_NORMAL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_NORMAL, "I", 25 },
	{ "USAGE_BUMP", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_BUMP, "I", 25 },
	{ "USAGE_TRANSPARENCY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_TRANSPARENCY, "I", 25 },
	{ "USAGE_REFLECTION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture_USAGE_REFLECTION, "I", 25 },
	{ "id", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelTexture, F_id), "Ljava/lang/String;", 1 },
	{ "fileName", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelTexture, F_fileName), "Ljava/lang/String;", 1 },
	{ "uvTranslation", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelTexture, F_uvTranslation), "Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "uvScaling", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelTexture, F_uvScaling), "Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "usage", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelTexture, F_usage), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/model/data/ModelTexture",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_model_data_ModelTexture),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture = registerClass(&class_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture);

}

