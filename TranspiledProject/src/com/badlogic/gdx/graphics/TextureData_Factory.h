#ifndef HEADER_com_badlogic_gdx_graphics_TextureData$Factory
#define HEADER_com_badlogic_gdx_graphics_TextureData$Factory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_TextureData$Factory {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_TextureData$Factory;

extern Class class_com_badlogic_gdx_graphics_TextureData$Factory;


#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_TextureData$Factory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_TextureData$Factory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_TextureData$Factory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_TextureData$Factory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_TextureData$Factory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_TextureData$Factory_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_notify 6
typedef void (*func_com_badlogic_gdx_graphics_TextureData$Factory_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_TextureData$Factory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_wait 8
typedef void (*func_com_badlogic_gdx_graphics_TextureData$Factory_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_TextureData$Factory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_TextureData$Factory_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_TextureData$Factory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_graphics_TextureData$Factory(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_TextureData$Factory(jcontext ctx);
void init_com_badlogic_gdx_graphics_TextureData$Factory(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject param0, jbool param1);
jobject SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean_R_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject param0, jobject param1, jbool param2);

#ifdef __cplusplus
}
#endif

#endif
