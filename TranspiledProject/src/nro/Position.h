#ifndef HEADER_nro_Position
#define HEADER_nro_Position

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Position {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_anchor;
	jint F_g;
	jint F_v;
} nro_Position;

extern Class class_nro_Position;


#define VTABLE_nro_Position_hashCode_R_int 0
typedef jint (*func_nro_Position_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Position_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Position_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Position_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Position_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Position_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Position_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Position_toString_R_java_lang_String 4
typedef jobject (*func_nro_Position_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Position_finalize 5
typedef void (*func_nro_Position_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Position_notify 6
typedef void (*func_nro_Position_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Position_notifyAll 7
typedef void (*func_nro_Position_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Position_wait 8
typedef void (*func_nro_Position_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Position_wait_long 9
typedef void (*func_nro_Position_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Position_wait_long_int 10
typedef void (*func_nro_Position_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Position(jobject object, jint mark, jint depth);
void clinit_nro_Position(jcontext ctx);
void init_nro_Position(jcontext ctx, jobject self);
void init_nro_Position_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
