#ifndef HEADER_com_badlogic_gdx_utils_Json$Serializer
#define HEADER_com_badlogic_gdx_utils_Json$Serializer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Json$Serializer {
	java_lang_Object parent;
} com_badlogic_gdx_utils_Json$Serializer;

extern Class class_com_badlogic_gdx_utils_Json$Serializer;


#define INDEX_com_badlogic_gdx_utils_Json$Serializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class 0
typedef void (*func_com_badlogic_gdx_utils_Json$Serializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_com_badlogic_gdx_utils_Json$Serializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object 1
typedef jobject (*func_com_badlogic_gdx_utils_Json$Serializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_com_badlogic_gdx_utils_Json$Serializer(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Json$Serializer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
