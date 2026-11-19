#ifndef HEADER_lib_input_VietnameseTextUtils
#define HEADER_lib_input_VietnameseTextUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_input_VietnameseTextUtils {
	java_lang_Object parent;
} lib_input_VietnameseTextUtils;

extern Class class_lib_input_VietnameseTextUtils;

extern jobject SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;

#define VTABLE_lib_input_VietnameseTextUtils_hashCode_R_int 0
typedef jint (*func_lib_input_VietnameseTextUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_input_VietnameseTextUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_input_VietnameseTextUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_VietnameseTextUtils_clone_R_java_lang_Object 2
typedef jobject (*func_lib_input_VietnameseTextUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_input_VietnameseTextUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_input_VietnameseTextUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_input_VietnameseTextUtils_toString_R_java_lang_String 4
typedef jobject (*func_lib_input_VietnameseTextUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_input_VietnameseTextUtils_finalize 5
typedef void (*func_lib_input_VietnameseTextUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_input_VietnameseTextUtils_notify 6
typedef void (*func_lib_input_VietnameseTextUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_input_VietnameseTextUtils_notifyAll 7
typedef void (*func_lib_input_VietnameseTextUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_input_VietnameseTextUtils_wait 8
typedef void (*func_lib_input_VietnameseTextUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_input_VietnameseTextUtils_wait_long 9
typedef void (*func_lib_input_VietnameseTextUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_input_VietnameseTextUtils_wait_long_int 10
typedef void (*func_lib_input_VietnameseTextUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_lib_input_VietnameseTextUtils(jobject object, jint mark, jint depth);
void clinit_lib_input_VietnameseTextUtils(jcontext ctx);
void init_lib_input_VietnameseTextUtils(jcontext ctx, jobject self);
jint SM_lib_input_VietnameseTextUtils_findEntry_char_R_int(jcontext ctx, jchar param0);
jbool SM_lib_input_VietnameseTextUtils_isCombiningMark_char_R_boolean(jcontext ctx, jchar param0);
jchar SM_lib_input_VietnameseTextUtils_composePair_char_char_R_char(jcontext ctx, jchar param0, jchar param1);
jbool SM_lib_input_VietnameseTextUtils_isIgnorableFormatChar_char_R_boolean(jcontext ctx, jchar param0);
jobject SM_lib_input_VietnameseTextUtils_sanitizeForSingleLine_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jint SM_lib_input_VietnameseTextUtils_mapGameplayKeyFromImeChar_char_R_int(jcontext ctx, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
