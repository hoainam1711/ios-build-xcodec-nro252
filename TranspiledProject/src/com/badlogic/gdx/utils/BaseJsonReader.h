#ifndef HEADER_com_badlogic_gdx_utils_BaseJsonReader
#define HEADER_com_badlogic_gdx_utils_BaseJsonReader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_BaseJsonReader {
	java_lang_Object parent;
} com_badlogic_gdx_utils_BaseJsonReader;

extern Class class_com_badlogic_gdx_utils_BaseJsonReader;


#define INDEX_com_badlogic_gdx_utils_BaseJsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue 0
typedef jobject (*func_com_badlogic_gdx_utils_BaseJsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_utils_BaseJsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue 1
typedef jobject (*func_com_badlogic_gdx_utils_BaseJsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_BaseJsonReader(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_BaseJsonReader(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
