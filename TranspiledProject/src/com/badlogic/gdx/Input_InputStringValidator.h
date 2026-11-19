#ifndef HEADER_com_badlogic_gdx_Input$InputStringValidator
#define HEADER_com_badlogic_gdx_Input$InputStringValidator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Input$InputStringValidator {
	java_lang_Object parent;
} com_badlogic_gdx_Input$InputStringValidator;

extern Class class_com_badlogic_gdx_Input$InputStringValidator;


#define INDEX_com_badlogic_gdx_Input$InputStringValidator_validate_java_lang_String_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_Input$InputStringValidator_validate_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_Input$InputStringValidator(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Input$InputStringValidator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
