#ifndef HEADER_com_badlogic_gdx_assets_loaders_FileHandleResolver
#define HEADER_com_badlogic_gdx_assets_loaders_FileHandleResolver

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_assets_loaders_FileHandleResolver {
	java_lang_Object parent;
} com_badlogic_gdx_assets_loaders_FileHandleResolver;

extern Class class_com_badlogic_gdx_assets_loaders_FileHandleResolver;


#define INDEX_com_badlogic_gdx_assets_loaders_FileHandleResolver_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle 0
typedef jobject (*func_com_badlogic_gdx_assets_loaders_FileHandleResolver_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_assets_loaders_FileHandleResolver(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
