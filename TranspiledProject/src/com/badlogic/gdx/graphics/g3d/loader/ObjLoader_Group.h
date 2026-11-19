#ifndef HEADER_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group
#define HEADER_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group {
	java_lang_Object parent;
	jref F_name;
	jref F_materialName;
	jref F_faces;
	jint F_numFaces;
	jbool F_hasNorms;
	jbool F_hasUVs;
	jref F_mat;
} com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group;

extern Class class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group;


#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(jcontext ctx);
void init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
