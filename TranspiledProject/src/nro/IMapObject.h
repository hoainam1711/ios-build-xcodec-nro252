#ifndef HEADER_nro_IMapObject
#define HEADER_nro_IMapObject

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_IMapObject {
	java_lang_Object parent;
} nro_IMapObject;

extern Class class_nro_IMapObject;


#define INDEX_nro_IMapObject_getX_R_int 0
typedef jint (*func_nro_IMapObject_getX_R_int)(jcontext ctx, jobject self);
#define INDEX_nro_IMapObject_getY_R_int 1
typedef jint (*func_nro_IMapObject_getY_R_int)(jcontext ctx, jobject self);
#define INDEX_nro_IMapObject_getW_R_int 2
typedef jint (*func_nro_IMapObject_getW_R_int)(jcontext ctx, jobject self);
#define INDEX_nro_IMapObject_getH_R_int 3
typedef jint (*func_nro_IMapObject_getH_R_int)(jcontext ctx, jobject self);
#define INDEX_nro_IMapObject_stopMoving 4
typedef void (*func_nro_IMapObject_stopMoving)(jcontext ctx, jobject self);
#define INDEX_nro_IMapObject_isInvisible_R_boolean 5
typedef jbool (*func_nro_IMapObject_isInvisible_R_boolean)(jcontext ctx, jobject self);

void mark_nro_IMapObject(jobject object, jint mark, jint depth);
void clinit_nro_IMapObject(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
