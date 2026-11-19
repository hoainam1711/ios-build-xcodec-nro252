#ifndef HEADER_nro_Controller2
#define HEADER_nro_Controller2

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Controller2 {
	java_lang_Object parent;
	jint F_a;
	jint F_b;
	jint F_c;
	jint F_d;
	jint F_e;
	jint F_f;
	jint F_y0;
	jint F_h;
	jint F_t;
	jint F_j;
	jfloat F_k;
	jlong F_l;
	jlong F_m;
	jbool F_n;
	jref F_o;
	jref F_p;
} nro_Controller2;

extern Class class_nro_Controller2;


#define VTABLE_nro_Controller2_hashCode_R_int 0
typedef jint (*func_nro_Controller2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Controller2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller2_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Controller2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller2_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Controller2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller2_toString_R_java_lang_String 4
typedef jobject (*func_nro_Controller2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller2_finalize 5
typedef void (*func_nro_Controller2_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller2_notify 6
typedef void (*func_nro_Controller2_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller2_notifyAll 7
typedef void (*func_nro_Controller2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller2_wait 8
typedef void (*func_nro_Controller2_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller2_wait_long 9
typedef void (*func_nro_Controller2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Controller2_wait_long_int 10
typedef void (*func_nro_Controller2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Controller2(jobject object, jint mark, jint depth);
void clinit_nro_Controller2(jcontext ctx);
void init_nro_Controller2_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_nro_Controller2_a_lib_mGraphics_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void init_nro_Controller2(jcontext ctx, jobject self);
void SM_nro_Controller2_readMessage_nro_Message(jcontext ctx, jobject param0);
void SM_nro_Controller2_b_nro_Message(jcontext ctx, jobject param0);
void SM_nro_Controller2_a_nro_Message_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
