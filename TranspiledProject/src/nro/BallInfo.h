#ifndef HEADER_nro_BallInfo
#define HEADER_nro_BallInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_BallInfo {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_xTo;
	jint F_yTo;
	jint F_count;
	jint F_vy;
	jint F_vx;
	jint F_dir;
	jint F_idImg;
	jbool F_isPaint;
	jbool F_isDone;
	jbool F_isSetImg;
	jref F_cFocus;
} nro_BallInfo;

extern Class class_nro_BallInfo;


#define VTABLE_nro_BallInfo_hashCode_R_int 0
typedef jint (*func_nro_BallInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BallInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_BallInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BallInfo_clone_R_java_lang_Object 2
typedef jobject (*func_nro_BallInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_BallInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_BallInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_BallInfo_toString_R_java_lang_String 4
typedef jobject (*func_nro_BallInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_BallInfo_finalize 5
typedef void (*func_nro_BallInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_BallInfo_notify 6
typedef void (*func_nro_BallInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_BallInfo_notifyAll 7
typedef void (*func_nro_BallInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_BallInfo_wait 8
typedef void (*func_nro_BallInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_BallInfo_wait_long 9
typedef void (*func_nro_BallInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_BallInfo_wait_long_int 10
typedef void (*func_nro_BallInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_BallInfo(jobject object, jint mark, jint depth);
void clinit_nro_BallInfo(jcontext ctx);
void init_nro_BallInfo(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
