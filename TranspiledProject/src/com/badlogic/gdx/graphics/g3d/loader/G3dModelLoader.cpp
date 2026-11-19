#include "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_3.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMeshPart.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNodeAnimation.h"
#include "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_2.h"
#include "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_1.h"
#include "com/badlogic/gdx/utils/BaseJsonReader.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader_ModelParameters.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelData.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMesh.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelTexture.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNode.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNodeKeyframe.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNodePart.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelAnimation.h"

extern "C" {

jshort SF_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_VERSION_HI;
jshort SF_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_VERSION_LO;

void mark_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_loaders_ModelLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader *) object;
	if (self->F_reader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reader)->clazz)->markFunction)((jobject) self->F_reader, mark, depth + 1);
	if (self->F_tempQ)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tempQ)->clazz)->markFunction)((jobject) self->F_tempQ, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_ModelLoader(ctx);
	SF_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_VERSION_HI = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_VERSION_LO = jint(1);
}

void init_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_com_badlogic_gdx_utils_BaseJsonReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	init_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_com_badlogic_gdx_utils_BaseJsonReader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_com_badlogic_gdx_utils_BaseJsonReader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	init_com_badlogic_gdx_assets_loaders_ModelLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader *) NULL_CHECK(sp[0].o))->F_tempQ = (jref) sp[1].o;
	LINE_NUMBER(56);
	((com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader *) NULL_CHECK((frame[0].o)))->F_reader = (jref) (frame[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:loadModelData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseModel", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_BaseJsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_BaseJsonReader, INDEX_com_badlogic_gdx_utils_BaseJsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelData);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelData(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"version"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[3].o)))->F_version;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_com_badlogic_gdx_utils_JsonValue_getShort_int_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getShort_int_R_short])(ctx, (frame[4].o), (jint(0)));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = temp1;
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[3].o)))->F_version;
	jint temp2 = jint(1);
	jint temp3 = (jint)((func_com_badlogic_gdx_utils_JsonValue_getShort_int_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getShort_int_R_short])(ctx, (frame[4].o), (jint(1)));
	ARRAY_ACCESS(jshort, sp[0].o, temp2) = temp3;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[3].o)))->F_version;
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, (jint(0)))) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[3].o)))->F_version;
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, (jint(1)))) == (jint(1))) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(71);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Model version not supported"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"id"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(74);
	((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMeshes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMeshes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[3].o);
	((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMaterials_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMaterials_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	LINE_NUMBER(77);
	((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAnimations_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAnimations_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMeshes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseMeshes", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"meshes"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(83);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_meshes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_size));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[4].o = sp[0].o;
	}
label_5:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(87);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"id"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(90);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[5].o)))->F_id = (jref) (frame[6].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"attributes"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAttributes_com_badlogic_gdx_utils_JsonValue_R_Array1_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAttributes_com_badlogic_gdx_utils_JsonValue_R_Array1_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (frame[7].o));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK(sp[0].o))->F_attributes = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"vertices"_j))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asFloatArray_R_Array1_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asFloatArray_R_Array1_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"parts"_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(97);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_child;
	frame[10].o = sp[0].o;
	}
label_15:;
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_16;
	{
	LINE_NUMBER(99);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"id"_j))), (jobject(nullptr)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(101);
	if ((frame[12].o) != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not id given for mesh part"_j))));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[9].o));
	frame[13].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart, sp[0].o));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[14].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[12].o));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(106);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Mesh part with id '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[12].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' already in defined"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_25:;
	LINE_NUMBER(108);
	goto label_22;
label_23:;
	{
	LINE_NUMBER(109);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[11].o)))->F_id = (jref) (frame[12].o);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (jobject(nullptr)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(112);
	if ((frame[13].o) != nullptr) goto label_29;
	}
	{
	LINE_NUMBER(113);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No primitive type given for mesh part '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[12].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[11].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseType_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseType_java_lang_String_R_int])(ctx, (frame[0].o), (frame[13].o));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK(sp[0].o))->F_primitiveType = temp0;
	LINE_NUMBER(117);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_require_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"indices"_j))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asShortArray_R_Array1_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asShortArray_R_Array1_short])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(118);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[9].o), (frame[11].o));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[10].o)))->F_next;
	frame[10].o = sp[0].o;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[5].o;
	sp[1].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK(sp[0].o))->F_parts = (jref) (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart, 1), sp[1].o));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_meshes;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_5;
	}
label_2:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseType_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseType", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"TRIANGLES"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(4));
	}
label_1:;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"LINES"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"POINTS"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"TRIANGLE_STRIP"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jint(5));
	}
label_7:;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"LINE_STRIP"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (jint(3));
	}
label_9:;
	{
	LINE_NUMBER(138);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown primitive type '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"', should be one of triangle, trianglestrip, line, linestrip or point"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAttributes_com_badlogic_gdx_utils_JsonValue_R_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseAttributes", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(144);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(145);
	frame[3].i = (jint(0));
	LINE_NUMBER(146);
	frame[4].i = (jint(0));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(149);
	frame[7].o = (frame[6].o);
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"POSITION"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_VertexAttribute_Position_R_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"NORMAL"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_VertexAttribute_Normal_R_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(154);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"COLOR"_j))));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_VertexAttribute_ColorUnpacked_R_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"COLORPACKED"_j))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_VertexAttribute_ColorPacked_R_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(158);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"TANGENT"_j))));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_VertexAttribute_Tangent_R_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_18:;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"BINORMAL"_j))));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_VertexAttribute_Binormal_R_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_20:;
	{
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"TEXCOORD"_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_VertexAttribute_TexCoords_int_R_com_badlogic_gdx_graphics_VertexAttribute(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_22:;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"BLENDWEIGHT"_j))));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_VertexAttribute_BoneWeight_int_R_com_badlogic_gdx_graphics_VertexAttribute(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_24:;
	{
	LINE_NUMBER(167);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown vertex attribute '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"', should be one of position, normal, uv, tangent or binormal"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_VertexAttribute, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMaterials_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseMaterials", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"materials"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(176);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	goto label_3;
label_2:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_materials;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[4].o)))->F_size));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[4].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_5:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(181);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"id"_j))), (jobject(nullptr)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(184);
	if ((frame[7].o) != nullptr) goto label_9;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Material needs an id."_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(186);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[6].o)))->F_id = (jref) (frame[7].o);
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"diffuse"_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(190);
	if ((frame[8].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[8].o));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_diffuse = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"ambient"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(192);
	if ((frame[9].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[9].o));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_ambient = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"emissive"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(194);
	if ((frame[10].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[10].o));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_emissive = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"specular"_j))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(196);
	if ((frame[11].o) == nullptr) goto label_18;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[11].o));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_specular = (jref) sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"reflection"_j))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(198);
	if ((frame[12].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[12].o));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_reflection = (jref) sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[6].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"shininess"_j))), (jfloat(0)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_shininess = temp0;
	LINE_NUMBER(202);
	sp[0].o = frame[6].o;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"opacity"_j))), (jfloat(1)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_opacity = temp1;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"textures"_j))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(206);
	if ((frame[13].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[13].o)))->F_child;
	frame[14].o = sp[0].o;
	}
label_26:;
	INST_ALOAD(14);
	if ((--sp)->o == nullptr) goto label_24;
	{
	LINE_NUMBER(208);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture(ctx, sp[0].o);
	frame[15].o = sp[0].o;
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"id"_j))), (jobject(nullptr)));
	frame[16].o = sp[0].o;
	LINE_NUMBER(211);
	if ((frame[16].o) != nullptr) goto label_30;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Texture has no id."_j))));
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(212);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[15].o)))->F_id = (jref) (frame[16].o);
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"filename"_j))), (jobject(nullptr)));
	frame[17].o = sp[0].o;
	LINE_NUMBER(215);
	if ((frame[17].o) != nullptr) goto label_33;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Texture needs filename."_j))));
	throwException(ctx, sp[0].o);	}
label_33:;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[15].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp += 2;
	if (temp0 == 0) goto label_34;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_35;
	}
label_34:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_36;
label_35:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"/"_j));
label_36:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[17].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK(sp[0].o))->F_fileName = (jref) sp[1].o;
	LINE_NUMBER(219);
	sp[0].o = frame[15].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"uvTranslation"_j))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_readVector2_com_badlogic_gdx_utils_JsonValue_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_readVector2_com_badlogic_gdx_utils_JsonValue_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, sp[2].o, (jfloat(0)), (jfloat(0)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK(sp[0].o))->F_uvTranslation = (jref) sp[1].o;
	LINE_NUMBER(220);
	sp[0].o = frame[15].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"uvScaling"_j))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_readVector2_com_badlogic_gdx_utils_JsonValue_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_readVector2_com_badlogic_gdx_utils_JsonValue_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, sp[2].o, (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK(sp[0].o))->F_uvScaling = (jref) sp[1].o;
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (jobject(nullptr)));
	frame[18].o = sp[0].o;
	LINE_NUMBER(223);
	if ((frame[18].o) != nullptr) goto label_41;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Texture needs type."_j))));
	throwException(ctx, sp[0].o);	}
label_41:;
	{
	LINE_NUMBER(225);
	sp[0].o = frame[15].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseTextureUsage_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseTextureUsage_java_lang_String_R_int])(ctx, (frame[0].o), (frame[18].o));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK(sp[0].o))->F_usage = temp0;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[6].o)))->F_textures;
	if (sp[0].o != nullptr) goto label_43;
	}
	{
	sp[0].o = frame[6].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	}
label_43:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[6].o)))->F_textures;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[15].o));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[14].o)))->F_next;
	frame[14].o = sp[0].o;
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_materials;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_5;
	}
label_3:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseTextureUsage_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseTextureUsage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"AMBIENT"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (jint(4));
	}
label_1:;
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"BUMP"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (8);
	}
label_3:;
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"DIFFUSE"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (jint(2));
	}
label_5:;
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"EMISSIVE"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (jint(3));
	}
label_7:;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"NONE"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"NORMAL"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (7);
	}
label_11:;
	{
	LINE_NUMBER(250);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"REFLECTION"_j))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (10);
	}
label_13:;
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"SHININESS"_j))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (6);
	}
label_15:;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"SPECULAR"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jint(5));
	}
label_17:;
	{
	LINE_NUMBER(256);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"TRANSPARENCY"_j))));
	if (temp0 == 0) goto label_19;
	}
	INST_BIPUSH(9);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseColor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_size) < (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(262);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[1].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[1].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[1].o), (jint(2)));
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(264);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expected Color values <> than three."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_readVector2_com_badlogic_gdx_utils_JsonValue_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:readVector2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(268);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(269);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2_float_float(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(270);
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[1].o)))->F_size) != (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(271);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[1].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[1].o), (jint(1)));
	init_com_badlogic_gdx_math_Vector2_float_float(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(273);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expected Vector2 values <> than two."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseNodes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"nodes"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(278);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_nodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_size));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[4].o = sp[0].o;
	}
label_5:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_nodes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodesRecursively_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_g3d_model_data_ModelNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodesRecursively_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_g3d_model_data_ModelNode])(ctx, (frame[0].o), (frame[4].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_nodes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodesRecursively_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseNodesRecursively", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(291);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNode);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"id"_j))), (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(294);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Node id missing."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(295);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[2].o)))->F_id = (jref) (frame[3].o);
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"translation"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(298);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[4].o)))->F_size) == (jint(3))) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Node translation incomplete"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(299);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_8;
label_7:;
	{
	LINE_NUMBER(300);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[4].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[4].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[4].o), (jint(2)));
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	sp += 1;
	}
label_8:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"rotation"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(303);
	if ((frame[5].o) == nullptr) goto label_11;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_size) == (jint(4))) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Node rotation incomplete"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[5].o) != nullptr) goto label_12;
	}
	INST_ACONST_NULL();
	goto label_13;
label_12:;
	{
	LINE_NUMBER(305);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[5].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[5].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[5].o), (jint(2)));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[5].o), (jint(3)));
	init_com_badlogic_gdx_math_Quaternion_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	sp += 1;
	}
label_13:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_rotation = (jref) sp[1].o;
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"scale"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(308);
	if ((frame[6].o) == nullptr) goto label_16;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[6].o)))->F_size) == (jint(3))) goto label_16;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Node scale incomplete"_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[6].o) != nullptr) goto label_17;
	}
	INST_ACONST_NULL();
	goto label_18;
label_17:;
	{
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[6].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[6].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[6].o), (jint(2)));
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	sp += 1;
	}
label_18:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_scale = (jref) sp[1].o;
	LINE_NUMBER(311);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"mesh"_j))), (jobject(nullptr)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(312);
	if ((frame[7].o) == nullptr) goto label_21;
	}
	{
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[2].o)))->F_meshId = (jref) (frame[7].o);
	}
label_21:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"parts"_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(315);
	if ((frame[8].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_size));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(317);
	frame[9].i = (jint(0));
	LINE_NUMBER(318);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_child;
	frame[10].o = sp[0].o;
	}
label_27:;
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_23;
	{
	LINE_NUMBER(319);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"meshpartid"_j))), (jobject(nullptr)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"materialid"_j))), (jobject(nullptr)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(323);
	if ((frame[12].o) == nullptr) goto label_32;
	}
	INST_ALOAD(13);
	if ((--sp)->o != nullptr) goto label_33;
label_32:;
	{
	LINE_NUMBER(324);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Node "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" part is missing meshPartId or materialId"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_33:;
	{
	LINE_NUMBER(326);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[11].o)))->F_materialId = (jref) (frame[13].o);
	LINE_NUMBER(327);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[11].o)))->F_meshPartId = (jref) (frame[12].o);
	LINE_NUMBER(329);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"bones"_j))));
	frame[14].o = sp[0].o;
	LINE_NUMBER(330);
	if ((frame[14].o) == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = frame[11].o;
	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap);
	jint temp0 = jint(1);
	jint temp1 = (jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[14].o)))->F_size;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_2(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_2 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_2);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_3(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_3 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_3);
		sp[3].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_ArrayMap_boolean_int_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, temp0, temp1, sp[2].o, sp[3].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK(sp[0].o))->F_bones = (jref) sp[1].o;
	LINE_NUMBER(332);
	frame[15].i = (jint(0));
	LINE_NUMBER(333);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[14].o)))->F_child;
	frame[16].o = sp[0].o;
	}
label_41:;
	INST_ALOAD(16);
	if ((--sp)->o == nullptr) goto label_37;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[16].o), (((jobject) createStringLiteral(ctx, u8"node"_j))), (jobject(nullptr)));
	frame[17].o = sp[0].o;
	LINE_NUMBER(335);
	if ((frame[17].o) != nullptr) goto label_44;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bone node ID missing"_j))));
	throwException(ctx, sp[0].o);	}
label_44:;
	{
	LINE_NUMBER(337);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o);
	frame[18].o = sp[0].o;
	LINE_NUMBER(339);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[16].o), (((jobject) createStringLiteral(ctx, u8"translation"_j))));
	frame[19].o = sp[0].o;
	LINE_NUMBER(340);
	if ((frame[19].o) == nullptr) goto label_47;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[19].o)))->F_size) < (jint(3))) goto label_47;
	}
	{
	sp[0].o = frame[18].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(2)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_translate_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_47:;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[16].o), (((jobject) createStringLiteral(ctx, u8"rotation"_j))));
	frame[19].o = sp[0].o;
	LINE_NUMBER(343);
	if ((frame[19].o) == nullptr) goto label_49;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[19].o)))->F_size) < (jint(4))) goto label_49;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = frame[18].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader *) NULL_CHECK((frame[0].o)))->F_tempQ;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(2)));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(3)));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_float_float_float_float_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[1].o, temp0, temp1, temp2, temp3);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	}
label_49:;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[16].o), (((jobject) createStringLiteral(ctx, u8"scale"_j))));
	frame[19].o = sp[0].o;
	LINE_NUMBER(347);
	if ((frame[19].o) == nullptr) goto label_52;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[19].o)))->F_size) < (jint(3))) goto label_52;
	}
	{
	sp[0].o = frame[18].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[19].o), (jint(2)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_52:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[11].o)))->F_bones;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, (frame[17].o), (frame[18].o));
	LINE_NUMBER(333);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[16].o)))->F_next;
	frame[16].o = sp[0].o;
	INST_IINC(15, 1);
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[2].o)))->F_parts;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)) = (frame[11].o);
	LINE_NUMBER(318);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[10].o)))->F_next;
	frame[10].o = sp[0].o;
	INST_IINC(9, 1);
	goto label_27;
	}
label_23:;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"children"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(358);
	if ((frame[9].o) == nullptr) goto label_56;
	}
	{
	LINE_NUMBER(359);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNode, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[9].o)))->F_size));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(361);
	frame[10].i = (jint(0));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[9].o)))->F_child;
	frame[11].o = sp[0].o;
	}
label_60:;
	INST_ALOAD(11);
	if ((--sp)->o == nullptr) goto label_56;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[2].o)))->F_children;
	jint temp0 = frame[10].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodesRecursively_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_g3d_model_data_ModelNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodesRecursively_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_g3d_model_data_ModelNode])(ctx, (frame[0].o), (frame[11].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[11].o)))->F_next;
	frame[11].o = sp[0].o;
	INST_IINC(10, 1);
	goto label_60;
	}
label_56:;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAnimations_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:parseAnimations", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"animations"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(372);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_animations;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_size));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[4].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"bones"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(378);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	goto label_9;
label_8:;
	{
	LINE_NUMBER(379);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(380);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_animations;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation *) NULL_CHECK((frame[6].o)))->F_nodeAnimations;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_size));
	LINE_NUMBER(382);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"id"_j))));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_child;
	frame[7].o = sp[0].o;
	}
label_14:;
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_9;
	{
	LINE_NUMBER(384);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(385);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation *) NULL_CHECK((frame[6].o)))->F_nodeAnimations;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(386);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"boneId"_j))));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK(sp[0].o))->F_nodeId = (jref) sp[1].o;
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"keyframes"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(390);
	if ((frame[9].o) == nullptr) goto label_20;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[9].o)))->F_child;
	frame[10].o = sp[0].o;
	}
label_22:;
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_23;
	{
	LINE_NUMBER(392);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"keytime"_j))), (jfloat(0)));
	frame[11].f = (temp0 / (jfloat(1000.0f)));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"translation"_j))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(394);
	if ((frame[12].o) == nullptr) goto label_27;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[12].o)))->F_size) != (jint(3))) goto label_27;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_translation;
	if (sp[0].o != nullptr) goto label_29;
	}
	{
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	}
label_29:;
	{
	LINE_NUMBER(396);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(397);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[13].o)))->F_keytime = (frame[11].f);
	LINE_NUMBER(398);
	sp[0].o = frame[13].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[12].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[12].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[12].o), (jint(2)));
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, temp0, temp1, temp2);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(399);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_translation;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[13].o));
	}
label_27:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"rotation"_j))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(402);
	if ((frame[13].o) == nullptr) goto label_34;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[13].o)))->F_size) != (jint(4))) goto label_34;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_rotation;
	if (sp[0].o != nullptr) goto label_36;
	}
	{
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK(sp[0].o))->F_rotation = (jref) sp[1].o;
	}
label_36:;
	{
	LINE_NUMBER(404);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(405);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[14].o)))->F_keytime = (frame[11].f);
	LINE_NUMBER(406);
	sp[0].o = frame[14].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[13].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[13].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[13].o), (jint(2)));
	sp[2].o = frame[13].o;
	jint temp3 = jint(3);
	LINE_NUMBER(407);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, sp[2].o, temp3);
	init_com_badlogic_gdx_math_Quaternion_float_float_float_float(ctx, sp[1].o, temp0, temp1, temp2, temp4);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(408);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_rotation;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[14].o));
	}
label_34:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"scale"_j))));
	frame[14].o = sp[0].o;
	LINE_NUMBER(411);
	if ((frame[14].o) == nullptr) goto label_42;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[14].o)))->F_size) != (jint(3))) goto label_42;
	}
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_scaling;
	if (sp[0].o != nullptr) goto label_44;
	}
	{
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	}
label_44:;
	{
	LINE_NUMBER(413);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx, sp[0].o);
	frame[15].o = sp[0].o;
	LINE_NUMBER(414);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[15].o)))->F_keytime = (frame[11].f);
	LINE_NUMBER(415);
	sp[0].o = frame[15].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[14].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[14].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[14].o), (jint(2)));
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, temp0, temp1, temp2);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(416);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_scaling;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[15].o));
	}
label_42:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[10].o)))->F_next;
	frame[10].o = sp[0].o;
	goto label_22;
	}
label_23:;
	goto label_48;
label_20:;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"translation"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(421);
	if ((frame[10].o) == nullptr) goto label_50;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_50;
	}
	{
	LINE_NUMBER(422);
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_translation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[10].o)))->F_size));
	LINE_NUMBER(424);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[10].o)))->F_child;
	frame[11].o = sp[0].o;
	}
label_54:;
	INST_ALOAD(11);
	if ((--sp)->o == nullptr) goto label_50;
	{
	LINE_NUMBER(425);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(426);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_translation;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[12].o));
	LINE_NUMBER(427);
	sp[0].o = frame[12].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"keytime"_j))), (jfloat(0)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_keytime = (temp0 / (jfloat(1000.0f)));
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(429);
	if ((frame[13].o) == nullptr) goto label_60;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[13].o)))->F_size) < (jint(3))) goto label_60;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = frame[12].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[13].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[13].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[13].o), (jint(2)));
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, temp0, temp1, temp2);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_60:;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[11].o)))->F_next;
	frame[11].o = sp[0].o;
	goto label_54;
	}
label_50:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"rotation"_j))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(435);
	if ((frame[11].o) == nullptr) goto label_63;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_63;
	}
	{
	LINE_NUMBER(436);
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK(sp[0].o))->F_rotation = (jref) sp[1].o;
	LINE_NUMBER(437);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_rotation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[11].o)))->F_size));
	LINE_NUMBER(438);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[11].o)))->F_child;
	frame[12].o = sp[0].o;
	}
label_67:;
	INST_ALOAD(12);
	if ((--sp)->o == nullptr) goto label_63;
	{
	LINE_NUMBER(439);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(440);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_rotation;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[13].o));
	LINE_NUMBER(441);
	sp[0].o = frame[13].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[12].o), (((jobject) createStringLiteral(ctx, u8"keytime"_j))), (jfloat(0)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_keytime = (temp0 / (jfloat(1000.0f)));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[12].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	frame[14].o = sp[0].o;
	LINE_NUMBER(443);
	if ((frame[14].o) == nullptr) goto label_73;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[14].o)))->F_size) < (jint(4))) goto label_73;
	}
	{
	sp[0].o = frame[13].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[14].o), (jint(0)));
	sp[2].o = frame[14].o;
	jint temp1 = jint(1);
	LINE_NUMBER(444);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, sp[2].o, temp1);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[14].o), (jint(2)));
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[14].o), (jint(3)));
	init_com_badlogic_gdx_math_Quaternion_float_float_float_float(ctx, sp[1].o, temp0, temp2, temp3, temp4);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_73:;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[12].o)))->F_next;
	frame[12].o = sp[0].o;
	goto label_67;
	}
label_63:;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"scaling"_j))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(449);
	if ((frame[12].o) == nullptr) goto label_48;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[12].o));
	if (temp0 == 0) goto label_48;
	}
	{
	LINE_NUMBER(450);
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_scaling;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[12].o)))->F_size));
	LINE_NUMBER(452);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[12].o)))->F_child;
	frame[13].o = sp[0].o;
	}
label_79:;
	INST_ALOAD(13);
	if ((--sp)->o == nullptr) goto label_48;
	{
	LINE_NUMBER(453);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(454);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[8].o)))->F_scaling;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[14].o));
	LINE_NUMBER(455);
	sp[0].o = frame[14].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"keytime"_j))), (jfloat(0)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_keytime = (temp0 / (jfloat(1000.0f)));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	frame[15].o = sp[0].o;
	LINE_NUMBER(457);
	if ((frame[15].o) == nullptr) goto label_85;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[15].o)))->F_size) < (jint(3))) goto label_85;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = frame[14].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[15].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[15].o), (jint(1)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getFloat_int_R_float])(ctx, (frame[15].o), (jint(2)));
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, temp0, temp1, temp2);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_85:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[13].o)))->F_next;
	frame[13].o = sp[0].o;
	goto label_79;
	}
label_48:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[7].o)))->F_next;
	frame[7].o = sp[0].o;
	goto label_14;
	}
label_9:;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_4;
	}
label_5:;
	LINE_NUMBER(464);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_lambda$parseNodesRecursively$3_int_R_Array1_com_badlogic_gdx_math_Matrix4(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:lambda$parseNodesRecursively$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Matrix4, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_lambda$parseNodesRecursively$2_int_R_Array1_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:lambda$parseNodesRecursively$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_lambda$parseAttributes$1_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:lambda$parseAttributes$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_lambda$parseMeshes$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader:lambda$parseMeshes$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_AssetLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMeshes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseType_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAttributes_com_badlogic_gdx_utils_JsonValue_R_Array1_com_badlogic_gdx_graphics_VertexAttribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMaterials_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseTextureUsage_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_readVector2_com_badlogic_gdx_utils_JsonValue_float_float_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodesRecursively_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_g3d_model_data_ModelNode,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAnimations_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue,
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
	{ "resolve", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;" },
	{ "loadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V" },
	{ "unloadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V" },
	{ "loadSync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
	{ "loadModelData", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;" },
	{ "loadModelData", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;" },
	{ "loadModel", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/Model;" },
	{ "loadModel", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/Model;" },
	{ "loadModel", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)Lcom/badlogic/gdx/graphics/g3d/Model;" },
	{ "loadModel", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/g3d/Model;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/utils/Array;" },
	{ "loadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)V" },
	{ "loadSync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/Model;" },
	{ "parseModel", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;" },
	{ "parseMeshes", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "parseType", "(Ljava/lang/String;)I" },
	{ "parseAttributes", "(Lcom/badlogic/gdx/utils/JsonValue;)[Lcom/badlogic/gdx/graphics/VertexAttribute;" },
	{ "parseMaterials", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/String;)V" },
	{ "parseTextureUsage", "(Ljava/lang/String;)I" },
	{ "parseColor", "(Lcom/badlogic/gdx/utils/JsonValue;)Lcom/badlogic/gdx/graphics/Color;" },
	{ "readVector2", "(Lcom/badlogic/gdx/utils/JsonValue;FF)Lcom/badlogic/gdx/math/Vector2;" },
	{ "parseNodes", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/utils/JsonValue;)Lcom/badlogic/gdx/utils/Array;" },
	{ "parseNodesRecursively", "(Lcom/badlogic/gdx/utils/JsonValue;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelNode;" },
	{ "parseAnimations", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/utils/JsonValue;)V" },
};

static FieldMetadata fields[] {
	{ "VERSION_HI", &class_short, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_VERSION_HI, "S", 25 },
	{ "VERSION_LO", &class_short, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_VERSION_LO, "S", 25 },
	{ "reader", &class_com_badlogic_gdx_utils_BaseJsonReader, offsetof(com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader, F_reader), "Lcom/badlogic/gdx/utils/BaseJsonReader;", 20 },
	{ "tempQ", &class_com_badlogic_gdx_math_Quaternion, offsetof(com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader, F_tempQ), "Lcom/badlogic/gdx/math/Quaternion;", 20 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_com_badlogic_gdx_utils_BaseJsonReader, 0, "(Lcom/badlogic/gdx/utils/BaseJsonReader;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_com_badlogic_gdx_utils_BaseJsonReader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/utils/BaseJsonReader;Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadModelData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;", 1 },
	{ "parseModel", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;", 1 },
	{ "parseMeshes", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMeshes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMeshes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/utils/JsonValue;)V", 4 },
	{ "parseType", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseType_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseType_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "parseAttributes", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAttributes_com_badlogic_gdx_utils_JsonValue_R_Array1_com_badlogic_gdx_graphics_VertexAttribute, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAttributes_com_badlogic_gdx_utils_JsonValue_R_Array1_com_badlogic_gdx_graphics_VertexAttribute, "(Lcom/badlogic/gdx/utils/JsonValue;)[Lcom/badlogic/gdx/graphics/VertexAttribute;", 4 },
	{ "parseMaterials", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMaterials_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseMaterials_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_java_lang_String, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/String;)V", 4 },
	{ "parseTextureUsage", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseTextureUsage_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseTextureUsage_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "parseColor", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseColor_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/utils/JsonValue;)Lcom/badlogic/gdx/graphics/Color;", 4 },
	{ "readVector2", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_readVector2_com_badlogic_gdx_utils_JsonValue_float_float_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_readVector2_com_badlogic_gdx_utils_JsonValue_float_float_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/utils/JsonValue;FF)Lcom/badlogic/gdx/math/Vector2;", 4 },
	{ "parseNodes", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodes_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/utils/JsonValue;)Lcom/badlogic/gdx/utils/Array;", 4 },
	{ "parseNodesRecursively", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodesRecursively_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_g3d_model_data_ModelNode, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseNodesRecursively_com_badlogic_gdx_utils_JsonValue_R_com_badlogic_gdx_graphics_g3d_model_data_ModelNode, "(Lcom/badlogic/gdx/utils/JsonValue;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelNode;", 4 },
	{ "parseAnimations", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAnimations_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_parseAnimations_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/utils/JsonValue;)V", 4 },
	{ "lambda$parseNodesRecursively$3", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_lambda$parseNodesRecursively$3_int_R_Array1_com_badlogic_gdx_math_Matrix4, 0, "(I)[Lcom/badlogic/gdx/math/Matrix4;", 4106 },
	{ "lambda$parseNodesRecursively$2", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_lambda$parseNodesRecursively$2_int_R_Array1_java_lang_String, 0, "(I)[Ljava/lang/String;", 4106 },
	{ "lambda$parseAttributes$1", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_lambda$parseAttributes$1_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(I)[Lcom/badlogic/gdx/graphics/VertexAttribute;", 4106 },
	{ "lambda$parseMeshes$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_lambda$parseMeshes$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart, 0, "(I)[Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMeshPart;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_ModelLoader,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader = registerClass(&class_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader);

}

