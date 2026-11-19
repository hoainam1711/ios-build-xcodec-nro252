#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/utils/ObjectSet_ObjectSetIterator.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Page.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_2.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_1.h"
#include "com/badlogic/gdx/graphics/g2d/NinePatch.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Region.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasSprite.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_TextureAtlas *) object;
	if (self->F_textures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textures)->clazz)->markFunction)((jobject) self->F_textures, mark, depth + 1);
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(48);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectSet);
	init_com_badlogic_gdx_utils_ObjectSet_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].i));
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectSet);
	init_com_badlogic_gdx_utils_ObjectSet_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(78);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas_load_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_load_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas_load_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:load", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[1].o)))->F_pages;
	((func_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, sp[0].o));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_textureFile;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_format;
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_useMipMaps));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_texture;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_minFilter;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_texture;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_uWrap;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_vWrap;
	((func_com_badlogic_gdx_graphics_Texture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[3].o)))->F_texture;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[1].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[1].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, sp[0].o));
	LINE_NUMBER(93);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_page;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK(sp[1].o))->F_texture;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_left;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_top;
	LINE_NUMBER(94);
	jobject temp2 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp2;
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp += 5;
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_rotate) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_height;
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ALOAD(3);
	sp[-1].i = ((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[-1].o))->F_width;
label_15:;
	{
	LINE_NUMBER(95);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_rotate) == 0) goto label_16;
	}
	{
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_width;
	sp[0].i = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_ALOAD(3);
	sp[-1].i = ((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[-1].o))->F_height;
label_17:;
	{
	sp -= 7;
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, sp[0].o, sp[2].o, sp[3].i, sp[4].i, sp[5].i, sp[6].i);
	frame[4].o = sp[0].o;
	LINE_NUMBER(96);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_index = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_index);
	LINE_NUMBER(97);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_name;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(98);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_offsetX = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_offsetX);
	LINE_NUMBER(99);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_offsetY = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_offsetY);
	LINE_NUMBER(100);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_originalHeight = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_originalHeight);
	LINE_NUMBER(101);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_originalWidth = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_originalWidth);
	LINE_NUMBER(102);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_rotate = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_rotate);
	LINE_NUMBER(103);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_degrees = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_degrees);
	LINE_NUMBER(104);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_names;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_names = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_values;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(106);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[3].o)))->F_flip) == 0) goto label_29;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean])(ctx, (frame[4].o), (jint(0)), (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(108);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_addRegion_java_lang_String_com_badlogic_gdx_graphics_Texture_int_int_int_int_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:addRegion", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(114);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, sp[0].o, (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(115);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_addRegion_java_lang_String_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:addRegion", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_texture;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(123);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(124);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[3].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_getRegions_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:getRegions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:findRegion", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	}
label_5:;
	{
	LINE_NUMBER(137);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:findRegion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(145);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
	goto label_7;
label_6:;
	{
	LINE_NUMBER(148);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_index) == (frame[2].i)) goto label_8;
	}
	goto label_7;
label_8:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_7:;
	{
	LINE_NUMBER(145);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegions_java_lang_String_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:findRegions", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(159);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx, sp[1].o, (frame[5].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(159);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprites_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:createSprites", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	jint temp1 = (jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_1);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(171);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[2].o, (frame[2].i));
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_g2d_TextureAtlas_newSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_R_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[2].o)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(171);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:createSprite", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_TextureAtlas_newSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_R_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(181);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:createSprite", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(190);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(192);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_index) == (frame[2].i)) goto label_6;
	}
	goto label_7;
label_6:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	goto label_7;
label_8:;
	{
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_TextureAtlas_newSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_R_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(190);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprites_java_lang_String_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:createSprites", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_2(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_2 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas_invoke_com_badlogic_gdx_utils_ArraySupplier_2);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(205);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_g2d_TextureAtlas_newSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_R_com_badlogic_gdx_graphics_g2d_Sprite(ctx, (frame[0].o), (frame[5].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(205);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_newSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_R_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:newSprite", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_packedWidth) != ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_originalWidth)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_packedHeight) != ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_originalHeight)) goto label_1;
	}
	{
	LINE_NUMBER(214);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_rotate) == 0) goto label_3;
	}
	{
	LINE_NUMBER(215);
	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite);
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(216);
	sp[0].o = frame[2].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRegionHeight_R_int])(ctx, (frame[1].o));
	jfloat temp3 = jfloat(temp2);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRegionWidth_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(217);
	((func_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(220);
	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite);
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(222);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:createPatch", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(231);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"split"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(233);
	if ((frame[5].o) != nullptr) goto label_9;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Region does not have ninepatch splits: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(234);
	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch);
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[0].o, (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(1)))), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(2)))), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(3)))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"pad"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(236);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_setPadding_float_float_float_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setPadding_float_float_float_float])(ctx, (frame[6].o), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(1)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(2)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(3)))))));
	}
label_12:;
	{
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_6:;
	{
	LINE_NUMBER(229);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas_getTextures_R_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:getTextures", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	LINE_NUMBER(252);
	((func_com_badlogic_gdx_graphics_Texture_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_dispose])(ctx, (frame[2].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	((func_com_badlogic_gdx_utils_ObjectSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_clear_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_TextureAtlas_lambda$createSprites$2_int_R_Array1_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:lambda$createSprites$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_TextureAtlas_lambda$createSprites$1_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:lambda$createSprites$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_TextureAtlas_lambda$findRegions$0_int_R_Array1_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas:lambda$findRegions$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_load_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_addRegion_java_lang_String_com_badlogic_gdx_graphics_Texture_int_int_int_int_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_addRegion_java_lang_String_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_getRegions_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegions_java_lang_String_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprites_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprites_java_lang_String_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_newSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_R_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_getTextures_R_com_badlogic_gdx_utils_ObjectSet,
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
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData;)V" },
	{ "addRegion", "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Texture;IIII)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "addRegion", "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "getRegions", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "findRegion", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "findRegion", "(Ljava/lang/String;I)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "findRegions", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Array;" },
	{ "createSprites", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "createSprite", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/Sprite;" },
	{ "createSprite", "(Ljava/lang/String;I)Lcom/badlogic/gdx/graphics/g2d/Sprite;" },
	{ "createSprites", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Array;" },
	{ "newSprite", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;)Lcom/badlogic/gdx/graphics/g2d/Sprite;" },
	{ "createPatch", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/NinePatch;" },
	{ "getTextures", "()Lcom/badlogic/gdx/utils/ObjectSet;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData,
	&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
	&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite,
};

static FieldMetadata fields[] {
	{ "textures", &class_com_badlogic_gdx_utils_ObjectSet, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas, F_textures), "Lcom/badlogic/gdx/utils/ObjectSet;", 18 },
	{ "regions", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas, F_regions), "Lcom/badlogic/gdx/utils/Array;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_load_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_load_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData;)V", 1 },
	{ "addRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_addRegion_java_lang_String_com_badlogic_gdx_graphics_Texture_int_int_int_int_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_addRegion_java_lang_String_com_badlogic_gdx_graphics_Texture_int_int_int_int_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Texture;IIII)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "addRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_addRegion_java_lang_String_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_addRegion_java_lang_String_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "getRegions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_getRegions_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_getRegions_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "findRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "findRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, "(Ljava/lang/String;I)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "findRegions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegions_java_lang_String_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegions_java_lang_String_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "createSprites", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprites_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprites_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "createSprite", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/Sprite;", 1 },
	{ "createSprite", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_Sprite, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_Sprite, "(Ljava/lang/String;I)Lcom/badlogic/gdx/graphics/g2d/Sprite;", 1 },
	{ "createSprites", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprites_java_lang_String_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprites_java_lang_String_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "newSprite", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_newSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_R_com_badlogic_gdx_graphics_g2d_Sprite, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_newSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_R_com_badlogic_gdx_graphics_g2d_Sprite, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;)Lcom/badlogic/gdx/graphics/g2d/Sprite;", 2 },
	{ "createPatch", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/NinePatch;", 1 },
	{ "getTextures", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_getTextures_R_com_badlogic_gdx_utils_ObjectSet, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_getTextures_R_com_badlogic_gdx_utils_ObjectSet, "()Lcom/badlogic/gdx/utils/ObjectSet;", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_dispose, "()V", 1 },
	{ "lambda$createSprites$2", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_TextureAtlas_lambda$createSprites$2_int_R_Array1_com_badlogic_gdx_graphics_g2d_Sprite, 0, "(I)[Lcom/badlogic/gdx/graphics/g2d/Sprite;", 4106 },
	{ "lambda$createSprites$1", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_TextureAtlas_lambda$createSprites$1_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$findRegions$0", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_TextureAtlas_lambda$findRegions$0_int_R_Array1_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, 0, "(I)[Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/TextureAtlas",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_TextureAtlas),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_TextureAtlas,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_TextureAtlas = registerClass(&class_com_badlogic_gdx_graphics_g2d_TextureAtlas);

}

