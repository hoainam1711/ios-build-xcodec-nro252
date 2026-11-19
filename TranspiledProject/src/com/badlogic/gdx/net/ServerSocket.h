#ifndef HEADER_com_badlogic_gdx_net_ServerSocket
#define HEADER_com_badlogic_gdx_net_ServerSocket

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_net_ServerSocket {
	java_lang_Object parent;
} com_badlogic_gdx_net_ServerSocket;

extern Class class_com_badlogic_gdx_net_ServerSocket;


#define INDEX_com_badlogic_gdx_net_ServerSocket_getProtocol_R_com_badlogic_gdx_Net$Protocol 0
typedef jobject (*func_com_badlogic_gdx_net_ServerSocket_getProtocol_R_com_badlogic_gdx_Net$Protocol)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_net_ServerSocket_accept_com_badlogic_gdx_net_SocketHints_R_com_badlogic_gdx_net_Socket 1
typedef jobject (*func_com_badlogic_gdx_net_ServerSocket_accept_com_badlogic_gdx_net_SocketHints_R_com_badlogic_gdx_net_Socket)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_net_ServerSocket(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_net_ServerSocket(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
