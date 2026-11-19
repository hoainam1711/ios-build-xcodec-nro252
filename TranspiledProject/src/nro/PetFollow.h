#ifndef HEADER_nro_PetFollow
#define HEADER_nro_PetFollow

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_PetFollow {
	java_lang_Object parent;
	jshort F_smallID;
	jint F_dir;
	jint F_c;
	jint F_cmtoY;
	jint F_cmy;
	jint F_f;
	jint F_g;
	jint F_cmtoX;
	jint F_cmx;
	jint F_j;
	jint F_k;
	jint F_fimg;
	jint F_wimg;
	jint F_himg;
	jref F_frame;
	jint F_count;
} nro_PetFollow;

extern Class class_nro_PetFollow;


#define VTABLE_nro_PetFollow_hashCode_R_int 0
typedef jint (*func_nro_PetFollow_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_PetFollow_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_PetFollow_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_PetFollow_clone_R_java_lang_Object 2
typedef jobject (*func_nro_PetFollow_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_PetFollow_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_PetFollow_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_PetFollow_toString_R_java_lang_String 4
typedef jobject (*func_nro_PetFollow_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_PetFollow_finalize 5
typedef void (*func_nro_PetFollow_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_PetFollow_notify 6
typedef void (*func_nro_PetFollow_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_PetFollow_notifyAll 7
typedef void (*func_nro_PetFollow_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_PetFollow_wait 8
typedef void (*func_nro_PetFollow_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_PetFollow_wait_long 9
typedef void (*func_nro_PetFollow_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_PetFollow_wait_long_int 10
typedef void (*func_nro_PetFollow_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_PetFollow_SetImg_int_Array1_int_int_int 11
typedef void (*func_nro_PetFollow_SetImg_int_Array1_int_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_nro_PetFollow_remove 12
typedef void (*func_nro_PetFollow_remove)(jcontext ctx, jobject self);

void mark_nro_PetFollow(jobject object, jint mark, jint depth);
void clinit_nro_PetFollow(jcontext ctx);
void M_nro_PetFollow_SetImg_int_Array1_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
void init_nro_PetFollow(jcontext ctx, jobject self);
void M_nro_PetFollow_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
