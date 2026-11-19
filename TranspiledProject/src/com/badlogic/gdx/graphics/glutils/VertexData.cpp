#include "com/badlogic/gdx/graphics/glutils/VertexData.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "java/nio/FloatBuffer.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "java/lang/Deprecated.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/graphics/glutils/VertexData.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_VertexData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_VertexData *) object;
}

void clinit_com_badlogic_gdx_graphics_glutils_VertexData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_VertexData;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getBuffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_glutils_VertexData[] {
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
	{ "dispose", "()V" },
	{ "getNumVertices", "()I" },
	{ "getNumMaxVertices", "()I" },
	{ "getAttributes", "()Lcom/badlogic/gdx/graphics/VertexAttributes;" },
	{ "setVertices", "([FII)V" },
	{ "updateVertices", "(I[FII)V" },
	{ "getBuffer", "()Ljava/nio/FloatBuffer;" },
	{ "getBuffer", "(Z)Ljava/nio/FloatBuffer;" },
	{ "bind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "bind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V" },
	{ "unbind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "unbind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V" },
	{ "invalidate", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static MethodMetadata methods[] {
	{ "getNumVertices", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getNumVertices_R_int, "()I", 1025 },
	{ "getNumMaxVertices", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getNumMaxVertices_R_int, "()I", 1025 },
	{ "getAttributes", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, "()Lcom/badlogic/gdx/graphics/VertexAttributes;", 1025 },
	{ "setVertices", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_setVertices_Array1_float_int_int, "([FII)V", 1025 },
	{ "updateVertices", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_updateVertices_int_Array1_float_int_int, "(I[FII)V", 1025 },
	{ "getBuffer", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 132097 },
	{ "getBuffer", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer, "(Z)Ljava/nio/FloatBuffer;", 1025 },
	{ "bind", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1025 },
	{ "bind", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1025 },
	{ "unbind", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1025 },
	{ "unbind", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1025 },
	{ "invalidate", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_invalidate, "()V", 1025 },
	{ "dispose", 0, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_dispose, "()V", 1025 },
};

Class class_com_badlogic_gdx_graphics_glutils_VertexData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/VertexData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_VertexData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_VertexData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_VertexData,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_VertexData,
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
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_VertexData = registerClass(&class_com_badlogic_gdx_graphics_glutils_VertexData);

}

