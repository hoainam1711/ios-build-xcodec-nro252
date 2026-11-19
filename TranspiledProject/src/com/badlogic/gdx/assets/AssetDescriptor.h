#ifndef HEADER_com_badlogic_gdx_assets_AssetDescriptor
#define HEADER_com_badlogic_gdx_assets_AssetDescriptor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_assets_AssetDescriptor {
	java_lang_Object parent;
	jref F_fileName;
	jref F_type;
	jref F_params;
	jref F_file;
} com_badlogic_gdx_assets_AssetDescriptor;

extern Class class_com_badlogic_gdx_assets_AssetDescriptor;


#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_assets_AssetDescriptor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_assets_AssetDescriptor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_assets_AssetDescriptor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_assets_AssetDescriptor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_assets_AssetDescriptor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_finalize 5
typedef void (*func_com_badlogic_gdx_assets_AssetDescriptor_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_notify 6
typedef void (*func_com_badlogic_gdx_assets_AssetDescriptor_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_notifyAll 7
typedef void (*func_com_badlogic_gdx_assets_AssetDescriptor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_wait 8
typedef void (*func_com_badlogic_gdx_assets_AssetDescriptor_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_wait_long 9
typedef void (*func_com_badlogic_gdx_assets_AssetDescriptor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_assets_AssetDescriptor_wait_long_int 10
typedef void (*func_com_badlogic_gdx_assets_AssetDescriptor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_assets_AssetDescriptor(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_assets_AssetDescriptor(jcontext ctx);
void init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_com_badlogic_gdx_assets_AssetDescriptor_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
