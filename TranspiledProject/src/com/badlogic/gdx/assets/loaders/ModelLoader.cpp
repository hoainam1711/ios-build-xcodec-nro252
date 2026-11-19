#include "com/badlogic/gdx/assets/loaders/ModelLoader.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "java/lang/Iterable.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader_ModelParameters.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelData.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider_AssetTextureProvider.h"
#include "com/badlogic/gdx/assets/loaders/ModelLoader.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider_FileTextureProvider.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelTexture.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g3d/Model.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureParameter.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_ModelLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_assets_loaders_ModelLoader *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_defaultParameters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultParameters)->clazz)->markFunction)((jobject) self->F_defaultParameters, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_ModelLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_assets_loaders_ModelLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_ModelLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	init_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters);
	init_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(ctx, sp[1].o);
	((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK(sp[0].o))->F_defaultParameters = (jref) sp[1].o;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadModelData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadModel", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(54);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_com_badlogic_gdx_graphics_g3d_Model(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_Model);
	init_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadModel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider);
	init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(ctx, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadModel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadModel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider);
	init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(ctx, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:getDependencies", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(76);
	if ((frame[5].o) != nullptr) goto label_9;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_utils_ObjectMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry);
	init_com_badlogic_gdx_utils_ObjectMap$Entry(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(79);
	((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key = (jref) (frame[1].o);
	LINE_NUMBER(80);
	((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_value = (jref) (frame[5].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK((frame[0].o)))->F_items;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(83);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(85);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters *) NULL_CHECK((frame[3].o)))->F_textureParameter;
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK((frame[0].o)))->F_defaultParameters;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters *) NULL_CHECK(sp[0].o))->F_textureParameter;
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[5].o)))->F_materials;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, sp[0].o));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[9].o)))->F_textures;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[9].o)))->F_textures;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture, sp[0].o));
	LINE_NUMBER(91);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[11].o)))->F_fileName;
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_Texture)), (frame[7].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_23;
	}
label_21:;
	LINE_NUMBER(93);
	goto label_18;
label_19:;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadSync", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(103);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK((frame[0].o)))->F_items;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(105);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o))))->F_key;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o))))->F_value;
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelData, sp[0].o));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ModelLoader *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	}
label_11:;
	{
	LINE_NUMBER(105);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(111);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(112);
	if ((frame[5].o) != nullptr) goto label_15;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_15:;
	{
	LINE_NUMBER(113);
	clinit_com_badlogic_gdx_graphics_g3d_Model(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_Model);
	sp[1].o = frame[5].o;
	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider);
	init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider_com_badlogic_gdx_assets_AssetManager(ctx, sp[2].o, (frame[1].o));
	init_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_getManagedDisposables_R_java_lang_Iterable) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_getManagedDisposables_R_java_lang_Iterable])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Disposable, sp[0].o));
	LINE_NUMBER(119);
	if ((isInstance(ctx, (frame[8].o), &class_com_badlogic_gdx_graphics_Texture)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(120);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[7].o)))(ctx, (frame[7].o));
	}
label_21:;
	LINE_NUMBER(122);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(35);
	((func_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ModelLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_ModelLoader[] {
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
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_Model,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model,
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
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters,
};

static FieldMetadata fields[] {
	{ "items", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_assets_loaders_ModelLoader, F_items), "Lcom/badlogic/gdx/utils/Array;", 4 },
	{ "defaultParameters", &class_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters, offsetof(com_badlogic_gdx_assets_loaders_ModelLoader, F_defaultParameters), "Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_ModelLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadModelData", 0, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;", 1025 },
	{ "loadModelData", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModelData_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_model_data_ModelData, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;", 1 },
	{ "loadModel", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/Model;", 1 },
	{ "loadModel", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/Model;", 1 },
	{ "loadModel", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Model, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Model, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)Lcom/badlogic/gdx/graphics/g3d/Model;", 1 },
	{ "loadModel", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_Model, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadModel_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g3d_Model, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/g3d/Model;", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)V", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ModelLoader$ModelParameters_R_com_badlogic_gdx_graphics_g3d_Model, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ModelLoader$ModelParameters;)Lcom/badlogic/gdx/graphics/g3d/Model;", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_ModelLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_assets_loaders_ModelLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/ModelLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_assets_loaders_ModelLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_ModelLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_ModelLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_ModelLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_ModelLoader = registerClass(&class_com_badlogic_gdx_assets_loaders_ModelLoader);

}

