#ifndef HEADER_com_badlogic_gdx_utils_Predicate
#define HEADER_com_badlogic_gdx_utils_Predicate

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Predicate {
	java_lang_Object parent;
} com_badlogic_gdx_utils_Predicate;

extern Class class_com_badlogic_gdx_utils_Predicate;


#define INDEX_com_badlogic_gdx_utils_Predicate_evaluate_java_lang_Object_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_utils_Predicate_evaluate_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_Predicate(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Predicate(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
