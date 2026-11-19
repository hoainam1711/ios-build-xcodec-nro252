#ifndef HEADER_com_badlogic_gdx_graphics_Pixmap
#define HEADER_com_badlogic_gdx_graphics_Pixmap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_Pixmap {
	java_lang_Object parent;
	jref F_blending;
	jref F_filter;
	jref F_pixmap;
	jint F_color;
	jbool F_disposed;
} com_badlogic_gdx_graphics_Pixmap;

extern Class class_com_badlogic_gdx_graphics_Pixmap;


#define VTABLE_com_badlogic_gdx_graphics_Pixmap_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_Pixmap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_Pixmap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_Pixmap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_Pixmap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_Pixmap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_notify 6
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_wait 8
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose 11
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending 12
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_setFilter_com_badlogic_gdx_graphics_Pixmap$Filter 13
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_setFilter_com_badlogic_gdx_graphics_Pixmap$Filter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_int 14
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_setColor_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float 15
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color 16
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_fill 17
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_fill)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_drawLine_int_int_int_int 18
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_drawLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_drawRectangle_int_int_int_int 19
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_drawRectangle_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int 20
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int 21
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int 22
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int 23
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_drawCircle_int_int_int 24
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_drawCircle_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int 25
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_fillTriangle_int_int_int_int_int_int 26
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_fillTriangle_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int 27
typedef jint (*func_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int 28
typedef jint (*func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int 29
typedef jint (*func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_isDisposed_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_graphics_Pixmap_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int 31
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int 32
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int 33
typedef jint (*func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int 34
typedef jint (*func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int 35
typedef jint (*func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer 36
typedef jobject (*func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_setPixels_java_nio_ByteBuffer 37
typedef void (*func_com_badlogic_gdx_graphics_Pixmap_setPixels_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format 38
typedef jobject (*func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getBlending_R_com_badlogic_gdx_graphics_Pixmap$Blending 39
typedef jobject (*func_com_badlogic_gdx_graphics_Pixmap_getBlending_R_com_badlogic_gdx_graphics_Pixmap$Blending)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Pixmap_getFilter_R_com_badlogic_gdx_graphics_Pixmap$Filter 40
typedef jobject (*func_com_badlogic_gdx_graphics_Pixmap_getFilter_R_com_badlogic_gdx_graphics_Pixmap$Filter)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_graphics_Pixmap(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_Pixmap(jcontext ctx);
jobject SM_com_badlogic_gdx_graphics_Pixmap_createFromFrameBuffer_int_int_int_int_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_Pixmap_setFilter_com_badlogic_gdx_graphics_Pixmap$Filter(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void init_com_badlogic_gdx_graphics_Pixmap_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_com_badlogic_gdx_graphics_Pixmap_java_nio_ByteBuffer_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_com_badlogic_gdx_graphics_Pixmap_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jcontext ctx, jobject self, jobject param0);
void SM_com_badlogic_gdx_graphics_Pixmap_downloadFromUrl_java_lang_String_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener(jcontext ctx, jobject param0, jobject param1);
void M_com_badlogic_gdx_graphics_Pixmap_setColor_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_Pixmap_fill(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_Pixmap_drawLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_graphics_Pixmap_drawRectangle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void M_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_graphics_Pixmap_drawCircle_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_com_badlogic_gdx_graphics_Pixmap_fillTriangle_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jint M_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_Pixmap_dispose(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_graphics_Pixmap_isDisposed_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_Pixmap_setPixels_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_Pixmap_getBlending_R_com_badlogic_gdx_graphics_Pixmap$Blending(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_Pixmap_getFilter_R_com_badlogic_gdx_graphics_Pixmap$Filter(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
