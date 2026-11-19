#ifndef HEADER_main_GamePad
#define HEADER_main_GamePad

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct main_GamePad {
	java_lang_Object parent;
	jint F_xC;
	jint F_yC;
	jint F_xM;
	jint F_yM;
	jint F_xMLast;
	jint F_yMLast;
	jint F_R;
	jint F_r;
	jint F_xTemp;
	jint F_yTemp;
	jint F_deltaX;
	jint F_deltaY;
	jint F_delta;
	jint F_angle;
	jint F_xZone;
	jint F_yZone;
	jint F_wZone;
	jint F_hZone;
	jbool F_isGamePad;
	jbool F_isSmallGamePad;
	jbool F_isMediumGamePad;
	jbool F_isLargeGamePad;
} main_GamePad;

extern Class class_main_GamePad;


#define VTABLE_main_GamePad_hashCode_R_int 0
typedef jint (*func_main_GamePad_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_main_GamePad_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_main_GamePad_clone_R_java_lang_Object 2
typedef jobject (*func_main_GamePad_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_getClass_R_java_lang_Class 3
typedef jobject (*func_main_GamePad_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_toString_R_java_lang_String 4
typedef jobject (*func_main_GamePad_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_finalize 5
typedef void (*func_main_GamePad_finalize)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_notify 6
typedef void (*func_main_GamePad_notify)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_notifyAll 7
typedef void (*func_main_GamePad_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_wait 8
typedef void (*func_main_GamePad_wait)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_wait_long 9
typedef void (*func_main_GamePad_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_main_GamePad_wait_long_int 10
typedef void (*func_main_GamePad_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_main_GamePad_update 11
typedef void (*func_main_GamePad_update)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_paint_lib_mGraphics 12
typedef void (*func_main_GamePad_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_main_GamePad_disableCheckDrag_R_boolean 13
typedef jbool (*func_main_GamePad_disableCheckDrag_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_main_GamePad_disableClickMove_R_boolean 14
typedef jbool (*func_main_GamePad_disableClickMove_R_boolean)(jcontext ctx, jobject self);

void mark_main_GamePad(jobject object, jint mark, jint depth);
void clinit_main_GamePad(jcontext ctx);
void init_main_GamePad(jcontext ctx, jobject self);
void M_main_GamePad_update(jcontext ctx, jobject self);
void M_main_GamePad_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
jbool M_main_GamePad_disableCheckDrag_R_boolean(jcontext ctx, jobject self);
jbool M_main_GamePad_disableClickMove_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
