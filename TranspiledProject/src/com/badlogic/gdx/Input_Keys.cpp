#include "com/badlogic/gdx/Input_Keys.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Input_Keys.h"
#include "com/badlogic/gdx/utils/ObjectIntMap.h"

extern "C" {

jint SF_com_badlogic_gdx_Input$Keys_ANY_KEY;
jint SF_com_badlogic_gdx_Input$Keys_NUM_0;
jint SF_com_badlogic_gdx_Input$Keys_NUM_1;
jint SF_com_badlogic_gdx_Input$Keys_NUM_2;
jint SF_com_badlogic_gdx_Input$Keys_NUM_3;
jint SF_com_badlogic_gdx_Input$Keys_NUM_4;
jint SF_com_badlogic_gdx_Input$Keys_NUM_5;
jint SF_com_badlogic_gdx_Input$Keys_NUM_6;
jint SF_com_badlogic_gdx_Input$Keys_NUM_7;
jint SF_com_badlogic_gdx_Input$Keys_NUM_8;
jint SF_com_badlogic_gdx_Input$Keys_NUM_9;
jint SF_com_badlogic_gdx_Input$Keys_A;
jint SF_com_badlogic_gdx_Input$Keys_ALT_LEFT;
jint SF_com_badlogic_gdx_Input$Keys_ALT_RIGHT;
jint SF_com_badlogic_gdx_Input$Keys_APOSTROPHE;
jint SF_com_badlogic_gdx_Input$Keys_AT;
jint SF_com_badlogic_gdx_Input$Keys_B;
jint SF_com_badlogic_gdx_Input$Keys_BACK;
jint SF_com_badlogic_gdx_Input$Keys_BACKSLASH;
jint SF_com_badlogic_gdx_Input$Keys_C;
jint SF_com_badlogic_gdx_Input$Keys_CALL;
jint SF_com_badlogic_gdx_Input$Keys_CAMERA;
jint SF_com_badlogic_gdx_Input$Keys_CAPS_LOCK;
jint SF_com_badlogic_gdx_Input$Keys_CLEAR;
jint SF_com_badlogic_gdx_Input$Keys_COMMA;
jint SF_com_badlogic_gdx_Input$Keys_D;
jint SF_com_badlogic_gdx_Input$Keys_DEL;
jint SF_com_badlogic_gdx_Input$Keys_BACKSPACE;
jint SF_com_badlogic_gdx_Input$Keys_FORWARD_DEL;
jint SF_com_badlogic_gdx_Input$Keys_DPAD_CENTER;
jint SF_com_badlogic_gdx_Input$Keys_DPAD_DOWN;
jint SF_com_badlogic_gdx_Input$Keys_DPAD_LEFT;
jint SF_com_badlogic_gdx_Input$Keys_DPAD_RIGHT;
jint SF_com_badlogic_gdx_Input$Keys_DPAD_UP;
jint SF_com_badlogic_gdx_Input$Keys_CENTER;
jint SF_com_badlogic_gdx_Input$Keys_DOWN;
jint SF_com_badlogic_gdx_Input$Keys_LEFT;
jint SF_com_badlogic_gdx_Input$Keys_RIGHT;
jint SF_com_badlogic_gdx_Input$Keys_UP;
jint SF_com_badlogic_gdx_Input$Keys_E;
jint SF_com_badlogic_gdx_Input$Keys_ENDCALL;
jint SF_com_badlogic_gdx_Input$Keys_ENTER;
jint SF_com_badlogic_gdx_Input$Keys_ENVELOPE;
jint SF_com_badlogic_gdx_Input$Keys_EQUALS;
jint SF_com_badlogic_gdx_Input$Keys_EXPLORER;
jint SF_com_badlogic_gdx_Input$Keys_F;
jint SF_com_badlogic_gdx_Input$Keys_FOCUS;
jint SF_com_badlogic_gdx_Input$Keys_G;
jint SF_com_badlogic_gdx_Input$Keys_GRAVE;
jint SF_com_badlogic_gdx_Input$Keys_H;
jint SF_com_badlogic_gdx_Input$Keys_HEADSETHOOK;
jint SF_com_badlogic_gdx_Input$Keys_HOME;
jint SF_com_badlogic_gdx_Input$Keys_I;
jint SF_com_badlogic_gdx_Input$Keys_J;
jint SF_com_badlogic_gdx_Input$Keys_K;
jint SF_com_badlogic_gdx_Input$Keys_L;
jint SF_com_badlogic_gdx_Input$Keys_LEFT_BRACKET;
jint SF_com_badlogic_gdx_Input$Keys_M;
jint SF_com_badlogic_gdx_Input$Keys_MEDIA_FAST_FORWARD;
jint SF_com_badlogic_gdx_Input$Keys_MEDIA_NEXT;
jint SF_com_badlogic_gdx_Input$Keys_MEDIA_PLAY_PAUSE;
jint SF_com_badlogic_gdx_Input$Keys_MEDIA_PREVIOUS;
jint SF_com_badlogic_gdx_Input$Keys_MEDIA_REWIND;
jint SF_com_badlogic_gdx_Input$Keys_MEDIA_STOP;
jint SF_com_badlogic_gdx_Input$Keys_MENU;
jint SF_com_badlogic_gdx_Input$Keys_MINUS;
jint SF_com_badlogic_gdx_Input$Keys_MUTE;
jint SF_com_badlogic_gdx_Input$Keys_N;
jint SF_com_badlogic_gdx_Input$Keys_NOTIFICATION;
jint SF_com_badlogic_gdx_Input$Keys_NUM;
jint SF_com_badlogic_gdx_Input$Keys_O;
jint SF_com_badlogic_gdx_Input$Keys_P;
jint SF_com_badlogic_gdx_Input$Keys_PAUSE;
jint SF_com_badlogic_gdx_Input$Keys_PERIOD;
jint SF_com_badlogic_gdx_Input$Keys_PLUS;
jint SF_com_badlogic_gdx_Input$Keys_POUND;
jint SF_com_badlogic_gdx_Input$Keys_POWER;
jint SF_com_badlogic_gdx_Input$Keys_PRINT_SCREEN;
jint SF_com_badlogic_gdx_Input$Keys_Q;
jint SF_com_badlogic_gdx_Input$Keys_R;
jint SF_com_badlogic_gdx_Input$Keys_RIGHT_BRACKET;
jint SF_com_badlogic_gdx_Input$Keys_S;
jint SF_com_badlogic_gdx_Input$Keys_SCROLL_LOCK;
jint SF_com_badlogic_gdx_Input$Keys_SEARCH;
jint SF_com_badlogic_gdx_Input$Keys_SEMICOLON;
jint SF_com_badlogic_gdx_Input$Keys_SHIFT_LEFT;
jint SF_com_badlogic_gdx_Input$Keys_SHIFT_RIGHT;
jint SF_com_badlogic_gdx_Input$Keys_SLASH;
jint SF_com_badlogic_gdx_Input$Keys_SOFT_LEFT;
jint SF_com_badlogic_gdx_Input$Keys_SOFT_RIGHT;
jint SF_com_badlogic_gdx_Input$Keys_SPACE;
jint SF_com_badlogic_gdx_Input$Keys_STAR;
jint SF_com_badlogic_gdx_Input$Keys_SYM;
jint SF_com_badlogic_gdx_Input$Keys_T;
jint SF_com_badlogic_gdx_Input$Keys_TAB;
jint SF_com_badlogic_gdx_Input$Keys_U;
jint SF_com_badlogic_gdx_Input$Keys_UNKNOWN;
jint SF_com_badlogic_gdx_Input$Keys_V;
jint SF_com_badlogic_gdx_Input$Keys_VOLUME_DOWN;
jint SF_com_badlogic_gdx_Input$Keys_VOLUME_UP;
jint SF_com_badlogic_gdx_Input$Keys_W;
jint SF_com_badlogic_gdx_Input$Keys_X;
jint SF_com_badlogic_gdx_Input$Keys_Y;
jint SF_com_badlogic_gdx_Input$Keys_Z;
jint SF_com_badlogic_gdx_Input$Keys_META_ALT_LEFT_ON;
jint SF_com_badlogic_gdx_Input$Keys_META_ALT_ON;
jint SF_com_badlogic_gdx_Input$Keys_META_ALT_RIGHT_ON;
jint SF_com_badlogic_gdx_Input$Keys_META_SHIFT_LEFT_ON;
jint SF_com_badlogic_gdx_Input$Keys_META_SHIFT_ON;
jint SF_com_badlogic_gdx_Input$Keys_META_SHIFT_RIGHT_ON;
jint SF_com_badlogic_gdx_Input$Keys_META_SYM_ON;
jint SF_com_badlogic_gdx_Input$Keys_CONTROL_LEFT;
jint SF_com_badlogic_gdx_Input$Keys_CONTROL_RIGHT;
jint SF_com_badlogic_gdx_Input$Keys_ESCAPE;
jint SF_com_badlogic_gdx_Input$Keys_END;
jint SF_com_badlogic_gdx_Input$Keys_INSERT;
jint SF_com_badlogic_gdx_Input$Keys_PAGE_UP;
jint SF_com_badlogic_gdx_Input$Keys_PAGE_DOWN;
jint SF_com_badlogic_gdx_Input$Keys_PICTSYMBOLS;
jint SF_com_badlogic_gdx_Input$Keys_SWITCH_CHARSET;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_CIRCLE;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_A;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_B;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_C;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_X;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_Y;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_Z;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_L1;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_R1;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_L2;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_R2;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_THUMBL;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_THUMBR;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_START;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_SELECT;
jint SF_com_badlogic_gdx_Input$Keys_BUTTON_MODE;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_0;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_1;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_2;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_3;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_4;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_5;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_6;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_7;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_8;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_9;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_DIVIDE;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_MULTIPLY;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_SUBTRACT;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_ADD;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_DOT;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_COMMA;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_ENTER;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_EQUALS;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_LEFT_PAREN;
jint SF_com_badlogic_gdx_Input$Keys_NUMPAD_RIGHT_PAREN;
jint SF_com_badlogic_gdx_Input$Keys_NUM_LOCK;
jint SF_com_badlogic_gdx_Input$Keys_WORLD_1;
jint SF_com_badlogic_gdx_Input$Keys_WORLD_2;
jint SF_com_badlogic_gdx_Input$Keys_COLON;
jint SF_com_badlogic_gdx_Input$Keys_F1;
jint SF_com_badlogic_gdx_Input$Keys_F2;
jint SF_com_badlogic_gdx_Input$Keys_F3;
jint SF_com_badlogic_gdx_Input$Keys_F4;
jint SF_com_badlogic_gdx_Input$Keys_F5;
jint SF_com_badlogic_gdx_Input$Keys_F6;
jint SF_com_badlogic_gdx_Input$Keys_F7;
jint SF_com_badlogic_gdx_Input$Keys_F8;
jint SF_com_badlogic_gdx_Input$Keys_F9;
jint SF_com_badlogic_gdx_Input$Keys_F10;
jint SF_com_badlogic_gdx_Input$Keys_F11;
jint SF_com_badlogic_gdx_Input$Keys_F12;
jint SF_com_badlogic_gdx_Input$Keys_F13;
jint SF_com_badlogic_gdx_Input$Keys_F14;
jint SF_com_badlogic_gdx_Input$Keys_F15;
jint SF_com_badlogic_gdx_Input$Keys_F16;
jint SF_com_badlogic_gdx_Input$Keys_F17;
jint SF_com_badlogic_gdx_Input$Keys_F18;
jint SF_com_badlogic_gdx_Input$Keys_F19;
jint SF_com_badlogic_gdx_Input$Keys_F20;
jint SF_com_badlogic_gdx_Input$Keys_F21;
jint SF_com_badlogic_gdx_Input$Keys_F22;
jint SF_com_badlogic_gdx_Input$Keys_F23;
jint SF_com_badlogic_gdx_Input$Keys_F24;
jint SF_com_badlogic_gdx_Input$Keys_MAX_KEYCODE;
jobject SF_com_badlogic_gdx_Input$Keys_keyNames;

void mark_com_badlogic_gdx_Input$Keys(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_Input$Keys_keyNames)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Keys_keyNames)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Keys_keyNames, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_Input$Keys *) object;
}

void clinit_com_badlogic_gdx_Input$Keys(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_Input$Keys_ANY_KEY = jint(-1);
	SF_com_badlogic_gdx_Input$Keys_NUM_0 = jint(7);
	SF_com_badlogic_gdx_Input$Keys_NUM_1 = jint(8);
	SF_com_badlogic_gdx_Input$Keys_NUM_2 = jint(9);
	SF_com_badlogic_gdx_Input$Keys_NUM_3 = jint(10);
	SF_com_badlogic_gdx_Input$Keys_NUM_4 = jint(11);
	SF_com_badlogic_gdx_Input$Keys_NUM_5 = jint(12);
	SF_com_badlogic_gdx_Input$Keys_NUM_6 = jint(13);
	SF_com_badlogic_gdx_Input$Keys_NUM_7 = jint(14);
	SF_com_badlogic_gdx_Input$Keys_NUM_8 = jint(15);
	SF_com_badlogic_gdx_Input$Keys_NUM_9 = jint(16);
	SF_com_badlogic_gdx_Input$Keys_A = jint(29);
	SF_com_badlogic_gdx_Input$Keys_ALT_LEFT = jint(57);
	SF_com_badlogic_gdx_Input$Keys_ALT_RIGHT = jint(58);
	SF_com_badlogic_gdx_Input$Keys_APOSTROPHE = jint(75);
	SF_com_badlogic_gdx_Input$Keys_AT = jint(77);
	SF_com_badlogic_gdx_Input$Keys_B = jint(30);
	SF_com_badlogic_gdx_Input$Keys_BACK = jint(4);
	SF_com_badlogic_gdx_Input$Keys_BACKSLASH = jint(73);
	SF_com_badlogic_gdx_Input$Keys_C = jint(31);
	SF_com_badlogic_gdx_Input$Keys_CALL = jint(5);
	SF_com_badlogic_gdx_Input$Keys_CAMERA = jint(27);
	SF_com_badlogic_gdx_Input$Keys_CAPS_LOCK = jint(115);
	SF_com_badlogic_gdx_Input$Keys_CLEAR = jint(28);
	SF_com_badlogic_gdx_Input$Keys_COMMA = jint(55);
	SF_com_badlogic_gdx_Input$Keys_D = jint(32);
	SF_com_badlogic_gdx_Input$Keys_DEL = jint(67);
	SF_com_badlogic_gdx_Input$Keys_BACKSPACE = jint(67);
	SF_com_badlogic_gdx_Input$Keys_FORWARD_DEL = jint(112);
	SF_com_badlogic_gdx_Input$Keys_DPAD_CENTER = jint(23);
	SF_com_badlogic_gdx_Input$Keys_DPAD_DOWN = jint(20);
	SF_com_badlogic_gdx_Input$Keys_DPAD_LEFT = jint(21);
	SF_com_badlogic_gdx_Input$Keys_DPAD_RIGHT = jint(22);
	SF_com_badlogic_gdx_Input$Keys_DPAD_UP = jint(19);
	SF_com_badlogic_gdx_Input$Keys_CENTER = jint(23);
	SF_com_badlogic_gdx_Input$Keys_DOWN = jint(20);
	SF_com_badlogic_gdx_Input$Keys_LEFT = jint(21);
	SF_com_badlogic_gdx_Input$Keys_RIGHT = jint(22);
	SF_com_badlogic_gdx_Input$Keys_UP = jint(19);
	SF_com_badlogic_gdx_Input$Keys_E = jint(33);
	SF_com_badlogic_gdx_Input$Keys_ENDCALL = jint(6);
	SF_com_badlogic_gdx_Input$Keys_ENTER = jint(66);
	SF_com_badlogic_gdx_Input$Keys_ENVELOPE = jint(65);
	SF_com_badlogic_gdx_Input$Keys_EQUALS = jint(70);
	SF_com_badlogic_gdx_Input$Keys_EXPLORER = jint(64);
	SF_com_badlogic_gdx_Input$Keys_F = jint(34);
	SF_com_badlogic_gdx_Input$Keys_FOCUS = jint(80);
	SF_com_badlogic_gdx_Input$Keys_G = jint(35);
	SF_com_badlogic_gdx_Input$Keys_GRAVE = jint(68);
	SF_com_badlogic_gdx_Input$Keys_H = jint(36);
	SF_com_badlogic_gdx_Input$Keys_HEADSETHOOK = jint(79);
	SF_com_badlogic_gdx_Input$Keys_HOME = jint(3);
	SF_com_badlogic_gdx_Input$Keys_I = jint(37);
	SF_com_badlogic_gdx_Input$Keys_J = jint(38);
	SF_com_badlogic_gdx_Input$Keys_K = jint(39);
	SF_com_badlogic_gdx_Input$Keys_L = jint(40);
	SF_com_badlogic_gdx_Input$Keys_LEFT_BRACKET = jint(71);
	SF_com_badlogic_gdx_Input$Keys_M = jint(41);
	SF_com_badlogic_gdx_Input$Keys_MEDIA_FAST_FORWARD = jint(90);
	SF_com_badlogic_gdx_Input$Keys_MEDIA_NEXT = jint(87);
	SF_com_badlogic_gdx_Input$Keys_MEDIA_PLAY_PAUSE = jint(85);
	SF_com_badlogic_gdx_Input$Keys_MEDIA_PREVIOUS = jint(88);
	SF_com_badlogic_gdx_Input$Keys_MEDIA_REWIND = jint(89);
	SF_com_badlogic_gdx_Input$Keys_MEDIA_STOP = jint(86);
	SF_com_badlogic_gdx_Input$Keys_MENU = jint(82);
	SF_com_badlogic_gdx_Input$Keys_MINUS = jint(69);
	SF_com_badlogic_gdx_Input$Keys_MUTE = jint(91);
	SF_com_badlogic_gdx_Input$Keys_N = jint(42);
	SF_com_badlogic_gdx_Input$Keys_NOTIFICATION = jint(83);
	SF_com_badlogic_gdx_Input$Keys_NUM = jint(78);
	SF_com_badlogic_gdx_Input$Keys_O = jint(43);
	SF_com_badlogic_gdx_Input$Keys_P = jint(44);
	SF_com_badlogic_gdx_Input$Keys_PAUSE = jint(121);
	SF_com_badlogic_gdx_Input$Keys_PERIOD = jint(56);
	SF_com_badlogic_gdx_Input$Keys_PLUS = jint(81);
	SF_com_badlogic_gdx_Input$Keys_POUND = jint(18);
	SF_com_badlogic_gdx_Input$Keys_POWER = jint(26);
	SF_com_badlogic_gdx_Input$Keys_PRINT_SCREEN = jint(120);
	SF_com_badlogic_gdx_Input$Keys_Q = jint(45);
	SF_com_badlogic_gdx_Input$Keys_R = jint(46);
	SF_com_badlogic_gdx_Input$Keys_RIGHT_BRACKET = jint(72);
	SF_com_badlogic_gdx_Input$Keys_S = jint(47);
	SF_com_badlogic_gdx_Input$Keys_SCROLL_LOCK = jint(116);
	SF_com_badlogic_gdx_Input$Keys_SEARCH = jint(84);
	SF_com_badlogic_gdx_Input$Keys_SEMICOLON = jint(74);
	SF_com_badlogic_gdx_Input$Keys_SHIFT_LEFT = jint(59);
	SF_com_badlogic_gdx_Input$Keys_SHIFT_RIGHT = jint(60);
	SF_com_badlogic_gdx_Input$Keys_SLASH = jint(76);
	SF_com_badlogic_gdx_Input$Keys_SOFT_LEFT = jint(1);
	SF_com_badlogic_gdx_Input$Keys_SOFT_RIGHT = jint(2);
	SF_com_badlogic_gdx_Input$Keys_SPACE = jint(62);
	SF_com_badlogic_gdx_Input$Keys_STAR = jint(17);
	SF_com_badlogic_gdx_Input$Keys_SYM = jint(63);
	SF_com_badlogic_gdx_Input$Keys_T = jint(48);
	SF_com_badlogic_gdx_Input$Keys_TAB = jint(61);
	SF_com_badlogic_gdx_Input$Keys_U = jint(49);
	SF_com_badlogic_gdx_Input$Keys_UNKNOWN = jint(0);
	SF_com_badlogic_gdx_Input$Keys_V = jint(50);
	SF_com_badlogic_gdx_Input$Keys_VOLUME_DOWN = jint(25);
	SF_com_badlogic_gdx_Input$Keys_VOLUME_UP = jint(24);
	SF_com_badlogic_gdx_Input$Keys_W = jint(51);
	SF_com_badlogic_gdx_Input$Keys_X = jint(52);
	SF_com_badlogic_gdx_Input$Keys_Y = jint(53);
	SF_com_badlogic_gdx_Input$Keys_Z = jint(54);
	SF_com_badlogic_gdx_Input$Keys_META_ALT_LEFT_ON = jint(16);
	SF_com_badlogic_gdx_Input$Keys_META_ALT_ON = jint(2);
	SF_com_badlogic_gdx_Input$Keys_META_ALT_RIGHT_ON = jint(32);
	SF_com_badlogic_gdx_Input$Keys_META_SHIFT_LEFT_ON = jint(64);
	SF_com_badlogic_gdx_Input$Keys_META_SHIFT_ON = jint(1);
	SF_com_badlogic_gdx_Input$Keys_META_SHIFT_RIGHT_ON = jint(128);
	SF_com_badlogic_gdx_Input$Keys_META_SYM_ON = jint(4);
	SF_com_badlogic_gdx_Input$Keys_CONTROL_LEFT = jint(129);
	SF_com_badlogic_gdx_Input$Keys_CONTROL_RIGHT = jint(130);
	SF_com_badlogic_gdx_Input$Keys_ESCAPE = jint(111);
	SF_com_badlogic_gdx_Input$Keys_END = jint(123);
	SF_com_badlogic_gdx_Input$Keys_INSERT = jint(124);
	SF_com_badlogic_gdx_Input$Keys_PAGE_UP = jint(92);
	SF_com_badlogic_gdx_Input$Keys_PAGE_DOWN = jint(93);
	SF_com_badlogic_gdx_Input$Keys_PICTSYMBOLS = jint(94);
	SF_com_badlogic_gdx_Input$Keys_SWITCH_CHARSET = jint(95);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_CIRCLE = jint(255);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_A = jint(96);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_B = jint(97);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_C = jint(98);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_X = jint(99);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_Y = jint(100);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_Z = jint(101);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_L1 = jint(102);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_R1 = jint(103);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_L2 = jint(104);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_R2 = jint(105);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_THUMBL = jint(106);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_THUMBR = jint(107);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_START = jint(108);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_SELECT = jint(109);
	SF_com_badlogic_gdx_Input$Keys_BUTTON_MODE = jint(110);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_0 = jint(144);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_1 = jint(145);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_2 = jint(146);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_3 = jint(147);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_4 = jint(148);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_5 = jint(149);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_6 = jint(150);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_7 = jint(151);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_8 = jint(152);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_9 = jint(153);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_DIVIDE = jint(154);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_MULTIPLY = jint(155);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_SUBTRACT = jint(156);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_ADD = jint(157);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_DOT = jint(158);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_COMMA = jint(159);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_ENTER = jint(160);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_EQUALS = jint(161);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_LEFT_PAREN = jint(162);
	SF_com_badlogic_gdx_Input$Keys_NUMPAD_RIGHT_PAREN = jint(163);
	SF_com_badlogic_gdx_Input$Keys_NUM_LOCK = jint(143);
	SF_com_badlogic_gdx_Input$Keys_WORLD_1 = jint(240);
	SF_com_badlogic_gdx_Input$Keys_WORLD_2 = jint(241);
	SF_com_badlogic_gdx_Input$Keys_COLON = jint(243);
	SF_com_badlogic_gdx_Input$Keys_F1 = jint(131);
	SF_com_badlogic_gdx_Input$Keys_F2 = jint(132);
	SF_com_badlogic_gdx_Input$Keys_F3 = jint(133);
	SF_com_badlogic_gdx_Input$Keys_F4 = jint(134);
	SF_com_badlogic_gdx_Input$Keys_F5 = jint(135);
	SF_com_badlogic_gdx_Input$Keys_F6 = jint(136);
	SF_com_badlogic_gdx_Input$Keys_F7 = jint(137);
	SF_com_badlogic_gdx_Input$Keys_F8 = jint(138);
	SF_com_badlogic_gdx_Input$Keys_F9 = jint(139);
	SF_com_badlogic_gdx_Input$Keys_F10 = jint(140);
	SF_com_badlogic_gdx_Input$Keys_F11 = jint(141);
	SF_com_badlogic_gdx_Input$Keys_F12 = jint(142);
	SF_com_badlogic_gdx_Input$Keys_F13 = jint(183);
	SF_com_badlogic_gdx_Input$Keys_F14 = jint(184);
	SF_com_badlogic_gdx_Input$Keys_F15 = jint(185);
	SF_com_badlogic_gdx_Input$Keys_F16 = jint(186);
	SF_com_badlogic_gdx_Input$Keys_F17 = jint(187);
	SF_com_badlogic_gdx_Input$Keys_F18 = jint(188);
	SF_com_badlogic_gdx_Input$Keys_F19 = jint(189);
	SF_com_badlogic_gdx_Input$Keys_F20 = jint(190);
	SF_com_badlogic_gdx_Input$Keys_F21 = jint(191);
	SF_com_badlogic_gdx_Input$Keys_F22 = jint(192);
	SF_com_badlogic_gdx_Input$Keys_F23 = jint(193);
	SF_com_badlogic_gdx_Input$Keys_F24 = jint(194);
	SF_com_badlogic_gdx_Input$Keys_MAX_KEYCODE = jint(255);
}

void init_com_badlogic_gdx_Input$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Keys:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Keys(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(71);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_Input$Keys_toString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Keys:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Keys(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(284);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"keycode cannot be negative, keycode: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(285);
	if ((frame[0].i) <= (255)) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"keycode cannot be greater than 255, keycode: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(286);
	switch((frame[0].i)) {
		case 0: goto label_3;
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		case 4: goto label_7;
		case 5: goto label_8;
		case 6: goto label_9;
		case 7: goto label_10;
		case 8: goto label_11;
		case 9: goto label_12;
		case 10: goto label_13;
		case 11: goto label_14;
		case 12: goto label_15;
		case 13: goto label_16;
		case 14: goto label_17;
		case 15: goto label_18;
		case 16: goto label_19;
		case 17: goto label_20;
		case 18: goto label_21;
		case 19: goto label_22;
		case 20: goto label_23;
		case 21: goto label_24;
		case 22: goto label_25;
		case 23: goto label_26;
		case 24: goto label_27;
		case 25: goto label_28;
		case 26: goto label_29;
		case 27: goto label_30;
		case 28: goto label_31;
		case 29: goto label_32;
		case 30: goto label_33;
		case 31: goto label_34;
		case 32: goto label_35;
		case 33: goto label_36;
		case 34: goto label_37;
		case 35: goto label_38;
		case 36: goto label_39;
		case 37: goto label_40;
		case 38: goto label_41;
		case 39: goto label_42;
		case 40: goto label_43;
		case 41: goto label_44;
		case 42: goto label_45;
		case 43: goto label_46;
		case 44: goto label_47;
		case 45: goto label_48;
		case 46: goto label_49;
		case 47: goto label_50;
		case 48: goto label_51;
		case 49: goto label_52;
		case 50: goto label_53;
		case 51: goto label_54;
		case 52: goto label_55;
		case 53: goto label_56;
		case 54: goto label_57;
		case 55: goto label_58;
		case 56: goto label_59;
		case 57: goto label_60;
		case 58: goto label_61;
		case 59: goto label_62;
		case 60: goto label_63;
		case 61: goto label_64;
		case 62: goto label_65;
		case 63: goto label_66;
		case 64: goto label_67;
		case 65: goto label_68;
		case 66: goto label_69;
		case 67: goto label_70;
		case 68: goto label_71;
		case 69: goto label_72;
		case 70: goto label_73;
		case 71: goto label_74;
		case 72: goto label_75;
		case 73: goto label_76;
		case 74: goto label_77;
		case 75: goto label_78;
		case 76: goto label_79;
		case 77: goto label_80;
		case 78: goto label_81;
		case 79: goto label_82;
		case 80: goto label_83;
		case 81: goto label_84;
		case 82: goto label_85;
		case 83: goto label_86;
		case 84: goto label_87;
		case 85: goto label_88;
		case 86: goto label_89;
		case 87: goto label_90;
		case 88: goto label_91;
		case 89: goto label_92;
		case 90: goto label_93;
		case 91: goto label_94;
		case 92: goto label_95;
		case 93: goto label_96;
		case 94: goto label_97;
		case 95: goto label_98;
		case 96: goto label_99;
		case 97: goto label_100;
		case 98: goto label_101;
		case 99: goto label_102;
		case 100: goto label_103;
		case 101: goto label_104;
		case 102: goto label_105;
		case 103: goto label_106;
		case 104: goto label_107;
		case 105: goto label_108;
		case 106: goto label_109;
		case 107: goto label_110;
		case 108: goto label_111;
		case 109: goto label_112;
		case 110: goto label_113;
		case 111: goto label_114;
		case 112: goto label_115;
		case 113: goto label_116;
		case 114: goto label_116;
		case 115: goto label_117;
		case 116: goto label_118;
		case 117: goto label_116;
		case 118: goto label_116;
		case 119: goto label_116;
		case 120: goto label_119;
		case 121: goto label_120;
		case 122: goto label_116;
		case 123: goto label_121;
		case 124: goto label_122;
		case 125: goto label_116;
		case 126: goto label_116;
		case 127: goto label_116;
		case 128: goto label_116;
		case 129: goto label_123;
		case 130: goto label_124;
		case 131: goto label_125;
		case 132: goto label_126;
		case 133: goto label_127;
		case 134: goto label_128;
		case 135: goto label_129;
		case 136: goto label_130;
		case 137: goto label_131;
		case 138: goto label_132;
		case 139: goto label_133;
		case 140: goto label_134;
		case 141: goto label_135;
		case 142: goto label_136;
		case 143: goto label_137;
		case 144: goto label_138;
		case 145: goto label_139;
		case 146: goto label_140;
		case 147: goto label_141;
		case 148: goto label_142;
		case 149: goto label_143;
		case 150: goto label_144;
		case 151: goto label_145;
		case 152: goto label_146;
		case 153: goto label_147;
		case 154: goto label_148;
		case 155: goto label_149;
		case 156: goto label_150;
		case 157: goto label_151;
		case 158: goto label_152;
		case 159: goto label_153;
		case 160: goto label_154;
		case 161: goto label_155;
		case 162: goto label_156;
		case 163: goto label_157;
		case 164: goto label_116;
		case 165: goto label_116;
		case 166: goto label_116;
		case 167: goto label_116;
		case 168: goto label_116;
		case 169: goto label_116;
		case 170: goto label_116;
		case 171: goto label_116;
		case 172: goto label_116;
		case 173: goto label_116;
		case 174: goto label_116;
		case 175: goto label_116;
		case 176: goto label_116;
		case 177: goto label_116;
		case 178: goto label_116;
		case 179: goto label_116;
		case 180: goto label_116;
		case 181: goto label_116;
		case 182: goto label_116;
		case 183: goto label_158;
		case 184: goto label_159;
		case 185: goto label_160;
		case 186: goto label_161;
		case 187: goto label_162;
		case 188: goto label_163;
		case 189: goto label_164;
		case 190: goto label_165;
		case 191: goto label_166;
		case 192: goto label_167;
		case 193: goto label_168;
		case 194: goto label_169;
		case 195: goto label_116;
		case 196: goto label_116;
		case 197: goto label_116;
		case 198: goto label_116;
		case 199: goto label_116;
		case 200: goto label_116;
		case 201: goto label_116;
		case 202: goto label_116;
		case 203: goto label_116;
		case 204: goto label_116;
		case 205: goto label_116;
		case 206: goto label_116;
		case 207: goto label_116;
		case 208: goto label_116;
		case 209: goto label_116;
		case 210: goto label_116;
		case 211: goto label_116;
		case 212: goto label_116;
		case 213: goto label_116;
		case 214: goto label_116;
		case 215: goto label_116;
		case 216: goto label_116;
		case 217: goto label_116;
		case 218: goto label_116;
		case 219: goto label_116;
		case 220: goto label_116;
		case 221: goto label_116;
		case 222: goto label_116;
		case 223: goto label_116;
		case 224: goto label_116;
		case 225: goto label_116;
		case 226: goto label_116;
		case 227: goto label_116;
		case 228: goto label_116;
		case 229: goto label_116;
		case 230: goto label_116;
		case 231: goto label_116;
		case 232: goto label_116;
		case 233: goto label_116;
		case 234: goto label_116;
		case 235: goto label_116;
		case 236: goto label_116;
		case 237: goto label_116;
		case 238: goto label_116;
		case 239: goto label_116;
		case 240: goto label_116;
		case 241: goto label_116;
		case 242: goto label_116;
		case 243: goto label_170;
		default: goto label_116;
	}
	}
label_3:;
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Unknown"_j)));
	}
label_4:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Soft Left"_j)));
	}
label_5:;
	{
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Soft Right"_j)));
	}
label_6:;
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Home"_j)));
	}
label_7:;
	{
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Back"_j)));
	}
label_8:;
	{
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Call"_j)));
	}
label_9:;
	{
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"End Call"_j)));
	}
label_10:;
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"0"_j)));
	}
label_11:;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"1"_j)));
	}
label_12:;
	{
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"2"_j)));
	}
label_13:;
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"3"_j)));
	}
label_14:;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"4"_j)));
	}
label_15:;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"5"_j)));
	}
label_16:;
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"6"_j)));
	}
label_17:;
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"7"_j)));
	}
label_18:;
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"8"_j)));
	}
label_19:;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"9"_j)));
	}
label_20:;
	{
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"*"_j)));
	}
label_21:;
	{
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"#"_j)));
	}
label_22:;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Up"_j)));
	}
label_23:;
	{
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Down"_j)));
	}
label_24:;
	{
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Left"_j)));
	}
label_25:;
	{
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Right"_j)));
	}
label_26:;
	{
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Center"_j)));
	}
label_27:;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Volume Up"_j)));
	}
label_28:;
	{
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Volume Down"_j)));
	}
label_29:;
	{
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Power"_j)));
	}
label_30:;
	{
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Camera"_j)));
	}
label_31:;
	{
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Clear"_j)));
	}
label_32:;
	{
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"A"_j)));
	}
label_33:;
	{
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"B"_j)));
	}
label_34:;
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"C"_j)));
	}
label_35:;
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"D"_j)));
	}
label_36:;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"E"_j)));
	}
label_37:;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F"_j)));
	}
label_38:;
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"G"_j)));
	}
label_39:;
	{
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"H"_j)));
	}
label_40:;
	{
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"I"_j)));
	}
label_41:;
	{
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"J"_j)));
	}
label_42:;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"K"_j)));
	}
label_43:;
	{
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"L"_j)));
	}
label_44:;
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"M"_j)));
	}
label_45:;
	{
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"N"_j)));
	}
label_46:;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"O"_j)));
	}
label_47:;
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"P"_j)));
	}
label_48:;
	{
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Q"_j)));
	}
label_49:;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"R"_j)));
	}
label_50:;
	{
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"S"_j)));
	}
label_51:;
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"T"_j)));
	}
label_52:;
	{
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"U"_j)));
	}
label_53:;
	{
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"V"_j)));
	}
label_54:;
	{
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"W"_j)));
	}
label_55:;
	{
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"X"_j)));
	}
label_56:;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Y"_j)));
	}
label_57:;
	{
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Z"_j)));
	}
label_58:;
	{
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8","_j)));
	}
label_59:;
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"."_j)));
	}
label_60:;
	{
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"L-Alt"_j)));
	}
label_61:;
	{
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"R-Alt"_j)));
	}
label_62:;
	{
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"L-Shift"_j)));
	}
label_63:;
	{
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"R-Shift"_j)));
	}
label_64:;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Tab"_j)));
	}
label_65:;
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Space"_j)));
	}
label_66:;
	{
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SYM"_j)));
	}
label_67:;
	{
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Explorer"_j)));
	}
label_68:;
	{
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Envelope"_j)));
	}
label_69:;
	{
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Enter"_j)));
	}
label_70:;
	{
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Delete"_j)));
	}
label_71:;
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"`"_j)));
	}
label_72:;
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"-"_j)));
	}
label_73:;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"="_j)));
	}
label_74:;
	{
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"["_j)));
	}
label_75:;
	{
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"]"_j)));
	}
label_76:;
	{
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\"_j)));
	}
label_77:;
	{
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8";"_j)));
	}
label_78:;
	{
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"'"_j)));
	}
label_79:;
	{
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"/"_j)));
	}
label_80:;
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@"_j)));
	}
label_81:;
	{
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num"_j)));
	}
label_82:;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Headset Hook"_j)));
	}
label_83:;
	{
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Focus"_j)));
	}
label_84:;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Plus"_j)));
	}
label_85:;
	{
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Menu"_j)));
	}
label_86:;
	{
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Notification"_j)));
	}
label_87:;
	{
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Search"_j)));
	}
label_88:;
	{
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Play/Pause"_j)));
	}
label_89:;
	{
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Stop Media"_j)));
	}
label_90:;
	{
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Next Media"_j)));
	}
label_91:;
	{
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Prev Media"_j)));
	}
label_92:;
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Rewind"_j)));
	}
label_93:;
	{
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Fast Forward"_j)));
	}
label_94:;
	{
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Mute"_j)));
	}
label_95:;
	{
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Page Up"_j)));
	}
label_96:;
	{
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Page Down"_j)));
	}
label_97:;
	{
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"PICTSYMBOLS"_j)));
	}
label_98:;
	{
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SWITCH_CHARSET"_j)));
	}
label_99:;
	{
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"A Button"_j)));
	}
label_100:;
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"B Button"_j)));
	}
label_101:;
	{
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"C Button"_j)));
	}
label_102:;
	{
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"X Button"_j)));
	}
label_103:;
	{
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Y Button"_j)));
	}
label_104:;
	{
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Z Button"_j)));
	}
label_105:;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"L1 Button"_j)));
	}
label_106:;
	{
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"R1 Button"_j)));
	}
label_107:;
	{
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"L2 Button"_j)));
	}
label_108:;
	{
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"R2 Button"_j)));
	}
label_109:;
	{
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Left Thumb"_j)));
	}
label_110:;
	{
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Right Thumb"_j)));
	}
label_111:;
	{
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Start"_j)));
	}
label_112:;
	{
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Select"_j)));
	}
label_113:;
	{
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Button Mode"_j)));
	}
label_115:;
	{
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Forward Delete"_j)));
	}
label_123:;
	{
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"L-Ctrl"_j)));
	}
label_124:;
	{
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"R-Ctrl"_j)));
	}
label_114:;
	{
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Escape"_j)));
	}
label_121:;
	{
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"End"_j)));
	}
label_122:;
	{
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Insert"_j)));
	}
label_138:;
	{
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 0"_j)));
	}
label_139:;
	{
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 1"_j)));
	}
label_140:;
	{
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 2"_j)));
	}
label_141:;
	{
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 3"_j)));
	}
label_142:;
	{
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 4"_j)));
	}
label_143:;
	{
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 5"_j)));
	}
label_144:;
	{
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 6"_j)));
	}
label_145:;
	{
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 7"_j)));
	}
label_146:;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 8"_j)));
	}
label_147:;
	{
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Numpad 9"_j)));
	}
label_170:;
	{
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8":"_j)));
	}
label_125:;
	{
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F1"_j)));
	}
label_126:;
	{
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F2"_j)));
	}
label_127:;
	{
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F3"_j)));
	}
label_128:;
	{
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F4"_j)));
	}
label_129:;
	{
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F5"_j)));
	}
label_130:;
	{
	LINE_NUMBER(555);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F6"_j)));
	}
label_131:;
	{
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F7"_j)));
	}
label_132:;
	{
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F8"_j)));
	}
label_133:;
	{
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F9"_j)));
	}
label_134:;
	{
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F10"_j)));
	}
label_135:;
	{
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F11"_j)));
	}
label_136:;
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F12"_j)));
	}
label_158:;
	{
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F13"_j)));
	}
label_159:;
	{
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F14"_j)));
	}
label_160:;
	{
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F15"_j)));
	}
label_161:;
	{
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F16"_j)));
	}
label_162:;
	{
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F17"_j)));
	}
label_163:;
	{
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F18"_j)));
	}
label_164:;
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F19"_j)));
	}
label_165:;
	{
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F20"_j)));
	}
label_166:;
	{
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F21"_j)));
	}
label_167:;
	{
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F22"_j)));
	}
label_168:;
	{
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F23"_j)));
	}
label_169:;
	{
	LINE_NUMBER(591);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"F24"_j)));
	}
label_148:;
	{
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num /"_j)));
	}
label_149:;
	{
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num *"_j)));
	}
label_150:;
	{
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num -"_j)));
	}
label_151:;
	{
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num +"_j)));
	}
label_152:;
	{
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num ."_j)));
	}
label_153:;
	{
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num ,"_j)));
	}
label_154:;
	{
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num Enter"_j)));
	}
label_155:;
	{
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num ="_j)));
	}
label_156:;
	{
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num ("_j)));
	}
label_157:;
	{
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num )"_j)));
	}
label_137:;
	{
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Num Lock"_j)));
	}
label_117:;
	{
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Caps Lock"_j)));
	}
label_118:;
	{
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Scroll Lock"_j)));
	}
label_120:;
	{
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Pause"_j)));
	}
label_119:;
	{
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Print"_j)));
	}
label_116:;
	{
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_Input$Keys_valueOf_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Keys:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Keys(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(634);
	clinit_com_badlogic_gdx_Input$Keys(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Input$Keys_keyNames;
	if (sp[0].o != nullptr) goto label_1;
	}
	SM_com_badlogic_gdx_Input$Keys_initializeKeyNames(ctx);
label_1:;
	{
	LINE_NUMBER(635);
	clinit_com_badlogic_gdx_Input$Keys(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Input$Keys_keyNames;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[0].o), (jint(-1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_Input$Keys_initializeKeyNames(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Keys:initializeKeyNames", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Keys(ctx);
	{
	LINE_NUMBER(640);
	clinit_com_badlogic_gdx_utils_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap);
	init_com_badlogic_gdx_utils_ObjectIntMap(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Input$Keys(ctx);
	SF_com_badlogic_gdx_Input$Keys_keyNames = sp[0].o;
	LINE_NUMBER(641);
	frame[0].i = (jint(0));
	}
label_2:;
	{
	if ((frame[0].i) >= (256)) goto label_3;
	}
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)SM_com_badlogic_gdx_Input$Keys_toString_int_R_java_lang_String(ctx, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(643);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_Input$Keys(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Input$Keys_keyNames;
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[0].i));
	}
label_6:;
	{
	LINE_NUMBER(641);
	INST_IINC(0, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(645);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Input$Keys[] {
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
};

static FieldMetadata fields[] {
	{ "ANY_KEY", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_ANY_KEY, "I", 25 },
	{ "NUM_0", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_0, "I", 25 },
	{ "NUM_1", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_1, "I", 25 },
	{ "NUM_2", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_2, "I", 25 },
	{ "NUM_3", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_3, "I", 25 },
	{ "NUM_4", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_4, "I", 25 },
	{ "NUM_5", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_5, "I", 25 },
	{ "NUM_6", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_6, "I", 25 },
	{ "NUM_7", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_7, "I", 25 },
	{ "NUM_8", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_8, "I", 25 },
	{ "NUM_9", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_9, "I", 25 },
	{ "A", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_A, "I", 25 },
	{ "ALT_LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_ALT_LEFT, "I", 25 },
	{ "ALT_RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_ALT_RIGHT, "I", 25 },
	{ "APOSTROPHE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_APOSTROPHE, "I", 25 },
	{ "AT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_AT, "I", 25 },
	{ "B", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_B, "I", 25 },
	{ "BACK", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BACK, "I", 25 },
	{ "BACKSLASH", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BACKSLASH, "I", 25 },
	{ "C", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_C, "I", 25 },
	{ "CALL", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_CALL, "I", 25 },
	{ "CAMERA", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_CAMERA, "I", 25 },
	{ "CAPS_LOCK", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_CAPS_LOCK, "I", 25 },
	{ "CLEAR", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_CLEAR, "I", 25 },
	{ "COMMA", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_COMMA, "I", 25 },
	{ "D", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_D, "I", 25 },
	{ "DEL", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_DEL, "I", 25 },
	{ "BACKSPACE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BACKSPACE, "I", 25 },
	{ "FORWARD_DEL", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_FORWARD_DEL, "I", 25 },
	{ "DPAD_CENTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_DPAD_CENTER, "I", 25 },
	{ "DPAD_DOWN", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_DPAD_DOWN, "I", 25 },
	{ "DPAD_LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_DPAD_LEFT, "I", 25 },
	{ "DPAD_RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_DPAD_RIGHT, "I", 25 },
	{ "DPAD_UP", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_DPAD_UP, "I", 25 },
	{ "CENTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_CENTER, "I", 25 },
	{ "DOWN", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_DOWN, "I", 25 },
	{ "LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_LEFT, "I", 25 },
	{ "RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_RIGHT, "I", 25 },
	{ "UP", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_UP, "I", 25 },
	{ "E", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_E, "I", 25 },
	{ "ENDCALL", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_ENDCALL, "I", 25 },
	{ "ENTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_ENTER, "I", 25 },
	{ "ENVELOPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_ENVELOPE, "I", 25 },
	{ "EQUALS", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_EQUALS, "I", 25 },
	{ "EXPLORER", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_EXPLORER, "I", 25 },
	{ "F", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F, "I", 25 },
	{ "FOCUS", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_FOCUS, "I", 25 },
	{ "G", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_G, "I", 25 },
	{ "GRAVE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_GRAVE, "I", 25 },
	{ "H", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_H, "I", 25 },
	{ "HEADSETHOOK", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_HEADSETHOOK, "I", 25 },
	{ "HOME", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_HOME, "I", 25 },
	{ "I", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_I, "I", 25 },
	{ "J", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_J, "I", 25 },
	{ "K", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_K, "I", 25 },
	{ "L", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_L, "I", 25 },
	{ "LEFT_BRACKET", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_LEFT_BRACKET, "I", 25 },
	{ "M", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_M, "I", 25 },
	{ "MEDIA_FAST_FORWARD", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MEDIA_FAST_FORWARD, "I", 25 },
	{ "MEDIA_NEXT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MEDIA_NEXT, "I", 25 },
	{ "MEDIA_PLAY_PAUSE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MEDIA_PLAY_PAUSE, "I", 25 },
	{ "MEDIA_PREVIOUS", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MEDIA_PREVIOUS, "I", 25 },
	{ "MEDIA_REWIND", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MEDIA_REWIND, "I", 25 },
	{ "MEDIA_STOP", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MEDIA_STOP, "I", 25 },
	{ "MENU", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MENU, "I", 25 },
	{ "MINUS", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MINUS, "I", 25 },
	{ "MUTE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MUTE, "I", 25 },
	{ "N", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_N, "I", 25 },
	{ "NOTIFICATION", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NOTIFICATION, "I", 25 },
	{ "NUM", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM, "I", 25 },
	{ "O", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_O, "I", 25 },
	{ "P", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_P, "I", 25 },
	{ "PAUSE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_PAUSE, "I", 25 },
	{ "PERIOD", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_PERIOD, "I", 25 },
	{ "PLUS", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_PLUS, "I", 25 },
	{ "POUND", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_POUND, "I", 25 },
	{ "POWER", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_POWER, "I", 25 },
	{ "PRINT_SCREEN", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_PRINT_SCREEN, "I", 25 },
	{ "Q", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_Q, "I", 25 },
	{ "R", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_R, "I", 25 },
	{ "RIGHT_BRACKET", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_RIGHT_BRACKET, "I", 25 },
	{ "S", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_S, "I", 25 },
	{ "SCROLL_LOCK", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SCROLL_LOCK, "I", 25 },
	{ "SEARCH", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SEARCH, "I", 25 },
	{ "SEMICOLON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SEMICOLON, "I", 25 },
	{ "SHIFT_LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SHIFT_LEFT, "I", 25 },
	{ "SHIFT_RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SHIFT_RIGHT, "I", 25 },
	{ "SLASH", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SLASH, "I", 25 },
	{ "SOFT_LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SOFT_LEFT, "I", 25 },
	{ "SOFT_RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SOFT_RIGHT, "I", 25 },
	{ "SPACE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SPACE, "I", 25 },
	{ "STAR", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_STAR, "I", 25 },
	{ "SYM", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SYM, "I", 25 },
	{ "T", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_T, "I", 25 },
	{ "TAB", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_TAB, "I", 25 },
	{ "U", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_U, "I", 25 },
	{ "UNKNOWN", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_UNKNOWN, "I", 25 },
	{ "V", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_V, "I", 25 },
	{ "VOLUME_DOWN", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_VOLUME_DOWN, "I", 25 },
	{ "VOLUME_UP", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_VOLUME_UP, "I", 25 },
	{ "W", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_W, "I", 25 },
	{ "X", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_X, "I", 25 },
	{ "Y", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_Y, "I", 25 },
	{ "Z", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_Z, "I", 25 },
	{ "META_ALT_LEFT_ON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_META_ALT_LEFT_ON, "I", 25 },
	{ "META_ALT_ON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_META_ALT_ON, "I", 25 },
	{ "META_ALT_RIGHT_ON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_META_ALT_RIGHT_ON, "I", 25 },
	{ "META_SHIFT_LEFT_ON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_META_SHIFT_LEFT_ON, "I", 25 },
	{ "META_SHIFT_ON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_META_SHIFT_ON, "I", 25 },
	{ "META_SHIFT_RIGHT_ON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_META_SHIFT_RIGHT_ON, "I", 25 },
	{ "META_SYM_ON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_META_SYM_ON, "I", 25 },
	{ "CONTROL_LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_CONTROL_LEFT, "I", 25 },
	{ "CONTROL_RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_CONTROL_RIGHT, "I", 25 },
	{ "ESCAPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_ESCAPE, "I", 25 },
	{ "END", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_END, "I", 25 },
	{ "INSERT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_INSERT, "I", 25 },
	{ "PAGE_UP", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_PAGE_UP, "I", 25 },
	{ "PAGE_DOWN", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_PAGE_DOWN, "I", 25 },
	{ "PICTSYMBOLS", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_PICTSYMBOLS, "I", 25 },
	{ "SWITCH_CHARSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_SWITCH_CHARSET, "I", 25 },
	{ "BUTTON_CIRCLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_CIRCLE, "I", 25 },
	{ "BUTTON_A", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_A, "I", 25 },
	{ "BUTTON_B", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_B, "I", 25 },
	{ "BUTTON_C", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_C, "I", 25 },
	{ "BUTTON_X", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_X, "I", 25 },
	{ "BUTTON_Y", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_Y, "I", 25 },
	{ "BUTTON_Z", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_Z, "I", 25 },
	{ "BUTTON_L1", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_L1, "I", 25 },
	{ "BUTTON_R1", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_R1, "I", 25 },
	{ "BUTTON_L2", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_L2, "I", 25 },
	{ "BUTTON_R2", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_R2, "I", 25 },
	{ "BUTTON_THUMBL", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_THUMBL, "I", 25 },
	{ "BUTTON_THUMBR", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_THUMBR, "I", 25 },
	{ "BUTTON_START", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_START, "I", 25 },
	{ "BUTTON_SELECT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_SELECT, "I", 25 },
	{ "BUTTON_MODE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_BUTTON_MODE, "I", 25 },
	{ "NUMPAD_0", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_0, "I", 25 },
	{ "NUMPAD_1", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_1, "I", 25 },
	{ "NUMPAD_2", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_2, "I", 25 },
	{ "NUMPAD_3", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_3, "I", 25 },
	{ "NUMPAD_4", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_4, "I", 25 },
	{ "NUMPAD_5", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_5, "I", 25 },
	{ "NUMPAD_6", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_6, "I", 25 },
	{ "NUMPAD_7", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_7, "I", 25 },
	{ "NUMPAD_8", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_8, "I", 25 },
	{ "NUMPAD_9", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_9, "I", 25 },
	{ "NUMPAD_DIVIDE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_DIVIDE, "I", 25 },
	{ "NUMPAD_MULTIPLY", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_MULTIPLY, "I", 25 },
	{ "NUMPAD_SUBTRACT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_SUBTRACT, "I", 25 },
	{ "NUMPAD_ADD", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_ADD, "I", 25 },
	{ "NUMPAD_DOT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_DOT, "I", 25 },
	{ "NUMPAD_COMMA", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_COMMA, "I", 25 },
	{ "NUMPAD_ENTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_ENTER, "I", 25 },
	{ "NUMPAD_EQUALS", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_EQUALS, "I", 25 },
	{ "NUMPAD_LEFT_PAREN", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_LEFT_PAREN, "I", 25 },
	{ "NUMPAD_RIGHT_PAREN", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUMPAD_RIGHT_PAREN, "I", 25 },
	{ "NUM_LOCK", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_NUM_LOCK, "I", 25 },
	{ "WORLD_1", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_WORLD_1, "I", 25 },
	{ "WORLD_2", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_WORLD_2, "I", 25 },
	{ "COLON", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_COLON, "I", 25 },
	{ "F1", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F1, "I", 25 },
	{ "F2", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F2, "I", 25 },
	{ "F3", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F3, "I", 25 },
	{ "F4", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F4, "I", 25 },
	{ "F5", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F5, "I", 25 },
	{ "F6", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F6, "I", 25 },
	{ "F7", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F7, "I", 25 },
	{ "F8", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F8, "I", 25 },
	{ "F9", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F9, "I", 25 },
	{ "F10", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F10, "I", 25 },
	{ "F11", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F11, "I", 25 },
	{ "F12", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F12, "I", 25 },
	{ "F13", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F13, "I", 25 },
	{ "F14", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F14, "I", 25 },
	{ "F15", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F15, "I", 25 },
	{ "F16", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F16, "I", 25 },
	{ "F17", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F17, "I", 25 },
	{ "F18", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F18, "I", 25 },
	{ "F19", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F19, "I", 25 },
	{ "F20", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F20, "I", 25 },
	{ "F21", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F21, "I", 25 },
	{ "F22", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F22, "I", 25 },
	{ "F23", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F23, "I", 25 },
	{ "F24", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_F24, "I", 25 },
	{ "MAX_KEYCODE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_MAX_KEYCODE, "I", 25 },
	{ "keyNames", &class_com_badlogic_gdx_utils_ObjectIntMap, (intptr_t) &SF_com_badlogic_gdx_Input$Keys_keyNames, "Lcom/badlogic/gdx/utils/ObjectIntMap;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Input$Keys, 0, "()V", 1 },
	{ "toString", (intptr_t) SM_com_badlogic_gdx_Input$Keys_toString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_Input$Keys_valueOf_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "initializeKeyNames", (intptr_t) SM_com_badlogic_gdx_Input$Keys_initializeKeyNames, 0, "()V", 10 },
};

Class class_com_badlogic_gdx_Input$Keys{
		.nativeName = (intptr_t) "com/badlogic/gdx/Input$Keys",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Input$Keys),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Input$Keys,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Input$Keys,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Input$Keys,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Input,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 186,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Input$Keys = registerClass(&class_com_badlogic_gdx_Input$Keys);

}

