#ifndef HEADER_nro_ListNew
#define HEADER_nro_ListNew

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ListNew {
	java_lang_Object parent;
	jint F_maxW;
	jint F_maxH;
	jint F_x;
	jint F_y;
	jint F_value;
	jint F_cmtoX;
	jint F_cmx;
	jint F_cmxLim;
	jint F_pointerDownTime;
	jint F_pointerDownFirstX;
	jref F_pointerDownLastX;
	jbool F_pointerIsDowning;
	jbool F_isDownWhenRunning;
	jint F_cmRun;
	jint F_cmvx;
	jint F_cmdx;
} nro_ListNew;

extern Class class_nro_ListNew;


#define VTABLE_nro_ListNew_hashCode_R_int 0
typedef jint (*func_nro_ListNew_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ListNew_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ListNew_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ListNew_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ListNew_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_toString_R_java_lang_String 4
typedef jobject (*func_nro_ListNew_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_finalize 5
typedef void (*func_nro_ListNew_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_notify 6
typedef void (*func_nro_ListNew_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_notifyAll 7
typedef void (*func_nro_ListNew_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_wait 8
typedef void (*func_nro_ListNew_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_wait_long 9
typedef void (*func_nro_ListNew_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ListNew_wait_long_int 10
typedef void (*func_nro_ListNew_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ListNew_update_Pos_UP_DOWN 11
typedef void (*func_nro_ListNew_update_Pos_UP_DOWN)(jcontext ctx, jobject self);
#define VTABLE_nro_ListNew_moveCamera 12
typedef void (*func_nro_ListNew_moveCamera)(jcontext ctx, jobject self);

void mark_nro_ListNew(jobject object, jint mark, jint depth);
void clinit_nro_ListNew(jcontext ctx);
void init_nro_ListNew(jcontext ctx, jobject self);
void init_nro_ListNew_int_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jbool param7);
void M_nro_ListNew_update_Pos_UP_DOWN(jcontext ctx, jobject self);
void M_nro_ListNew_moveCamera(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
