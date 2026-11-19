#ifndef HEADER_nro_Arrow
#define HEADER_nro_Arrow

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Arrow {
	java_lang_Object parent;
	jint F_life;
	jint F_ax;
	jint F_ay;
	jint F_axTo;
	jint F_ayTo;
	jint F_avx;
	jint F_avy;
	jint F_adx;
	jint F_ady;
	jref F_charBelong;
	jref F_arrp;
} nro_Arrow;

extern Class class_nro_Arrow;

extern jobject SF_nro_Arrow_FRAME;
extern jobject SF_nro_Arrow_ARROWINDEX;
extern jobject SF_nro_Arrow_TRANSFORM;

#define VTABLE_nro_Arrow_hashCode_R_int 0
typedef jint (*func_nro_Arrow_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Arrow_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Arrow_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Arrow_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Arrow_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_toString_R_java_lang_String 4
typedef jobject (*func_nro_Arrow_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_finalize 5
typedef void (*func_nro_Arrow_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_notify 6
typedef void (*func_nro_Arrow_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_notifyAll 7
typedef void (*func_nro_Arrow_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_wait 8
typedef void (*func_nro_Arrow_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_wait_long 9
typedef void (*func_nro_Arrow_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Arrow_wait_long_int 10
typedef void (*func_nro_Arrow_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Arrow_update 11
typedef void (*func_nro_Arrow_update)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_endMe 12
typedef void (*func_nro_Arrow_endMe)(jcontext ctx, jobject self);
#define VTABLE_nro_Arrow_paint_lib_mGraphics 13
typedef void (*func_nro_Arrow_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_Arrow(jobject object, jint mark, jint depth);
void clinit_nro_Arrow(jcontext ctx);
void init_nro_Arrow_nro_Char_nro_Arrowpaint(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_Arrow_update(jcontext ctx, jobject self);
void M_nro_Arrow_endMe(jcontext ctx, jobject self);
void M_nro_Arrow_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
