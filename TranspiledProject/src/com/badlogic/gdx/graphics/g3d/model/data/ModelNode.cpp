#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNode.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNode.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNodePart.h"
#include "com/badlogic/gdx/math/Vector3.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_translation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_translation)->clazz)->markFunction)((jobject) self->F_translation, mark, depth + 1);
	if (self->F_rotation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotation)->clazz)->markFunction)((jobject) self->F_rotation, mark, depth + 1);
	if (self->F_scale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scale)->clazz)->markFunction)((jobject) self->F_scale, mark, depth + 1);
	if (self->F_meshId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meshId)->clazz)->markFunction)((jobject) self->F_meshId, mark, depth + 1);
	if (self->F_parts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parts)->clazz)->markFunction)((jobject) self->F_parts, mark, depth + 1);
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/data/ModelNode:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_model_data_ModelNode[] {
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
	{ "id", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelNode, F_id), "Ljava/lang/String;", 1 },
	{ "translation", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelNode, F_translation), "Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "rotation", &class_com_badlogic_gdx_math_Quaternion, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelNode, F_rotation), "Lcom/badlogic/gdx/math/Quaternion;", 1 },
	{ "scale", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelNode, F_scale), "Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "meshId", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelNode, F_meshId), "Ljava/lang/String;", 1 },
	{ "parts", getArrayClass(&class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart, 1), offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelNode, F_parts), "[Lcom/badlogic/gdx/graphics/g3d/model/data/ModelNodePart;", 1 },
	{ "children", getArrayClass(&class_com_badlogic_gdx_graphics_g3d_model_data_ModelNode, 1), offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelNode, F_children), "[Lcom/badlogic/gdx/graphics/g3d/model/data/ModelNode;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_data_ModelNode, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_model_data_ModelNode{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/model/data/ModelNode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_model_data_ModelNode),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_model_data_ModelNode,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_model_data_ModelNode,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_model_data_ModelNode = registerClass(&class_com_badlogic_gdx_graphics_g3d_model_data_ModelNode);

}

