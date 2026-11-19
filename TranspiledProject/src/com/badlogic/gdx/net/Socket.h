#ifndef HEADER_com_badlogic_gdx_net_Socket
#define HEADER_com_badlogic_gdx_net_Socket

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_net_Socket {
	java_lang_Object parent;
} com_badlogic_gdx_net_Socket;

extern Class class_com_badlogic_gdx_net_Socket;


#define INDEX_com_badlogic_gdx_net_Socket_isConnected_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_net_Socket_isConnected_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_net_Socket_getInputStream_R_java_io_InputStream 1
typedef jobject (*func_com_badlogic_gdx_net_Socket_getInputStream_R_java_io_InputStream)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_net_Socket_getOutputStream_R_java_io_OutputStream 2
typedef jobject (*func_com_badlogic_gdx_net_Socket_getOutputStream_R_java_io_OutputStream)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_net_Socket_getRemoteAddress_R_java_lang_String 3
typedef jobject (*func_com_badlogic_gdx_net_Socket_getRemoteAddress_R_java_lang_String)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_net_Socket(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_net_Socket(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
