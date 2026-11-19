#ifndef HEADER_nro_Paint
#define HEADER_nro_Paint

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Paint {
	java_lang_Object parent;
} nro_Paint;

extern Class class_nro_Paint;

extern jint SF_nro_Paint_COLORBACKGROUND;
extern jobject SF_nro_Paint_goc;
extern jint SF_nro_Paint_hTab;
extern jint SF_nro_Paint_lenCaption;

#define VTABLE_nro_Paint_hashCode_R_int 0
typedef jint (*func_nro_Paint_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Paint_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Paint_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Paint_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Paint_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Paint_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Paint_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Paint_toString_R_java_lang_String 4
typedef jobject (*func_nro_Paint_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Paint_finalize 5
typedef void (*func_nro_Paint_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Paint_notify 6
typedef void (*func_nro_Paint_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Paint_notifyAll 7
typedef void (*func_nro_Paint_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Paint_wait 8
typedef void (*func_nro_Paint_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Paint_wait_long 9
typedef void (*func_nro_Paint_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Paint_wait_long_int 10
typedef void (*func_nro_Paint_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String 11
typedef void (*func_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5);

void mark_nro_Paint(jobject object, jint mark, jint depth);
void clinit_nro_Paint(jcontext ctx);
void init_nro_Paint(jcontext ctx, jobject self);
void SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void M_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
void SM_nro_Paint_paintPopUp_int_int_int_int_lib_mGraphics(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
void SM_nro_Paint_paintFrame_int_int_int_int_lib_mGraphics(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
void SM_nro_Paint_paintFrameSimple_int_int_int_int_lib_mGraphics(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
