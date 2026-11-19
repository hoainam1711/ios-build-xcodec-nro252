#ifndef HEADER_nro_TextInfo
#define HEADER_nro_TextInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_TextInfo {
	java_lang_Object parent;
} nro_TextInfo;

extern Class class_nro_TextInfo;

extern jint SF_nro_TextInfo_dx;
extern jint SF_nro_TextInfo_tx;
extern jint SF_nro_TextInfo_wStr;
extern jbool SF_nro_TextInfo_isBack;
extern jobject SF_nro_TextInfo_laststring;

#define VTABLE_nro_TextInfo_hashCode_R_int 0
typedef jint (*func_nro_TextInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_TextInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_TextInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_TextInfo_clone_R_java_lang_Object 2
typedef jobject (*func_nro_TextInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_TextInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_TextInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_TextInfo_toString_R_java_lang_String 4
typedef jobject (*func_nro_TextInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_TextInfo_finalize 5
typedef void (*func_nro_TextInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_TextInfo_notify 6
typedef void (*func_nro_TextInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_TextInfo_notifyAll 7
typedef void (*func_nro_TextInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_TextInfo_wait 8
typedef void (*func_nro_TextInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_TextInfo_wait_long 9
typedef void (*func_nro_TextInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_TextInfo_wait_long_int 10
typedef void (*func_nro_TextInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_TextInfo(jobject object, jint mark, jint depth);
void clinit_nro_TextInfo(jcontext ctx);
void init_nro_TextInfo(jcontext ctx, jobject self);
void SM_nro_TextInfo_reset(jcontext ctx);
void SM_nro_TextInfo_paint_lib_mGraphics_java_lang_String_int_int_int_int_lib_mFont(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jobject param6);

#ifdef __cplusplus
}
#endif

#endif
