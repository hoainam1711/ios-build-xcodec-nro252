#ifndef HEADER_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener
#define HEADER_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener;

extern Class class_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener;


#define INDEX_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener_downloadComplete_com_badlogic_gdx_graphics_Pixmap 0
typedef void (*func_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener_downloadComplete_com_badlogic_gdx_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener_downloadFailed_java_lang_Throwable 1
typedef void (*func_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener_downloadFailed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
