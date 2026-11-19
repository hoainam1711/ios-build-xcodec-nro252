#ifndef HEADER_nro_Hint
#define HEADER_nro_Hint

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Hint {
	java_lang_Object parent;
} nro_Hint;

extern Class class_nro_Hint;

extern jint SF_nro_Hint_x;
extern jint SF_nro_Hint_y;
extern jint SF_nro_Hint_type;
extern jint SF_nro_Hint_t;
extern jbool SF_nro_Hint_isShow;
extern jbool SF_nro_Hint_activeClick;
extern jbool SF_nro_Hint_isViewMap;
extern jbool SF_nro_Hint_isCloseMap;
extern jbool SF_nro_Hint_isViewPotential;
extern jbool SF_nro_Hint_isPaint;
extern jint SF_nro_Hint_trans;
extern jbool SF_nro_Hint_paintFlare;
extern jbool SF_nro_Hint_isCamera;

#define VTABLE_nro_Hint_hashCode_R_int 0
typedef jint (*func_nro_Hint_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Hint_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Hint_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Hint_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Hint_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Hint_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Hint_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Hint_toString_R_java_lang_String 4
typedef jobject (*func_nro_Hint_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Hint_finalize 5
typedef void (*func_nro_Hint_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Hint_notify 6
typedef void (*func_nro_Hint_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Hint_notifyAll 7
typedef void (*func_nro_Hint_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Hint_wait 8
typedef void (*func_nro_Hint_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Hint_wait_long 9
typedef void (*func_nro_Hint_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Hint_wait_long_int 10
typedef void (*func_nro_Hint_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Hint(jobject object, jint mark, jint depth);
void clinit_nro_Hint(jcontext ctx);
void init_nro_Hint(jcontext ctx, jobject self);
jbool SM_nro_Hint_isOnTask_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
void SM_nro_Hint_clickNpc(jcontext ctx);
void SM_nro_Hint_nextMap_int(jcontext ctx, jint param0);
void SM_nro_Hint_clickMob(jcontext ctx);
jbool SM_nro_Hint_isHaveItem_R_boolean(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
