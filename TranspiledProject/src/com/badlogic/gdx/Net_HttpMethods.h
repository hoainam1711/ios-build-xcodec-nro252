#ifndef HEADER_com_badlogic_gdx_Net$HttpMethods
#define HEADER_com_badlogic_gdx_Net$HttpMethods

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Net$HttpMethods {
	java_lang_Object parent;
} com_badlogic_gdx_Net$HttpMethods;

extern Class class_com_badlogic_gdx_Net$HttpMethods;

extern jobject SF_com_badlogic_gdx_Net$HttpMethods_HEAD;
extern jobject SF_com_badlogic_gdx_Net$HttpMethods_GET;
extern jobject SF_com_badlogic_gdx_Net$HttpMethods_POST;
extern jobject SF_com_badlogic_gdx_Net$HttpMethods_PUT;
extern jobject SF_com_badlogic_gdx_Net$HttpMethods_PATCH;
extern jobject SF_com_badlogic_gdx_Net$HttpMethods_DELETE;


void mark_com_badlogic_gdx_Net$HttpMethods(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Net$HttpMethods(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
