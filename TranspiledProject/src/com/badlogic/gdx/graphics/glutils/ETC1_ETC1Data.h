#ifndef HEADER_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data
#define HEADER_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data {
	java_lang_Object parent;
	jint F_width;
	jint F_height;
	jref F_compressedData;
	jint F_dataOffset;
} com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data;

extern Class class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data;


#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_notify 6
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_wait 8
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose 11
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT 12
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean 13
typedef jbool (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_write_com_badlogic_gdx_files_FileHandle 14
typedef void (*func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_write_com_badlogic_gdx_files_FileHandle)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(jcontext ctx);
void init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_int_int_java_nio_ByteBuffer_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_checkNPOT(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_write_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_dispose(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
