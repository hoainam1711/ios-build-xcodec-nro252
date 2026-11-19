#ifndef HEADER_nro_ItemOption
#define HEADER_nro_ItemOption

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ItemOption {
	java_lang_Object parent;
	jint F_param;
	jbyte F_active;
	jref F_optionTemplate;
} nro_ItemOption;

extern Class class_nro_ItemOption;


#define VTABLE_nro_ItemOption_hashCode_R_int 0
typedef jint (*func_nro_ItemOption_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemOption_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ItemOption_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ItemOption_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ItemOption_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemOption_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ItemOption_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemOption_toString_R_java_lang_String 4
typedef jobject (*func_nro_ItemOption_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemOption_finalize 5
typedef void (*func_nro_ItemOption_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemOption_notify 6
typedef void (*func_nro_ItemOption_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemOption_notifyAll 7
typedef void (*func_nro_ItemOption_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemOption_wait 8
typedef void (*func_nro_ItemOption_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemOption_wait_long 9
typedef void (*func_nro_ItemOption_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ItemOption_wait_long_int 10
typedef void (*func_nro_ItemOption_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ItemOption_getOptionString_R_java_lang_String 11
typedef jobject (*func_nro_ItemOption_getOptionString_R_java_lang_String)(jcontext ctx, jobject self);

void mark_nro_ItemOption(jobject object, jint mark, jint depth);
void clinit_nro_ItemOption(jcontext ctx);
void init_nro_ItemOption(jcontext ctx, jobject self);
void init_nro_ItemOption_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_nro_ItemOption_getOptionString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
