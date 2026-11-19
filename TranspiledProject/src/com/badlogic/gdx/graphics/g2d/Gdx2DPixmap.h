#ifndef HEADER_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap
#define HEADER_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_Gdx2DPixmap {
	java_lang_Object parent;
	jlong F_basePtr;
	jint F_width;
	jint F_height;
	jint F_format;
	jref F_pixelPtr;
	jref F_nativeData;
} com_badlogic_gdx_graphics_g2d_Gdx2DPixmap;

extern Class class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap;

extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_ALPHA;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_LUMINANCE_ALPHA;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGB888;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGBA8888;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGB565;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGBA4444;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_SCALE_NEAREST;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_SCALE_LINEAR;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_BLEND_NONE;
extern jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_BLEND_SRC_OVER;

#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose 11
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int 12
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int 13
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int 14
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int 15
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int 16
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int 17
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int 18
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int 19
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int 20
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int 21
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int 22
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int 23
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int 24
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int 25
typedef void (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer 26
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int 27
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int 28
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int 29
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int 30
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int 31
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int 32
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_R_java_lang_String 33
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_R_java_lang_String)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jcontext ctx);
jint SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlFormat_int_R_int(jcontext ctx, jint param0);
jint SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlType_int_R_int(jcontext ctx, jint param0);
void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_Array1_byte_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_nio_ByteBuffer_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_nio_ByteBuffer_Array1_long(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int(jcontext ctx, jobject self, jint param0);
jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_java_io_InputStream_int_R_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jcontext ctx, jobject param0, jint param1);
jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_int_int_int_R_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jcontext ctx, jint param0, jint param1, jint param2);
jobject M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_load_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_loadByteBuffer_Array1_long_java_nio_ByteBuffer_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_Array1_long_int_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_free_long(jcontext ctx, jlong param0);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_long_int(jcontext ctx, jlong param0, jint param1);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_long_int_int_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3);
jint SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_long_int_int_R_int(jcontext ctx, jlong param0, jint param1, jint param2);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_long_int_int_int_int_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_long_int_int_int_int_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_long_int_int_int_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3, jint param4);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_long_int_int_int_int_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_long_int_int_int_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3, jint param4);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_long_int_int_int_int_int_int_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_long_long_int_int_int_int_int_int_int_int(jcontext ctx, jlong param0, jlong param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_long_int(jcontext ctx, jlong param0, jint param1);
void SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_long_int(jcontext ctx, jlong param0, jint param1);
jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFailureReason_R_java_lang_String(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
