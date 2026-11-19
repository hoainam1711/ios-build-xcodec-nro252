#ifndef HEADER_com_badlogic_gdx_graphics_CubemapData
#define HEADER_com_badlogic_gdx_graphics_CubemapData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_CubemapData {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_CubemapData;

extern Class class_com_badlogic_gdx_graphics_CubemapData;


#define INDEX_com_badlogic_gdx_graphics_CubemapData_isPrepared_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_graphics_CubemapData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_CubemapData_prepare 1
typedef void (*func_com_badlogic_gdx_graphics_CubemapData_prepare)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_CubemapData_consumeCubemapData 2
typedef void (*func_com_badlogic_gdx_graphics_CubemapData_consumeCubemapData)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_CubemapData_getWidth_R_int 3
typedef jint (*func_com_badlogic_gdx_graphics_CubemapData_getWidth_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_CubemapData_getHeight_R_int 4
typedef jint (*func_com_badlogic_gdx_graphics_CubemapData_getHeight_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_CubemapData_isManaged_R_boolean 5
typedef jbool (*func_com_badlogic_gdx_graphics_CubemapData_isManaged_R_boolean)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_graphics_CubemapData(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_CubemapData(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
