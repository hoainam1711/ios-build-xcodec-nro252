#ifndef HEADER_nro_EffectData
#define HEADER_nro_EffectData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_EffectData {
	java_lang_Object parent;
	jref F_img;
	jref F_imgInfo;
	jref F_frame;
	jref F_arrFrame;
	jref F_anim_data;
	jint F_ID;
	jint F_typeData;
	jint F_width;
	jint F_height;
} nro_EffectData;

extern Class class_nro_EffectData;


#define VTABLE_nro_EffectData_hashCode_R_int 0
typedef jint (*func_nro_EffectData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_EffectData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectData_clone_R_java_lang_Object 2
typedef jobject (*func_nro_EffectData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectData_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_EffectData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectData_toString_R_java_lang_String 4
typedef jobject (*func_nro_EffectData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectData_finalize 5
typedef void (*func_nro_EffectData_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectData_notify 6
typedef void (*func_nro_EffectData_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectData_notifyAll 7
typedef void (*func_nro_EffectData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectData_wait 8
typedef void (*func_nro_EffectData_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectData_wait_long 9
typedef void (*func_nro_EffectData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_EffectData_wait_long_int 10
typedef void (*func_nro_EffectData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_EffectData_readData_java_lang_String 11
typedef void (*func_nro_EffectData_readData_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectData_readData2_java_lang_String 12
typedef void (*func_nro_EffectData_readData2_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectData_readEffect_java_io_DataInputStream 13
typedef void (*func_nro_EffectData_readEffect_java_io_DataInputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectData_readData_java_io_DataInputStream 14
typedef void (*func_nro_EffectData_readData_java_io_DataInputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectData_readDataNewBoss_Array1_byte_byte 15
typedef void (*func_nro_EffectData_readDataNewBoss_Array1_byte_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);
#define VTABLE_nro_EffectData_readData_Array1_byte 16
typedef void (*func_nro_EffectData_readData_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int 17
typedef void (*func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_nro_EffectData_a_java_io_DataInputStream_byte 18
typedef void (*func_nro_EffectData_a_java_io_DataInputStream_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);

void mark_nro_EffectData(jobject object, jint mark, jint depth);
void clinit_nro_EffectData(jcontext ctx);
void init_nro_EffectData(jcontext ctx, jobject self);
void M_nro_EffectData_readData_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_EffectData_readData2_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_EffectData_readEffect_java_io_DataInputStream(jcontext ctx, jobject self, jobject param0);
void M_nro_EffectData_readData_java_io_DataInputStream(jcontext ctx, jobject self, jobject param0);
void M_nro_EffectData_readDataNewBoss_Array1_byte_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void M_nro_EffectData_readData_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void M_nro_EffectData_a_java_io_DataInputStream_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);

#ifdef __cplusplus
}
#endif

#endif
