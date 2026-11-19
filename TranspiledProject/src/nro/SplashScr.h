#ifndef HEADER_nro_SplashScr
#define HEADER_nro_SplashScr

#include "Clearwing.h"
#include "nro/mScreen.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_SplashScr {
	nro_mScreen parent;
	jbool F_isCheckConnect;
} nro_SplashScr;

extern Class class_nro_SplashScr;

extern jint SF_nro_SplashScr_splashScrStat;
extern jint SF_nro_SplashScr_nData;
extern jint SF_nro_SplashScr_maxData;
extern jobject SF_nro_SplashScr_instance;
extern jobject SF_nro_SplashScr_imgLogo;

#define VTABLE_nro_SplashScr_hashCode_R_int 0
typedef jint (*func_nro_SplashScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_SplashScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_SplashScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_SplashScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_SplashScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_SplashScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_finalize 5
typedef void (*func_nro_SplashScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_notify 6
typedef void (*func_nro_SplashScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_notifyAll 7
typedef void (*func_nro_SplashScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_wait 8
typedef void (*func_nro_SplashScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_wait_long 9
typedef void (*func_nro_SplashScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_SplashScr_wait_long_int 10
typedef void (*func_nro_SplashScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_SplashScr_switchToMe 11
typedef void (*func_nro_SplashScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_keyPress_int 12
typedef void (*func_nro_SplashScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_SplashScr_update 13
typedef void (*func_nro_SplashScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_updateKey 14
typedef void (*func_nro_SplashScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_SplashScr_paint_lib_mGraphics 15
typedef void (*func_nro_SplashScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_SplashScr(jobject object, jint mark, jint depth);
void clinit_nro_SplashScr(jcontext ctx);
void init_nro_SplashScr(jcontext ctx, jobject self);
void SM_nro_SplashScr_loadSplashScr(jcontext ctx);
void M_nro_SplashScr_update(jcontext ctx, jobject self);
void SM_nro_SplashScr_loadIP(jcontext ctx);
void M_nro_SplashScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void SM_nro_SplashScr_loadImg(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
