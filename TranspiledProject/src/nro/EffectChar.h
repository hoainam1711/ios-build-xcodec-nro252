#ifndef HEADER_nro_EffectChar
#define HEADER_nro_EffectChar

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_EffectChar {
	java_lang_Object parent;
	jshort F_param;
	jref F_template;
} nro_EffectChar;

extern Class class_nro_EffectChar;


#define VTABLE_nro_EffectChar_hashCode_R_int 0
typedef jint (*func_nro_EffectChar_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectChar_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_EffectChar_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectChar_clone_R_java_lang_Object 2
typedef jobject (*func_nro_EffectChar_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectChar_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_EffectChar_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectChar_toString_R_java_lang_String 4
typedef jobject (*func_nro_EffectChar_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectChar_finalize 5
typedef void (*func_nro_EffectChar_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectChar_notify 6
typedef void (*func_nro_EffectChar_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectChar_notifyAll 7
typedef void (*func_nro_EffectChar_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectChar_wait 8
typedef void (*func_nro_EffectChar_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectChar_wait_long 9
typedef void (*func_nro_EffectChar_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_EffectChar_wait_long_int 10
typedef void (*func_nro_EffectChar_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_EffectChar(jobject object, jint mark, jint depth);
void clinit_nro_EffectChar(jcontext ctx);
void init_nro_EffectChar_byte_int_int_short(jcontext ctx, jobject self, jbyte param0, jint param1, jint param2, jshort param3);

#ifdef __cplusplus
}
#endif

#endif
