#ifndef HEADER_com_badlogic_gdx_utils_ArraySupplier
#define HEADER_com_badlogic_gdx_utils_ArraySupplier

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ArraySupplier {
	java_lang_Object parent;
} com_badlogic_gdx_utils_ArraySupplier;

extern Class class_com_badlogic_gdx_utils_ArraySupplier;

extern jobject SF_com_badlogic_gdx_utils_ArraySupplier_ANY;

#define INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object 1
typedef jobject (*func_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);

void mark_com_badlogic_gdx_utils_ArraySupplier(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx);
jobject SM_com_badlogic_gdx_utils_ArraySupplier_object_R_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx);
jobject SM_com_badlogic_gdx_utils_ArraySupplier_lambda$static$0_int_R_java_lang_Object(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
