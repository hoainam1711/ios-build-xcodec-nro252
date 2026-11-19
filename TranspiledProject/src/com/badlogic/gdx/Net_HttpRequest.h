#ifndef HEADER_com_badlogic_gdx_Net$HttpRequest
#define HEADER_com_badlogic_gdx_Net$HttpRequest

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Net$HttpRequest {
	java_lang_Object parent;
	jref F_httpMethod;
	jref F_url;
	jref F_headers;
	jint F_timeOut;
	jref F_content;
	jref F_contentStream;
	jlong F_contentLength;
	jbool F_followRedirects;
	jbool F_includeCredentials;
} com_badlogic_gdx_Net$HttpRequest;

extern Class class_com_badlogic_gdx_Net$HttpRequest;


#define VTABLE_com_badlogic_gdx_Net$HttpRequest_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_Net$HttpRequest_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_Net$HttpRequest_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_Net$HttpRequest_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_Net$HttpRequest_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_Net$HttpRequest_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_finalize 5
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_notify 6
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_notifyAll 7
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_wait 8
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_wait_long 9
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_wait_long_int 10
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_reset 11
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String 12
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_setHeader_java_lang_String_java_lang_String 13
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_setHeader_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_setContent_java_lang_String 14
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_setContent_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_setContent_java_io_InputStream_long 15
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_setContent_java_io_InputStream_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_setTimeOut_int 16
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_setTimeOut_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_setFollowRedirects_boolean 17
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_setFollowRedirects_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_setIncludeCredentials_boolean 18
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_setIncludeCredentials_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_setMethod_java_lang_String 19
typedef void (*func_com_badlogic_gdx_Net$HttpRequest_setMethod_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getTimeOut_R_int 20
typedef jint (*func_com_badlogic_gdx_Net$HttpRequest_getTimeOut_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getMethod_R_java_lang_String 21
typedef jobject (*func_com_badlogic_gdx_Net$HttpRequest_getMethod_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getUrl_R_java_lang_String 22
typedef jobject (*func_com_badlogic_gdx_Net$HttpRequest_getUrl_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getContent_R_java_lang_String 23
typedef jobject (*func_com_badlogic_gdx_Net$HttpRequest_getContent_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getContentStream_R_java_io_InputStream 24
typedef jobject (*func_com_badlogic_gdx_Net$HttpRequest_getContentStream_R_java_io_InputStream)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getContentLength_R_long 25
typedef jlong (*func_com_badlogic_gdx_Net$HttpRequest_getContentLength_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getHeaders_R_java_util_Map 26
typedef jobject (*func_com_badlogic_gdx_Net$HttpRequest_getHeaders_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getFollowRedirects_R_boolean 27
typedef jbool (*func_com_badlogic_gdx_Net$HttpRequest_getFollowRedirects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Net$HttpRequest_getIncludeCredentials_R_boolean 28
typedef jbool (*func_com_badlogic_gdx_Net$HttpRequest_getIncludeCredentials_R_boolean)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Net$HttpRequest(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Net$HttpRequest(jcontext ctx);
void init_com_badlogic_gdx_Net$HttpRequest(jcontext ctx, jobject self);
void init_com_badlogic_gdx_Net$HttpRequest_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_Net$HttpRequest_setHeader_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_Net$HttpRequest_setContent_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_Net$HttpRequest_setContent_java_io_InputStream_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_com_badlogic_gdx_Net$HttpRequest_setTimeOut_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_Net$HttpRequest_setFollowRedirects_boolean(jcontext ctx, jobject self, jbool param0);
void M_com_badlogic_gdx_Net$HttpRequest_setIncludeCredentials_boolean(jcontext ctx, jobject self, jbool param0);
void M_com_badlogic_gdx_Net$HttpRequest_setMethod_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_Net$HttpRequest_getTimeOut_R_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_Net$HttpRequest_getMethod_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_Net$HttpRequest_getUrl_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_Net$HttpRequest_getContent_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_Net$HttpRequest_getContentStream_R_java_io_InputStream(jcontext ctx, jobject self);
jlong M_com_badlogic_gdx_Net$HttpRequest_getContentLength_R_long(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_Net$HttpRequest_getHeaders_R_java_util_Map(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_Net$HttpRequest_getFollowRedirects_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_Net$HttpRequest_getIncludeCredentials_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_Net$HttpRequest_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
