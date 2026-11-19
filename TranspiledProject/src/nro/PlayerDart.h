#ifndef HEADER_nro_PlayerDart
#define HEADER_nro_PlayerDart

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_PlayerDart {
	java_lang_Object parent;
	jref F_charBelong;
	jref F_info;
	jref F_darts;
	jint F_angle;
	jint F_vx;
	jint F_vy;
	jint F_va;
	jint F_x;
	jint F_y;
	jint F_z;
	jint F_life;
	jint F_dx;
	jbool F_n;
	jbool F_isActive;
	jref F_skillPaint;
} nro_PlayerDart;

extern Class class_nro_PlayerDart;


#define VTABLE_nro_PlayerDart_hashCode_R_int 0
typedef jint (*func_nro_PlayerDart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_PlayerDart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_PlayerDart_clone_R_java_lang_Object 2
typedef jobject (*func_nro_PlayerDart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_PlayerDart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_toString_R_java_lang_String 4
typedef jobject (*func_nro_PlayerDart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_finalize 5
typedef void (*func_nro_PlayerDart_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_notify 6
typedef void (*func_nro_PlayerDart_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_notifyAll 7
typedef void (*func_nro_PlayerDart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_wait 8
typedef void (*func_nro_PlayerDart_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_wait_long 9
typedef void (*func_nro_PlayerDart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_PlayerDart_wait_long_int 10
typedef void (*func_nro_PlayerDart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_PlayerDart_update 11
typedef void (*func_nro_PlayerDart_update)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_endMe 12
typedef void (*func_nro_PlayerDart_endMe)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerDart_paint_lib_mGraphics 13
typedef void (*func_nro_PlayerDart_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_PlayerDart(jobject object, jint mark, jint depth);
void clinit_nro_PlayerDart(jcontext ctx);
void init_nro_PlayerDart_nro_Char_int_nro_SkillPaint_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void M_nro_PlayerDart_update(jcontext ctx, jobject self);
void M_nro_PlayerDart_endMe(jcontext ctx, jobject self);
void M_nro_PlayerDart_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
