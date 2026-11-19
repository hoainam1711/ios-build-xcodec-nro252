#ifndef HEADER_nro_MovePoint
#define HEADER_nro_MovePoint

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MovePoint {
	java_lang_Object parent;
	jint F_xEnd;
	jint F_yEnd;
	jint F_status;
} nro_MovePoint;

extern Class class_nro_MovePoint;


#define VTABLE_nro_MovePoint_hashCode_R_int 0
typedef jint (*func_nro_MovePoint_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MovePoint_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MovePoint_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MovePoint_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MovePoint_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MovePoint_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MovePoint_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MovePoint_toString_R_java_lang_String 4
typedef jobject (*func_nro_MovePoint_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MovePoint_finalize 5
typedef void (*func_nro_MovePoint_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MovePoint_notify 6
typedef void (*func_nro_MovePoint_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MovePoint_notifyAll 7
typedef void (*func_nro_MovePoint_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MovePoint_wait 8
typedef void (*func_nro_MovePoint_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MovePoint_wait_long 9
typedef void (*func_nro_MovePoint_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MovePoint_wait_long_int 10
typedef void (*func_nro_MovePoint_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_MovePoint(jobject object, jint mark, jint depth);
void clinit_nro_MovePoint(jcontext ctx);
void init_nro_MovePoint_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void init_nro_MovePoint_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
