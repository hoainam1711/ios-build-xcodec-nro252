#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/assets/loaders/I18NBundleLoader.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/utils/Logger.h"
#include "com/badlogic/gdx/graphics/Cubemap.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "com/badlogic/gdx/utils/async/AsyncExecutor.h"
#include "com/badlogic/gdx/utils/async/ThreadUtils.h"
#include "com/badlogic/gdx/utils/BaseJsonReader.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/utils/UBJsonReader.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters_LoadedCallback.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/TimeUtils.h"
#include "com/badlogic/gdx/audio/Music.h"
#include "com/badlogic/gdx/assets/loaders/BitmapFontLoader.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/assets/loaders/SoundLoader.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEffect.h"
#include "com/badlogic/gdx/assets/AssetManager_RefCountedContainer.h"
#include "com/badlogic/gdx/assets/loaders/CubemapLoader.h"
#include "com/badlogic/gdx/utils/ObjectIntMap.h"
#include "com/badlogic/gdx/utils/ObjectMap_Keys.h"
#include "com/badlogic/gdx/graphics/g2d/PolygonRegion.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/assets/loaders/MusicLoader.h"
#include "com/badlogic/gdx/assets/loaders/PixmapLoader.h"
#include "com/badlogic/gdx/utils/JsonReader.h"
#include "java/lang/RuntimeException.h"
#include "com/badlogic/gdx/graphics/Texture.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/resolvers/InternalFileHandleResolver.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "com/badlogic/gdx/assets/AssetErrorListener.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/assets/AssetLoadingTask.h"
#include "com/badlogic/gdx/assets/loaders/SkinLoader.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "com/badlogic/gdx/assets/loaders/ParticleEffectLoader.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "com/badlogic/gdx/utils/ObjectMap_Values.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "com/badlogic/gdx/graphics/g3d/loader/G3dModelLoader.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/assets/loaders/ShaderProgramLoader.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/graphics/g3d/Model.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/utils/I18NBundle.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/audio/Sound.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/assets/loaders/TextureAtlasLoader.h"

extern "C" {


void mark_com_badlogic_gdx_assets_AssetManager(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_AssetManager *) object;
	if (self->F_assets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assets)->clazz)->markFunction)((jobject) self->F_assets, mark, depth + 1);
	if (self->F_assetTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assetTypes)->clazz)->markFunction)((jobject) self->F_assetTypes, mark, depth + 1);
	if (self->F_assetDependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assetDependencies)->clazz)->markFunction)((jobject) self->F_assetDependencies, mark, depth + 1);
	if (self->F_injected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_injected)->clazz)->markFunction)((jobject) self->F_injected, mark, depth + 1);
	if (self->F_loaders)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loaders)->clazz)->markFunction)((jobject) self->F_loaders, mark, depth + 1);
	if (self->F_loadQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadQueue)->clazz)->markFunction)((jobject) self->F_loadQueue, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_tasks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tasks)->clazz)->markFunction)((jobject) self->F_tasks, mark, depth + 1);
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_resolver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resolver)->clazz)->markFunction)((jobject) self->F_resolver, mark, depth + 1);
	if (self->F_log)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_log)->clazz)->markFunction)((jobject) self->F_log, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_AssetManager(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_assets_AssetManager(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetManager(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver);
	init_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver(ctx, sp[1].o);
	init_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetManager(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	init_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_loaders_FileHandleResolver_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_loaders_FileHandleResolver_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetManager(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(102);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_assets = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_assetTypes = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_assetDependencies = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectSet);
	init_com_badlogic_gdx_utils_ObjectSet(ctx, sp[1].o);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_injected = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaders = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loadQueue = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_tasks = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Logger(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Logger);
	init_com_badlogic_gdx_utils_Logger_java_lang_String_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"AssetManager"_j))), (jint(0)));
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_log = (jref) sp[1].o;
	LINE_NUMBER(103);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_resolver = (jref) (frame[1].o);
	LINE_NUMBER(104);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	clinit_com_badlogic_gdx_assets_loaders_BitmapFontLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_BitmapFontLoader);
	init_com_badlogic_gdx_assets_loaders_BitmapFontLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_audio_Music);
	clinit_com_badlogic_gdx_assets_loaders_MusicLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_MusicLoader);
	init_com_badlogic_gdx_assets_loaders_MusicLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_Pixmap);
	clinit_com_badlogic_gdx_assets_loaders_PixmapLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_PixmapLoader);
	init_com_badlogic_gdx_assets_loaders_PixmapLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_audio_Sound);
	clinit_com_badlogic_gdx_assets_loaders_SoundLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_SoundLoader);
	init_com_badlogic_gdx_assets_loaders_SoundLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas);
	clinit_com_badlogic_gdx_assets_loaders_TextureAtlasLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_TextureAtlasLoader);
	init_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_Texture);
	clinit_com_badlogic_gdx_assets_loaders_TextureLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader);
	init_com_badlogic_gdx_assets_loaders_TextureLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Skin);
	clinit_com_badlogic_gdx_assets_loaders_SkinLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_SkinLoader);
	init_com_badlogic_gdx_assets_loaders_SkinLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g2d_ParticleEffect);
	clinit_com_badlogic_gdx_assets_loaders_ParticleEffectLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader);
	init_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g2d_PolygonRegion);
	clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader);
	init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_utils_I18NBundle);
	clinit_com_badlogic_gdx_assets_loaders_I18NBundleLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_I18NBundleLoader);
	init_com_badlogic_gdx_assets_loaders_I18NBundleLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g3d_Model);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8".g3dj"_j));
	clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader);
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[4].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonReader);
	init_com_badlogic_gdx_utils_JsonReader(ctx, sp[4].o);
	init_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_com_badlogic_gdx_utils_BaseJsonReader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[3].o, sp[4].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g3d_Model);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8".g3db"_j));
	clinit_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader);
	clinit_com_badlogic_gdx_utils_UBJsonReader(ctx);
	sp[4].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_UBJsonReader);
	init_com_badlogic_gdx_utils_UBJsonReader(ctx, sp[4].o);
	init_com_badlogic_gdx_graphics_g3d_loader_G3dModelLoader_com_badlogic_gdx_utils_BaseJsonReader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[3].o, sp[4].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g3d_Model);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8".obj"_j));
	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader);
	init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[3].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_glutils_ShaderProgram);
	clinit_com_badlogic_gdx_assets_loaders_ShaderProgramLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_ShaderProgramLoader);
	init_com_badlogic_gdx_assets_loaders_ShaderProgramLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_Cubemap);
	clinit_com_badlogic_gdx_assets_loaders_CubemapLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_CubemapLoader);
	init_com_badlogic_gdx_assets_loaders_CubemapLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_11:;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_async_AsyncExecutor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_async_AsyncExecutor);
	init_com_badlogic_gdx_utils_async_AsyncExecutor_int_java_lang_String(ctx, sp[1].o, (jint(1)), (((jobject) createStringLiteral(ctx, u8"AssetManager"_j))));
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_executor = (jref) sp[1].o;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getFileHandleResolver_R_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getFileHandleResolver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_resolver;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_boolean_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_boolean_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(152);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(154);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(156);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[5].o)))->F_object;
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(159);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(169);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(171);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[5].o)))->F_object;
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(173);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_get_com_badlogic_gdx_assets_AssetDescriptor_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_boolean_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getAll_java_lang_Class_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(188);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(190);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[5].o)))->F_object;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx, self);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_contains_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetLoadingTask, sp[0].o))))->F_assetDesc;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(199);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o))))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(199);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_contains_java_lang_String_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:contains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetLoadingTask, sp[0].o))))->F_assetDesc;
	frame[3].o = sp[0].o;
	LINE_NUMBER(209);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[3].o)))->F_type;
	if (sp[0].o != (frame[2].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[3].o)))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(212);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_type;
	if (sp[0].o != (frame[2].o)) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(212);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:unload", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetLoadingTask, sp[0].o));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_assetDesc;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unload (from tasks): "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_info_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(228);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_cancel = (jint(1));
	LINE_NUMBER(229);
	((func_com_badlogic_gdx_assets_AssetLoadingTask_unload) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_unload])(ctx, (frame[2].o));
	LINE_NUMBER(230);
	popStackFrame(ctx, self);
	return;
	}
label_1:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(237);
	frame[3].i = (jint(-1));
	LINE_NUMBER(238);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o))))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(240);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(241);
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(238);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(244);
	if ((frame[3].i) == (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_toLoad = (((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_toLoad) - (jint(1)));
	LINE_NUMBER(246);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unload (from queue): "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_info_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	if ((frame[2].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_params;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_params;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_params;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_fileName;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_type;
	((func_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback, INDEX_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_21:;
	LINE_NUMBER(252);
	popStackFrame(ctx, self);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(255);
	if ((frame[2].o) != nullptr) goto label_23;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(260);
	sp[0].o = frame[4].o;
	((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_refCount = (((jint)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_refCount) - (jint(1)));
	LINE_NUMBER(261);
	if (((jint)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_refCount) > 0) goto label_26;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unload (dispose): "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_info_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_utils_Disposable)) == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	((func_com_badlogic_gdx_utils_Disposable_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Disposable, INDEX_com_badlogic_gdx_utils_Disposable_dispose, (checkCast(ctx, &class_com_badlogic_gdx_utils_Disposable, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Disposable, sp[0].o)));
	}
label_29:;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)), (frame[1].o));
	goto label_31;
	}
label_26:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unload (decrement): "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_info_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(275);
	if ((frame[5].o) == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_35:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(277);
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	if (temp0 == 0) goto label_37;
	}
	{
	((func_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String])(ctx, (frame[0].o), (frame[7].o));
	}
label_37:;
	goto label_35;
label_33:;
	{
	LINE_NUMBER(280);
	if (((jint)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_refCount) > 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_38:;
	LINE_NUMBER(281);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_containsAsset_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:containsAsset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(287);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(289);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	if (sp[0].o == (frame[1].o)) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_7:;
	goto label_3;
label_4:;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getAssetFileName", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o))))->F_object;
	frame[7].o = sp[0].o;
	LINE_NUMBER(300);
	if ((frame[7].o) == (frame[1].o)) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_10:;
	LINE_NUMBER(301);
	goto label_5;
label_6:;
	LINE_NUMBER(302);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(303);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_isLoaded_com_badlogic_gdx_assets_AssetDescriptor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:isLoaded", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:isLoaded", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(315);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:isLoaded", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(323);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_R_com_badlogic_gdx_assets_loaders_AssetLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getLoader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getLoader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaders;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(341);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[3].o)))->F_size) >= (jint(1))) goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(342);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_AssetLoader, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(343);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(344);
	frame[5].i = (jint(-1));
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	if (temp0 <= (frame[5].i)) goto label_10;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_AssetLoader, sp[0].o));
	LINE_NUMBER(348);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	frame[5].i = temp0;
	}
label_10:;
	LINE_NUMBER(350);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(358);
	((func_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(359);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:load", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(367);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No loader for type: "_j))));
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_3;
	}
	{
	LINE_NUMBER(371);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(0));
	LINE_NUMBER(372);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad = (jint(0));
	LINE_NUMBER(373);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(379);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset with name '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' already in preload queue, but has different type (expected: "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(383);
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_type;
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(379);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(387);
	frame[5].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetLoadingTask, sp[0].o))))->F_assetDesc;
	frame[6].o = sp[0].o;
	LINE_NUMBER(389);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_17;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset with name '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' already in task list, but has different type (expected: "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(391);
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_type;
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(387);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(396);
	if ((frame[5].o) == nullptr) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[2].o));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(397);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset with name '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' already loaded, but has different type (expected: "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(398);
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", found: "_j))));
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_toLoad = (((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_toLoad) + (jint(1)));
	LINE_NUMBER(401);
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(402);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Queued: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(404);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_load_com_badlogic_gdx_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(409);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_params;
	((func_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(410);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_7:;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_8;
	}
	{
	LINE_NUMBER(420);
	M_com_badlogic_gdx_assets_AssetManager_nextTask(ctx, (frame[0].o));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(424);
	jint temp0 = (jint)M_com_badlogic_gdx_assets_AssetManager_updateTask_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_5;
label_10:;
	INST_ICONST(0);
label_5:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(425);
	frame[1].o = sp[0].o;
	LINE_NUMBER(426);
	M_com_badlogic_gdx_assets_AssetManager_handleTaskError_java_lang_Throwable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(427);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_update_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(437);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_WebGL;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_update_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(438);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_millis_R_long(ctx);
	frame[2].l = (temp0 + (jlong((frame[1].i))));
	}
label_2:;
	{
	LINE_NUMBER(440);
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_update_R_boolean])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(441);
	if ((frame[4].i) != 0) goto label_4;
	}
	{
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_millis_R_long(ctx);
	if ((longCompare(temp0, (frame[2].l))) <= 0) goto label_5;
	}
label_4:;
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(442);
	SM_com_badlogic_gdx_utils_async_ThreadUtils_yield(ctx);
	LINE_NUMBER(443);
	goto label_2;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_isFinished_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:isFinished", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_finishLoading(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:finishLoading", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Waiting for loading to complete..."_j))));
	}
label_1:;
	{
	LINE_NUMBER(455);
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_update_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(456);
	SM_com_badlogic_gdx_utils_async_ThreadUtils_yield(ctx);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Loading complete."_j))));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_com_badlogic_gdx_assets_AssetDescriptor_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:finishLoadingAsset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(463);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:finishLoadingAsset", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Waiting for asset to be loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(473);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(475);
	if ((frame[4].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(477);
	if ((frame[5].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(479);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[5].o)))->F_object;
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(483);
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_update_R_boolean])(ctx, (frame[0].o));
	LINE_NUMBER(484);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_19;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_19:;
	{
	LINE_NUMBER(485);
	SM_com_badlogic_gdx_utils_async_ThreadUtils_yield(ctx);
	goto label_10;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_injectDependencies_java_lang_String_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:injectDependencies", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_injected;
	frame[3].o = sp[0].o;
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(492);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[5].o)))->F_fileName;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(493);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[5].o)))->F_fileName;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(494);
	M_com_badlogic_gdx_assets_AssetManager_injectDependency_java_lang_String_com_badlogic_gdx_assets_AssetDescriptor(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	LINE_NUMBER(495);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(496);
	((func_com_badlogic_gdx_utils_ObjectSet_clear_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_clear_int])(ctx, (frame[3].o), (32));
	LINE_NUMBER(497);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_injectDependency_java_lang_String_com_badlogic_gdx_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:injectDependency", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(502);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(503);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(504);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(506);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Dependency already loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(511);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(512);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(513);
	sp[0].o = frame[5].o;
	((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_refCount = (((jint)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_refCount) + (jint(1)));
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	M_com_badlogic_gdx_assets_AssetManager_incrementRefCountedDependencies_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(515);
	goto label_13;
	}
label_6:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Loading dependency: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_info_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(518);
	M_com_badlogic_gdx_assets_AssetManager_addTask_com_badlogic_gdx_assets_AssetDescriptor(ctx, (frame[0].o), (frame[2].o));
	}
label_13:;
	LINE_NUMBER(520);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_nextTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:nextTask", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Already loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(530);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(531);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(532);
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_refCount = (((jint)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_refCount) + (jint(1)));
	LINE_NUMBER(533);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	M_com_badlogic_gdx_assets_AssetManager_incrementRefCountedDependencies_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(534);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_params;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_params;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_params;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	((func_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback, INDEX_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_9:;
	{
	LINE_NUMBER(536);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaded = (((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaded) + (jint(1)));
	LINE_NUMBER(537);
	goto label_12;
	}
label_2:;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Loading: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_info_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(540);
	M_com_badlogic_gdx_assets_AssetManager_addTask_com_badlogic_gdx_assets_AssetDescriptor(ctx, (frame[0].o), (frame[1].o));
	}
label_12:;
	LINE_NUMBER(542);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_addTask_com_badlogic_gdx_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:addTask", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(546);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(547);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No loader for type: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	clinit_com_badlogic_gdx_assets_AssetLoadingTask(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetLoadingTask);
	sp[2].o = frame[0].o;
	sp[3].o = frame[1].o;
	sp[4].o = frame[2].o;
	sp[5].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_executor;
	init_com_badlogic_gdx_assets_AssetLoadingTask_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_utils_async_AsyncExecutor(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(549);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_peakTasks = (((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_peakTasks) + (jint(1)));
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:addAsset", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(558);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(559);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(560);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(561);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[4].o));
	}
label_3:;
	{
	LINE_NUMBER(563);
	clinit_com_badlogic_gdx_assets_AssetManager$RefCountedContainer(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer);
	init_com_badlogic_gdx_assets_AssetManager$RefCountedContainer(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(564);
	((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[5].o)))->F_object = (jref) (frame[3].o);
	LINE_NUMBER(565);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[1].o), (frame[5].o));
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_assets_AssetManager_updateTask_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:updateTask", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetLoadingTask, sp[0].o));
	LINE_NUMBER(573);
	frame[2].i = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(575);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_cancel) != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetLoadingTask_update_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetLoadingTask_update_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	INST_ISTORE(2);
	popExceptionFrame(frameRef);
	LINE_NUMBER(579);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(576);
	frame[3].o = sp[0].o;
	LINE_NUMBER(577);
	((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_cancel = (jint(1));
	LINE_NUMBER(578);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	((func_com_badlogic_gdx_assets_AssetManager_taskFailed_com_badlogic_gdx_assets_AssetDescriptor_java_lang_RuntimeException) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_taskFailed_com_badlogic_gdx_assets_AssetDescriptor_java_lang_RuntimeException])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	}
label_9:;
	{
	LINE_NUMBER(582);
	if ((frame[2].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(585);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaded = (((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaded) + (jint(1)));
	LINE_NUMBER(586);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(590);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_cancel) == 0) goto label_18;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[1].o))->F_fileName;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_type;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_asset;
	((func_com_badlogic_gdx_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(595);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_params;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_params;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_params;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_type;
	((func_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback, INDEX_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_20:;
	{
	LINE_NUMBER(598);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_utils_TimeUtils_nanoTime_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(599);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat(((frame[3].l) - ((jlong)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_startTime)))) / (jfloat(1000000.0f))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ms "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_taskFailed_com_badlogic_gdx_assets_AssetDescriptor_java_lang_RuntimeException(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:taskFailed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(609);
	throwException(ctx, (frame[2].o));	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_incrementRefCountedDependencies_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:incrementRefCountedDependencies", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(614);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(617);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(618);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)), (frame[4].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(619);
	sp[0].o = frame[6].o;
	((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_refCount = (((jint)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_refCount) + (jint(1)));
	LINE_NUMBER(620);
	M_com_badlogic_gdx_assets_AssetManager_incrementRefCountedDependencies_java_lang_String(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(621);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(622);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_handleTaskError_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:handleTaskError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	((func_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error loading asset."_j))), (frame[1].o));
	LINE_NUMBER(629);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetLoadingTask, sp[0].o));
	LINE_NUMBER(633);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_assetDesc;
	frame[3].o = sp[0].o;
	LINE_NUMBER(636);
	if (((jint)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_dependenciesLoaded) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_dependencies;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(637);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_dependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(638);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[5].o)))->F_fileName;
	((func_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(645);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_listener;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_com_badlogic_gdx_assets_AssetErrorListener_error_com_badlogic_gdx_assets_AssetDescriptor_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_assets_AssetErrorListener, INDEX_com_badlogic_gdx_assets_AssetErrorListener_error_com_badlogic_gdx_assets_AssetDescriptor_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[1].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(648);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	LINE_NUMBER(649);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:setLoader", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(655);
	((func_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(656);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:setLoader", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(664);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"type cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(665);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"loader cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Loader set: "_j))));
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" -> "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[3].o));
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaders;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(668);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaders;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[2].o);
	frame[4].o = sp[2].o;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(669);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_7;
label_6:;
	INST_ALOAD(2);
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(670);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_assets_AssetManager_getLoadedAssets_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getLoadedAssets", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	popStackFrame(ctx, self);
	return ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_assets_AssetManager_getQueuedAssets_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getQueuedAssets", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	jint temp0 = (jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	popStackFrame(ctx, self);
	return (temp0 + ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_assets_AssetManager_getProgress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getProgress", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(684);
	if (((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad) != 0) goto label_1;
	}
	INST_FCONST(1);
	popStackFrame(ctx, self);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(685);
	frame[1].f = (jfloat(((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaded)));
	LINE_NUMBER(686);
	if (((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(687);
	jfloat temp0 = frame[1].f;
	jint temp1 = (jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	frame[1].f = (temp0 + ((jfloat((temp1 - ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)))) / (jfloat(((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks)))));
	}
label_3:;
	{
	LINE_NUMBER(689);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(1)), ((frame[1].f) / (jfloat(((jint)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad)))));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_setErrorListener_com_badlogic_gdx_assets_AssetErrorListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:setErrorListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(695);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(696);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	((func_com_badlogic_gdx_utils_Logger_debug_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Disposing."_j))));
	LINE_NUMBER(702);
	((func_com_badlogic_gdx_assets_AssetManager_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_clear])(ctx, (frame[0].o));
	LINE_NUMBER(703);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_executor;
	((func_com_badlogic_gdx_utils_async_AsyncExecutor_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_async_AsyncExecutor_dispose])(ctx, sp[0].o);
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:clear", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(708);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(709);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(710);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(715);
	((func_com_badlogic_gdx_assets_AssetManager_finishLoading) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_finishLoading])(ctx, (frame[0].o));
	LINE_NUMBER(717);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(718);
	clinit_com_badlogic_gdx_utils_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap);
	init_com_badlogic_gdx_utils_ObjectIntMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(721);
	((func_com_badlogic_gdx_utils_ObjectIntMap_clear_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_clear_int])(ctx, (frame[2].o), (51));
	LINE_NUMBER(722);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(723);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(724);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(725);
	if ((frame[6].o) != nullptr) goto label_25;
	}
	goto label_21;
label_25:;
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(727);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_getAndIncrement_java_lang_Object_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_getAndIncrement_java_lang_Object_int_int_R_int])(ctx, (frame[2].o), (frame[8].o), (jint(0)), (jint(1)));
	goto label_26;
	}
label_27:;
	LINE_NUMBER(728);
	goto label_21;
label_22:;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_30:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(732);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, (frame[2].o), (frame[5].o), (jint(0)));
	if (temp0 != 0) goto label_33;
	}
	{
	((func_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String])(ctx, (frame[0].o), (frame[5].o));
	}
label_33:;
	goto label_30;
label_31:;
	LINE_NUMBER(733);
	goto label_16;
label_17:;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	((func_com_badlogic_gdx_utils_ObjectMap_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_clear_int])(ctx, sp[0].o, (51));
	LINE_NUMBER(736);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	((func_com_badlogic_gdx_utils_ObjectMap_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_clear_int])(ctx, sp[0].o, (51));
	LINE_NUMBER(737);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	((func_com_badlogic_gdx_utils_ObjectMap_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_clear_int])(ctx, sp[0].o, (51));
	LINE_NUMBER(738);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(0));
	LINE_NUMBER(739);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad = (jint(0));
	LINE_NUMBER(740);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks = (jint(0));
	LINE_NUMBER(741);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(742);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(743);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_42;
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_42:;
	LINE_NUMBER(744);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getLogger_R_com_badlogic_gdx_utils_Logger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getLogger", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(748);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_setLogger_com_badlogic_gdx_utils_Logger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:setLogger", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(752);
	((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_log = (jref) (frame[1].o);
	LINE_NUMBER(753);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_assets_AssetManager_getReferenceCount_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getReferenceCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(759);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)), (frame[1].o));
	popStackFrame(ctx, self);
	return ((jint)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o))))->F_refCount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:setReferenceCount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(767);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o)), (frame[1].o));
	((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[0].o))))->F_refCount = (frame[2].i);
	LINE_NUMBER(769);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getDiagnostics_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getDiagnostics", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(773);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (256));
	frame[1].o = sp[0].o;
	LINE_NUMBER(774);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(775);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(776);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	frame[5].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(778);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	}
label_7:;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(780);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(781);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(782);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", refs: "_j))));
	LINE_NUMBER(783);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[5].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[1].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[1].o)), (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, sp[1].o))))->F_refCount));
	LINE_NUMBER(785);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(786);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(787);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", deps: ["_j))));
	LINE_NUMBER(788);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(789);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[8].o));
	LINE_NUMBER(790);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (44));
	LINE_NUMBER(791);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(792);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (93));
	}
label_14:;
	LINE_NUMBER(794);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(795);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getAssetNames_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getAssetNames", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(800);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getDependencies_java_lang_String_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getDependencies", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager:getAssetType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_AssetManager[] {
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
	(void *) M_com_badlogic_gdx_assets_AssetManager_dispose,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getFileHandleResolver_R_com_badlogic_gdx_assets_loaders_FileHandleResolver,
	(void *) M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_boolean_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_boolean_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetManager_get_com_badlogic_gdx_assets_AssetDescriptor_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getAll_java_lang_Class_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_AssetManager_contains_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_contains_java_lang_String_java_lang_Class_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String,
	(void *) M_com_badlogic_gdx_assets_AssetManager_containsAsset_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_assets_AssetManager_isLoaded_com_badlogic_gdx_assets_AssetDescriptor_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_R_com_badlogic_gdx_assets_loaders_AssetLoader,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader,
	(void *) M_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class,
	(void *) M_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_AssetManager_load_com_badlogic_gdx_assets_AssetDescriptor,
	(void *) M_com_badlogic_gdx_assets_AssetManager_update_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_update_int_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_isFinished_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_finishLoading,
	(void *) M_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_com_badlogic_gdx_assets_AssetDescriptor_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_java_lang_String_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetManager_injectDependencies_java_lang_String_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_AssetManager_injectDependency_java_lang_String_com_badlogic_gdx_assets_AssetDescriptor,
	(void *) M_com_badlogic_gdx_assets_AssetManager_nextTask,
	(void *) M_com_badlogic_gdx_assets_AssetManager_addTask_com_badlogic_gdx_assets_AssetDescriptor,
	(void *) M_com_badlogic_gdx_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_AssetManager_updateTask_R_boolean,
	(void *) M_com_badlogic_gdx_assets_AssetManager_taskFailed_com_badlogic_gdx_assets_AssetDescriptor_java_lang_RuntimeException,
	(void *) M_com_badlogic_gdx_assets_AssetManager_incrementRefCountedDependencies_java_lang_String,
	(void *) M_com_badlogic_gdx_assets_AssetManager_handleTaskError_java_lang_Throwable,
	(void *) M_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader,
	(void *) M_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getLoadedAssets_R_int,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getQueuedAssets_R_int,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getProgress_R_float,
	(void *) M_com_badlogic_gdx_assets_AssetManager_setErrorListener_com_badlogic_gdx_assets_AssetErrorListener,
	(void *) M_com_badlogic_gdx_assets_AssetManager_clear,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getLogger_R_com_badlogic_gdx_utils_Logger,
	(void *) M_com_badlogic_gdx_assets_AssetManager_setLogger_com_badlogic_gdx_utils_Logger,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getReferenceCount_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getDiagnostics_R_java_lang_String,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getAssetNames_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getDependencies_java_lang_String_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class,
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
	{ "getFileHandleResolver", "()Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;" },
	{ "get", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/String;Z)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/String;Ljava/lang/Class;Z)Ljava/lang/Object;" },
	{ "get", "(Lcom/badlogic/gdx/assets/AssetDescriptor;)Ljava/lang/Object;" },
	{ "getAll", "(Ljava/lang/Class;Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;" },
	{ "contains", "(Ljava/lang/String;)Z" },
	{ "contains", "(Ljava/lang/String;Ljava/lang/Class;)Z" },
	{ "unload", "(Ljava/lang/String;)V" },
	{ "containsAsset", "(Ljava/lang/Object;)Z" },
	{ "getAssetFileName", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "isLoaded", "(Lcom/badlogic/gdx/assets/AssetDescriptor;)Z" },
	{ "isLoaded", "(Ljava/lang/String;)Z" },
	{ "isLoaded", "(Ljava/lang/String;Ljava/lang/Class;)Z" },
	{ "getLoader", "(Ljava/lang/Class;)Lcom/badlogic/gdx/assets/loaders/AssetLoader;" },
	{ "getLoader", "(Ljava/lang/Class;Ljava/lang/String;)Lcom/badlogic/gdx/assets/loaders/AssetLoader;" },
	{ "load", "(Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "load", "(Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetDescriptor;)V" },
	{ "update", "()Z" },
	{ "update", "(I)Z" },
	{ "isFinished", "()Z" },
	{ "finishLoading", "()V" },
	{ "finishLoadingAsset", "(Lcom/badlogic/gdx/assets/AssetDescriptor;)Ljava/lang/Object;" },
	{ "finishLoadingAsset", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "injectDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/utils/Array;)V" },
	{ "injectDependency", "(Ljava/lang/String;Lcom/badlogic/gdx/assets/AssetDescriptor;)V" },
	{ "nextTask", "()V" },
	{ "addTask", "(Lcom/badlogic/gdx/assets/AssetDescriptor;)V" },
	{ "addAsset", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;)V" },
	{ "updateTask", "()Z" },
	{ "taskFailed", "(Lcom/badlogic/gdx/assets/AssetDescriptor;Ljava/lang/RuntimeException;)V" },
	{ "incrementRefCountedDependencies", "(Ljava/lang/String;)V" },
	{ "handleTaskError", "(Ljava/lang/Throwable;)V" },
	{ "setLoader", "(Ljava/lang/Class;Lcom/badlogic/gdx/assets/loaders/AssetLoader;)V" },
	{ "setLoader", "(Ljava/lang/Class;Ljava/lang/String;Lcom/badlogic/gdx/assets/loaders/AssetLoader;)V" },
	{ "getLoadedAssets", "()I" },
	{ "getQueuedAssets", "()I" },
	{ "getProgress", "()F" },
	{ "setErrorListener", "(Lcom/badlogic/gdx/assets/AssetErrorListener;)V" },
	{ "clear", "()V" },
	{ "getLogger", "()Lcom/badlogic/gdx/utils/Logger;" },
	{ "setLogger", "(Lcom/badlogic/gdx/utils/Logger;)V" },
	{ "getReferenceCount", "(Ljava/lang/String;)I" },
	{ "setReferenceCount", "(Ljava/lang/String;I)V" },
	{ "getDiagnostics", "()Ljava/lang/String;" },
	{ "getAssetNames", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getDependencies", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Array;" },
	{ "getAssetType", "(Ljava/lang/String;)Ljava/lang/Class;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer,
};

static FieldMetadata fields[] {
	{ "assets", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_assets_AssetManager, F_assets), "Lcom/badlogic/gdx/utils/ObjectMap;", 16 },
	{ "assetTypes", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_assets_AssetManager, F_assetTypes), "Lcom/badlogic/gdx/utils/ObjectMap;", 16 },
	{ "assetDependencies", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_assets_AssetManager, F_assetDependencies), "Lcom/badlogic/gdx/utils/ObjectMap;", 16 },
	{ "injected", &class_com_badlogic_gdx_utils_ObjectSet, offsetof(com_badlogic_gdx_assets_AssetManager, F_injected), "Lcom/badlogic/gdx/utils/ObjectSet;", 16 },
	{ "loaders", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_assets_AssetManager, F_loaders), "Lcom/badlogic/gdx/utils/ObjectMap;", 16 },
	{ "loadQueue", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_assets_AssetManager, F_loadQueue), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "executor", &class_com_badlogic_gdx_utils_async_AsyncExecutor, offsetof(com_badlogic_gdx_assets_AssetManager, F_executor), "Lcom/badlogic/gdx/utils/async/AsyncExecutor;", 16 },
	{ "tasks", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_assets_AssetManager, F_tasks), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "listener", &class_com_badlogic_gdx_assets_AssetErrorListener, offsetof(com_badlogic_gdx_assets_AssetManager, F_listener), "Lcom/badlogic/gdx/assets/AssetErrorListener;", 0 },
	{ "loaded", &class_int, offsetof(com_badlogic_gdx_assets_AssetManager, F_loaded), "I", 0 },
	{ "toLoad", &class_int, offsetof(com_badlogic_gdx_assets_AssetManager, F_toLoad), "I", 0 },
	{ "peakTasks", &class_int, offsetof(com_badlogic_gdx_assets_AssetManager, F_peakTasks), "I", 0 },
	{ "resolver", &class_com_badlogic_gdx_assets_loaders_FileHandleResolver, offsetof(com_badlogic_gdx_assets_AssetManager, F_resolver), "Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;", 16 },
	{ "log", &class_com_badlogic_gdx_utils_Logger, offsetof(com_badlogic_gdx_assets_AssetManager, F_log), "Lcom/badlogic/gdx/utils/Logger;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetManager, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_assets_loaders_FileHandleResolver_boolean, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;Z)V", 1 },
	{ "getFileHandleResolver", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getFileHandleResolver_R_com_badlogic_gdx_assets_loaders_FileHandleResolver, VTABLE_com_badlogic_gdx_assets_AssetManager_getFileHandleResolver_R_com_badlogic_gdx_assets_loaders_FileHandleResolver, "()Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 33 },
	{ "get", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", 33 },
	{ "get", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_boolean_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_boolean_R_java_lang_Object, "(Ljava/lang/String;Z)Ljava/lang/Object;", 33 },
	{ "get", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_boolean_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_boolean_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Z)Ljava/lang/Object;", 33 },
	{ "get", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_get_com_badlogic_gdx_assets_AssetDescriptor_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetManager_get_com_badlogic_gdx_assets_AssetDescriptor_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetDescriptor;)Ljava/lang/Object;", 33 },
	{ "getAll", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getAll_java_lang_Class_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_AssetManager_getAll_java_lang_Class_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/Class;Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;", 33 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_contains_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_contains_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 33 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_contains_java_lang_String_java_lang_Class_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_contains_java_lang_String_java_lang_Class_R_boolean, "(Ljava/lang/String;Ljava/lang/Class;)Z", 33 },
	{ "unload", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String, VTABLE_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String, "(Ljava/lang/String;)V", 33 },
	{ "containsAsset", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_containsAsset_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_containsAsset_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "getAssetFileName", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 33 },
	{ "isLoaded", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_isLoaded_com_badlogic_gdx_assets_AssetDescriptor_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_com_badlogic_gdx_assets_AssetDescriptor_R_boolean, "(Lcom/badlogic/gdx/assets/AssetDescriptor;)Z", 33 },
	{ "isLoaded", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 33 },
	{ "isLoaded", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean, "(Ljava/lang/String;Ljava/lang/Class;)Z", 33 },
	{ "getLoader", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_R_com_badlogic_gdx_assets_loaders_AssetLoader, VTABLE_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_R_com_badlogic_gdx_assets_loaders_AssetLoader, "(Ljava/lang/Class;)Lcom/badlogic/gdx/assets/loaders/AssetLoader;", 1 },
	{ "getLoader", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader, VTABLE_com_badlogic_gdx_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_com_badlogic_gdx_assets_loaders_AssetLoader, "(Ljava/lang/Class;Ljava/lang/String;)Lcom/badlogic/gdx/assets/loaders/AssetLoader;", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class, VTABLE_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;)V", 33 },
	{ "load", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters, VTABLE_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters, "(Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 33 },
	{ "load", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_load_com_badlogic_gdx_assets_AssetDescriptor, VTABLE_com_badlogic_gdx_assets_AssetManager_load_com_badlogic_gdx_assets_AssetDescriptor, "(Lcom/badlogic/gdx/assets/AssetDescriptor;)V", 33 },
	{ "update", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_update_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_update_R_boolean, "()Z", 33 },
	{ "update", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_update_int_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_update_int_R_boolean, "(I)Z", 1 },
	{ "isFinished", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_isFinished_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_isFinished_R_boolean, "()Z", 33 },
	{ "finishLoading", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_finishLoading, VTABLE_com_badlogic_gdx_assets_AssetManager_finishLoading, "()V", 1 },
	{ "finishLoadingAsset", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_com_badlogic_gdx_assets_AssetDescriptor_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_com_badlogic_gdx_assets_AssetDescriptor_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetDescriptor;)Ljava/lang/Object;", 1 },
	{ "finishLoadingAsset", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_java_lang_String_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetManager_finishLoadingAsset_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "injectDependencies", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_injectDependencies_java_lang_String_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_AssetManager_injectDependencies_java_lang_String_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/utils/Array;)V", 32 },
	{ "injectDependency", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_injectDependency_java_lang_String_com_badlogic_gdx_assets_AssetDescriptor, VTABLE_com_badlogic_gdx_assets_AssetManager_injectDependency_java_lang_String_com_badlogic_gdx_assets_AssetDescriptor, "(Ljava/lang/String;Lcom/badlogic/gdx/assets/AssetDescriptor;)V", 34 },
	{ "nextTask", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_nextTask, VTABLE_com_badlogic_gdx_assets_AssetManager_nextTask, "()V", 2 },
	{ "addTask", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_addTask_com_badlogic_gdx_assets_AssetDescriptor, VTABLE_com_badlogic_gdx_assets_AssetManager_addTask_com_badlogic_gdx_assets_AssetDescriptor, "(Lcom/badlogic/gdx/assets/AssetDescriptor;)V", 2 },
	{ "addAsset", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object, VTABLE_com_badlogic_gdx_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;)V", 4 },
	{ "updateTask", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_updateTask_R_boolean, VTABLE_com_badlogic_gdx_assets_AssetManager_updateTask_R_boolean, "()Z", 2 },
	{ "taskFailed", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_taskFailed_com_badlogic_gdx_assets_AssetDescriptor_java_lang_RuntimeException, VTABLE_com_badlogic_gdx_assets_AssetManager_taskFailed_com_badlogic_gdx_assets_AssetDescriptor_java_lang_RuntimeException, "(Lcom/badlogic/gdx/assets/AssetDescriptor;Ljava/lang/RuntimeException;)V", 4 },
	{ "incrementRefCountedDependencies", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_incrementRefCountedDependencies_java_lang_String, VTABLE_com_badlogic_gdx_assets_AssetManager_incrementRefCountedDependencies_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "handleTaskError", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_handleTaskError_java_lang_Throwable, VTABLE_com_badlogic_gdx_assets_AssetManager_handleTaskError_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 2 },
	{ "setLoader", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader, VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_com_badlogic_gdx_assets_loaders_AssetLoader, "(Ljava/lang/Class;Lcom/badlogic/gdx/assets/loaders/AssetLoader;)V", 33 },
	{ "setLoader", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader, VTABLE_com_badlogic_gdx_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_com_badlogic_gdx_assets_loaders_AssetLoader, "(Ljava/lang/Class;Ljava/lang/String;Lcom/badlogic/gdx/assets/loaders/AssetLoader;)V", 33 },
	{ "getLoadedAssets", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getLoadedAssets_R_int, VTABLE_com_badlogic_gdx_assets_AssetManager_getLoadedAssets_R_int, "()I", 33 },
	{ "getQueuedAssets", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getQueuedAssets_R_int, VTABLE_com_badlogic_gdx_assets_AssetManager_getQueuedAssets_R_int, "()I", 33 },
	{ "getProgress", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getProgress_R_float, VTABLE_com_badlogic_gdx_assets_AssetManager_getProgress_R_float, "()F", 33 },
	{ "setErrorListener", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_setErrorListener_com_badlogic_gdx_assets_AssetErrorListener, VTABLE_com_badlogic_gdx_assets_AssetManager_setErrorListener_com_badlogic_gdx_assets_AssetErrorListener, "(Lcom/badlogic/gdx/assets/AssetErrorListener;)V", 33 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_dispose, VTABLE_com_badlogic_gdx_assets_AssetManager_dispose, "()V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_clear, VTABLE_com_badlogic_gdx_assets_AssetManager_clear, "()V", 1 },
	{ "getLogger", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getLogger_R_com_badlogic_gdx_utils_Logger, VTABLE_com_badlogic_gdx_assets_AssetManager_getLogger_R_com_badlogic_gdx_utils_Logger, "()Lcom/badlogic/gdx/utils/Logger;", 1 },
	{ "setLogger", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_setLogger_com_badlogic_gdx_utils_Logger, VTABLE_com_badlogic_gdx_assets_AssetManager_setLogger_com_badlogic_gdx_utils_Logger, "(Lcom/badlogic/gdx/utils/Logger;)V", 1 },
	{ "getReferenceCount", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getReferenceCount_java_lang_String_R_int, VTABLE_com_badlogic_gdx_assets_AssetManager_getReferenceCount_java_lang_String_R_int, "(Ljava/lang/String;)I", 33 },
	{ "setReferenceCount", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int, VTABLE_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int, "(Ljava/lang/String;I)V", 33 },
	{ "getDiagnostics", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getDiagnostics_R_java_lang_String, VTABLE_com_badlogic_gdx_assets_AssetManager_getDiagnostics_R_java_lang_String, "()Ljava/lang/String;", 33 },
	{ "getAssetNames", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getAssetNames_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_AssetManager_getAssetNames_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 33 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getDependencies_java_lang_String_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_AssetManager_getDependencies_java_lang_String_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Array;", 33 },
	{ "getAssetType", (intptr_t) M_com_badlogic_gdx_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class, VTABLE_com_badlogic_gdx_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 33 },
};

Class class_com_badlogic_gdx_assets_AssetManager{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/AssetManager",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_assets_AssetManager),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_AssetManager,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_AssetManager,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_AssetManager,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 54,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_AssetManager = registerClass(&class_com_badlogic_gdx_assets_AssetManager);

}

