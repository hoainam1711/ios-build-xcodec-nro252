#ifndef HEADER_nro_ImgByName
#define HEADER_nro_ImgByName

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ImgByName {
	java_lang_Object parent;
} nro_ImgByName;

extern Class class_nro_ImgByName;

extern jobject SF_nro_ImgByName_hashImagePath;

#define VTABLE_nro_ImgByName_hashCode_R_int 0
typedef jint (*func_nro_ImgByName_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ImgByName_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ImgByName_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ImgByName_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ImgByName_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ImgByName_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ImgByName_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ImgByName_toString_R_java_lang_String 4
typedef jobject (*func_nro_ImgByName_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ImgByName_finalize 5
typedef void (*func_nro_ImgByName_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ImgByName_notify 6
typedef void (*func_nro_ImgByName_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ImgByName_notifyAll 7
typedef void (*func_nro_ImgByName_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ImgByName_wait 8
typedef void (*func_nro_ImgByName_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ImgByName_wait_long 9
typedef void (*func_nro_ImgByName_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ImgByName_wait_long_int 10
typedef void (*func_nro_ImgByName_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_ImgByName(jobject object, jint mark, jint depth);
void clinit_nro_ImgByName(jcontext ctx);
void init_nro_ImgByName(jcontext ctx, jobject self);
void SM_nro_ImgByName_SetImage_java_lang_String_javax_microedition_lcdui_Image_byte(jcontext ctx, jobject param0, jobject param1, jbyte param2);
jobject SM_nro_ImgByName_getImagePath_java_lang_String_nro_mHashTable_R_nro_MainImage(jcontext ctx, jobject param0, jobject param1);
jobject SM_nro_ImgByName_getFromRms_java_lang_String_R_nro_MainImage(jcontext ctx, jobject param0);
void SM_nro_ImgByName_saveRMS_java_lang_String_byte_Array1_byte(jcontext ctx, jobject param0, jbyte param1, jobject param2);
void SM_nro_ImgByName_checkDelHash_nro_mHashTable_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
