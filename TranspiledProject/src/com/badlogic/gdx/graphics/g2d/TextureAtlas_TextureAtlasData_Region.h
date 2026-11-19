#ifndef HEADER_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region
#define HEADER_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region {
	java_lang_Object parent;
	jref F_page;
	jref F_name;
	jint F_left;
	jint F_top;
	jint F_width;
	jint F_height;
	jfloat F_offsetX;
	jfloat F_offsetY;
	jint F_originalWidth;
	jint F_originalHeight;
	jint F_degrees;
	jbool F_rotate;
	jint F_index;
	jref F_names;
	jref F_values;
	jbool F_flip;
} com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region;

extern Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region;


#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_findValue_java_lang_String_R_Array1_int 11
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_findValue_java_lang_String_R_Array1_int)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jcontext ctx);
void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_findValue_java_lang_String_R_Array1_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
