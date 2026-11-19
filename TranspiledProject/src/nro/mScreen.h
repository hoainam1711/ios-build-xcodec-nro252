#ifndef HEADER_nro_mScreen
#define HEADER_nro_mScreen

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_mScreen {
	java_lang_Object parent;
	jref F_left;
	jref F_center;
	jref F_right;
} nro_mScreen;

extern Class class_nro_mScreen;

extern jint SF_nro_mScreen_ITEM_HEIGHT;
extern jint SF_nro_mScreen_yOpenKeyBoard;
extern jint SF_nro_mScreen_cmdH;
extern jint SF_nro_mScreen_keyTouch;

#define VTABLE_nro_mScreen_hashCode_R_int 0
typedef jint (*func_nro_mScreen_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_mScreen_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mScreen_clone_R_java_lang_Object 2
typedef jobject (*func_nro_mScreen_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_mScreen_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_toString_R_java_lang_String 4
typedef jobject (*func_nro_mScreen_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_finalize 5
typedef void (*func_nro_mScreen_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_notify 6
typedef void (*func_nro_mScreen_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_notifyAll 7
typedef void (*func_nro_mScreen_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_wait 8
typedef void (*func_nro_mScreen_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_wait_long 9
typedef void (*func_nro_mScreen_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_mScreen_wait_long_int 10
typedef void (*func_nro_mScreen_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_mScreen_switchToMe 11
typedef void (*func_nro_mScreen_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_keyPress_int 12
typedef void (*func_nro_mScreen_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_mScreen_update 13
typedef void (*func_nro_mScreen_update)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_updateKey 14
typedef void (*func_nro_mScreen_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_mScreen_paint_lib_mGraphics 15
typedef void (*func_nro_mScreen_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_mScreen(jobject object, jint mark, jint depth);
void clinit_nro_mScreen(jcontext ctx);
void init_nro_mScreen(jcontext ctx, jobject self);
void M_nro_mScreen_switchToMe(jcontext ctx, jobject self);
void M_nro_mScreen_keyPress_int(jcontext ctx, jobject self, jint param0);
void M_nro_mScreen_update(jcontext ctx, jobject self);
void M_nro_mScreen_updateKey(jcontext ctx, jobject self);
jbool SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(jcontext ctx, jobject param0);
void M_nro_mScreen_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
