#ifndef HEADER_nro_SmallDart
#define HEADER_nro_SmallDart

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_SmallDart {
	java_lang_Object parent;
	jint F_index;
	jint F_x;
	jint F_y;
} nro_SmallDart;

extern Class class_nro_SmallDart;


#define VTABLE_nro_SmallDart_hashCode_R_int 0
typedef jint (*func_nro_SmallDart_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallDart_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_SmallDart_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_SmallDart_clone_R_java_lang_Object 2
typedef jobject (*func_nro_SmallDart_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallDart_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_SmallDart_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallDart_toString_R_java_lang_String 4
typedef jobject (*func_nro_SmallDart_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallDart_finalize 5
typedef void (*func_nro_SmallDart_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallDart_notify 6
typedef void (*func_nro_SmallDart_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallDart_notifyAll 7
typedef void (*func_nro_SmallDart_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallDart_wait 8
typedef void (*func_nro_SmallDart_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallDart_wait_long 9
typedef void (*func_nro_SmallDart_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_SmallDart_wait_long_int 10
typedef void (*func_nro_SmallDart_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_SmallDart(jobject object, jint mark, jint depth);
void clinit_nro_SmallDart(jcontext ctx);
void init_nro_SmallDart_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
