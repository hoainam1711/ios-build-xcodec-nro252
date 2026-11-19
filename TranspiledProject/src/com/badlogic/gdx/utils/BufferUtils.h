#ifndef HEADER_com_badlogic_gdx_utils_BufferUtils
#define HEADER_com_badlogic_gdx_utils_BufferUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_BufferUtils {
	java_lang_Object parent;
} com_badlogic_gdx_utils_BufferUtils;

extern Class class_com_badlogic_gdx_utils_BufferUtils;

extern jobject SF_com_badlogic_gdx_utils_BufferUtils_unsafeBuffers;
extern jint SF_com_badlogic_gdx_utils_BufferUtils_allocatedUnsafe;

#define VTABLE_com_badlogic_gdx_utils_BufferUtils_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_BufferUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_BufferUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_BufferUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_BufferUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_BufferUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_finalize 5
typedef void (*func_com_badlogic_gdx_utils_BufferUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_notify 6
typedef void (*func_com_badlogic_gdx_utils_BufferUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_BufferUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_wait 8
typedef void (*func_com_badlogic_gdx_utils_BufferUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_BufferUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_BufferUtils_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_BufferUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_utils_BufferUtils(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_BufferUtils(jcontext ctx);
void init_com_badlogic_gdx_utils_BufferUtils(jcontext ctx, jobject self);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_byte_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_short_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_char_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_int_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_long_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_double_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_char_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_int_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_long_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_double_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copy_java_nio_Buffer_java_nio_Buffer_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix4_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
void SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix4_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
void SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transform_java_nio_Buffer_int_int_int_com_badlogic_gdx_math_Matrix3_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
void SM_com_badlogic_gdx_utils_BufferUtils_transform_Array1_float_int_int_int_com_badlogic_gdx_math_Matrix3_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_java_nio_Buffer_int_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_java_nio_Buffer_int_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_Array1_float_int_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_Array1_float_int_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_java_nio_Buffer_int_float_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jfloat param4);
jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_java_nio_Buffer_int_float_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jfloat param4);
jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_java_nio_Buffer_int_Array1_float_int_float_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jfloat param4);
jlong SM_com_badlogic_gdx_utils_BufferUtils_findFloats_Array1_float_int_Array1_float_int_float_R_long(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jfloat param4);
jint SM_com_badlogic_gdx_utils_BufferUtils_positionInBytes_java_nio_Buffer_R_int(jcontext ctx, jobject param0);
jint SM_com_badlogic_gdx_utils_BufferUtils_bytesToElements_java_nio_Buffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_com_badlogic_gdx_utils_BufferUtils_elementsToBytes_java_nio_Buffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newFloatBuffer_int_R_java_nio_FloatBuffer(jcontext ctx, jint param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newDoubleBuffer_int_R_java_nio_DoubleBuffer(jcontext ctx, jint param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newShortBuffer_int_R_java_nio_ShortBuffer(jcontext ctx, jint param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newCharBuffer_int_R_java_nio_CharBuffer(jcontext ctx, jint param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer(jcontext ctx, jint param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newLongBuffer_int_R_java_nio_LongBuffer(jcontext ctx, jint param0);
void SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jbool SM_com_badlogic_gdx_utils_BufferUtils_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(jcontext ctx, jobject param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0);
jlong SM_com_badlogic_gdx_utils_BufferUtils_getUnsafeBufferAddress_java_nio_Buffer_R_long(jcontext ctx, jobject param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jint SM_com_badlogic_gdx_utils_BufferUtils_getAllocatedBytesUnsafe_R_int(jcontext ctx);
void SM_com_badlogic_gdx_utils_BufferUtils_freeMemory_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jobject SM_com_badlogic_gdx_utils_BufferUtils_newDisposableByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0);
jlong SM_com_badlogic_gdx_utils_BufferUtils_getBufferAddress_java_nio_Buffer_R_long(jcontext ctx, jobject param0);
void SM_com_badlogic_gdx_utils_BufferUtils_clear_java_nio_ByteBuffer_int(jcontext ctx, jobject param0, jint param1);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_byte_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_char_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_short_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_int_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_long_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_float_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_Array1_double_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV4M4Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV4M4Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV3M4Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV3M4Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV2M4Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV2M4Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV3M3Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV3M3Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV2M3Jni_java_nio_Buffer_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
void SM_com_badlogic_gdx_utils_BufferUtils_transformV2M3Jni_Array1_float_int_int_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4);
jlong SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_java_nio_Buffer_int_int_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5);
jlong SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_java_nio_Buffer_int_int_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5);
jlong SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_Array1_float_int_int_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5);
jlong SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_Array1_float_int_int_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5);
jlong SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_java_nio_Buffer_int_int_float_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jfloat param6);
jlong SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_java_nio_Buffer_int_int_float_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jfloat param6);
jlong SM_com_badlogic_gdx_utils_BufferUtils_find_java_nio_Buffer_int_int_Array1_float_int_int_float_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jfloat param6);
jlong SM_com_badlogic_gdx_utils_BufferUtils_find_Array1_float_int_int_Array1_float_int_int_float_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jfloat param6);

#ifdef __cplusplus
}
#endif

#endif
