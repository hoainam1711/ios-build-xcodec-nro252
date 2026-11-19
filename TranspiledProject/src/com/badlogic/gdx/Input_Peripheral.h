#ifndef HEADER_com_badlogic_gdx_Input$Peripheral
#define HEADER_com_badlogic_gdx_Input$Peripheral

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Input$Peripheral {
	java_lang_Enum parent;
} com_badlogic_gdx_Input$Peripheral;

extern Class class_com_badlogic_gdx_Input$Peripheral;

extern jobject SF_com_badlogic_gdx_Input$Peripheral_HardwareKeyboard;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_OnscreenKeyboard;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_MultitouchScreen;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_Accelerometer;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_Compass;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_Vibrator;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_HapticFeedback;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_Gyroscope;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_RotationVector;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_Pressure;
extern jobject SF_com_badlogic_gdx_Input$Peripheral_$VALUES;

#define VTABLE_com_badlogic_gdx_Input$Peripheral_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_Input$Peripheral_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_Input$Peripheral_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_Input$Peripheral_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_Input$Peripheral_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_Input$Peripheral_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_finalize 5
typedef void (*func_com_badlogic_gdx_Input$Peripheral_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_notify 6
typedef void (*func_com_badlogic_gdx_Input$Peripheral_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_notifyAll 7
typedef void (*func_com_badlogic_gdx_Input$Peripheral_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_wait 8
typedef void (*func_com_badlogic_gdx_Input$Peripheral_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_wait_long 9
typedef void (*func_com_badlogic_gdx_Input$Peripheral_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_wait_long_int 10
typedef void (*func_com_badlogic_gdx_Input$Peripheral_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_compareTo_java_lang_Object_R_int 11
typedef jint (*func_com_badlogic_gdx_Input$Peripheral_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_com_badlogic_gdx_Input$Peripheral_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_name_R_java_lang_String 13
typedef jobject (*func_com_badlogic_gdx_Input$Peripheral_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_ordinal_R_int 14
typedef jint (*func_com_badlogic_gdx_Input$Peripheral_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Peripheral_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_com_badlogic_gdx_Input$Peripheral_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Input$Peripheral(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Input$Peripheral(jcontext ctx);
jobject SM_com_badlogic_gdx_Input$Peripheral_values_R_Array1_com_badlogic_gdx_Input$Peripheral(jcontext ctx);
jobject SM_com_badlogic_gdx_Input$Peripheral_valueOf_java_lang_String_R_com_badlogic_gdx_Input$Peripheral(jcontext ctx, jobject param0);
void init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_com_badlogic_gdx_Input$Peripheral_$values_R_Array1_com_badlogic_gdx_Input$Peripheral(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
