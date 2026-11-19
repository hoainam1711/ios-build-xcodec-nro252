#ifndef HEADER_com_badlogic_gdx_utils_Disposable
#define HEADER_com_badlogic_gdx_utils_Disposable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Disposable {
	java_lang_Object parent;
} com_badlogic_gdx_utils_Disposable;

extern Class class_com_badlogic_gdx_utils_Disposable;


#define INDEX_com_badlogic_gdx_utils_Disposable_dispose 0
typedef void (*func_com_badlogic_gdx_utils_Disposable_dispose)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_Disposable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Disposable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
