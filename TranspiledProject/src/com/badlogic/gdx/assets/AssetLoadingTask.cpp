#include "com/badlogic/gdx/assets/AssetLoadingTask.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/async/AsyncResult.h"
#include "java/lang/Void.h"
#include "com/badlogic/gdx/utils/Logger.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/utils/async/AsyncTask.h"
#include "com/badlogic/gdx/utils/async/AsyncExecutor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/assets/AssetLoadingTask.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/assets/loaders/SynchronousAssetLoader.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"
#include "com/badlogic/gdx/utils/TimeUtils.h"

extern "C" {


void mark_com_badlogic_gdx_assets_AssetLoadingTask(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_AssetLoadingTask *) object;
	if (self->F_manager)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_manager)->clazz)->markFunction)((jobject) self->F_manager, mark, depth + 1);
	if (self->F_assetDesc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assetDesc)->clazz)->markFunction)((jobject) self->F_assetDesc, mark, depth + 1);
	if (self->F_loader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loader)->clazz)->markFunction)((jobject) self->F_loader, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_dependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dependencies)->clazz)->markFunction)((jobject) self->F_dependencies, mark, depth + 1);
	if (self->F_depsFuture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_depsFuture)->clazz)->markFunction)((jobject) self->F_depsFuture, mark, depth + 1);
	if (self->F_loadFuture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadFuture)->clazz)->markFunction)((jobject) self->F_loadFuture, mark, depth + 1);
	if (self->F_asset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_asset)->clazz)->markFunction)((jobject) self->F_asset, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_AssetLoadingTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_assets_AssetLoadingTask_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_utils_async_AsyncExecutor(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetLoadingTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(51);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager = (jref) (frame[1].o);
	LINE_NUMBER(53);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc = (jref) (frame[2].o);
	LINE_NUMBER(54);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader = (jref) (frame[3].o);
	LINE_NUMBER(55);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_executor = (jref) (frame[4].o);
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[1].o)))->F_log;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Logger_getLevel_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_getLevel_R_int])(ctx, sp[1].o);
	sp += 1;
	if (temp0 != (jint(3))) goto label_6;
	}
	sp->l = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_nanoTime_R_long(ctx);
	sp++;
	goto label_7;
label_6:;
	INST_LCONST(0);
label_7:;
	{
	sp -= 2;
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_startTime = sp[1].l;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Void(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:call", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_cancel) == 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader, sp[0].o));
	LINE_NUMBER(64);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded) != 0) goto label_3;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_dependencies = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	M_com_badlogic_gdx_assets_AssetLoadingTask_removeDuplicates_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[1].o))->F_fileName;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	((func_com_badlogic_gdx_assets_AssetManager_injectDependencies_java_lang_String_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_injectDependencies_java_lang_String_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	((func_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(72);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone = (jint(1));
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	((func_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(76);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetLoadingTask_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(89);
	M_com_badlogic_gdx_assets_AssetLoadingTask_handleSyncLoader(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(91);
	M_com_badlogic_gdx_assets_AssetLoadingTask_handleAsyncLoader(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asset;
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetLoadingTask_handleSyncLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:handleSyncLoader", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader, sp[0].o));
	LINE_NUMBER(97);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded) != 0) goto label_2;
	}
	{
	LINE_NUMBER(98);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded = (jint(1));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_dependencies = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	M_com_badlogic_gdx_assets_AssetLoadingTask_removeDuplicates_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[1].o))->F_fileName;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	((func_com_badlogic_gdx_assets_AssetManager_injectDependencies_java_lang_String_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_injectDependencies_java_lang_String_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_10;
	}
label_2:;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	}
label_10:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetLoadingTask_handleAsyncLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:handleAsyncLoader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader, sp[0].o));
	LINE_NUMBER(112);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded) != 0) goto label_10;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_depsFuture;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_async_AsyncExecutor_submit_com_badlogic_gdx_utils_async_AsyncTask_R_com_badlogic_gdx_utils_async_AsyncResult) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_async_AsyncExecutor_submit_com_badlogic_gdx_utils_async_AsyncTask_R_com_badlogic_gdx_utils_async_AsyncResult])(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_depsFuture = (jref) sp[1].o;
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_depsFuture;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_async_AsyncResult_isDone_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_async_AsyncResult_isDone_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_depsFuture;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_async_AsyncResult_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_async_AsyncResult_get_R_java_lang_Object])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(120);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(118);
	frame[2].o = sp[0].o;
	LINE_NUMBER(119);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load dependencies of asset: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(121);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded = (jint(1));
	LINE_NUMBER(122);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone) == 0) goto label_14;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loadFuture;
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone) != 0) goto label_19;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_async_AsyncExecutor_submit_com_badlogic_gdx_utils_async_AsyncTask_R_com_badlogic_gdx_utils_async_AsyncResult) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_async_AsyncExecutor_submit_com_badlogic_gdx_utils_async_AsyncTask_R_com_badlogic_gdx_utils_async_AsyncResult])(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_loadFuture = (jref) sp[1].o;
	goto label_14;
	}
label_19:;
	{
	LINE_NUMBER(127);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone) == 0) goto label_21;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	goto label_14;
	}
label_21:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loadFuture;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_async_AsyncResult_isDone_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_async_AsyncResult_isDone_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loadFuture;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_async_AsyncResult_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_async_AsyncResult_get_R_java_lang_Object])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(134);
	goto label_23;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(132);
	frame[2].o = sp[0].o;
	LINE_NUMBER(133);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load asset: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	}
label_14:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetLoadingTask_unload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:unload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	((func_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_1:;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:resolve", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_file;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_loaders_AssetLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_AssetLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_file;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetLoadingTask_removeDuplicates_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:removeDuplicates", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(152);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_ordered = (jint(1));
	LINE_NUMBER(153);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o))))->F_fileName;
	frame[4].o = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o))))->F_type;
	frame[5].o = sp[0].o;
	LINE_NUMBER(156);
	frame[6].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)));
	}
label_8:;
	{
	if ((frame[6].i) <= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[1].o))))->F_type;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[1].o))))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(156);
	INST_IINC(6, -1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(153);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(159);
	((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_ordered = (frame[2].i);
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoadingTask:call", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Void) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Void])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_AssetLoadingTask[] {
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
	(void *) M_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Void,
	(void *) M_com_badlogic_gdx_assets_AssetLoadingTask_update_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetLoadingTask_handleSyncLoader,
	(void *) M_com_badlogic_gdx_assets_AssetLoadingTask_handleAsyncLoader,
	(void *) M_com_badlogic_gdx_assets_AssetLoadingTask_unload,
	(void *) M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_assets_AssetLoadingTask_removeDuplicates_com_badlogic_gdx_utils_Array,
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
	{ "call", "()Ljava/lang/Object;" },
	{ "call", "()Ljava/lang/Void;" },
	{ "update", "()Z" },
	{ "handleSyncLoader", "()V" },
	{ "handleAsyncLoader", "()V" },
	{ "unload", "()V" },
	{ "resolve", "(Lcom/badlogic/gdx/assets/loaders/AssetLoader;Lcom/badlogic/gdx/assets/AssetDescriptor;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "removeDuplicates", "(Lcom/badlogic/gdx/utils/Array;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_async_AsyncTask, };

static FieldMetadata fields[] {
	{ "manager", &class_com_badlogic_gdx_assets_AssetManager, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_manager), "Lcom/badlogic/gdx/assets/AssetManager;", 0 },
	{ "assetDesc", &class_com_badlogic_gdx_assets_AssetDescriptor, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_assetDesc), "Lcom/badlogic/gdx/assets/AssetDescriptor;", 16 },
	{ "loader", &class_com_badlogic_gdx_assets_loaders_AssetLoader, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_loader), "Lcom/badlogic/gdx/assets/loaders/AssetLoader;", 16 },
	{ "executor", &class_com_badlogic_gdx_utils_async_AsyncExecutor, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_executor), "Lcom/badlogic/gdx/utils/async/AsyncExecutor;", 16 },
	{ "startTime", &class_long, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_startTime), "J", 16 },
	{ "asyncDone", &class_boolean, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_asyncDone), "Z", 64 },
	{ "dependenciesLoaded", &class_boolean, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_dependenciesLoaded), "Z", 64 },
	{ "dependencies", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_dependencies), "Lcom/badlogic/gdx/utils/Array;", 64 },
	{ "depsFuture", &class_com_badlogic_gdx_utils_async_AsyncResult, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_depsFuture), "Lcom/badlogic/gdx/utils/async/AsyncResult;", 64 },
	{ "loadFuture", &class_com_badlogic_gdx_utils_async_AsyncResult, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_loadFuture), "Lcom/badlogic/gdx/utils/async/AsyncResult;", 64 },
	{ "asset", &class_java_lang_Object, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_asset), "Ljava/lang/Object;", 64 },
	{ "cancel", &class_boolean, offsetof(com_badlogic_gdx_assets_AssetLoadingTask, F_cancel), "Z", 64 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetLoadingTask_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_utils_async_AsyncExecutor, 0, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/assets/AssetDescriptor;Lcom/badlogic/gdx/assets/loaders/AssetLoader;Lcom/badlogic/gdx/utils/async/AsyncExecutor;)V", 1 },
	{ "call", (intptr_t) M_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Void, VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Void, "()Ljava/lang/Void;", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_assets_AssetLoadingTask_update_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_update_R_boolean, "()Z", 1 },
	{ "handleSyncLoader", (intptr_t) M_com_badlogic_gdx_assets_AssetLoadingTask_handleSyncLoader, VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_handleSyncLoader, "()V", 2 },
	{ "handleAsyncLoader", (intptr_t) M_com_badlogic_gdx_assets_AssetLoadingTask_handleAsyncLoader, VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_handleAsyncLoader, "()V", 2 },
	{ "unload", (intptr_t) M_com_badlogic_gdx_assets_AssetLoadingTask_unload, VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_unload, "()V", 1 },
	{ "resolve", (intptr_t) M_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_resolve_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_AssetDescriptor_R_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/assets/loaders/AssetLoader;Lcom/badlogic/gdx/assets/AssetDescriptor;)Lcom/badlogic/gdx/files/FileHandle;", 2 },
	{ "removeDuplicates", (intptr_t) M_com_badlogic_gdx_assets_AssetLoadingTask_removeDuplicates_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_removeDuplicates_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 2 },
	{ "call", (intptr_t) M_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_call_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_assets_AssetLoadingTask{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/AssetLoadingTask",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_assets_AssetLoadingTask),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_AssetLoadingTask,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_AssetLoadingTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_AssetLoadingTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_AssetLoadingTask = registerClass(&class_com_badlogic_gdx_assets_AssetLoadingTask);

}

