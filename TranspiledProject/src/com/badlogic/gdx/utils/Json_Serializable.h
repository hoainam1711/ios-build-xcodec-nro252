#ifndef HEADER_com_badlogic_gdx_utils_Json$Serializable
#define HEADER_com_badlogic_gdx_utils_Json$Serializable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Json$Serializable {
	java_lang_Object parent;
} com_badlogic_gdx_utils_Json$Serializable;

extern Class class_com_badlogic_gdx_utils_Json$Serializable;


#define INDEX_com_badlogic_gdx_utils_Json$Serializable_write_com_badlogic_gdx_utils_Json 0
typedef void (*func_com_badlogic_gdx_utils_Json$Serializable_write_com_badlogic_gdx_utils_Json)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_utils_Json$Serializable_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue 1
typedef void (*func_com_badlogic_gdx_utils_Json$Serializable_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_com_badlogic_gdx_utils_Json$Serializable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Json$Serializable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
