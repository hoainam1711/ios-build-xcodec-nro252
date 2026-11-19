#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer.h"
#include "com/badlogic/gdx/utils/JsonWriter_OutputType.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader_ParticleEffectLoadParameter.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader_ParticleEffectSaveParameter.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_AssetData.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	init_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:loadAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:getDependencies", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(56);
	clinit_com_badlogic_gdx_utils_Json(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Json);
	init_com_badlogic_gdx_utils_Json(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object])(ctx, (frame[4].o), (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData)), (frame[2].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData, sp[0].o));
	LINE_NUMBER(58);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader *) NULL_CHECK((frame[0].o)))->F_items;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(60);
	clinit_com_badlogic_gdx_utils_ObjectMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry);
	init_com_badlogic_gdx_utils_ObjectMap$Entry(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(61);
	((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_key = (jref) (frame[1].o);
	LINE_NUMBER(62);
	((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_value = (jref) (frame[5].o);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssets_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssets_R_com_badlogic_gdx_utils_Array])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(65);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_15;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_15:;
	{
	LINE_NUMBER(67);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, sp[0].o));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[9].o)))->F_filename;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[2].o));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[9].o)))->F_filename;
	sp[2].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[2].o))(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK(sp[0].o))->F_filename = (jref) sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[9].o)))->F_type;
	if (sp[0].o != (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect))) goto label_22;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[9].o)))->F_filename;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[9].o)))->F_type;
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[3].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[9].o)))->F_filename;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[9].o)))->F_type;
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	LINE_NUMBER(79);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_save_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:save", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(87);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData);
	init_com_badlogic_gdx_graphics_g3d_particles_ResourceData_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[2].o)))->F_manager;
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[2].o)))->F_batches;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[2].o)))->F_batches;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch, sp[0].o));
	LINE_NUMBER(95);
	frame[6].i = (jint(0));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getControllers_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getControllers_R_com_badlogic_gdx_utils_Array])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[8].o)))->F_renderer;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_isCompatible_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_isCompatible_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(98);
	frame[6].i = (jint(1));
	LINE_NUMBER(99);
	goto label_9;
	}
label_11:;
	LINE_NUMBER(101);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(103);
	if ((frame[6].i) == 0) goto label_14;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[2].o)))->F_manager;
	((func_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch, INDEX_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[3].o));
	}
label_14:;
	LINE_NUMBER(104);
	goto label_5;
label_3:;
	{
	LINE_NUMBER(108);
	clinit_com_badlogic_gdx_utils_Json(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Json);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[2].o)))->F_jsonOutputType;
	init_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(109);
	if (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[2].o)))->F_prettyPrint) == 0) goto label_16;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_R_java_lang_String])(ctx, (frame[4].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[2].o)))->F_file;
	((func_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean])(ctx, sp[0].o, (frame[5].o), (jint(0)));
	LINE_NUMBER(112);
	goto label_20;
	}
label_16:;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[4].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[2].o)))->F_file;
	((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_20:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:loadSync", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(120);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader *) NULL_CHECK((frame[0].o)))->F_items;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(122);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_value;
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData, sp[0].o));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(127);
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(122);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(130);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_16:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[5].o)))->F_resource;
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, sp[0].o)), (frame[1].o), (frame[5].o));
	LINE_NUMBER(133);
	if ((frame[4].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter *) NULL_CHECK((frame[4].o)))->F_batches;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter *) NULL_CHECK((frame[4].o)))->F_batches;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch, sp[0].o));
	LINE_NUMBER(136);
	((func_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch, INDEX_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, (frame[7].o)))(ctx, (frame[7].o), (frame[1].o), (frame[5].o));
	LINE_NUMBER(137);
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[5].o)))->F_resource;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter *) NULL_CHECK((frame[4].o)))->F_batches;
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setBatch_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setBatch_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[5].o)))->F_resource;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_find_com_badlogic_gdx_utils_Array_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:find", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(146);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	LINE_NUMBER(147);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(42);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_save_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_find_com_badlogic_gdx_utils_Array_java_lang_Class_R_java_lang_Object,
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
	{ "loadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectLoadParameter;)V" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectLoadParameter;)Lcom/badlogic/gdx/utils/Array;" },
	{ "save", "(Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffect;Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectSaveParameter;)V" },
	{ "loadSync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectLoadParameter;)Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffect;" },
	{ "find", "(Lcom/badlogic/gdx/utils/Array;Ljava/lang/Class;)Ljava/lang/Object;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter,
};

static FieldMetadata fields[] {
	{ "items", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader, F_items), "Lcom/badlogic/gdx/utils/Array;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectLoadParameter;)V", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectLoadParameter;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_save_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_save_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffect;Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectSaveParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectLoadParameter;)Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffect;", 1 },
	{ "find", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_find_com_badlogic_gdx_utils_Array_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_find_com_badlogic_gdx_utils_Array_java_lang_Class_R_java_lang_Object, "(Lcom/badlogic/gdx/utils/Array;Ljava/lang/Class;)Ljava/lang/Object;", 2 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader);

}

