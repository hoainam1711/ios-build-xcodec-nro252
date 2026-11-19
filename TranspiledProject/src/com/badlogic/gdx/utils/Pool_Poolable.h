#ifndef HEADER_com_badlogic_gdx_utils_Pool$Poolable
#define HEADER_com_badlogic_gdx_utils_Pool$Poolable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Pool$Poolable {
	java_lang_Object parent;
} com_badlogic_gdx_utils_Pool$Poolable;

extern Class class_com_badlogic_gdx_utils_Pool$Poolable;


#define INDEX_com_badlogic_gdx_utils_Pool$Poolable_reset 0
typedef void (*func_com_badlogic_gdx_utils_Pool$Poolable_reset)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_Pool$Poolable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Pool$Poolable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
