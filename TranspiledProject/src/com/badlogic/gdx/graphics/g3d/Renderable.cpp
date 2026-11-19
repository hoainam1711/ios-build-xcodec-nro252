#include "com/badlogic/gdx/graphics/g3d/Renderable.h"
#include "com/badlogic/gdx/graphics/g3d/model/MeshPart.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/graphics/g3d/Environment.h"
#include "com/badlogic/gdx/graphics/g3d/Material.h"
#include "com/badlogic/gdx/graphics/g3d/Shader.h"
#include "com/badlogic/gdx/graphics/g3d/Renderable.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_Renderable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_Renderable *) object;
	if (self->F_worldTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_worldTransform)->clazz)->markFunction)((jobject) self->F_worldTransform, mark, depth + 1);
	if (self->F_meshPart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meshPart)->clazz)->markFunction)((jobject) self->F_meshPart, mark, depth + 1);
	if (self->F_material)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_material)->clazz)->markFunction)((jobject) self->F_material, mark, depth + 1);
	if (self->F_environment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_environment)->clazz)->markFunction)((jobject) self->F_environment, mark, depth + 1);
	if (self->F_bones)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bones)->clazz)->markFunction)((jobject) self->F_bones, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
	if (self->F_userData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_userData)->clazz)->markFunction)((jobject) self->F_userData, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Renderable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Renderable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(71);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_worldTransform = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_MeshPart);
	init_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_meshPart = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Renderable_set_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Renderable:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[0].o)))->F_worldTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_worldTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_material;
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_material = (jref) sp[1].o;
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[0].o)))->F_meshPart;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_meshPart;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_bones;
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_bones = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_environment;
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_environment = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_shader;
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_userData;
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_userData = (jref) sp[1].o;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_Renderable[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_Renderable_set_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable,
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
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)Lcom/badlogic/gdx/graphics/g3d/Renderable;" },
};

static FieldMetadata fields[] {
	{ "worldTransform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_g3d_Renderable, F_worldTransform), "Lcom/badlogic/gdx/math/Matrix4;", 17 },
	{ "meshPart", &class_com_badlogic_gdx_graphics_g3d_model_MeshPart, offsetof(com_badlogic_gdx_graphics_g3d_Renderable, F_meshPart), "Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;", 17 },
	{ "material", &class_com_badlogic_gdx_graphics_g3d_Material, offsetof(com_badlogic_gdx_graphics_g3d_Renderable, F_material), "Lcom/badlogic/gdx/graphics/g3d/Material;", 1 },
	{ "environment", &class_com_badlogic_gdx_graphics_g3d_Environment, offsetof(com_badlogic_gdx_graphics_g3d_Renderable, F_environment), "Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "bones", getArrayClass(&class_com_badlogic_gdx_math_Matrix4, 1), offsetof(com_badlogic_gdx_graphics_g3d_Renderable, F_bones), "[Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "shader", &class_com_badlogic_gdx_graphics_g3d_Shader, offsetof(com_badlogic_gdx_graphics_g3d_Renderable, F_shader), "Lcom/badlogic/gdx/graphics/g3d/Shader;", 1 },
	{ "userData", &class_java_lang_Object, offsetof(com_badlogic_gdx_graphics_g3d_Renderable, F_userData), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Renderable, 0, "()V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Renderable_set_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable, VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_set_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable, "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)Lcom/badlogic/gdx/graphics/g3d/Renderable;", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_Renderable{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/Renderable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_Renderable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_Renderable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Renderable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_Renderable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_Renderable = registerClass(&class_com_badlogic_gdx_graphics_g3d_Renderable);

}

