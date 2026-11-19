#ifndef HEADER_nro_Rms
#define HEADER_nro_Rms

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Rms {
	java_lang_Object parent;
	jref F_pi;
} nro_Rms;

extern Class class_nro_Rms;

extern jobject SF_nro_Rms_MAGIC;
extern jobject SF_nro_Rms_CIPHER_KEY;
extern jint SF_nro_Rms_WEB_CACHE_MAX_ENTRIES;
extern jint SF_nro_Rms_WEB_CACHE_MAX_BYTES;
extern jint SF_nro_Rms_webCacheBytes;
extern jobject SF_nro_Rms_webMemoryCache;
extern jobject SF_nro_Rms_webMissingKeys;
extern jobject SF_nro_Rms_cachedStorageDir;

#define VTABLE_nro_Rms_hashCode_R_int 0
typedef jint (*func_nro_Rms_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Rms_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Rms_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Rms_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Rms_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Rms_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Rms_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Rms_toString_R_java_lang_String 4
typedef jobject (*func_nro_Rms_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Rms_finalize 5
typedef void (*func_nro_Rms_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Rms_notify 6
typedef void (*func_nro_Rms_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Rms_notifyAll 7
typedef void (*func_nro_Rms_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Rms_wait 8
typedef void (*func_nro_Rms_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Rms_wait_long 9
typedef void (*func_nro_Rms_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Rms_wait_long_int 10
typedef void (*func_nro_Rms_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Rms(jobject object, jint mark, jint depth);
void clinit_nro_Rms(jcontext ctx);
jbool SM_nro_Rms_isWebRamOnlyKey_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void SM_nro_Rms_putWebCache_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1);
jobject SM_nro_Rms_getWebCache_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0);
jbool SM_nro_Rms_isWebMissing_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void SM_nro_Rms_markWebMissing_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_Rms_removeWebCache_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_Rms_clearWebCache(jcontext ctx);
jint SM_nro_Rms_getWebCacheEntryCount_R_int(jcontext ctx);
jint SM_nro_Rms_getWebCacheBytes_R_int(jcontext ctx);
void init_nro_Rms_int(jcontext ctx, jobject self, jint param0);
void init_nro_Rms(jcontext ctx, jobject self);
jobject SM_nro_Rms_getStorageDir_R_com_badlogic_gdx_files_FileHandle(jcontext ctx);
jobject SM_nro_Rms_getFileHandle_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0);
jobject SM_nro_Rms_encrypt_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_nro_Rms_decrypt_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0);
void SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1);
void SM_nro_Rms_DeleteStorage_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_Rms_clearAll(jcontext ctx);
jobject SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0);
void SM_nro_Rms_saveRMSInt_java_lang_String_int(jcontext ctx, jobject param0, jint param1);
void SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jint SM_nro_Rms_loadRMSInt_java_lang_String_R_int(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
