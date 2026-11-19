#ifndef HEADER_com_badlogic_gdx_utils_DefaultPool$PoolSupplier
#define HEADER_com_badlogic_gdx_utils_DefaultPool$PoolSupplier

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_DefaultPool$PoolSupplier {
	java_lang_Object parent;
} com_badlogic_gdx_utils_DefaultPool$PoolSupplier;

extern Class class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier;


#define INDEX_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_get_R_java_lang_Object 0
typedef jobject (*func_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_get_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_DefaultPool$PoolSupplier(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_DefaultPool$PoolSupplier(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
