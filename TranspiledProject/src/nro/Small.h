#ifndef HEADER_nro_Small
#define HEADER_nro_Small

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Small {
	java_lang_Object parent;
	jref F_img;
	jint F_id;
	jint F_timePaint;
	jint F_timeUpdate;
} nro_Small;

extern Class class_nro_Small;


#define VTABLE_nro_Small_hashCode_R_int 0
typedef jint (*func_nro_Small_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Small_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Small_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Small_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Small_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Small_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Small_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Small_toString_R_java_lang_String 4
typedef jobject (*func_nro_Small_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Small_finalize 5
typedef void (*func_nro_Small_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Small_notify 6
typedef void (*func_nro_Small_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Small_notifyAll 7
typedef void (*func_nro_Small_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Small_wait 8
typedef void (*func_nro_Small_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Small_wait_long 9
typedef void (*func_nro_Small_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Small_wait_long_int 10
typedef void (*func_nro_Small_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Small_paint_lib_mGraphics_int_int_int_int 11
typedef void (*func_nro_Small_paint_lib_mGraphics_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int 12
typedef void (*func_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);

void mark_nro_Small(jobject object, jint mark, jint depth);
void clinit_nro_Small(jcontext ctx);
void init_nro_Small_javax_microedition_lcdui_Image_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_nro_Small_paint_lib_mGraphics_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void M_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);

#ifdef __cplusplus
}
#endif

#endif
