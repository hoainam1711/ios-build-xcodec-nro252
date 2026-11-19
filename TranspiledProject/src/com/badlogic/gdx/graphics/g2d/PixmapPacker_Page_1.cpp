#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page_1.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/graphics/Texture.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_Texture(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(502);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page$1:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(505);
	M_com_badlogic_gdx_graphics_Texture_dispose(ctx, (frame[0].o));
	LINE_NUMBER(506);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1_dispose,
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

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1, F_this$0), "Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Page;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_com_badlogic_gdx_graphics_TextureData, 0, "(Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Page;Lcom/badlogic/gdx/graphics/TextureData;)V", 0 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1_dispose, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_Texture,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1 = registerClass(&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1);

}

