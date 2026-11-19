#ifndef HEADER_nro_Message
#define HEADER_nro_Message

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Message {
	java_lang_Object parent;
	jbyte F_command;
	jref F_b;
	jref F_c;
	jref F_dos;
	jref F_dis;
	jref F_inData;
} nro_Message;

extern Class class_nro_Message;


#define VTABLE_nro_Message_hashCode_R_int 0
typedef jint (*func_nro_Message_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Message_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Message_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Message_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Message_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_toString_R_java_lang_String 4
typedef jobject (*func_nro_Message_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_finalize 5
typedef void (*func_nro_Message_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_notify 6
typedef void (*func_nro_Message_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_notifyAll 7
typedef void (*func_nro_Message_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_wait 8
typedef void (*func_nro_Message_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_wait_long 9
typedef void (*func_nro_Message_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Message_wait_long_int 10
typedef void (*func_nro_Message_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Message_getData_R_Array1_byte 11
typedef jobject (*func_nro_Message_getData_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_readInt3Byte_R_int 12
typedef jint (*func_nro_Message_readInt3Byte_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_reader_R_java_io_DataInputStream 13
typedef jobject (*func_nro_Message_reader_R_java_io_DataInputStream)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_writer_R_java_io_DataOutputStream 14
typedef jobject (*func_nro_Message_writer_R_java_io_DataOutputStream)(jcontext ctx, jobject self);
#define VTABLE_nro_Message_cleanUp 15
typedef void (*func_nro_Message_cleanUp)(jcontext ctx, jobject self);

void mark_nro_Message(jobject object, jint mark, jint depth);
void clinit_nro_Message(jcontext ctx);
void init_nro_Message(jcontext ctx, jobject self);
void init_nro_Message_byte(jcontext ctx, jobject self, jbyte param0);
void init_nro_Message_byte_Array1_byte(jcontext ctx, jobject self, jbyte param0, jobject param1);
jobject M_nro_Message_getData_R_Array1_byte(jcontext ctx, jobject self);
jint M_nro_Message_readInt3Byte_R_int(jcontext ctx, jobject self);
jobject M_nro_Message_reader_R_java_io_DataInputStream(jcontext ctx, jobject self);
jobject M_nro_Message_writer_R_java_io_DataOutputStream(jcontext ctx, jobject self);
void M_nro_Message_cleanUp(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
