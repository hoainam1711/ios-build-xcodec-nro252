#ifndef HEADER_com_badlogic_gdx_utils_Json$FieldMetadata
#define HEADER_com_badlogic_gdx_utils_Json$FieldMetadata

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Json$FieldMetadata {
	java_lang_Object parent;
	jref F_field;
	jref F_elementType;
	jbool F_deprecated;
} com_badlogic_gdx_utils_Json$FieldMetadata;

extern Class class_com_badlogic_gdx_utils_Json$FieldMetadata;


#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Json$FieldMetadata_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Json$FieldMetadata_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Json$FieldMetadata_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Json$FieldMetadata_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Json$FieldMetadata_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Json$FieldMetadata_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_notify 6
typedef void (*func_com_badlogic_gdx_utils_Json$FieldMetadata_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Json$FieldMetadata_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_wait 8
typedef void (*func_com_badlogic_gdx_utils_Json$FieldMetadata_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Json$FieldMetadata_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Json$FieldMetadata_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Json$FieldMetadata_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_utils_Json$FieldMetadata(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Json$FieldMetadata(jcontext ctx);
void init_com_badlogic_gdx_utils_Json$FieldMetadata_com_badlogic_gdx_utils_reflect_Field(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
