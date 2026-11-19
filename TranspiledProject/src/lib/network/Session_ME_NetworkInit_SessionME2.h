#ifndef HEADER_lib_network_Session_ME$NetworkInit$SessionME2
#define HEADER_lib_network_Session_ME$NetworkInit$SessionME2

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_Session_ME$NetworkInit$SessionME2 {
	java_lang_Object parent;
	jref F_smInstance;
	jint F_readerGen;
	jref F_this$1;
} lib_network_Session_ME$NetworkInit$SessionME2;

extern Class class_lib_network_Session_ME$NetworkInit$SessionME2;


#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_hashCode_R_int 0
typedef jint (*func_lib_network_Session_ME$NetworkInit$SessionME2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_network_Session_ME$NetworkInit$SessionME2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_clone_R_java_lang_Object 2
typedef jobject (*func_lib_network_Session_ME$NetworkInit$SessionME2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_network_Session_ME$NetworkInit$SessionME2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_toString_R_java_lang_String 4
typedef jobject (*func_lib_network_Session_ME$NetworkInit$SessionME2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_finalize 5
typedef void (*func_lib_network_Session_ME$NetworkInit$SessionME2_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_notify 6
typedef void (*func_lib_network_Session_ME$NetworkInit$SessionME2_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_notifyAll 7
typedef void (*func_lib_network_Session_ME$NetworkInit$SessionME2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_wait 8
typedef void (*func_lib_network_Session_ME$NetworkInit$SessionME2_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_wait_long 9
typedef void (*func_lib_network_Session_ME$NetworkInit$SessionME2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_wait_long_int 10
typedef void (*func_lib_network_Session_ME$NetworkInit$SessionME2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_run 11
typedef void (*func_lib_network_Session_ME$NetworkInit$SessionME2_run)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$NetworkInit$SessionME2_handleKeyHandshake_nro_Message 12
typedef void (*func_lib_network_Session_ME$NetworkInit$SessionME2_handleKeyHandshake_nro_Message)(jcontext ctx, jobject self, jobject param0);

void mark_lib_network_Session_ME$NetworkInit$SessionME2(jobject object, jint mark, jint depth);
void clinit_lib_network_Session_ME$NetworkInit$SessionME2(jcontext ctx);
void init_lib_network_Session_ME$NetworkInit$SessionME2_lib_network_Session_ME$NetworkInit_lib_network_Session_ME_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_lib_network_Session_ME$NetworkInit$SessionME2_run(jcontext ctx, jobject self);
void M_lib_network_Session_ME$NetworkInit$SessionME2_handleKeyHandshake_nro_Message(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
