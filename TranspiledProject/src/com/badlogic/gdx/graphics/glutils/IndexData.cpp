#include "com/badlogic/gdx/graphics/glutils/IndexData.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/nio/ShortBuffer.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/graphics/glutils/IndexData.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "java/lang/Deprecated.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_IndexData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_IndexData *) object;
}

void clinit_com_badlogic_gdx_graphics_glutils_IndexData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_IndexData;
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
}

void *vtable_com_badlogic_gdx_graphics_glutils_IndexData[] {
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
	{ "getNumIndices", "()I" },
	{ "getNumMaxIndices", "()I" },
	{ "setIndices", "([SII)V" },
	{ "setIndices", "(Ljava/nio/ShortBuffer;)V" },
	{ "updateIndices", "(I[SII)V" },
	{ "getBuffer", "()Ljava/nio/ShortBuffer;" },
	{ "getBuffer", "(Z)Ljava/nio/ShortBuffer;" },
	{ "bind", "()V" },
	{ "unbind", "()V" },
	{ "invalidate", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static MethodMetadata methods[] {
	{ "getNumIndices", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int, "()I", 1025 },
	{ "getNumMaxIndices", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int, "()I", 1025 },
	{ "setIndices", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_Array1_short_int_int, "([SII)V", 1025 },
	{ "setIndices", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_java_nio_ShortBuffer, "(Ljava/nio/ShortBuffer;)V", 1025 },
	{ "updateIndices", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_updateIndices_int_Array1_short_int_int, "(I[SII)V", 1025 },
	{ "getBuffer", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_R_java_nio_ShortBuffer, "()Ljava/nio/ShortBuffer;", 132097 },
	{ "getBuffer", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer, "(Z)Ljava/nio/ShortBuffer;", 1025 },
	{ "bind", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_bind, "()V", 1025 },
	{ "unbind", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_unbind, "()V", 1025 },
	{ "invalidate", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_invalidate, "()V", 1025 },
	{ "dispose", 0, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_dispose, "()V", 1025 },
};

Class class_com_badlogic_gdx_graphics_glutils_IndexData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/IndexData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_IndexData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_IndexData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_IndexData,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_IndexData,
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
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_IndexData = registerClass(&class_com_badlogic_gdx_graphics_glutils_IndexData);

}

