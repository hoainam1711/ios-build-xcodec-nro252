#ifndef HEADER_nro_Firework
#define HEADER_nro_Firework

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Firework {
	java_lang_Object parent;
} nro_Firework;

extern Class class_nro_Firework;

extern jobject SF_nro_Firework_random;
extern jobject SF_nro_Firework_b;
extern jint SF_nro_Firework_x;
extern jint SF_nro_Firework_y;
extern jint SF_nro_Firework_angle;
extern jint SF_nro_Firework_x0;
extern jint SF_nro_Firework_g;
extern jint SF_nro_Firework_t;
extern jint SF_nro_Firework_v;
extern jfloat SF_nro_Firework_a;
extern jobject SF_nro_Firework_arr_x;
extern jobject SF_nro_Firework_arr_y;
extern jbool SF_nro_Firework_act;
extern jlong SF_nro_Firework_last;
extern jlong SF_nro_Firework_delay;

#define VTABLE_nro_Firework_hashCode_R_int 0
typedef jint (*func_nro_Firework_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Firework_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Firework_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Firework_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Firework_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Firework_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Firework_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Firework_toString_R_java_lang_String 4
typedef jobject (*func_nro_Firework_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Firework_finalize 5
typedef void (*func_nro_Firework_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Firework_notify 6
typedef void (*func_nro_Firework_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Firework_notifyAll 7
typedef void (*func_nro_Firework_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Firework_wait 8
typedef void (*func_nro_Firework_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Firework_wait_long 9
typedef void (*func_nro_Firework_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Firework_wait_long_int 10
typedef void (*func_nro_Firework_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Firework(jobject object, jint mark, jint depth);
void clinit_nro_Firework(jcontext ctx);
void init_nro_Firework(jcontext ctx, jobject self);
void SM_nro_Firework_paint_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_Firework_a(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
