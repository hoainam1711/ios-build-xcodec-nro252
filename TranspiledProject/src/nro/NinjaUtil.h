#ifndef HEADER_nro_NinjaUtil
#define HEADER_nro_NinjaUtil

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_NinjaUtil {
	java_lang_Object parent;
	jint F_index;
	jref F_counts;
	jshort F_taskId;
	jref F_names;
	jref F_details;
	jref F_subNames;
	jref F_contentInfo;
	jshort F_h;
} nro_NinjaUtil;

extern Class class_nro_NinjaUtil;


#define VTABLE_nro_NinjaUtil_hashCode_R_int 0
typedef jint (*func_nro_NinjaUtil_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_NinjaUtil_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_NinjaUtil_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NinjaUtil_clone_R_java_lang_Object 2
typedef jobject (*func_nro_NinjaUtil_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_NinjaUtil_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_NinjaUtil_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_NinjaUtil_toString_R_java_lang_String 4
typedef jobject (*func_nro_NinjaUtil_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_NinjaUtil_finalize 5
typedef void (*func_nro_NinjaUtil_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_NinjaUtil_notify 6
typedef void (*func_nro_NinjaUtil_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_NinjaUtil_notifyAll 7
typedef void (*func_nro_NinjaUtil_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_NinjaUtil_wait 8
typedef void (*func_nro_NinjaUtil_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_NinjaUtil_wait_long 9
typedef void (*func_nro_NinjaUtil_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_NinjaUtil_wait_long_int 10
typedef void (*func_nro_NinjaUtil_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_NinjaUtil(jobject object, jint mark, jint depth);
void clinit_nro_NinjaUtil(jcontext ctx);
void init_nro_NinjaUtil_short_byte_java_lang_String_java_lang_String_Array1_java_lang_String_Array1_short_short_Array1_java_lang_String(jcontext ctx, jobject self, jshort param0, jbyte param1, jobject param2, jobject param3, jobject param4, jobject param5, jshort param6, jobject param7);
void init_nro_NinjaUtil(jcontext ctx, jobject self);
jobject SM_nro_NinjaUtil_readByteArray_nro_Message_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_nro_NinjaUtil_readByteArray_java_io_DataInputStream_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_nro_NinjaUtil_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_nro_NinjaUtil_getDate_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_nro_NinjaUtil_getTime_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_nro_NinjaUtil_getMoneys_long_R_java_lang_String(jcontext ctx, jlong param0);
jobject SM_nro_NinjaUtil_getTimeAgo_int_R_java_lang_String(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
