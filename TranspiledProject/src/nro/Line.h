#ifndef HEADER_nro_Line
#define HEADER_nro_Line

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Line {
	java_lang_Object parent;
	jint F_x0;
	jint F_y0;
	jint F_x1;
	jint F_y1;
	jint F_vx;
	jint F_vy;
	jint F_g;
	jbool F_is2Line;
} nro_Line;

extern Class class_nro_Line;


#define VTABLE_nro_Line_hashCode_R_int 0
typedef jint (*func_nro_Line_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Line_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Line_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Line_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Line_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Line_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Line_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Line_toString_R_java_lang_String 4
typedef jobject (*func_nro_Line_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Line_finalize 5
typedef void (*func_nro_Line_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Line_notify 6
typedef void (*func_nro_Line_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Line_notifyAll 7
typedef void (*func_nro_Line_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Line_wait 8
typedef void (*func_nro_Line_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Line_wait_long 9
typedef void (*func_nro_Line_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Line_wait_long_int 10
typedef void (*func_nro_Line_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Line_setLine_int_int_int_int_int_int_boolean 11
typedef void (*func_nro_Line_setLine_int_int_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6);

void mark_nro_Line(jobject object, jint mark, jint depth);
void clinit_nro_Line(jcontext ctx);
void init_nro_Line(jcontext ctx, jobject self);
void M_nro_Line_setLine_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6);

#ifdef __cplusplus
}
#endif

#endif
