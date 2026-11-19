#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider_FileTextureProvider.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider_FileTextureProvider.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) object;
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_uWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uWrap)->clazz)->markFunction)((jobject) self->F_uWrap, mark, depth + 1);
	if (self->F_vWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vWrap)->clazz)->markFunction)((jobject) self->F_vWrap, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureProvider$FileTextureProvider:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK(sp[1].o))->F_magFilter = (jref) sp[2].o;
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[2].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureWrap_Repeat;
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK(sp[1].o))->F_vWrap = (jref) sp[2].o;
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK(sp[0].o))->F_uWrap = (jref) sp[2].o;
	LINE_NUMBER(38);
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (jint(0));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureProvider$FileTextureProvider:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_minFilter = (jref) (frame[1].o);
	LINE_NUMBER(44);
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_magFilter = (jref) (frame[2].o);
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_uWrap = (jref) (frame[3].o);
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_vWrap = (jref) (frame[4].o);
	LINE_NUMBER(47);
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[5].i);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureProvider$FileTextureProvider:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_useMipMaps));
	frame[2].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_minFilter;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(54);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_uWrap;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider *) NULL_CHECK((frame[0].o)))->F_vWrap;
	((func_com_badlogic_gdx_graphics_Texture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture,
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
	{ "load", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Texture;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider, };

static FieldMetadata fields[] {
	{ "minFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider, F_minFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 2 },
	{ "magFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider, F_magFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 2 },
	{ "uWrap", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider, F_uWrap), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 2 },
	{ "vWrap", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider, F_vWrap), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 2 },
	{ "useMipMaps", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider, F_useMipMaps), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean, 0, "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Z)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Texture;", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/utils/TextureProvider$FileTextureProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider = registerClass(&class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider);

}

