#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader.h"
#include "java/lang/Integer.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMeshPart.h"
#include "com/badlogic/gdx/Application.h"
#include "java/lang/Float.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader_ModelParameters.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelData.h"
#include "java/io/InputStreamReader.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "java/io/Reader.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMesh.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNode.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader_Group.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader_ObjLoaderParameters.h"
#include "com/badlogic/gdx/graphics/g3d/Model.h"
#include "java/io/BufferedReader.h"
#include "com/badlogic/gdx/graphics/g3d/loader/MtlLoader.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNodePart.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"

extern "C" {

jbool SF_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_logWarning;

void mark_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) object;
	if (self->F_verts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_verts)->clazz)->markFunction)((jobject) self->F_verts, mark, depth + 1);
	if (self->F_norms)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_norms)->clazz)->markFunction)((jobject) self->F_norms, mark, depth + 1);
	if (self->F_uvs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uvs)->clazz)->markFunction)((jobject) self->F_uvs, mark, depth + 1);
	if (self->F_groups)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_groups)->clazz)->markFunction)((jobject) self->F_groups, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(90);
	init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	init_com_badlogic_gdx_assets_loaders_ModelLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_FloatArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_FloatArray);
	init_com_badlogic_gdx_utils_FloatArray_int(ctx, sp[1].o, (300));
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK(sp[0].o))->F_verts = (jref) sp[1].o;
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_FloatArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_FloatArray);
	init_com_badlogic_gdx_utils_FloatArray_int(ctx, sp[1].o, (300));
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK(sp[0].o))->F_norms = (jref) sp[1].o;
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_FloatArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_FloatArray);
	init_com_badlogic_gdx_utils_FloatArray_int(ctx, sp[1].o, (200));
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK(sp[0].o))->F_uvs = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (10));
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK(sp[0].o))->F_groups = (jref) sp[1].o;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModel_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:loadModel", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters);
	init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_boolean(ctx, sp[2].o, (frame[2].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:loadModelData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters *) NULL_CHECK((frame[2].o)))->F_flipV) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(3); // Pop method args
	sp->o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData])(ctx, sp[0].o, sp[1].o, sp[2].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[38];
	auto stack = &frame[32];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:loadModelData", 38 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(108);
	if ((clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_logWarning) == 0) goto label_5;
	}
	{
	LINE_NUMBER(109);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	((func_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ObjLoader"_j))), (((jobject) createStringLiteral(ctx, u8"Wavefront (OBJ) is not fully supported, consult the documentation for more information"_j))));
	}
label_5:;
	{
	LINE_NUMBER(113);
	clinit_com_badlogic_gdx_graphics_g3d_loader_MtlLoader(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_MtlLoader);
	init_com_badlogic_gdx_graphics_g3d_loader_MtlLoader(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(117);
	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group);
	init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"default"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(120);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[1].o));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_BufferedReader_java_io_Reader_int(ctx, sp[0].o, sp[1].o, (4096));
	frame[8].o = sp[0].o;
	LINE_NUMBER(121);
	frame[9].i = (jint(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[8].o));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\\s+"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(126);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) >= (jint(1))) goto label_15;
	}
	goto label_12;
label_15:;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	if (temp0 != 0) goto label_16;
	}
	LINE_NUMBER(129);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_16:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	frame[5].i = temp0;
	if (temp0 != (35)) goto label_19;
	}
	LINE_NUMBER(131);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_19:;
	{
	LINE_NUMBER(132);
	if ((frame[5].i) != (118)) goto label_21;
	}
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	if (temp0 != (jint(1))) goto label_23;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(2)))));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jfloat temp2 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(3)))));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp2);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_23:;
	{
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), (jint(1)));
	if (temp0 != (110)) goto label_27;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(2)))));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jfloat temp2 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(3)))));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp2);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_27:;
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), (jint(1)));
	if (temp0 != (116)) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	sp += 1;
	if ((frame[2].i) == 0) goto label_33;
	}
	{
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(2)))));
	jfloat temp2 = temp0 - temp1;
	sp[0].f = temp2;
	sp += 1;
	goto label_34;
	}
label_33:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(2)))));
	sp[0].f = temp0;
	sp += 1;
	}
label_34:;
	POP_N(2); // Pop method args
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, sp[1].f);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_21:;
	{
	LINE_NUMBER(145);
	if ((frame[5].i) != (102)) goto label_35;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[7].o)))->F_faces;
	frame[11].o = sp[0].o;
	LINE_NUMBER(148);
	frame[12].i = (jint(1));
	}
label_38:;
	{
	if ((frame[12].i) >= ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(2)))) goto label_39;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) <= (jint(2))) goto label_43;
	}
	{
	LINE_NUMBER(152);
	if ((frame[12].i) != (jint(1))) goto label_45;
	}
	{
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[7].o)))->F_hasNorms = (jint(1));
	}
label_45:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(2)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_43:;
	{
	LINE_NUMBER(155);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) <= (jint(1))) goto label_46;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)))));
	if (temp0 <= 0) goto label_46;
	}
	{
	LINE_NUMBER(156);
	if ((frame[12].i) != (jint(1))) goto label_48;
	}
	{
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[7].o)))->F_hasUVs = (jint(1));
	}
label_48:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_46:;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[4].o;
	INST_IINC(12, 1);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i))))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(160);
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) <= (jint(2))) goto label_51;
	}
	{
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(2)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_51:;
	{
	LINE_NUMBER(162);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) <= (jint(1))) goto label_52;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)))));
	if (temp0 <= 0) goto label_52;
	}
	{
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_52:;
	{
	LINE_NUMBER(163);
	sp[0].o = frame[4].o;
	INST_IINC(12, 1);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i))))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) <= (jint(2))) goto label_55;
	}
	{
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(2)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_55:;
	{
	LINE_NUMBER(166);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) <= (jint(1))) goto label_56;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)))));
	if (temp0 <= 0) goto label_56;
	}
	{
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1)));
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[3].o))->F_size));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_56:;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[7].o;
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK(sp[0].o))->F_numFaces = (((jint)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK(sp[0].o))->F_numFaces) + (jint(1)));
	LINE_NUMBER(148);
	INST_IINC(12, -1);
	goto label_38;
	}
label_39:;
	LINE_NUMBER(169);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_35:;
	{
	if ((frame[5].i) == (111)) goto label_58;
	}
	{
	if ((frame[5].i) != (103)) goto label_59;
	}
label_58:;
	{
	LINE_NUMBER(174);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= (jint(1))) goto label_60;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_setActiveGroup_java_lang_String_R_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	frame[7].o = sp[0].o;
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_60:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_setActiveGroup_java_lang_String_R_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"default"_j))));
	frame[7].o = sp[0].o;
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_59:;
	{
	LINE_NUMBER(178);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"mtllib"_j))));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	((func_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_load_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_load_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_62:;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"usemtl"_j))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(181);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) != (jint(1))) goto label_65;
	}
	{
	LINE_NUMBER(182);
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[7].o)))->F_materialName = (jref) (((jobject) createStringLiteral(ctx, u8"default"_j)));
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_65:;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))), (46), (95));
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK(sp[0].o))->F_materialName = (jref) sp[1].o;
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_12:;
	{
	LINE_NUMBER(187);
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(190);
	goto label_67;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(188);
	frame[10].o = sp[0].o;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_67:;
	{
	LINE_NUMBER(193);
	frame[10].i = (jint(0));
	}
label_69:;
	{
	jint temp0 = frame[10].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_70;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[10].i));
	if (((jint)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, sp[0].o))))->F_numFaces) >= (jint(1))) goto label_72;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[10].i));
	LINE_NUMBER(196);
	INST_IINC(10, -1);
	}
label_72:;
	{
	LINE_NUMBER(193);
	INST_IINC(10, 1);
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) >= (jint(1))) goto label_75;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_75:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	frame[10].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(206);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelData);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelData(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(208);
	frame[12].i = (jint(0));
	}
label_78:;
	{
	if ((frame[12].i) >= (frame[10].i)) goto label_79;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[12].i));
	frame[13].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, sp[0].o));
	LINE_NUMBER(210);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_faces;
	frame[14].o = sp[0].o;
	LINE_NUMBER(211);
	frame[15].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[14].o)))->F_size);
	LINE_NUMBER(212);
	frame[16].i = ((jint)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_numFaces);
	LINE_NUMBER(213);
	frame[17].i = ((jint)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_hasNorms);
	LINE_NUMBER(214);
	frame[18].i = ((jint)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_hasUVs);
	LINE_NUMBER(216);
	jint temp0 = (frame[16].i) * (jint(3));
	jint temp1 = jint(3);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[17].i) == 0) goto label_87;
	}
	INST_ICONST(3);
	goto label_88;
label_87:;
	INST_ICONST(0);
label_88:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[18].i) == 0) goto label_89;
	}
	INST_ICONST(2);
	goto label_90;
label_89:;
	INST_ICONST(0);
label_90:;
	{
	sp -= 3;
	sp[0].o = (jobject) createArray(ctx, &class_float, (sp[0].i * (sp[1].i + sp[2].i)));
	frame[19].o = sp[0].o;
	LINE_NUMBER(218);
	frame[20].i = (jint(0));
	frame[21].i = (jint(0));
	}
label_93:;
	{
	if ((frame[20].i) >= (frame[15].i)) goto label_94;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = frame[14].o;
	jint temp0 = frame[20].i;
	INST_IINC(20, 1);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	frame[22].i = (temp1 * (jint(3)));
	LINE_NUMBER(220);
	sp[0].o = frame[19].o;
	jint temp2 = frame[21].i;
	INST_IINC(21, 1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jint temp3 = frame[22].i;
	INST_IINC(22, 1);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[1].o, temp3);
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp4;
	LINE_NUMBER(221);
	sp[0].o = frame[19].o;
	jint temp5 = frame[21].i;
	INST_IINC(21, 1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jint temp6 = frame[22].i;
	INST_IINC(22, 1);
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[1].o, temp6);
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = temp7;
	LINE_NUMBER(222);
	sp[0].o = frame[19].o;
	jint temp8 = frame[21].i;
	INST_IINC(21, 1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	jfloat temp9 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[1].o, (frame[22].i));
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = temp9;
	LINE_NUMBER(223);
	if ((frame[17].i) == 0) goto label_100;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = frame[14].o;
	jint temp0 = frame[20].i;
	INST_IINC(20, 1);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	frame[23].i = (temp1 * (jint(3)));
	LINE_NUMBER(225);
	sp[0].o = frame[19].o;
	jint temp2 = frame[21].i;
	INST_IINC(21, 1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jint temp3 = frame[23].i;
	INST_IINC(23, 1);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[1].o, temp3);
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp4;
	LINE_NUMBER(226);
	sp[0].o = frame[19].o;
	jint temp5 = frame[21].i;
	INST_IINC(21, 1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jint temp6 = frame[23].i;
	INST_IINC(23, 1);
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[1].o, temp6);
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = temp7;
	LINE_NUMBER(227);
	sp[0].o = frame[19].o;
	jint temp8 = frame[21].i;
	INST_IINC(21, 1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	jfloat temp9 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[1].o, (frame[23].i));
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = temp9;
	}
label_100:;
	{
	LINE_NUMBER(229);
	if ((frame[18].i) == 0) goto label_105;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[14].o;
	jint temp0 = frame[20].i;
	INST_IINC(20, 1);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	frame[23].i = (temp1 * (jint(2)));
	LINE_NUMBER(231);
	sp[0].o = frame[19].o;
	jint temp2 = frame[21].i;
	INST_IINC(21, 1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	jint temp3 = frame[23].i;
	INST_IINC(23, 1);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[1].o, temp3);
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp4;
	LINE_NUMBER(232);
	sp[0].o = frame[19].o;
	jint temp5 = frame[21].i;
	INST_IINC(21, 1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[1].o, (frame[23].i));
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = temp6;
	}
label_105:;
	LINE_NUMBER(234);
	goto label_93;
label_94:;
	{
	LINE_NUMBER(236);
	if (((frame[16].i) * (jint(3))) < (32767)) goto label_109;
	}
	INST_ICONST(0);
	goto label_110;
label_109:;
	{
	jint temp0 = (frame[16].i) * (jint(3));
	sp[0].i = temp0;
	sp += 1;
	}
label_110:;
	{
	sp -= 1;
	frame[20].i = sp[0].i;
	LINE_NUMBER(237);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[20].i));
	frame[21].o = sp[0].o;
	LINE_NUMBER(239);
	if ((frame[20].i) <= 0) goto label_113;
	}
	{
	LINE_NUMBER(240);
	frame[22].i = (jint(0));
	}
label_115:;
	{
	if ((frame[22].i) >= (frame[20].i)) goto label_113;
	}
	{
	LINE_NUMBER(241);
	ARRAY_ACCESS(jshort, (frame[21].o), (frame[22].i)) = (jshort((frame[22].i)));
	LINE_NUMBER(240);
	INST_IINC(22, 1);
	goto label_115;
	}
label_113:;
	{
	LINE_NUMBER(245);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[22].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = frame[22].o;
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[1].o, (jint(1)), (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_position"_j))));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	if ((frame[17].i) == 0) goto label_120;
	}
	{
	sp[0].o = frame[22].o;
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[1].o, (8), (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_normal"_j))));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_120:;
	{
	LINE_NUMBER(248);
	if ((frame[18].i) == 0) goto label_121;
	}
	{
	sp[0].o = frame[22].o;
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[1].o, (16), (jint(2)), (((jobject) createStringLiteral(ctx, u8"a_texCoord0"_j))));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_121:;
	{
	LINE_NUMBER(250);
	INST_IINC(9, 1);
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[9].i));
	frame[23].o = sp[0].o;
	LINE_NUMBER(251);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"default"_j));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_123;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"node"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[23].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_124;
	}
label_123:;
	INST_ALOAD(13);
	sp[-1].o = (jobject) ((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK(sp[-1].o))->F_name;
label_124:;
	{
	sp -= 1;
	frame[24].o = sp[0].o;
	LINE_NUMBER(252);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"default"_j));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_126;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mesh"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[23].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_127;
	}
label_126:;
	INST_ALOAD(13);
	sp[-1].o = (jobject) ((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK(sp[-1].o))->F_name;
label_127:;
	{
	sp -= 1;
	frame[25].o = sp[0].o;
	LINE_NUMBER(253);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"default"_j));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_129;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"part"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[23].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_130;
	}
label_129:;
	INST_ALOAD(13);
	sp[-1].o = (jobject) ((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK(sp[-1].o))->F_name;
label_130:;
	{
	sp -= 1;
	frame[26].o = sp[0].o;
	LINE_NUMBER(254);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNode);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNode(ctx, sp[0].o);
	frame[27].o = sp[0].o;
	LINE_NUMBER(255);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[27].o)))->F_id = (jref) (frame[24].o);
	LINE_NUMBER(256);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[27].o)))->F_meshId = (jref) (frame[25].o);
	LINE_NUMBER(257);
	sp[0].o = frame[27].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_scale = (jref) sp[1].o;
	LINE_NUMBER(258);
	sp[0].o = frame[27].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	LINE_NUMBER(259);
	sp[0].o = frame[27].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_rotation = (jref) sp[1].o;
	LINE_NUMBER(260);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart(ctx, sp[0].o);
	frame[28].o = sp[0].o;
	LINE_NUMBER(261);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[28].o)))->F_meshPartId = (jref) (frame[26].o);
	LINE_NUMBER(262);
	sp[0].o = frame[28].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_materialName;
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK(sp[0].o))->F_materialId = (jref) sp[1].o;
	LINE_NUMBER(263);
	sp[0].o = frame[27].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[28].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(264);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart(ctx, sp[0].o);
	frame[29].o = sp[0].o;
	LINE_NUMBER(265);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[29].o)))->F_id = (jref) (frame[26].o);
	LINE_NUMBER(266);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[29].o)))->F_indices = (jref) (frame[21].o);
	LINE_NUMBER(267);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[29].o)))->F_primitiveType = (jint(4));
	LINE_NUMBER(268);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh(ctx, sp[0].o);
	frame[30].o = sp[0].o;
	LINE_NUMBER(269);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[30].o)))->F_id = (jref) (frame[25].o);
	LINE_NUMBER(270);
	sp[0].o = frame[30].o;
	sp[1].o = frame[22].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_loader_ObjLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK(sp[0].o))->F_attributes = (jref) (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_VertexAttribute, 1), sp[1].o));
	LINE_NUMBER(271);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[30].o)))->F_vertices = (jref) (frame[19].o);
	LINE_NUMBER(272);
	sp[0].o = frame[30].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[29].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(273);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[11].o)))->F_nodes;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[27].o));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[11].o)))->F_meshes;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[30].o));
	LINE_NUMBER(275);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[13].o)))->F_materialName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial])(ctx, sp[0].o, sp[1].o);
	frame[31].o = sp[0].o;
	LINE_NUMBER(276);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[11].o)))->F_materials;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[31].o));
	LINE_NUMBER(208);
	INST_IINC(12, 1);
	goto label_78;
	}
label_79:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_155;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_verts;
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, sp[0].o);
	}
label_155:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_156;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_norms;
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, sp[0].o);
	}
label_156:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_157;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_uvs;
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, sp[0].o);
	}
label_157:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_158;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	}
label_158:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_setActiveGroup_java_lang_String_R_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:setActiveGroup", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
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
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, sp[0].o));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[3].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	LINE_NUMBER(299);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(300);
	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group);
	init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(301);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_ObjLoader *) NULL_CHECK((frame[0].o)))->F_groups;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:getIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(306);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(308);
	if ((frame[3].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return ((frame[2].i) + (frame[3].i));
	}
label_4:;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return ((frame[3].i) - (jint(1)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:loadModelData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData])(ctx, (frame[0].o), (frame[1].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_lambda$loadModelData$0_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:lambda$loadModelData$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_ModelLoader(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(ctx);
	{
	LINE_NUMBER(71);
	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(ctx);
	SF_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_logWarning = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_loader_ObjLoader[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModel_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_setActiveGroup_java_lang_String_R_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int,
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
	{ "loadModel", "(Lcom/badlogic/gdx/files/FileHandle;Z)Lcom/badlogic/gdx/graphics/g3d/Model;" },
	{ "loadModelData", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/loader/ObjLoader$ObjLoaderParameters;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;" },
	{ "loadModelData", "(Lcom/badlogic/gdx/files/FileHandle;Z)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;" },
	{ "setActiveGroup", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/loader/ObjLoader$Group;" },
	{ "getIndex", "(Ljava/lang/String;I)I" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters,
	&class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group,
};

static FieldMetadata fields[] {
	{ "logWarning", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_logWarning, "Z", 9 },
	{ "verts", &class_com_badlogic_gdx_utils_FloatArray, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader, F_verts), "Lcom/badlogic/gdx/utils/FloatArray;", 16 },
	{ "norms", &class_com_badlogic_gdx_utils_FloatArray, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader, F_norms), "Lcom/badlogic/gdx/utils/FloatArray;", 16 },
	{ "uvs", &class_com_badlogic_gdx_utils_FloatArray, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader, F_uvs), "Lcom/badlogic/gdx/utils/FloatArray;", 16 },
	{ "groups", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader, F_groups), "Lcom/badlogic/gdx/utils/Array;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadModel", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModel_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_Model, VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModel_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_Model, "(Lcom/badlogic/gdx/files/FileHandle;Z)Lcom/badlogic/gdx/graphics/g3d/Model;", 1 },
	{ "loadModelData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$ObjLoaderParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/loader/ObjLoader$ObjLoaderParameters;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;", 1 },
	{ "loadModelData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, "(Lcom/badlogic/gdx/files/FileHandle;Z)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;", 4 },
	{ "setActiveGroup", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_setActiveGroup_java_lang_String_R_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_setActiveGroup_java_lang_String_R_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/loader/ObjLoader$Group;", 2 },
	{ "getIndex", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_getIndex_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 2 },
	{ "loadModelData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;", 4161 },
	{ "lambda$loadModelData$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_lambda$loadModelData$0_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(I)[Lcom/badlogic/gdx/graphics/VertexAttribute;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/loader/ObjLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_ModelLoader,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_loader_ObjLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_loader_ObjLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_loader_ObjLoader = registerClass(&class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader);

}

