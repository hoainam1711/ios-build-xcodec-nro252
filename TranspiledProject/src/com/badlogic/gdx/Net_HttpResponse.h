#ifndef HEADER_com_badlogic_gdx_Net$HttpResponse
#define HEADER_com_badlogic_gdx_Net$HttpResponse

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Net$HttpResponse {
	java_lang_Object parent;
} com_badlogic_gdx_Net$HttpResponse;

extern Class class_com_badlogic_gdx_Net$HttpResponse;


#define INDEX_com_badlogic_gdx_Net$HttpResponse_getResult_R_Array1_byte 0
typedef jobject (*func_com_badlogic_gdx_Net$HttpResponse_getResult_R_Array1_byte)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Net$HttpResponse_getResultAsString_R_java_lang_String 1
typedef jobject (*func_com_badlogic_gdx_Net$HttpResponse_getResultAsString_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Net$HttpResponse_getResultAsStream_R_java_io_InputStream 2
typedef jobject (*func_com_badlogic_gdx_Net$HttpResponse_getResultAsStream_R_java_io_InputStream)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Net$HttpResponse_getStatus_R_com_badlogic_gdx_net_HttpStatus 3
typedef jobject (*func_com_badlogic_gdx_Net$HttpResponse_getStatus_R_com_badlogic_gdx_net_HttpStatus)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Net$HttpResponse_getHeader_java_lang_String_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_Net$HttpResponse_getHeader_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Net$HttpResponse_getHeaders_R_java_util_Map 5
typedef jobject (*func_com_badlogic_gdx_Net$HttpResponse_getHeaders_R_java_util_Map)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Net$HttpResponse(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Net$HttpResponse(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
