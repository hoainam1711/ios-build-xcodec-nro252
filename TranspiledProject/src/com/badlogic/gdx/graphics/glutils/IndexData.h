#ifndef HEADER_com_badlogic_gdx_graphics_glutils_IndexData
#define HEADER_com_badlogic_gdx_graphics_glutils_IndexData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_glutils_IndexData {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_glutils_IndexData;

extern Class class_com_badlogic_gdx_graphics_glutils_IndexData;


#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int 1
typedef jint (*func_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_Array1_short_int_int 2
typedef void (*func_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_java_nio_ShortBuffer 3
typedef void (*func_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_updateIndices_int_Array1_short_int_int 4
typedef void (*func_com_badlogic_gdx_graphics_glutils_IndexData_updateIndices_int_Array1_short_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_R_java_nio_ShortBuffer 5
typedef jobject (*func_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer 6
typedef jobject (*func_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jbool param0);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_bind 7
typedef void (*func_com_badlogic_gdx_graphics_glutils_IndexData_bind)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_unbind 8
typedef void (*func_com_badlogic_gdx_graphics_glutils_IndexData_unbind)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_invalidate 9
typedef void (*func_com_badlogic_gdx_graphics_glutils_IndexData_invalidate)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_glutils_IndexData_dispose 10
typedef void (*func_com_badlogic_gdx_graphics_glutils_IndexData_dispose)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_graphics_glutils_IndexData(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_glutils_IndexData(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
