#ifndef HEADER_com_badlogic_gdx_Input
#define HEADER_com_badlogic_gdx_Input

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Input {
	java_lang_Object parent;
} com_badlogic_gdx_Input;

extern Class class_com_badlogic_gdx_Input;


#define INDEX_com_badlogic_gdx_Input_getAccelerometerX_R_float 0
typedef jfloat (*func_com_badlogic_gdx_Input_getAccelerometerX_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getAccelerometerY_R_float 1
typedef jfloat (*func_com_badlogic_gdx_Input_getAccelerometerY_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getAccelerometerZ_R_float 2
typedef jfloat (*func_com_badlogic_gdx_Input_getAccelerometerZ_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getGyroscopeX_R_float 3
typedef jfloat (*func_com_badlogic_gdx_Input_getGyroscopeX_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getGyroscopeY_R_float 4
typedef jfloat (*func_com_badlogic_gdx_Input_getGyroscopeY_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getGyroscopeZ_R_float 5
typedef jfloat (*func_com_badlogic_gdx_Input_getGyroscopeZ_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getMaxPointers_R_int 6
typedef jint (*func_com_badlogic_gdx_Input_getMaxPointers_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getX_R_int 7
typedef jint (*func_com_badlogic_gdx_Input_getX_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getX_int_R_int 8
typedef jint (*func_com_badlogic_gdx_Input_getX_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_getDeltaX_R_int 9
typedef jint (*func_com_badlogic_gdx_Input_getDeltaX_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getDeltaX_int_R_int 10
typedef jint (*func_com_badlogic_gdx_Input_getDeltaX_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_getY_R_int 11
typedef jint (*func_com_badlogic_gdx_Input_getY_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getY_int_R_int 12
typedef jint (*func_com_badlogic_gdx_Input_getY_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_getDeltaY_R_int 13
typedef jint (*func_com_badlogic_gdx_Input_getDeltaY_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getDeltaY_int_R_int 14
typedef jint (*func_com_badlogic_gdx_Input_getDeltaY_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_isTouched_R_boolean 15
typedef jbool (*func_com_badlogic_gdx_Input_isTouched_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_justTouched_R_boolean 16
typedef jbool (*func_com_badlogic_gdx_Input_justTouched_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_isTouched_int_R_boolean 17
typedef jbool (*func_com_badlogic_gdx_Input_isTouched_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_getPressure_R_float 18
typedef jfloat (*func_com_badlogic_gdx_Input_getPressure_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getPressure_int_R_float 19
typedef jfloat (*func_com_badlogic_gdx_Input_getPressure_int_R_float)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean 20
typedef jbool (*func_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_isButtonJustPressed_int_R_boolean 21
typedef jbool (*func_com_badlogic_gdx_Input_isButtonJustPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean 22
typedef jbool (*func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_isKeyJustPressed_int_R_boolean 23
typedef jbool (*func_com_badlogic_gdx_Input_isKeyJustPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String 24
typedef void (*func_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define INDEX_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType 25
typedef void (*func_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean 26
typedef void (*func_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType 27
typedef void (*func_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define INDEX_com_badlogic_gdx_Input_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration 28
typedef void (*func_com_badlogic_gdx_Input_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Input_closeTextInputField_boolean 29
typedef void (*func_com_badlogic_gdx_Input_closeTextInputField_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback 30
typedef void (*func_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define INDEX_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean 31
typedef jbool (*func_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver 32
typedef void (*func_com_badlogic_gdx_Input_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Input_vibrate_int 33
typedef void (*func_com_badlogic_gdx_Input_vibrate_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_vibrate_int_boolean 34
typedef void (*func_com_badlogic_gdx_Input_vibrate_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define INDEX_com_badlogic_gdx_Input_vibrate_int_int_boolean 35
typedef void (*func_com_badlogic_gdx_Input_vibrate_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define INDEX_com_badlogic_gdx_Input_vibrate_com_badlogic_gdx_Input$VibrationType 36
typedef void (*func_com_badlogic_gdx_Input_vibrate_com_badlogic_gdx_Input$VibrationType)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Input_getAzimuth_R_float 37
typedef jfloat (*func_com_badlogic_gdx_Input_getAzimuth_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getPitch_R_float 38
typedef jfloat (*func_com_badlogic_gdx_Input_getPitch_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getRoll_R_float 39
typedef jfloat (*func_com_badlogic_gdx_Input_getRoll_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getRotationMatrix_Array1_float 40
typedef void (*func_com_badlogic_gdx_Input_getRotationMatrix_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Input_getCurrentEventTime_R_long 41
typedef jlong (*func_com_badlogic_gdx_Input_getCurrentEventTime_R_long)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_setCatchKey_int_boolean 42
typedef void (*func_com_badlogic_gdx_Input_setCatchKey_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define INDEX_com_badlogic_gdx_Input_isCatchKey_int_R_boolean 43
typedef jbool (*func_com_badlogic_gdx_Input_isCatchKey_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input_setInputProcessor_com_badlogic_gdx_InputProcessor 44
typedef void (*func_com_badlogic_gdx_Input_setInputProcessor_com_badlogic_gdx_InputProcessor)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Input_getInputProcessor_R_com_badlogic_gdx_InputProcessor 45
typedef jobject (*func_com_badlogic_gdx_Input_getInputProcessor_R_com_badlogic_gdx_InputProcessor)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean 46
typedef jbool (*func_com_badlogic_gdx_Input_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Input_getRotation_R_int 47
typedef jint (*func_com_badlogic_gdx_Input_getRotation_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation 48
typedef jobject (*func_com_badlogic_gdx_Input_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_setCursorCatched_boolean 49
typedef void (*func_com_badlogic_gdx_Input_setCursorCatched_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_com_badlogic_gdx_Input_isCursorCatched_R_boolean 50
typedef jbool (*func_com_badlogic_gdx_Input_isCursorCatched_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_Input_setCursorPosition_int_int 51
typedef void (*func_com_badlogic_gdx_Input_setCursorPosition_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_com_badlogic_gdx_Input(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Input(jcontext ctx);
void M_com_badlogic_gdx_Input_closeTextInputField_boolean(jcontext ctx, jobject self, jbool param0);
void M_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback(jcontext ctx, jobject self, jbool param0, jobject param1);
jbool M_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
