#include "com/badlogic/gdx/graphics/g3d/model/data/ModelData.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelData.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMesh.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_model_data_ModelData *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_version)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_version)->clazz)->markFunction)((jobject) self->F_version, mark, depth + 1);
	if (self->F_meshes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meshes)->clazz)->markFunction)((jobject) self->F_meshes, mark, depth + 1);
	if (self->F_materials)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_materials)->clazz)->markFunction)((jobject) self->F_materials, mark, depth + 1);
	if (self->F_nodes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nodes)->clazz)->markFunction)((jobject) self->F_nodes, mark, depth + 1);
	if (self->F_animations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_animations)->clazz)->markFunction)((jobject) self->F_animations, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/data/ModelData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_short, (jint(2)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK(sp[0].o))->F_version = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK(sp[0].o))->F_meshes = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK(sp[0].o))->F_materials = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK(sp[0].o))->F_animations = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_model_data_ModelData_addMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/data/ModelData:addMesh", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[0].o)))->F_meshes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh, sp[0].o));
	LINE_NUMBER(36);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[3].o)))->F_id;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[1].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Mesh with id '"_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[3].o)))->F_id;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' already in model"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(39);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[0].o)))->F_meshes;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_model_data_ModelData[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_model_data_ModelData_addMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh,
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
	{ "addMesh", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMesh;)V" },
};

static FieldMetadata fields[] {
	{ "id", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelData, F_id), "Ljava/lang/String;", 1 },
	{ "version", getArrayClass(&class_short, 1), offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelData, F_version), "[S", 17 },
	{ "meshes", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelData, F_meshes), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "materials", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelData, F_materials), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "nodes", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelData, F_nodes), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "animations", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_data_ModelData, F_animations), "Lcom/badlogic/gdx/utils/Array;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_data_ModelData, 0, "()V", 1 },
	{ "addMesh", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_data_ModelData_addMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh, VTABLE_com_badlogic_gdx_graphics_g3d_model_data_ModelData_addMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMesh;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_model_data_ModelData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/model/data/ModelData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_model_data_ModelData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_model_data_ModelData = registerClass(&class_com_badlogic_gdx_graphics_g3d_model_data_ModelData);

}

