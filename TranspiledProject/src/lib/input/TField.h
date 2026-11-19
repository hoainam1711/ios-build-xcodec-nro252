#ifndef HEADER_lib_input_TField
#define HEADER_lib_input_TField

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_input_TField {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_width;
	jint F_height;
	jbool F_isFocus;
	jbool F_lockArrow;
	jref F_f;
	jref F_text;
	jref F_passwordText;
	jref F_paintedText;
	jint F_caretPos;
	jint F_selectionAnchor;
	jint F_counter;
	jint F_maxTextLenght;
	jint F_offsetX;
	jint F_lastKey;
	jint F_keyInActiveState;
	jint F_indexOfActiveChar;
	jint F_showCaretCounter;
	jint F_inputType;
	jint F_mode;
	jbool F_h;
	jref F_name;
	jref F_cmdClear;
	jbool F_showSubTextField;
	jbool F_isPaintMouse;
	jref F_cmdDoneAction;
	jref F_cmdCancelAction;
} lib_input_TField;

extern Class class_lib_input_TField;

extern jint SF_lib_input_TField_typeXpeed;
extern jobject SF_lib_input_TField_MAX_TIME_TO_CONFIRM_KEY;
extern jint SF_lib_input_TField_CARET_HEIGHT;
extern jobject SF_lib_input_TField_print;
extern jobject SF_lib_input_TField_printA;
extern jbool SF_lib_input_TField_isQwerty;
extern jint SF_lib_input_TField_typingModeAreaWidth;
extern jint SF_lib_input_TField_changeModeKey;
extern jobject SF_lib_input_TField_myTexture2der;
extern jobject SF_lib_input_TField_imgTf;
extern jobject SF_lib_input_TField_currentTField;
extern jobject SF_lib_input_TField_focusedTField;
extern jbool SF_lib_input_TField_isOpeningDialog;
extern jlong SF_lib_input_TField_lastTimeCloseDialog;

#define VTABLE_lib_input_TField_hashCode_R_int 0
typedef jint (*func_lib_input_TField_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_input_TField_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_TField_clone_R_java_lang_Object 2
typedef jobject (*func_lib_input_TField_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_input_TField_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_toString_R_java_lang_String 4
typedef jobject (*func_lib_input_TField_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_finalize 5
typedef void (*func_lib_input_TField_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_notify 6
typedef void (*func_lib_input_TField_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_notifyAll 7
typedef void (*func_lib_input_TField_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_wait 8
typedef void (*func_lib_input_TField_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_wait_long 9
typedef void (*func_lib_input_TField_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_input_TField_wait_long_int 10
typedef void (*func_lib_input_TField_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_input_TField_perform_int_java_lang_Object 11
typedef void (*func_lib_input_TField_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_lib_input_TField_hasSelection_R_boolean 12
typedef jbool (*func_lib_input_TField_hasSelection_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_getSelectionStart_R_int 13
typedef jint (*func_lib_input_TField_getSelectionStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_getSelectionEnd_R_int 14
typedef jint (*func_lib_input_TField_getSelectionEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_clearSelection 15
typedef void (*func_lib_input_TField_clearSelection)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_selectAll 16
typedef void (*func_lib_input_TField_selectAll)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_getSelectedOrAllText_R_java_lang_String 17
typedef jobject (*func_lib_input_TField_getSelectedOrAllText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_deleteSelection_R_boolean 18
typedef jbool (*func_lib_input_TField_deleteSelection_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_isAllowedChar_char_R_boolean 19
typedef jbool (*func_lib_input_TField_isAllowedChar_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_lib_input_TField_insertText_java_lang_String 20
typedef void (*func_lib_input_TField_insertText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_TField_doChangeToTextBox 21
typedef void (*func_lib_input_TField_doChangeToTextBox)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_clampCaret 22
typedef void (*func_lib_input_TField_clampCaret)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_backspace 23
typedef void (*func_lib_input_TField_backspace)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_forwardDelete 24
typedef void (*func_lib_input_TField_forwardDelete)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_deletePrevWord 25
typedef void (*func_lib_input_TField_deletePrevWord)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_deleteNextWord 26
typedef void (*func_lib_input_TField_deleteNextWord)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_moveCaretLeft_boolean_boolean 27
typedef void (*func_lib_input_TField_moveCaretLeft_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_lib_input_TField_moveCaretRight_boolean_boolean 28
typedef void (*func_lib_input_TField_moveCaretRight_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_lib_input_TField_moveCaretHome_boolean 29
typedef void (*func_lib_input_TField_moveCaretHome_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_lib_input_TField_moveCaretEnd_boolean 30
typedef void (*func_lib_input_TField_moveCaretEnd_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_lib_input_TField_clear 31
typedef void (*func_lib_input_TField_clear)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_measurePaintedWidth_java_lang_String_R_int 32
typedef jint (*func_lib_input_TField_measurePaintedWidth_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_TField_setOffset 33
typedef void (*func_lib_input_TField_setOffset)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_keyPressedAscii_int 34
typedef void (*func_lib_input_TField_keyPressedAscii_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_input_TField_keyPressed_int_R_boolean 35
typedef jbool (*func_lib_input_TField_keyPressed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_input_TField_paint_lib_mGraphics 36
typedef void (*func_lib_input_TField_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_TField_setPasswordTest 37
typedef void (*func_lib_input_TField_setPasswordTest)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_placeCaretAtPointerX_int 38
typedef void (*func_lib_input_TField_placeCaretAtPointerX_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_input_TField_update 39
typedef void (*func_lib_input_TField_update)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_getText_R_java_lang_String 40
typedef jobject (*func_lib_input_TField_getText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField_setText_java_lang_String 41
typedef void (*func_lib_input_TField_setText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_TField_setMaxTextLenght_int 42
typedef void (*func_lib_input_TField_setMaxTextLenght_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_input_TField_setIputType_int 43
typedef void (*func_lib_input_TField_setIputType_int)(jcontext ctx, jobject self, jint param0);

void mark_lib_input_TField(jobject object, jint mark, jint depth);
void clinit_lib_input_TField(jcontext ctx);
jbool M_lib_input_TField_hasSelection_R_boolean(jcontext ctx, jobject self);
jint M_lib_input_TField_getSelectionStart_R_int(jcontext ctx, jobject self);
jint M_lib_input_TField_getSelectionEnd_R_int(jcontext ctx, jobject self);
void M_lib_input_TField_clearSelection(jcontext ctx, jobject self);
void M_lib_input_TField_selectAll(jcontext ctx, jobject self);
jobject M_lib_input_TField_getSelectedOrAllText_R_java_lang_String(jcontext ctx, jobject self);
jbool M_lib_input_TField_deleteSelection_R_boolean(jcontext ctx, jobject self);
jbool M_lib_input_TField_isAllowedChar_char_R_boolean(jcontext ctx, jobject self, jchar param0);
void M_lib_input_TField_insertText_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_lib_input_TField_doChangeToTextBox(jcontext ctx, jobject self);
void init_lib_input_TField(jcontext ctx, jobject self);
void M_lib_input_TField_clampCaret(jcontext ctx, jobject self);
void M_lib_input_TField_backspace(jcontext ctx, jobject self);
void M_lib_input_TField_forwardDelete(jcontext ctx, jobject self);
jint SM_lib_input_TField_findPrevWordBoundary_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_lib_input_TField_findNextWordBoundary_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1);
void M_lib_input_TField_deletePrevWord(jcontext ctx, jobject self);
void M_lib_input_TField_deleteNextWord(jcontext ctx, jobject self);
void M_lib_input_TField_moveCaretLeft_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_lib_input_TField_moveCaretRight_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_lib_input_TField_moveCaretHome_boolean(jcontext ctx, jobject self, jbool param0);
void M_lib_input_TField_moveCaretEnd_boolean(jcontext ctx, jobject self, jbool param0);
void M_lib_input_TField_clear(jcontext ctx, jobject self);
jint M_lib_input_TField_measurePaintedWidth_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
void M_lib_input_TField_setOffset(jcontext ctx, jobject self);
void M_lib_input_TField_keyPressedAscii_int(jcontext ctx, jobject self, jint param0);
jbool M_lib_input_TField_keyPressed_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_lib_input_TField_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_lib_input_TField_setPasswordTest(jcontext ctx, jobject self);
void M_lib_input_TField_placeCaretAtPointerX_int(jcontext ctx, jobject self, jint param0);
void M_lib_input_TField_update(jcontext ctx, jobject self);
jobject M_lib_input_TField_getText_R_java_lang_String(jcontext ctx, jobject self);
void M_lib_input_TField_setText_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_lib_input_TField_setMaxTextLenght_int(jcontext ctx, jobject self, jint param0);
void M_lib_input_TField_setIputType_int(jcontext ctx, jobject self, jint param0);
void M_lib_input_TField_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
