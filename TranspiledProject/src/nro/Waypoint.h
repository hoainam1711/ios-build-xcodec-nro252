#ifndef HEADER_nro_Waypoint
#define HEADER_nro_Waypoint

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Waypoint {
	java_lang_Object parent;
	jshort F_minX;
	jshort F_minY;
	jshort F_maxX;
	jshort F_maxY;
	jbool F_isEnter;
	jbool F_isOffline;
	jref F_popup;
} nro_Waypoint;

extern Class class_nro_Waypoint;


#define VTABLE_nro_Waypoint_hashCode_R_int 0
typedef jint (*func_nro_Waypoint_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Waypoint_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Waypoint_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Waypoint_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Waypoint_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Waypoint_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Waypoint_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Waypoint_toString_R_java_lang_String 4
typedef jobject (*func_nro_Waypoint_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Waypoint_finalize 5
typedef void (*func_nro_Waypoint_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Waypoint_notify 6
typedef void (*func_nro_Waypoint_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Waypoint_notifyAll 7
typedef void (*func_nro_Waypoint_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Waypoint_wait 8
typedef void (*func_nro_Waypoint_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Waypoint_wait_long 9
typedef void (*func_nro_Waypoint_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Waypoint_wait_long_int 10
typedef void (*func_nro_Waypoint_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Waypoint_perform_int_java_lang_Object 11
typedef void (*func_nro_Waypoint_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_nro_Waypoint(jobject object, jint mark, jint depth);
void clinit_nro_Waypoint(jcontext ctx);
void init_nro_Waypoint_short_short_short_short_boolean_boolean_java_lang_String(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jshort param3, jbool param4, jbool param5, jobject param6);
void M_nro_Waypoint_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
