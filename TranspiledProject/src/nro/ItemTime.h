#ifndef HEADER_nro_ItemTime
#define HEADER_nro_ItemTime

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ItemTime {
	java_lang_Object parent;
	jshort F_idIcon;
	jint F_second;
	jint F_minute;
	jlong F_curr;
	jlong F_last;
	jbool F_isPaint_coolDownBar;
	jint F_time;
	jint F_coutTime;
	jbool F_isText;
	jbool F_dontClear;
	jref F_text;
	jint F_per;
} nro_ItemTime;

extern Class class_nro_ItemTime;


#define VTABLE_nro_ItemTime_hashCode_R_int 0
typedef jint (*func_nro_ItemTime_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ItemTime_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ItemTime_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ItemTime_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ItemTime_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_toString_R_java_lang_String 4
typedef jobject (*func_nro_ItemTime_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_finalize 5
typedef void (*func_nro_ItemTime_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_notify 6
typedef void (*func_nro_ItemTime_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_notifyAll 7
typedef void (*func_nro_ItemTime_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_wait 8
typedef void (*func_nro_ItemTime_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_wait_long 9
typedef void (*func_nro_ItemTime_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ItemTime_wait_long_int 10
typedef void (*func_nro_ItemTime_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ItemTime_initTimeText_byte_java_lang_String_int 11
typedef void (*func_nro_ItemTime_initTimeText_byte_java_lang_String_int)(jcontext ctx, jobject self, jbyte param0, jobject param1, jint param2);
#define VTABLE_nro_ItemTime_initTime_int_boolean 12
typedef void (*func_nro_ItemTime_initTime_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_nro_ItemTime_getDisplayTime_R_java_lang_String 13
typedef jobject (*func_nro_ItemTime_getDisplayTime_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemTime_paintText_lib_mGraphics_int_int 14
typedef void (*func_nro_ItemTime_paintText_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_ItemTime_update 15
typedef void (*func_nro_ItemTime_update)(jcontext ctx, jobject self);

void mark_nro_ItemTime(jobject object, jint mark, jint depth);
void clinit_nro_ItemTime(jcontext ctx);
void init_nro_ItemTime_short_int(jcontext ctx, jobject self, jshort param0, jint param1);
void init_nro_ItemTime(jcontext ctx, jobject self);
jbool SM_nro_ItemTime_isExistItem_int_R_boolean(jcontext ctx, jint param0);
jbool SM_nro_ItemTime_isExistMessage_int_R_boolean(jcontext ctx, jint param0);
jobject SM_nro_ItemTime_getItemById_int_R_nro_ItemTime(jcontext ctx, jint param0);
jobject SM_nro_ItemTime_getMessageById_int_R_nro_ItemTime(jcontext ctx, jint param0);
void M_nro_ItemTime_initTimeText_byte_java_lang_String_int(jcontext ctx, jobject self, jbyte param0, jobject param1, jint param2);
void M_nro_ItemTime_initTime_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
jobject M_nro_ItemTime_getDisplayTime_R_java_lang_String(jcontext ctx, jobject self);
void M_nro_ItemTime_paintText_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_ItemTime_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
