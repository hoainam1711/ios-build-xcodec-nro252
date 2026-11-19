#ifndef HEADER_nro_TaskOrder
#define HEADER_nro_TaskOrder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_TaskOrder {
	java_lang_Object parent;
	jint F_taskId;
	jint F_count;
	jshort F_maxCount;
	jref F_name;
	jref F_description;
	jint F_f;
} nro_TaskOrder;

extern Class class_nro_TaskOrder;


#define VTABLE_nro_TaskOrder_hashCode_R_int 0
typedef jint (*func_nro_TaskOrder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_TaskOrder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_TaskOrder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_TaskOrder_clone_R_java_lang_Object 2
typedef jobject (*func_nro_TaskOrder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_TaskOrder_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_TaskOrder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_TaskOrder_toString_R_java_lang_String 4
typedef jobject (*func_nro_TaskOrder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_TaskOrder_finalize 5
typedef void (*func_nro_TaskOrder_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_TaskOrder_notify 6
typedef void (*func_nro_TaskOrder_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_TaskOrder_notifyAll 7
typedef void (*func_nro_TaskOrder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_TaskOrder_wait 8
typedef void (*func_nro_TaskOrder_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_TaskOrder_wait_long 9
typedef void (*func_nro_TaskOrder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_TaskOrder_wait_long_int 10
typedef void (*func_nro_TaskOrder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_TaskOrder(jobject object, jint mark, jint depth);
void clinit_nro_TaskOrder(jcontext ctx);
void init_nro_TaskOrder_byte_short_short_java_lang_String_java_lang_String_byte_byte(jcontext ctx, jobject self, jbyte param0, jshort param1, jshort param2, jobject param3, jobject param4, jbyte param5, jbyte param6);

#ifdef __cplusplus
}
#endif

#endif
