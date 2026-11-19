#ifndef HEADER_com_badlogic_gdx_AbstractInput
#define HEADER_com_badlogic_gdx_AbstractInput

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_AbstractInput {
	java_lang_Object parent;
	jref F_pressedKeys;
	jref F_justPressedKeys;
	jref F_keysToCatch;
	jint F_pressedKeyCount;
	jbool F_keyJustPressed;
} com_badlogic_gdx_AbstractInput;

extern Class class_com_badlogic_gdx_AbstractInput;


#define VTABLE_com_badlogic_gdx_AbstractInput_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_AbstractInput_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_AbstractInput_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_AbstractInput_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_AbstractInput_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_AbstractInput_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_finalize 5
typedef void (*func_com_badlogic_gdx_AbstractInput_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_notify 6
typedef void (*func_com_badlogic_gdx_AbstractInput_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_notifyAll 7
typedef void (*func_com_badlogic_gdx_AbstractInput_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_wait 8
typedef void (*func_com_badlogic_gdx_AbstractInput_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_wait_long 9
typedef void (*func_com_badlogic_gdx_AbstractInput_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_wait_long_int 10
typedef void (*func_com_badlogic_gdx_AbstractInput_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_AbstractInput_getAccelerometerX_R_float 11
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getAccelerometerX_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getAccelerometerY_R_float 12
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getAccelerometerY_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getAccelerometerZ_R_float 13
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getAccelerometerZ_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getGyroscopeX_R_float 14
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getGyroscopeX_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getGyroscopeY_R_float 15
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getGyroscopeY_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getGyroscopeZ_R_float 16
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getGyroscopeZ_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getMaxPointers_R_int 17
typedef jint (*func_com_badlogic_gdx_AbstractInput_getMaxPointers_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getX_R_int 18
typedef jint (*func_com_badlogic_gdx_AbstractInput_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getX_int_R_int 19
typedef jint (*func_com_badlogic_gdx_AbstractInput_getX_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getDeltaX_R_int 20
typedef jint (*func_com_badlogic_gdx_AbstractInput_getDeltaX_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getDeltaX_int_R_int 21
typedef jint (*func_com_badlogic_gdx_AbstractInput_getDeltaX_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getY_R_int 22
typedef jint (*func_com_badlogic_gdx_AbstractInput_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getY_int_R_int 23
typedef jint (*func_com_badlogic_gdx_AbstractInput_getY_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getDeltaY_R_int 24
typedef jint (*func_com_badlogic_gdx_AbstractInput_getDeltaY_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getDeltaY_int_R_int 25
typedef jint (*func_com_badlogic_gdx_AbstractInput_getDeltaY_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_isTouched_R_boolean 26
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isTouched_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_justTouched_R_boolean 27
typedef jbool (*func_com_badlogic_gdx_AbstractInput_justTouched_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_isTouched_int_R_boolean 28
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isTouched_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getPressure_R_float 29
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getPressure_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getPressure_int_R_float 30
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getPressure_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_isButtonPressed_int_R_boolean 31
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isButtonPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_isButtonJustPressed_int_R_boolean 32
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isButtonJustPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_isKeyPressed_int_R_boolean 33
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isKeyPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_isKeyJustPressed_int_R_boolean 34
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isKeyJustPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String 35
typedef void (*func_com_badlogic_gdx_AbstractInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_com_badlogic_gdx_AbstractInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType 36
typedef void (*func_com_badlogic_gdx_AbstractInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_com_badlogic_gdx_AbstractInput_setOnscreenKeyboardVisible_boolean 37
typedef void (*func_com_badlogic_gdx_AbstractInput_setOnscreenKeyboardVisible_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType 38
typedef void (*func_com_badlogic_gdx_AbstractInput_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_com_badlogic_gdx_AbstractInput_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration 39
typedef void (*func_com_badlogic_gdx_AbstractInput_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_closeTextInputField_boolean 40
typedef void (*func_com_badlogic_gdx_AbstractInput_closeTextInputField_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback 41
typedef void (*func_com_badlogic_gdx_AbstractInput_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_com_badlogic_gdx_AbstractInput_isTextInputFieldOpened_R_boolean 42
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isTextInputFieldOpened_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver 43
typedef void (*func_com_badlogic_gdx_AbstractInput_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_vibrate_int 44
typedef void (*func_com_badlogic_gdx_AbstractInput_vibrate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_vibrate_int_boolean 45
typedef void (*func_com_badlogic_gdx_AbstractInput_vibrate_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_com_badlogic_gdx_AbstractInput_vibrate_int_int_boolean 46
typedef void (*func_com_badlogic_gdx_AbstractInput_vibrate_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_com_badlogic_gdx_AbstractInput_vibrate_com_badlogic_gdx_Input$VibrationType 47
typedef void (*func_com_badlogic_gdx_AbstractInput_vibrate_com_badlogic_gdx_Input$VibrationType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getAzimuth_R_float 48
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getAzimuth_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getPitch_R_float 49
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getPitch_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getRoll_R_float 50
typedef jfloat (*func_com_badlogic_gdx_AbstractInput_getRoll_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getRotationMatrix_Array1_float 51
typedef void (*func_com_badlogic_gdx_AbstractInput_getRotationMatrix_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getCurrentEventTime_R_long 52
typedef jlong (*func_com_badlogic_gdx_AbstractInput_getCurrentEventTime_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_setCatchKey_int_boolean 53
typedef void (*func_com_badlogic_gdx_AbstractInput_setCatchKey_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_com_badlogic_gdx_AbstractInput_isCatchKey_int_R_boolean 54
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isCatchKey_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_setInputProcessor_com_badlogic_gdx_InputProcessor 55
typedef void (*func_com_badlogic_gdx_AbstractInput_setInputProcessor_com_badlogic_gdx_InputProcessor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getInputProcessor_R_com_badlogic_gdx_InputProcessor 56
typedef jobject (*func_com_badlogic_gdx_AbstractInput_getInputProcessor_R_com_badlogic_gdx_InputProcessor)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean 57
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_getRotation_R_int 58
typedef jint (*func_com_badlogic_gdx_AbstractInput_getRotation_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation 59
typedef jobject (*func_com_badlogic_gdx_AbstractInput_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_setCursorCatched_boolean 60
typedef void (*func_com_badlogic_gdx_AbstractInput_setCursorCatched_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_AbstractInput_isCursorCatched_R_boolean 61
typedef jbool (*func_com_badlogic_gdx_AbstractInput_isCursorCatched_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_AbstractInput_setCursorPosition_int_int 62
typedef void (*func_com_badlogic_gdx_AbstractInput_setCursorPosition_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_com_badlogic_gdx_AbstractInput(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_AbstractInput(jcontext ctx);
void init_com_badlogic_gdx_AbstractInput(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_AbstractInput_isKeyPressed_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_AbstractInput_isKeyJustPressed_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_AbstractInput_setCatchKey_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
jbool M_com_badlogic_gdx_AbstractInput_isCatchKey_int_R_boolean(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
