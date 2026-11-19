#include "com/badlogic/gdx/graphics/Texture.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/glutils/PixmapTextureData.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/util/HashMap.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/graphics/glutils/FileTextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/Texture_1.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters_LoadedCallback.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/TextureData_Factory.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/util/Map.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureParameter.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Texture_assetManager;
jobject SF_com_badlogic_gdx_graphics_Texture_managedTextures;

void mark_com_badlogic_gdx_graphics_Texture(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Texture_assetManager)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture_assetManager)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture_assetManager, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Texture_managedTextures)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Texture_managedTextures)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Texture_managedTextures, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_GLTexture(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_Texture *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(110);
	init_com_badlogic_gdx_graphics_GLTexture_int_int(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(122);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].i));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[1].o), (frame[2].o), (frame[3].i));
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[1].o, (frame[1].o), (jobject(nullptr)), (jint(0)), (jint(0)));
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[1].o, (frame[1].o), (jobject(nullptr)), (frame[2].i), (jint(0)));
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].i), (jint(0)));
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_int_int_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[2].o, (frame[1].i), (frame[2].i), (frame[3].o));
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[1].o, sp[2].o, (jobject(nullptr)), (jint(0)), (jint(1)));
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	jint temp0 = 3553;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int, sp[1].o))(ctx, sp[1].o);
	init_com_badlogic_gdx_graphics_Texture_int_int_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, temp0, temp1, (frame[1].o));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Texture_int_int_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(150);
	init_com_badlogic_gdx_graphics_GLTexture_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(151);
	((func_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	SM_com_badlogic_gdx_graphics_Texture_addManagedTexture_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
	{
	LINE_NUMBER(157);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"New data must have the same managed status as the old data"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(158);
	((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_prepare, sp[0].o))(ctx, sp[0].o);
label_4:;
	{
	LINE_NUMBER(162);
	((func_com_badlogic_gdx_graphics_Texture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(163);
	SM_com_badlogic_gdx_graphics_GLTexture_uploadImageData_int_com_badlogic_gdx_graphics_TextureData(ctx, (3553), (frame[1].o));
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_Texture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	((func_com_badlogic_gdx_graphics_Texture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(167);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Texture_unsafeSetAnisotropicFilter_float_boolean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_unsafeSetAnisotropicFilter_float_boolean_R_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_anisotropicFilterLevel), (jint(1)));
	LINE_NUMBER(168);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glBindTexture_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindTexture_int_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (jint(0)));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Texture_reload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:reload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture_isManaged_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_isManaged_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Tried to reload unmanaged Texture"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_glHandle = temp0;
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	((func_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Texture_draw_com_badlogic_gdx_graphics_Pixmap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"can't draw to a managed texture"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(189);
	((func_com_badlogic_gdx_graphics_Texture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(190);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = jint(0);
	jint temp2 = frame[2].i;
	jint temp3 = frame[3].i;
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[1].o));
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, (frame[1].o));
	sp[1].o = frame[1].o;
	LINE_NUMBER(191);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, sp[1].o);
	LINE_NUMBER(190);
	((func_com_badlogic_gdx_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Texture_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Texture_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Texture_getDepth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:getDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Texture_getTextureData_R_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:getTextureData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_Texture_isManaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:isManaged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Texture_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	if (((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(225);
	((func_com_badlogic_gdx_graphics_Texture_delete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_delete])(ctx, (frame[0].o));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o)), (frame[0].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(227);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Texture_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_graphics_glutils_FileTextureData)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Texture_addManagedTexture_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:addManagedTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(235);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(236);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(237);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(238);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[2].o));
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Texture_clearAllTextures_com_badlogic_gdx_Application(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:clearAllTextures", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(243);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Texture_invalidateAllTextures_com_badlogic_gdx_Application(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:invalidateAllTextures", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(248);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(249);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(251);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_assetManager;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(252);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	LINE_NUMBER(254);
	((func_com_badlogic_gdx_graphics_Texture_reload) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_reload])(ctx, (frame[3].o));
	LINE_NUMBER(252);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	goto label_10;
label_3:;
	{
	LINE_NUMBER(260);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_assetManager;
	((func_com_badlogic_gdx_assets_AssetManager_finishLoading) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_finishLoading])(ctx, sp[0].o);
	LINE_NUMBER(264);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	LINE_NUMBER(266);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_assetManager;
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(267);
	if ((frame[5].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(268);
	((func_com_badlogic_gdx_graphics_Texture_reload) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_reload])(ctx, (frame[4].o));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(274);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_assetManager;
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_getReferenceCount_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_getReferenceCount_java_lang_String_R_int])(ctx, sp[0].o, (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(275);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_assetManager;
	((func_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int])(ctx, sp[0].o, (frame[5].o), (jint(0)));
	LINE_NUMBER(276);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[4].o)))->F_glHandle = (jint(0));
	LINE_NUMBER(280);
	clinit_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter);
	init_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(281);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getTextureData_R_com_badlogic_gdx_graphics_TextureData) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getTextureData_R_com_badlogic_gdx_graphics_TextureData])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_textureData = (jref) sp[1].o;
	LINE_NUMBER(282);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(283);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(284);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_wrapU = (jref) sp[1].o;
	LINE_NUMBER(285);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_wrapV = (jref) sp[1].o;
	LINE_NUMBER(286);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Texture *) NULL_CHECK((frame[4].o)))->F_data;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_TextureData_useMipMaps_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_useMipMaps_R_boolean, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_genMipMaps = temp1;
	LINE_NUMBER(287);
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[7].o)))->F_texture = (jref) (frame[4].o);
	LINE_NUMBER(288);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_graphics_Texture$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture$1);
	init_com_badlogic_gdx_graphics_Texture$1_int(ctx, sp[1].o, (frame[6].i));
	((com_badlogic_gdx_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback = (jref) sp[1].o;
	LINE_NUMBER(296);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_assetManager;
	((func_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(297);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_glHandle = temp2;
	LINE_NUMBER(298);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_assetManager;
	((func_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters])(ctx, sp[0].o, (frame[5].o), (((jobject) &class_com_badlogic_gdx_graphics_Texture)), (frame[7].o));
	}
label_19:;
	LINE_NUMBER(300);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(301);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[1].o));
	LINE_NUMBER(302);
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, (frame[1].o), (frame[2].o));
	}
label_10:;
	LINE_NUMBER(304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Texture_setAssetManager_com_badlogic_gdx_assets_AssetManager(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:setAssetManager", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(311);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	SF_com_badlogic_gdx_graphics_Texture_assetManager = (frame[0].o);
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Texture_getManagedStatus_R_java_lang_String(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:getManagedStatus", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	{
	LINE_NUMBER(315);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Managed textures/app: { "_j))));
	LINE_NUMBER(317);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_Application, sp[0].o));
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	sp[1].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[1].o))))->F_size));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(320);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Texture_getNumManagedTextures_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:getNumManagedTextures", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	{
	LINE_NUMBER(327);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Texture_managedTextures;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o))))->F_size);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Texture(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Texture:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	{
	LINE_NUMBER(50);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	SF_com_badlogic_gdx_graphics_Texture_managedTextures = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Texture[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_Texture_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_Texture_dispose,
	(void *) M_com_badlogic_gdx_graphics_Texture_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_Texture_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_Texture_getDepth_R_int,
	(void *) M_com_badlogic_gdx_graphics_Texture_isManaged_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_Texture_reload,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_bind,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_bind_int,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_boolean_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setAnisotropicFilter_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getAnisotropicFilter_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_delete,
	(void *) M_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData,
	(void *) M_com_badlogic_gdx_graphics_Texture_draw_com_badlogic_gdx_graphics_Pixmap_int_int,
	(void *) M_com_badlogic_gdx_graphics_Texture_getTextureData_R_com_badlogic_gdx_graphics_TextureData,
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
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getDepth", "()I" },
	{ "isManaged", "()Z" },
	{ "reload", "()V" },
	{ "bind", "()V" },
	{ "bind", "(I)V" },
	{ "getMinFilter", "()Lcom/badlogic/gdx/graphics/Texture$TextureFilter;" },
	{ "getMagFilter", "()Lcom/badlogic/gdx/graphics/Texture$TextureFilter;" },
	{ "getUWrap", "()Lcom/badlogic/gdx/graphics/Texture$TextureWrap;" },
	{ "getVWrap", "()Lcom/badlogic/gdx/graphics/Texture$TextureWrap;" },
	{ "getTextureObjectHandle", "()I" },
	{ "unsafeSetWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Z)V" },
	{ "setWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V" },
	{ "setFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetAnisotropicFilter", "(F)F" },
	{ "unsafeSetAnisotropicFilter", "(FZ)F" },
	{ "setAnisotropicFilter", "(F)F" },
	{ "getAnisotropicFilter", "()F" },
	{ "delete", "()V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/TextureData;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Pixmap;II)V" },
	{ "getTextureData", "()Lcom/badlogic/gdx/graphics/TextureData;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_Texture$TextureFilter,
	&class_com_badlogic_gdx_graphics_Texture$TextureWrap,
};

static FieldMetadata fields[] {
	{ "assetManager", &class_com_badlogic_gdx_assets_AssetManager, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture_assetManager, "Lcom/badlogic/gdx/assets/AssetManager;", 10 },
	{ "managedTextures", &class_java_util_Map, (intptr_t) &SF_com_badlogic_gdx_graphics_Texture_managedTextures, "Ljava/util/Map;", 24 },
	{ "data", &class_com_badlogic_gdx_graphics_TextureData, offsetof(com_badlogic_gdx_graphics_Texture, F_data), "Lcom/badlogic/gdx/graphics/TextureData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap$Format;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap_boolean, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap$Format;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_int_int_com_badlogic_gdx_graphics_Pixmap$Format, 0, "(IILcom/badlogic/gdx/graphics/Pixmap$Format;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData, 0, "(Lcom/badlogic/gdx/graphics/TextureData;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Texture_int_int_com_badlogic_gdx_graphics_TextureData, 0, "(IILcom/badlogic/gdx/graphics/TextureData;)V", 4 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData, VTABLE_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData, "(Lcom/badlogic/gdx/graphics/TextureData;)V", 1 },
	{ "reload", (intptr_t) M_com_badlogic_gdx_graphics_Texture_reload, VTABLE_com_badlogic_gdx_graphics_Texture_reload, "()V", 4 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_Texture_draw_com_badlogic_gdx_graphics_Pixmap_int_int, VTABLE_com_badlogic_gdx_graphics_Texture_draw_com_badlogic_gdx_graphics_Pixmap_int_int, "(Lcom/badlogic/gdx/graphics/Pixmap;II)V", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_Texture_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_Texture_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int, "()I", 1 },
	{ "getDepth", (intptr_t) M_com_badlogic_gdx_graphics_Texture_getDepth_R_int, VTABLE_com_badlogic_gdx_graphics_Texture_getDepth_R_int, "()I", 1 },
	{ "getTextureData", (intptr_t) M_com_badlogic_gdx_graphics_Texture_getTextureData_R_com_badlogic_gdx_graphics_TextureData, VTABLE_com_badlogic_gdx_graphics_Texture_getTextureData_R_com_badlogic_gdx_graphics_TextureData, "()Lcom/badlogic/gdx/graphics/TextureData;", 1 },
	{ "isManaged", (intptr_t) M_com_badlogic_gdx_graphics_Texture_isManaged_R_boolean, VTABLE_com_badlogic_gdx_graphics_Texture_isManaged_R_boolean, "()Z", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_Texture_dispose, VTABLE_com_badlogic_gdx_graphics_Texture_dispose, "()V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_Texture_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_Texture_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "addManagedTexture", (intptr_t) SM_com_badlogic_gdx_graphics_Texture_addManagedTexture_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Texture, 0, "(Lcom/badlogic/gdx/Application;Lcom/badlogic/gdx/graphics/Texture;)V", 10 },
	{ "clearAllTextures", (intptr_t) SM_com_badlogic_gdx_graphics_Texture_clearAllTextures_com_badlogic_gdx_Application, 0, "(Lcom/badlogic/gdx/Application;)V", 9 },
	{ "invalidateAllTextures", (intptr_t) SM_com_badlogic_gdx_graphics_Texture_invalidateAllTextures_com_badlogic_gdx_Application, 0, "(Lcom/badlogic/gdx/Application;)V", 9 },
	{ "setAssetManager", (intptr_t) SM_com_badlogic_gdx_graphics_Texture_setAssetManager_com_badlogic_gdx_assets_AssetManager, 0, "(Lcom/badlogic/gdx/assets/AssetManager;)V", 9 },
	{ "getManagedStatus", (intptr_t) SM_com_badlogic_gdx_graphics_Texture_getManagedStatus_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "getNumManagedTextures", (intptr_t) SM_com_badlogic_gdx_graphics_Texture_getNumManagedTextures_R_int, 0, "()I", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Texture, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Texture{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Texture",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_GLTexture,
		.size = sizeof(com_badlogic_gdx_graphics_Texture),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Texture,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Texture,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Texture,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Texture = registerClass(&class_com_badlogic_gdx_graphics_Texture);

}

