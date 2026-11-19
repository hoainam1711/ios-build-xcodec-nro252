#ifndef HEADER_com_badlogic_gdx_assets_AssetErrorListener
#define HEADER_com_badlogic_gdx_assets_AssetErrorListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_assets_AssetErrorListener {
	java_lang_Object parent;
} com_badlogic_gdx_assets_AssetErrorListener;

extern Class class_com_badlogic_gdx_assets_AssetErrorListener;


#define INDEX_com_badlogic_gdx_assets_AssetErrorListener_error_com_badlogic_gdx_assets_AssetDescriptor_java_lang_Throwable 0
typedef void (*func_com_badlogic_gdx_assets_AssetErrorListener_error_com_badlogic_gdx_assets_AssetDescriptor_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_com_badlogic_gdx_assets_AssetErrorListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_assets_AssetErrorListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
