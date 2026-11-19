#include "com/badlogic/gdx/Graphics.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/Graphics_DisplayMode.h"
#include "com/badlogic/gdx/graphics/GL32.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/GL31.h"
#include "com/badlogic/gdx/graphics/GL30.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/Graphics_BufferFormat.h"
#include "com/badlogic/gdx/graphics/Cursor_SystemCursor.h"
#include "com/badlogic/gdx/graphics/glutils/GLVersion.h"
#include "com/badlogic/gdx/Graphics_Monitor.h"
#include "com/badlogic/gdx/Graphics_GraphicsType.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Graphics.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Deprecated.h"
#include "com/badlogic/gdx/graphics/Cursor.h"

extern "C" {


void mark_com_badlogic_gdx_Graphics(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_Graphics *) object;
}

void clinit_com_badlogic_gdx_Graphics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_Graphics;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getRawDeltaTime
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_Graphics[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "isGL30Available", "()Z" },
	{ "isGL31Available", "()Z" },
	{ "isGL32Available", "()Z" },
	{ "getGL20", "()Lcom/badlogic/gdx/graphics/GL20;" },
	{ "getGL30", "()Lcom/badlogic/gdx/graphics/GL30;" },
	{ "getGL31", "()Lcom/badlogic/gdx/graphics/GL31;" },
	{ "getGL32", "()Lcom/badlogic/gdx/graphics/GL32;" },
	{ "setGL20", "(Lcom/badlogic/gdx/graphics/GL20;)V" },
	{ "setGL30", "(Lcom/badlogic/gdx/graphics/GL30;)V" },
	{ "setGL31", "(Lcom/badlogic/gdx/graphics/GL31;)V" },
	{ "setGL32", "(Lcom/badlogic/gdx/graphics/GL32;)V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getBackBufferWidth", "()I" },
	{ "getBackBufferHeight", "()I" },
	{ "getBackBufferScale", "()F" },
	{ "getSafeInsetLeft", "()I" },
	{ "getSafeInsetTop", "()I" },
	{ "getSafeInsetBottom", "()I" },
	{ "getSafeInsetRight", "()I" },
	{ "getFrameId", "()J" },
	{ "getDeltaTime", "()F" },
	{ "getRawDeltaTime", "()F" },
	{ "getFramesPerSecond", "()I" },
	{ "getType", "()Lcom/badlogic/gdx/Graphics$GraphicsType;" },
	{ "getGLVersion", "()Lcom/badlogic/gdx/graphics/glutils/GLVersion;" },
	{ "getPpiX", "()F" },
	{ "getPpiY", "()F" },
	{ "getPpcX", "()F" },
	{ "getPpcY", "()F" },
	{ "getDensity", "()F" },
	{ "supportsDisplayModeChange", "()Z" },
	{ "getPrimaryMonitor", "()Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getMonitor", "()Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getMonitors", "()[Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getDisplayModes", "()[Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayModes", "(Lcom/badlogic/gdx/Graphics$Monitor;)[Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayMode", "()Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayMode", "(Lcom/badlogic/gdx/Graphics$Monitor;)Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "setFullscreenMode", "(Lcom/badlogic/gdx/Graphics$DisplayMode;)Z" },
	{ "setWindowedMode", "(II)Z" },
	{ "setTitle", "(Ljava/lang/String;)V" },
	{ "setUndecorated", "(Z)V" },
	{ "setResizable", "(Z)V" },
	{ "setVSync", "(Z)V" },
	{ "setForegroundFPS", "(I)V" },
	{ "getBufferFormat", "()Lcom/badlogic/gdx/Graphics$BufferFormat;" },
	{ "supportsExtension", "(Ljava/lang/String;)Z" },
	{ "setContinuousRendering", "(Z)V" },
	{ "isContinuousRendering", "()Z" },
	{ "requestRendering", "()V" },
	{ "isFullscreen", "()Z" },
	{ "newCursor", "(Lcom/badlogic/gdx/graphics/Pixmap;II)Lcom/badlogic/gdx/graphics/Cursor;" },
	{ "setCursor", "(Lcom/badlogic/gdx/graphics/Cursor;)V" },
	{ "setSystemCursor", "(Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_Graphics$BufferFormat,
	&class_com_badlogic_gdx_Graphics$Monitor,
	&class_com_badlogic_gdx_Graphics$DisplayMode,
	&class_com_badlogic_gdx_Graphics$GraphicsType,
};

static MethodMetadata methods[] {
	{ "isGL30Available", 0, INDEX_com_badlogic_gdx_Graphics_isGL30Available_R_boolean, "()Z", 1025 },
	{ "isGL31Available", 0, INDEX_com_badlogic_gdx_Graphics_isGL31Available_R_boolean, "()Z", 1025 },
	{ "isGL32Available", 0, INDEX_com_badlogic_gdx_Graphics_isGL32Available_R_boolean, "()Z", 1025 },
	{ "getGL20", 0, INDEX_com_badlogic_gdx_Graphics_getGL20_R_com_badlogic_gdx_graphics_GL20, "()Lcom/badlogic/gdx/graphics/GL20;", 1025 },
	{ "getGL30", 0, INDEX_com_badlogic_gdx_Graphics_getGL30_R_com_badlogic_gdx_graphics_GL30, "()Lcom/badlogic/gdx/graphics/GL30;", 1025 },
	{ "getGL31", 0, INDEX_com_badlogic_gdx_Graphics_getGL31_R_com_badlogic_gdx_graphics_GL31, "()Lcom/badlogic/gdx/graphics/GL31;", 1025 },
	{ "getGL32", 0, INDEX_com_badlogic_gdx_Graphics_getGL32_R_com_badlogic_gdx_graphics_GL32, "()Lcom/badlogic/gdx/graphics/GL32;", 1025 },
	{ "setGL20", 0, INDEX_com_badlogic_gdx_Graphics_setGL20_com_badlogic_gdx_graphics_GL20, "(Lcom/badlogic/gdx/graphics/GL20;)V", 1025 },
	{ "setGL30", 0, INDEX_com_badlogic_gdx_Graphics_setGL30_com_badlogic_gdx_graphics_GL30, "(Lcom/badlogic/gdx/graphics/GL30;)V", 1025 },
	{ "setGL31", 0, INDEX_com_badlogic_gdx_Graphics_setGL31_com_badlogic_gdx_graphics_GL31, "(Lcom/badlogic/gdx/graphics/GL31;)V", 1025 },
	{ "setGL32", 0, INDEX_com_badlogic_gdx_Graphics_setGL32_com_badlogic_gdx_graphics_GL32, "(Lcom/badlogic/gdx/graphics/GL32;)V", 1025 },
	{ "getWidth", 0, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, "()I", 1025 },
	{ "getHeight", 0, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, "()I", 1025 },
	{ "getBackBufferWidth", 0, INDEX_com_badlogic_gdx_Graphics_getBackBufferWidth_R_int, "()I", 1025 },
	{ "getBackBufferHeight", 0, INDEX_com_badlogic_gdx_Graphics_getBackBufferHeight_R_int, "()I", 1025 },
	{ "getBackBufferScale", 0, INDEX_com_badlogic_gdx_Graphics_getBackBufferScale_R_float, "()F", 1025 },
	{ "getSafeInsetLeft", 0, INDEX_com_badlogic_gdx_Graphics_getSafeInsetLeft_R_int, "()I", 1025 },
	{ "getSafeInsetTop", 0, INDEX_com_badlogic_gdx_Graphics_getSafeInsetTop_R_int, "()I", 1025 },
	{ "getSafeInsetBottom", 0, INDEX_com_badlogic_gdx_Graphics_getSafeInsetBottom_R_int, "()I", 1025 },
	{ "getSafeInsetRight", 0, INDEX_com_badlogic_gdx_Graphics_getSafeInsetRight_R_int, "()I", 1025 },
	{ "getFrameId", 0, INDEX_com_badlogic_gdx_Graphics_getFrameId_R_long, "()J", 1025 },
	{ "getDeltaTime", 0, INDEX_com_badlogic_gdx_Graphics_getDeltaTime_R_float, "()F", 1025 },
	{ "getRawDeltaTime", 0, INDEX_com_badlogic_gdx_Graphics_getRawDeltaTime_R_float, "()F", 132097 },
	{ "getFramesPerSecond", 0, INDEX_com_badlogic_gdx_Graphics_getFramesPerSecond_R_int, "()I", 1025 },
	{ "getType", 0, INDEX_com_badlogic_gdx_Graphics_getType_R_com_badlogic_gdx_Graphics$GraphicsType, "()Lcom/badlogic/gdx/Graphics$GraphicsType;", 1025 },
	{ "getGLVersion", 0, INDEX_com_badlogic_gdx_Graphics_getGLVersion_R_com_badlogic_gdx_graphics_glutils_GLVersion, "()Lcom/badlogic/gdx/graphics/glutils/GLVersion;", 1025 },
	{ "getPpiX", 0, INDEX_com_badlogic_gdx_Graphics_getPpiX_R_float, "()F", 1025 },
	{ "getPpiY", 0, INDEX_com_badlogic_gdx_Graphics_getPpiY_R_float, "()F", 1025 },
	{ "getPpcX", 0, INDEX_com_badlogic_gdx_Graphics_getPpcX_R_float, "()F", 1025 },
	{ "getPpcY", 0, INDEX_com_badlogic_gdx_Graphics_getPpcY_R_float, "()F", 1025 },
	{ "getDensity", 0, INDEX_com_badlogic_gdx_Graphics_getDensity_R_float, "()F", 1025 },
	{ "supportsDisplayModeChange", 0, INDEX_com_badlogic_gdx_Graphics_supportsDisplayModeChange_R_boolean, "()Z", 1025 },
	{ "getPrimaryMonitor", 0, INDEX_com_badlogic_gdx_Graphics_getPrimaryMonitor_R_com_badlogic_gdx_Graphics$Monitor, "()Lcom/badlogic/gdx/Graphics$Monitor;", 1025 },
	{ "getMonitor", 0, INDEX_com_badlogic_gdx_Graphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor, "()Lcom/badlogic/gdx/Graphics$Monitor;", 1025 },
	{ "getMonitors", 0, INDEX_com_badlogic_gdx_Graphics_getMonitors_R_Array1_com_badlogic_gdx_Graphics$Monitor, "()[Lcom/badlogic/gdx/Graphics$Monitor;", 1025 },
	{ "getDisplayModes", 0, INDEX_com_badlogic_gdx_Graphics_getDisplayModes_R_Array1_com_badlogic_gdx_Graphics$DisplayMode, "()[Lcom/badlogic/gdx/Graphics$DisplayMode;", 1025 },
	{ "getDisplayModes", 0, INDEX_com_badlogic_gdx_Graphics_getDisplayModes_com_badlogic_gdx_Graphics$Monitor_R_Array1_com_badlogic_gdx_Graphics$DisplayMode, "(Lcom/badlogic/gdx/Graphics$Monitor;)[Lcom/badlogic/gdx/Graphics$DisplayMode;", 1025 },
	{ "getDisplayMode", 0, INDEX_com_badlogic_gdx_Graphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode, "()Lcom/badlogic/gdx/Graphics$DisplayMode;", 1025 },
	{ "getDisplayMode", 0, INDEX_com_badlogic_gdx_Graphics_getDisplayMode_com_badlogic_gdx_Graphics$Monitor_R_com_badlogic_gdx_Graphics$DisplayMode, "(Lcom/badlogic/gdx/Graphics$Monitor;)Lcom/badlogic/gdx/Graphics$DisplayMode;", 1025 },
	{ "setFullscreenMode", 0, INDEX_com_badlogic_gdx_Graphics_setFullscreenMode_com_badlogic_gdx_Graphics$DisplayMode_R_boolean, "(Lcom/badlogic/gdx/Graphics$DisplayMode;)Z", 1025 },
	{ "setWindowedMode", 0, INDEX_com_badlogic_gdx_Graphics_setWindowedMode_int_int_R_boolean, "(II)Z", 1025 },
	{ "setTitle", 0, INDEX_com_badlogic_gdx_Graphics_setTitle_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "setUndecorated", 0, INDEX_com_badlogic_gdx_Graphics_setUndecorated_boolean, "(Z)V", 1025 },
	{ "setResizable", 0, INDEX_com_badlogic_gdx_Graphics_setResizable_boolean, "(Z)V", 1025 },
	{ "setVSync", 0, INDEX_com_badlogic_gdx_Graphics_setVSync_boolean, "(Z)V", 1025 },
	{ "setForegroundFPS", 0, INDEX_com_badlogic_gdx_Graphics_setForegroundFPS_int, "(I)V", 1025 },
	{ "getBufferFormat", 0, INDEX_com_badlogic_gdx_Graphics_getBufferFormat_R_com_badlogic_gdx_Graphics$BufferFormat, "()Lcom/badlogic/gdx/Graphics$BufferFormat;", 1025 },
	{ "supportsExtension", 0, INDEX_com_badlogic_gdx_Graphics_supportsExtension_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1025 },
	{ "setContinuousRendering", 0, INDEX_com_badlogic_gdx_Graphics_setContinuousRendering_boolean, "(Z)V", 1025 },
	{ "isContinuousRendering", 0, INDEX_com_badlogic_gdx_Graphics_isContinuousRendering_R_boolean, "()Z", 1025 },
	{ "requestRendering", 0, INDEX_com_badlogic_gdx_Graphics_requestRendering, "()V", 1025 },
	{ "isFullscreen", 0, INDEX_com_badlogic_gdx_Graphics_isFullscreen_R_boolean, "()Z", 1025 },
	{ "newCursor", 0, INDEX_com_badlogic_gdx_Graphics_newCursor_com_badlogic_gdx_graphics_Pixmap_int_int_R_com_badlogic_gdx_graphics_Cursor, "(Lcom/badlogic/gdx/graphics/Pixmap;II)Lcom/badlogic/gdx/graphics/Cursor;", 1025 },
	{ "setCursor", 0, INDEX_com_badlogic_gdx_Graphics_setCursor_com_badlogic_gdx_graphics_Cursor, "(Lcom/badlogic/gdx/graphics/Cursor;)V", 1025 },
	{ "setSystemCursor", 0, INDEX_com_badlogic_gdx_Graphics_setSystemCursor_com_badlogic_gdx_graphics_Cursor$SystemCursor, "(Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;)V", 1025 },
};

Class class_com_badlogic_gdx_Graphics{
		.nativeName = (intptr_t) "com/badlogic/gdx/Graphics",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Graphics),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Graphics,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Graphics,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Graphics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 55,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Graphics = registerClass(&class_com_badlogic_gdx_Graphics);

}

