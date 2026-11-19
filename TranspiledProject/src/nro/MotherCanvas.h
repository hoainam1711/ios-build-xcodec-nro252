#ifndef HEADER_nro_MotherCanvas
#define HEADER_nro_MotherCanvas

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MotherCanvas {
	java_lang_Object parent;
} nro_MotherCanvas;

extern Class class_nro_MotherCanvas;

extern jbool SF_nro_MotherCanvas_started;

#define VTABLE_nro_MotherCanvas_hashCode_R_int 0
typedef jint (*func_nro_MotherCanvas_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MotherCanvas_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MotherCanvas_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MotherCanvas_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MotherCanvas_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_toString_R_java_lang_String 4
typedef jobject (*func_nro_MotherCanvas_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_finalize 5
typedef void (*func_nro_MotherCanvas_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_notify 6
typedef void (*func_nro_MotherCanvas_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_notifyAll 7
typedef void (*func_nro_MotherCanvas_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_wait 8
typedef void (*func_nro_MotherCanvas_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_wait_long 9
typedef void (*func_nro_MotherCanvas_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MotherCanvas_wait_long_int 10
typedef void (*func_nro_MotherCanvas_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_MotherCanvas_run 11
typedef void (*func_nro_MotherCanvas_run)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_getY_R_int 12
typedef jint (*func_nro_MotherCanvas_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_getH_R_int 13
typedef jint (*func_nro_MotherCanvas_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MotherCanvas_pointerDragged_int_int 14
typedef void (*func_nro_MotherCanvas_pointerDragged_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MotherCanvas_pointerPressed_int_int 15
typedef void (*func_nro_MotherCanvas_pointerPressed_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MotherCanvas_pointerReleased_int_int 16
typedef void (*func_nro_MotherCanvas_pointerReleased_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MotherCanvas_onPointerDragged_int_int 17
typedef void (*func_nro_MotherCanvas_onPointerDragged_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MotherCanvas_onPointerPressed_int_int 18
typedef void (*func_nro_MotherCanvas_onPointerPressed_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MotherCanvas_onPointerReleased_int_int 19
typedef void (*func_nro_MotherCanvas_onPointerReleased_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MotherCanvas_update 20
typedef void (*func_nro_MotherCanvas_update)(jcontext ctx, jobject self);

void mark_nro_MotherCanvas(jobject object, jint mark, jint depth);
void clinit_nro_MotherCanvas(jcontext ctx);
void init_nro_MotherCanvas(jcontext ctx, jobject self);
jint M_nro_MotherCanvas_getY_R_int(jcontext ctx, jobject self);
jint M_nro_MotherCanvas_getH_R_int(jcontext ctx, jobject self);
void M_nro_MotherCanvas_pointerDragged_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_MotherCanvas_pointerPressed_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_MotherCanvas_pointerReleased_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_MotherCanvas_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
