#ifndef HEADER_main_GameMidlet
#define HEADER_main_GameMidlet

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct main_GameMidlet {
	java_lang_Object parent;
} main_GameMidlet;

extern Class class_main_GameMidlet;

extern jobject SF_main_GameMidlet_IP;
extern jint SF_main_GameMidlet_PORT;
extern jobject SF_main_GameMidlet_IP2;
extern jint SF_main_GameMidlet_PORT2;
extern jint SF_main_GameMidlet_LANGUAGE;
extern jobject SF_main_GameMidlet_VERSION;
extern jint SF_main_GameMidlet_intVERSION;
extern jobject SF_main_GameMidlet_gameCanvas;
extern jobject SF_main_GameMidlet_instance;
extern jbool SF_main_GameMidlet_isConnect2;
extern jbool SF_main_GameMidlet_isBackWindowsPhone;

#define VTABLE_main_GameMidlet_hashCode_R_int 0
typedef jint (*func_main_GameMidlet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_main_GameMidlet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_main_GameMidlet_clone_R_java_lang_Object 2
typedef jobject (*func_main_GameMidlet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_getClass_R_java_lang_Class 3
typedef jobject (*func_main_GameMidlet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_toString_R_java_lang_String 4
typedef jobject (*func_main_GameMidlet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_finalize 5
typedef void (*func_main_GameMidlet_finalize)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_notify 6
typedef void (*func_main_GameMidlet_notify)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_notifyAll 7
typedef void (*func_main_GameMidlet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_wait 8
typedef void (*func_main_GameMidlet_wait)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_wait_long 9
typedef void (*func_main_GameMidlet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_main_GameMidlet_wait_long_int 10
typedef void (*func_main_GameMidlet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_main_GameMidlet_destroyApp_boolean 11
typedef void (*func_main_GameMidlet_destroyApp_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_main_GameMidlet_pauseApp 12
typedef void (*func_main_GameMidlet_pauseApp)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_notifyDestroyed 13
typedef void (*func_main_GameMidlet_notifyDestroyed)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_startApp 14
typedef void (*func_main_GameMidlet_startApp)(jcontext ctx, jobject self);
#define VTABLE_main_GameMidlet_platformRequest_java_lang_String 15
typedef void (*func_main_GameMidlet_platformRequest_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_main_GameMidlet_exit 16
typedef void (*func_main_GameMidlet_exit)(jcontext ctx, jobject self);

void mark_main_GameMidlet(jobject object, jint mark, jint depth);
void clinit_main_GameMidlet(jcontext ctx);
void init_main_GameMidlet(jcontext ctx, jobject self);
void M_main_GameMidlet_destroyApp_boolean(jcontext ctx, jobject self, jbool param0);
void M_main_GameMidlet_pauseApp(jcontext ctx, jobject self);
void M_main_GameMidlet_notifyDestroyed(jcontext ctx, jobject self);
void M_main_GameMidlet_startApp(jcontext ctx, jobject self);
void M_main_GameMidlet_platformRequest_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_main_GameMidlet_exit(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
