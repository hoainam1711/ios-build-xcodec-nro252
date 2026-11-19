#ifndef HEADER_com_badlogic_gdx_graphics_PixmapIO$PNG
#define HEADER_com_badlogic_gdx_graphics_PixmapIO$PNG

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_PixmapIO$PNG {
	java_lang_Object parent;
	jref F_buffer;
	jref F_deflater;
	jref F_lineOutBytes;
	jref F_curLineBytes;
	jref F_prevLineBytes;
	jbool F_flipY;
	jint F_lastLineLen;
} com_badlogic_gdx_graphics_PixmapIO$PNG;

extern Class class_com_badlogic_gdx_graphics_PixmapIO$PNG;

extern jobject SF_com_badlogic_gdx_graphics_PixmapIO$PNG_SIGNATURE;
extern jint SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IHDR;
extern jint SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IDAT;
extern jint SF_com_badlogic_gdx_graphics_PixmapIO$PNG_IEND;
extern jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_COLOR_ARGB;
extern jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_COMPRESSION_DEFLATE;
extern jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_FILTER_NONE;
extern jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_INTERLACE_NONE;
extern jbyte SF_com_badlogic_gdx_graphics_PixmapIO$PNG_PAETH;

#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_notify 6
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_wait 8
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose 11
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean 12
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int 13
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap 14
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap 15
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_com_badlogic_gdx_graphics_PixmapIO$PNG(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_PixmapIO$PNG(jcontext ctx);
void init_com_badlogic_gdx_graphics_PixmapIO$PNG(jcontext ctx, jobject self);
void init_com_badlogic_gdx_graphics_PixmapIO$PNG_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean(jcontext ctx, jobject self, jbool param0);
void M_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_graphics_PixmapIO$PNG_write_java_io_OutputStream_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
