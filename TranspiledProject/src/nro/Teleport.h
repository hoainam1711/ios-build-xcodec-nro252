#ifndef HEADER_nro_Teleport
#define HEADER_nro_Teleport

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Teleport {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_headId;
	jint F_type;
	jbool F_isMe;
	jint F_y2;
	jint F_id;
	jint F_dir;
	jint F_planet;
	jbool F_isUp;
	jbool F_isDown;
	jbool F_createShip;
	jbool F_paintFire;
	jbool F_painHead;
	jint F_tPrepare;
	jint F_vy;
	jint F_tFire;
	jint F_tDelayHole;
	jbool F_tHole;
	jbool F_isShock;
} nro_Teleport;

extern Class class_nro_Teleport;

extern jobject SF_nro_Teleport_vTeleport;
extern jobject SF_nro_Teleport_maybay;
extern jobject SF_nro_Teleport_hole;

#define VTABLE_nro_Teleport_hashCode_R_int 0
typedef jint (*func_nro_Teleport_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Teleport_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Teleport_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Teleport_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Teleport_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Teleport_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Teleport_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Teleport_toString_R_java_lang_String 4
typedef jobject (*func_nro_Teleport_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Teleport_finalize 5
typedef void (*func_nro_Teleport_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Teleport_notify 6
typedef void (*func_nro_Teleport_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Teleport_notifyAll 7
typedef void (*func_nro_Teleport_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Teleport_wait 8
typedef void (*func_nro_Teleport_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Teleport_wait_long 9
typedef void (*func_nro_Teleport_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Teleport_wait_long_int 10
typedef void (*func_nro_Teleport_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Teleport_paintHole_lib_mGraphics 11
typedef void (*func_nro_Teleport_paintHole_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Teleport_paint_lib_mGraphics 12
typedef void (*func_nro_Teleport_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Teleport_update 13
typedef void (*func_nro_Teleport_update)(jcontext ctx, jobject self);

void mark_nro_Teleport(jobject object, jint mark, jint depth);
void clinit_nro_Teleport(jcontext ctx);
void init_nro_Teleport_int_int_int_int_int_boolean_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jint param6);
void SM_nro_Teleport_addTeleport_nro_Teleport(jcontext ctx, jobject param0);
void M_nro_Teleport_paintHole_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Teleport_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Teleport_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
