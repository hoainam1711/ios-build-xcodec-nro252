#ifndef HEADER_nro_MonsterDart
#define HEADER_nro_MonsterDart

#include "Clearwing.h"
#include "nro/Effect2.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MonsterDart {
	nro_Effect2 parent;
	jint F_va;
	jref F_info;
	jint F_angle;
	jint F_vx;
	jint F_vy;
	jint F_x;
	jint F_y;
	jint F_z;
	jbool F_isSpeedUp;
	jlong F_dame;
	jlong F_dameMp;
	jref F_c;
	jref F_darts;
	jint F_dx;
	jint F_dy;
} nro_MonsterDart;

extern Class class_nro_MonsterDart;

extern jobject SF_nro_MonsterDart_r;
extern jobject SF_nro_MonsterDart_ARROWINDEX;
extern jobject SF_nro_MonsterDart_TRANSFORM;
extern jobject SF_nro_MonsterDart_FRAME;

#define VTABLE_nro_MonsterDart_hashCode_R_int 0
typedef jint (*func_nro_MonsterDart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MonsterDart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MonsterDart_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MonsterDart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MonsterDart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_toString_R_java_lang_String 4
typedef jobject (*func_nro_MonsterDart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_finalize 5
typedef void (*func_nro_MonsterDart_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_notify 6
typedef void (*func_nro_MonsterDart_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_notifyAll 7
typedef void (*func_nro_MonsterDart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_wait 8
typedef void (*func_nro_MonsterDart_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_wait_long 9
typedef void (*func_nro_MonsterDart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MonsterDart_wait_long_int 10
typedef void (*func_nro_MonsterDart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_MonsterDart_update 11
typedef void (*func_nro_MonsterDart_update)(jcontext ctx, jobject self);
#define VTABLE_nro_MonsterDart_paint_lib_mGraphics 12
typedef void (*func_nro_MonsterDart_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_MonsterDart(jobject object, jint mark, jint depth);
void clinit_nro_MonsterDart(jcontext ctx);
void SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(jcontext ctx, jint param0, jint param1, jbool param2, jlong param3, jlong param4, jobject param5, jint param6);
void init_nro_MonsterDart_int_int_boolean_long_long_nro_Char_int(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jlong param3, jlong param4, jobject param5, jint param6);
void M_nro_MonsterDart_update(jcontext ctx, jobject self);
jint SM_nro_MonsterDart_findDirIndexFromAngle_int_R_int(jcontext ctx, jint param0);
void M_nro_MonsterDart_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
