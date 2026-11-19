#ifndef HEADER_nro_ItemTemplate
#define HEADER_nro_ItemTemplate

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ItemTemplate {
	java_lang_Object parent;
	jshort F_id;
	jbyte F_type;
	jbyte F_gender;
	jref F_name;
	jref F_description;
	jshort F_iconID;
	jshort F_part;
	jbool F_isUpToUp;
	jint F_strRequire;
} nro_ItemTemplate;

extern Class class_nro_ItemTemplate;


#define VTABLE_nro_ItemTemplate_hashCode_R_int 0
typedef jint (*func_nro_ItemTemplate_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTemplate_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ItemTemplate_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ItemTemplate_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ItemTemplate_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTemplate_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ItemTemplate_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTemplate_toString_R_java_lang_String 4
typedef jobject (*func_nro_ItemTemplate_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTemplate_finalize 5
typedef void (*func_nro_ItemTemplate_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTemplate_notify 6
typedef void (*func_nro_ItemTemplate_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTemplate_notifyAll 7
typedef void (*func_nro_ItemTemplate_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTemplate_wait 8
typedef void (*func_nro_ItemTemplate_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTemplate_wait_long 9
typedef void (*func_nro_ItemTemplate_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ItemTemplate_wait_long_int 10
typedef void (*func_nro_ItemTemplate_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_ItemTemplate(jobject object, jint mark, jint depth);
void clinit_nro_ItemTemplate(jcontext ctx);
void init_nro_ItemTemplate_short_byte_byte_java_lang_String_java_lang_String_byte_int_short_short_boolean(jcontext ctx, jobject self, jshort param0, jbyte param1, jbyte param2, jobject param3, jobject param4, jbyte param5, jint param6, jshort param7, jshort param8, jbool param9);

#ifdef __cplusplus
}
#endif

#endif
