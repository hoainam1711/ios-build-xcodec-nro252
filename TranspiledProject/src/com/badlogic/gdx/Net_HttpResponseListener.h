#ifndef HEADER_com_badlogic_gdx_Net$HttpResponseListener
#define HEADER_com_badlogic_gdx_Net$HttpResponseListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Net$HttpResponseListener {
	java_lang_Object parent;
} com_badlogic_gdx_Net$HttpResponseListener;

extern Class class_com_badlogic_gdx_Net$HttpResponseListener;


#define INDEX_com_badlogic_gdx_Net$HttpResponseListener_handleHttpResponse_com_badlogic_gdx_Net$HttpResponse 0
typedef void (*func_com_badlogic_gdx_Net$HttpResponseListener_handleHttpResponse_com_badlogic_gdx_Net$HttpResponse)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Net$HttpResponseListener_failed_java_lang_Throwable 1
typedef void (*func_com_badlogic_gdx_Net$HttpResponseListener_failed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Net$HttpResponseListener_cancelled 2
typedef void (*func_com_badlogic_gdx_Net$HttpResponseListener_cancelled)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Net$HttpResponseListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Net$HttpResponseListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
