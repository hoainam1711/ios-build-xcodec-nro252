#ifndef HEADER_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer
#define HEADER_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer

#include "Clearwing.h"
#include "java/io/DataOutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer {
	java_io_DataOutputStream parent;
	jref F_buffer;
	jref F_crc;
} com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer;

extern Class class_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer;


#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_notify 6
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_wait 8
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_close 11
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_close)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_flush 12
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_flush)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_write_Array1_byte 13
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_write_Array1_byte_int_int 14
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_write_int 15
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_checkError_R_boolean 16
typedef jbool (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeBoolean_boolean 17
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeBoolean_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int 18
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeByte_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeChar_int 19
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeChar_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeChars_java_lang_String 20
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeChars_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeDouble_double 21
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeFloat_float 22
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeFloat_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int 23
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeInt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeLong_long 24
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeLong_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeShort_int 25
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeShort_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeUTF_java_lang_String 26
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeUTF_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_size_R_int 27
typedef jint (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeBytes_java_lang_String 28
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeBytes_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeLongToBuffer_long_Array1_byte_int_R_int 29
typedef jint (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeLongToBuffer_long_Array1_byte_int_R_int)(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeShortToBuffer_int_Array1_byte_int_R_int 30
typedef jint (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeShortToBuffer_int_Array1_byte_int_R_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_countUTFBytes_java_lang_String_R_long 31
typedef jlong (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_countUTFBytes_java_lang_String_R_long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int 32
typedef jint (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2, jint param3);
#define VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream 33
typedef void (*func_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer(jcontext ctx);
void init_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_java_io_ByteArrayOutputStream_java_util_zip_CRC32(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_graphics_PixmapIO$PNG$ChunkBuffer_endChunk_java_io_DataOutputStream(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
