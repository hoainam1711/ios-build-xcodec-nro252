#ifndef HEADER_com_badlogic_gdx_net_SocketHints
#define HEADER_com_badlogic_gdx_net_SocketHints

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_net_SocketHints {
	java_lang_Object parent;
	jint F_connectTimeout;
	jint F_performancePrefConnectionTime;
	jint F_performancePrefLatency;
	jint F_performancePrefBandwidth;
	jint F_trafficClass;
	jbool F_keepAlive;
	jbool F_tcpNoDelay;
	jint F_sendBufferSize;
	jint F_receiveBufferSize;
	jbool F_linger;
	jint F_lingerDuration;
	jint F_socketTimeout;
} com_badlogic_gdx_net_SocketHints;

extern Class class_com_badlogic_gdx_net_SocketHints;


#define VTABLE_com_badlogic_gdx_net_SocketHints_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_net_SocketHints_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_net_SocketHints_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_net_SocketHints_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_net_SocketHints_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_net_SocketHints_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_net_SocketHints_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_net_SocketHints_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_net_SocketHints_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_net_SocketHints_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_net_SocketHints_finalize 5
typedef void (*func_com_badlogic_gdx_net_SocketHints_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_net_SocketHints_notify 6
typedef void (*func_com_badlogic_gdx_net_SocketHints_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_net_SocketHints_notifyAll 7
typedef void (*func_com_badlogic_gdx_net_SocketHints_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_net_SocketHints_wait 8
typedef void (*func_com_badlogic_gdx_net_SocketHints_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_net_SocketHints_wait_long 9
typedef void (*func_com_badlogic_gdx_net_SocketHints_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_net_SocketHints_wait_long_int 10
typedef void (*func_com_badlogic_gdx_net_SocketHints_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_net_SocketHints(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_net_SocketHints(jcontext ctx);
void init_com_badlogic_gdx_net_SocketHints(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
