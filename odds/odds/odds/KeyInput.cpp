#include "KeyInput.h"
#include <allegro5\keycodes.h>

enum KEYSDOWN{
	KEY_FILLER, //just to match with keycodes.h
	KEY_A,
	KEY_B,
	KEY_C,
	KEY_D,
	KEY_E,
	KEY_F,
	KEY_G,
	KEY_H,
	KEY_I,
	KEY_J,
	KEY_K,
	KEY_L,
	KEY_M,
	KEY_N,
	KEY_O,
	KEY_P,
	KEY_Q,
	KEY_R,
	KEY_S,
	KEY_T,
	KEY_U,
	KEY_V,
	KEY_W,
	KEY_X,
	KEY_Y,
	KEY_Z,
	KEY_0,
	KEY_1,
	KEY_2,
	KEY_3,
	KEY_4,
	KEY_5,
	KEY_6,
	KEY_7,
	KEY_8,
	KEY_9,

	KEY_PAD_0,
	KEY_PAD_1,
	KEY_PAD_2,
	KEY_PAD_3,
	KEY_PAD_4,
	KEY_PAD_5,
	KEY_PAD_6,
	KEY_PAD_7,
	KEY_PAD_8,
	KEY_PAD_9,

	KEY_F1,
	KEY_F2,
	KEY_F3,
	KEY_F4,
	KEY_F5,
	KEY_F6,
	KEY_F7,
	KEY_F8,
	KEY_F9,
	KEY_F10,
	KEY_F11,
	KEY_F12,

	KEY_ESCAPE,
	KEY_TILDE,
	KEY_MINUS,
	KEY_EQUALS,
	KEY_BACKSPACE,
	KEY_TAB,
	KEY_OPENBRACE,
	KEY_CLOSEBRACE,
	KEY_ENTER,
	KEY_SEMICOLON,
	KEY_QUOTE,
	KEY_BACKSLASH,
	KEY_BACKSLASH2, /* DirectInput calls this DIK_OEM_102: "< > | on UK/Germany keyboards" */
	KEY_COMMA,
	KEY_FULLSTOP,
	KEY_SLASH,
	KEY_SPACE,
	KEY_INSERT,
	KEY_DELETE,
	KEY_HOME,
	KEY_END,
	KEY_PGUP,
	KEY_PGDN,
	KEY_LEFT,
	KEY_RIGHT,
	KEY_UP,
	KEY_DOWN,

	KEY_PAD_SLASH,
	KEY_PAD_ASTERISK,
	KEY_PAD_MINUS,
	KEY_PAD_PLUS,
	KEY_PAD_DELETE,
	KEY_PAD_ENTER,

	KEY_PRINTSCREEN,
	KEY_PAUSE,

	KEY_ABNT_C1,
	KEY_YEN,
	KEY_KANA,
	KEY_CONVERT,
	KEY_NOCONVERT,
	KEY_AT,
	KEY_CIRCUMFLEX,
	KEY_COLON2,
	KEY_KANJI,
	KEY_PAD_EQUALS,	/* MacOS X */
	KEY_BACKQUOTE,	/* MacOS X */
	KEY_SEMICOLON2,	/* MacOS X -- TODO: ask lillo what this should be */
	KEY_COMMAND,	/* MacOS X */

	KEY_BACK,        /* Android back key */
	KEY_VOLUME_UP,
	KEY_VOLUME_DOWN,

	KEY_UNKNOWN,
	/* All codes up to before ALLEGRO_KEY_MODIFIERS can be freely
	* assignedas additional unknown keys, like various multimedia
	* and application keys keyboards may have.
	*/
	KEY_LSHIFT,
	KEY_RSHIFT,
	KEY_LCTRL,
	KEY_RCTRL,
	KEY_ALT,
	KEY_ALTGR,
	KEY_LWIN,
	KEY_RWIN,
	KEY_MENU,
	KEY_SCROLLLOCK,
	KEY_NUMLOCK,
	KEY_CAPSLOCK,

	KEY_MAX,

	KEYMOD_SHIFT,
	KEYMOD_CTRL,
	KEYMOD_ALT,
	KEYMOD_LWIN,
	KEYMOD_RWIN,
	KEYMOD_MENU,
	KEYMOD_ALTGR,
	KEYMOD_COMMAND,
	KEYMOD_SCROLLLOCK,
	KEYMOD_NUMLOCK,
	KEYMOD_CAPSLOCK,
	KEYMOD_INALTSEQ,
	KEYMOD_ACCENT1,
	KEYMOD_ACCENT2,
	KEYMOD_ACCENT3,
	KEYMOD_ACCENT4
};

KeyInput::KeyInput(void)
{
	for (int i = 0; i<sizeof(keysTap) / sizeof(bool); i++)
		keysTap[i] = false;
	for (int i = 0; i<sizeof(keysDown) / sizeof(bool); i++)
		keysDown[i] = false;
}
KeyInput::~KeyInput(void)
{
}
bool* KeyInput::returnKeysDown(){
	return keysDown;
}
bool* KeyInput::returnKeysTap(){
	return keysTap;
}
void KeyInput::handleKeysDown(int keycode){
	switch (keycode){
	case ALLEGRO_KEY_A:
		keysDown[KEY_A] = true;
		keysTap[KEY_A] = true;
		break;
	case ALLEGRO_KEY_B:
		keysDown[KEY_B] = true;
		keysTap[KEY_B] = true;
		break;
	case ALLEGRO_KEY_C:
		keysDown[KEY_C] = true;
		keysTap[KEY_C] = true;
		break;
	case ALLEGRO_KEY_D:
		keysDown[KEY_D] = true;
		keysTap[KEY_D] = true;
		break;
	case ALLEGRO_KEY_E:
		keysDown[KEY_E] = true;
		keysTap[KEY_E] = true;
		break;
	case ALLEGRO_KEY_F:
		keysDown[KEY_F] = true;
		keysTap[KEY_F] = true;
		break;
	case ALLEGRO_KEY_G:
		keysDown[KEY_G] = true;
		keysTap[KEY_G] = true;
		break;
	case ALLEGRO_KEY_H:
		keysDown[KEY_H] = true;
		keysTap[KEY_H] = true;
		break;
	case ALLEGRO_KEY_I:
		keysDown[KEY_I] = true;
		keysTap[KEY_I] = true;
		break;
	case ALLEGRO_KEY_J:
		keysDown[KEY_J] = true;
		keysTap[KEY_J] = true;
		break;
	case ALLEGRO_KEY_K:
		keysDown[KEY_K] = true;
		keysTap[KEY_K] = true;
		break;
	case ALLEGRO_KEY_L:
		keysDown[KEY_L] = true;
		keysTap[KEY_L] = true;
		break;
	case ALLEGRO_KEY_M:
		keysDown[KEY_M] = true;
		keysTap[KEY_M] = true;
		break;
	case ALLEGRO_KEY_N:
		keysDown[KEY_N] = true;
		keysTap[KEY_N] = true;
		break;
	case ALLEGRO_KEY_O:
		keysDown[KEY_O] = true;
		keysTap[KEY_O] = true;
		break;
	case ALLEGRO_KEY_P:
		keysDown[KEY_P] = true;
		keysTap[KEY_P] = true;
		break;
	case ALLEGRO_KEY_Q:
		keysDown[KEY_Q] = true;
		keysTap[KEY_Q] = true;
		break;
	case ALLEGRO_KEY_R:
		keysDown[KEY_R] = true;
		keysTap[KEY_R] = true;
		break;
	case ALLEGRO_KEY_S:
		keysDown[KEY_S] = true;
		keysTap[KEY_S] = true;
		break;
	case ALLEGRO_KEY_T:
		keysDown[KEY_T] = true;
		keysTap[KEY_T] = true;
		break;
	case ALLEGRO_KEY_U:
		keysDown[KEY_U] = true;
		keysTap[KEY_U] = true;
		break;
	case ALLEGRO_KEY_V:
		keysDown[KEY_V] = true;
		keysTap[KEY_V] = true;
		break;
	case ALLEGRO_KEY_W:
		keysDown[KEY_W] = true;
		keysTap[KEY_W] = true;
		break;
	case ALLEGRO_KEY_X:
		keysDown[KEY_X] = true;
		keysTap[KEY_X] = true;
		break;
	case ALLEGRO_KEY_Y:
		keysDown[KEY_Y] = true;
		keysTap[KEY_Y] = true;
		break;
	case ALLEGRO_KEY_Z:
		keysDown[KEY_Z] = true;
		keysTap[KEY_Z] = true;
		break;

	case ALLEGRO_KEY_0:
		keysDown[KEY_0] = true;
		keysTap[KEY_0] = true;
		break;
	case ALLEGRO_KEY_1:
		keysDown[KEY_1] = true;
		keysTap[KEY_1] = true;
		break;
	case ALLEGRO_KEY_2:
		keysDown[KEY_2] = true;
		keysTap[KEY_2] = true;
		break;
	case ALLEGRO_KEY_3:
		keysDown[KEY_3] = true;
		keysTap[KEY_3] = true;
		break;
	case ALLEGRO_KEY_4:
		keysDown[KEY_4] = true;
		keysTap[KEY_4] = true;
		break;
	case ALLEGRO_KEY_5:
		keysDown[KEY_5] = true;
		keysTap[KEY_5] = true;
		break;
	case ALLEGRO_KEY_6:
		keysDown[KEY_6] = true;
		keysTap[KEY_6] = true;
		break;
	case ALLEGRO_KEY_7:
		keysDown[KEY_7] = true;
		keysTap[KEY_7] = true;
		break;
	case ALLEGRO_KEY_8:
		keysDown[KEY_8] = true;
		keysTap[KEY_8] = true;
		break;
	case ALLEGRO_KEY_9:
		keysDown[KEY_9] = true;
		keysTap[KEY_9] = true;
		break;

	case ALLEGRO_KEY_PAD_0:
		keysDown[KEY_PAD_0] = true;
		keysTap[KEY_PAD_0] = true;
		break;
	case ALLEGRO_KEY_PAD_1:
		keysDown[KEY_PAD_1] = true;
		keysTap[KEY_PAD_1] = true;
		break;
	case ALLEGRO_KEY_PAD_2:
		keysDown[KEY_PAD_2] = true;
		keysTap[KEY_PAD_2] = true;
		break;
	case ALLEGRO_KEY_PAD_3:
		keysDown[KEY_PAD_3] = true;
		keysTap[KEY_PAD_3] = true;
		break;
	case ALLEGRO_KEY_PAD_4:
		keysDown[KEY_PAD_4] = true;
		keysTap[KEY_PAD_4] = true;
		break;
	case ALLEGRO_KEY_PAD_5:
		keysDown[KEY_PAD_5] = true;
		keysTap[KEY_PAD_5] = true;
		break;
	case ALLEGRO_KEY_PAD_6:
		keysDown[KEY_PAD_6] = true;
		keysTap[KEY_PAD_6] = true;
		break;
	case ALLEGRO_KEY_PAD_7:
		keysDown[KEY_PAD_7] = true;
		keysTap[KEY_PAD_7] = true;
		break;
	case ALLEGRO_KEY_PAD_8:
		keysDown[KEY_PAD_8] = true;
		keysTap[KEY_PAD_8] = true;
		break;
	case ALLEGRO_KEY_PAD_9:
		keysDown[KEY_PAD_9] = true;
		keysTap[KEY_PAD_9] = true;
		break;

	case ALLEGRO_KEY_F1:
		keysDown[KEY_F1] = true;
		keysTap[KEY_F1] = true;
		break;
	case ALLEGRO_KEY_F2:
		keysDown[KEY_F2] = true;
		keysTap[KEY_F2] = true;
		break;
	case ALLEGRO_KEY_F3:
		keysDown[KEY_F3] = true;
		keysTap[KEY_F3] = true;
		break;
	case ALLEGRO_KEY_F4:
		keysDown[KEY_F4] = true;
		keysTap[KEY_F4] = true;
		break;
	case ALLEGRO_KEY_F5:
		keysDown[KEY_F5] = true;
		keysTap[KEY_F5] = true;
		break;
	case ALLEGRO_KEY_F6:
		keysDown[KEY_F6] = true;
		keysTap[KEY_F6] = true;
		break;
	case ALLEGRO_KEY_F7:
		keysDown[KEY_F7] = true;
		keysTap[KEY_F7] = true;
		break;
	case ALLEGRO_KEY_F8:
		keysDown[KEY_F8] = true;
		keysTap[KEY_F8] = true;
		break;
	case ALLEGRO_KEY_F9:
		keysDown[KEY_F9] = true;
		keysTap[KEY_F9] = true;
		break;
	case ALLEGRO_KEY_F10:
		keysDown[KEY_F10] = true;
		keysTap[KEY_F10] = true;
		break;
	case ALLEGRO_KEY_F11:
		keysDown[KEY_F11] = true;
		keysTap[KEY_F11] = true;
		break;
	case ALLEGRO_KEY_F12:
		keysDown[KEY_F12] = true;
		keysTap[KEY_F12] = true;
		break;

	case ALLEGRO_KEY_ESCAPE:
		keysDown[KEY_ESCAPE] = true;
		keysTap[KEY_ESCAPE] = true;
		break;
	case ALLEGRO_KEY_TILDE:
		keysDown[KEY_TILDE] = true;
		keysTap[KEY_TILDE] = true;
		break;
	case ALLEGRO_KEY_MINUS:
		keysDown[KEY_MINUS] = true;
		keysTap[KEY_MINUS] = true;
		break;
	case ALLEGRO_KEY_EQUALS:
		keysDown[KEY_EQUALS] = true;
		keysTap[KEY_EQUALS] = true;
		break;
	case ALLEGRO_KEY_BACKSPACE:
		keysDown[KEY_BACKSPACE] = true;
		keysTap[KEY_BACKSPACE] = true;
		break;
	case ALLEGRO_KEY_TAB:
		keysDown[KEY_TAB] = true;
		keysTap[KEY_TAB] = true;
		break;
	case ALLEGRO_KEY_OPENBRACE:
		keysDown[KEY_OPENBRACE] = true;
		keysTap[KEY_OPENBRACE] = true;
		break;
	case ALLEGRO_KEY_CLOSEBRACE:
		keysDown[KEY_CLOSEBRACE] = true;
		keysTap[KEY_CLOSEBRACE] = true;
		break;
	case ALLEGRO_KEY_ENTER:
		keysDown[KEY_ENTER] = true;
		keysTap[KEY_ENTER] = true;
		break;
	case ALLEGRO_KEY_SEMICOLON:
		keysDown[KEY_SEMICOLON] = true;
		keysTap[KEY_SEMICOLON] = true;
		break;
	case ALLEGRO_KEY_QUOTE:
		keysDown[KEY_QUOTE] = true;
		keysTap[KEY_QUOTE] = true;
		break;
	case ALLEGRO_KEY_BACKSLASH:
		keysDown[KEY_BACKSLASH] = true;
		keysTap[KEY_BACKSLASH] = true;
		break;
	case ALLEGRO_KEY_BACKSLASH2: /* DirectInput calls this DIK_OEM_102: "< > | on UK/Germany keyboards" */
		keysDown[KEY_BACKSLASH2] = true;
		keysTap[KEY_BACKSLASH2] = true;
		break;
	case ALLEGRO_KEY_COMMA:
		keysDown[KEY_COMMA] = true;
		keysTap[KEY_COMMA] = true;
		break;
	case ALLEGRO_KEY_FULLSTOP:
		keysDown[KEY_FULLSTOP] = true;
		keysTap[KEY_FULLSTOP] = true;
		break;
	case ALLEGRO_KEY_SLASH:
		keysDown[KEY_SLASH] = true;
		keysTap[KEY_SLASH] = true;
		break;
	case ALLEGRO_KEY_SPACE:
		keysDown[KEY_SPACE] = true;
		keysTap[KEY_SPACE] = true;
		break;

	case ALLEGRO_KEY_INSERT:
		keysDown[KEY_INSERT] = true;
		keysTap[KEY_INSERT] = true;
		break;
	case ALLEGRO_KEY_DELETE:
		keysDown[KEY_DELETE] = true;
		keysTap[KEY_DELETE] = true;
		break;
	case ALLEGRO_KEY_HOME:
		keysDown[KEY_HOME] = true;
		keysTap[KEY_HOME] = true;
		break;
	case ALLEGRO_KEY_END:
		keysDown[KEY_END] = true;
		keysTap[KEY_END] = true;
		break;
	case ALLEGRO_KEY_PGUP:
		keysDown[KEY_PGUP] = true;
		keysTap[KEY_PGUP] = true;
		break;
	case ALLEGRO_KEY_PGDN:
		keysDown[KEY_PGDN] = true;
		keysTap[KEY_PGDN] = true;
		break;
	case ALLEGRO_KEY_LEFT:
		keysDown[KEY_LEFT] = true;
		keysTap[KEY_LEFT] = true;
		break;
	case ALLEGRO_KEY_RIGHT:
		keysDown[KEY_RIGHT] = true;
		keysTap[KEY_RIGHT] = true;
		break;
	case ALLEGRO_KEY_UP:
		keysDown[KEY_UP] = true;
		keysTap[KEY_UP] = true;
		break;
	case ALLEGRO_KEY_DOWN:
		keysDown[KEY_DOWN] = true;
		keysTap[KEY_DOWN] = true;
		break;

	case ALLEGRO_KEY_PAD_SLASH:
		keysDown[KEY_PAD_SLASH] = true;
		keysTap[KEY_PAD_SLASH] = true;
		break;
	case ALLEGRO_KEY_PAD_ASTERISK:
		keysDown[KEY_PAD_ASTERISK] = true;
		keysTap[KEY_PAD_ASTERISK] = true;
		break;
	case ALLEGRO_KEY_PAD_MINUS:
		keysDown[KEY_PAD_MINUS] = true;
		keysTap[KEY_PAD_MINUS] = true;
		break;
	case ALLEGRO_KEY_PAD_PLUS:
		keysDown[KEY_PAD_PLUS] = true;
		keysTap[KEY_PAD_PLUS] = true;
		break;
	case ALLEGRO_KEY_PAD_DELETE:
		keysDown[KEY_PAD_DELETE] = true;
		keysTap[KEY_PAD_DELETE] = true;
		break;
	case ALLEGRO_KEY_PAD_ENTER:
		keysDown[KEY_PAD_ENTER] = true;
		keysTap[KEY_PAD_ENTER] = true;
		break;

	case ALLEGRO_KEY_PRINTSCREEN:
		keysDown[KEY_PRINTSCREEN] = true;
		keysTap[KEY_PRINTSCREEN] = true;
		break;
	case ALLEGRO_KEY_PAUSE:
		keysDown[KEY_PAUSE] = true;
		keysTap[KEY_PAUSE] = true;
		break;

	case ALLEGRO_KEY_ABNT_C1:
		keysDown[KEY_ABNT_C1] = true;
		keysTap[KEY_ABNT_C1] = true;
		break;
	case ALLEGRO_KEY_YEN:
		keysDown[KEY_YEN] = true;
		keysTap[KEY_YEN] = true;
		break;
	case ALLEGRO_KEY_KANA:
		keysDown[KEY_KANA] = true;
		keysTap[KEY_KANA] = true;
		break;
	case ALLEGRO_KEY_CONVERT:
		keysDown[KEY_CONVERT] = true;
		keysTap[KEY_CONVERT] = true;
		break;
	case ALLEGRO_KEY_NOCONVERT:
		keysDown[KEY_NOCONVERT] = true;
		keysTap[KEY_NOCONVERT] = true;
		break;
	case ALLEGRO_KEY_AT:
		keysDown[KEY_AT] = true;
		keysTap[KEY_AT] = true;
		break;
	case ALLEGRO_KEY_CIRCUMFLEX:
		keysDown[KEY_CIRCUMFLEX] = true;
		keysTap[KEY_CIRCUMFLEX] = true;
		break;
	case ALLEGRO_KEY_COLON2:
		keysDown[KEY_COLON2] = true;
		keysTap[KEY_COLON2] = true;
		break;
	case ALLEGRO_KEY_KANJI:
		keysDown[KEY_KANJI] = true;
		keysTap[KEY_KANJI] = true;
		break;

	case ALLEGRO_KEY_PAD_EQUALS:	/* MacOS X */
		keysDown[KEY_PAD_EQUALS] = true;
		keysTap[KEY_PAD_EQUALS] = true;
		break;
	case ALLEGRO_KEY_BACKQUOTE:	/* MacOS X */
		keysDown[KEY_BACKQUOTE] = true;
		keysTap[KEY_BACKQUOTE] = true;
		break;
	case ALLEGRO_KEY_SEMICOLON2:	/* MacOS X -- TODO: ask lillo what this should be */
		keysDown[KEY_SEMICOLON2] = true;
		keysTap[KEY_SEMICOLON2] = true;
		break;
	case ALLEGRO_KEY_COMMAND:	/* MacOS X */
		keysDown[KEY_COMMAND] = true;
		keysTap[KEY_COMMAND] = true;
		break;
	
	//case ALLEGRO_KEY_BACK:       // Android back key
	//	keysDown[KEY_BACK] = true;
	//	keysTap[KEY_BACK] = true;
	//	break;
	//case ALLEGRO_KEY_VOLUME_UP:
	//	keysDown[KEY_VOLUME_UP] = true;
	//	keysTap[KEY_VOLUME_UP] = true;
	//	break;
	//case ALLEGRO_KEY_VOLUME_DOWN:
	//	keysDown[KEY_VOLUME_DOWN] = true;
	//	keysTap[KEY_VOLUME_DOWN] = true;
	//	break;

	default:
		keysDown[KEY_UNKNOWN] = true;
		keysTap[KEY_UNKNOWN] = true;
		break;

		/* All codes up to before ALLEGRO_KEY_MODIFIERS can be freely
		* assignedas additional unknown keys, like various multimedia
		* and application keys keyboards may have.
		*/

	case ALLEGRO_KEY_LSHIFT:
		keysDown[KEY_LSHIFT] = true;
		keysTap[KEY_LSHIFT] = true;
		break;
	case ALLEGRO_KEY_RSHIFT:
		keysDown[KEY_RSHIFT] = true;
		keysTap[KEY_RSHIFT] = true;
		break;
	case ALLEGRO_KEY_LCTRL:
		keysDown[KEY_LCTRL] = true;
		keysTap[KEY_LCTRL] = true;
		break;
	case ALLEGRO_KEY_RCTRL:
		keysDown[KEY_RCTRL] = true;
		keysTap[KEY_RCTRL] = true;
		break;
	case ALLEGRO_KEY_ALT:
		keysDown[KEY_ALT] = true;
		keysTap[KEY_ALT] = true;
		break;
	case ALLEGRO_KEY_ALTGR:
		keysDown[KEY_ALTGR] = true;
		keysTap[KEY_ALTGR] = true;
		break;
	case ALLEGRO_KEY_LWIN:
		keysDown[KEY_LWIN] = true;
		keysTap[KEY_LWIN] = true;
		break;
	case ALLEGRO_KEY_RWIN:
		keysDown[KEY_RWIN] = true;
		keysTap[KEY_RWIN] = true;
		break;
	case ALLEGRO_KEY_MENU:
		keysDown[KEY_MENU] = true;
		keysTap[KEY_MENU] = true;
		break;
	case ALLEGRO_KEY_SCROLLLOCK:
		keysDown[KEY_SCROLLLOCK] = true;
		keysTap[KEY_SCROLLLOCK] = true;
		break;
	case ALLEGRO_KEY_NUMLOCK:
		keysDown[KEY_NUMLOCK] = true;
		keysTap[KEY_NUMLOCK] = true;
		break;
	case ALLEGRO_KEY_CAPSLOCK:
		keysDown[KEY_CAPSLOCK] = true;
		keysTap[KEY_CAPSLOCK] = true;
		break;

		/*
		case ALLEGRO_KEYMOD_SHIFT:
		keysDown[KEYMOD_SHIFT] = true;
		keysTap[KEYMOD_SHIFT] = true;
		break;
		case ALLEGRO_KEYMOD_CTRL:
		keysDown[KEYMOD_CTRL] = true;
		keysTap[KEYMOD_CTRL] = true;
		break;
		case ALLEGRO_KEYMOD_ALT:
		keysDown[KEYMOD_ALT] = true;
		keysTap[KEYMOD_ALT = true;
		break;
		case ALLEGRO_KEYMOD_LWIN:
		keysDown[KEYMOD_LWIN] = true;
		keysTap[KEYMOD_LWIN] = true;
		break;
		case ALLEGRO_KEYMOD_RWIN:
		keysDown[KEYMOD_RWIN] = true;
		keysTap[KEYMOD_RWIN] = true;
		break;
		case ALLEGRO_KEYMOD_MENU:
		keysDown[KEYMOD_MENU] = true;
		keysTap[KEYMOD_MENU] = true;
		break;
		case ALLEGRO_KEYMOD_ALTGR:
		keysDown[KEYMOD_ALTGR] = true;
		keysTap[KEYMOD_ALTGR] = true;
		break;
		*/
	case ALLEGRO_KEYMOD_COMMAND:
		keysDown[KEYMOD_COMMAND] = true;
		keysTap[KEYMOD_COMMAND] = true;
		break;
	case ALLEGRO_KEYMOD_SCROLLLOCK:
		keysDown[KEYMOD_SCROLLLOCK] = true;
		keysTap[KEYMOD_SCROLLLOCK] = true;
		break;
	case ALLEGRO_KEYMOD_NUMLOCK:
		keysDown[KEYMOD_NUMLOCK] = true;
		keysTap[KEYMOD_NUMLOCK] = true;
		break;
	case ALLEGRO_KEYMOD_CAPSLOCK:
		keysDown[KEYMOD_CAPSLOCK] = true;
		keysTap[KEYMOD_CAPSLOCK] = true;
		break;
	case ALLEGRO_KEYMOD_INALTSEQ:
		keysDown[KEYMOD_INALTSEQ] = true;
		keysTap[KEYMOD_INALTSEQ] = true;
		break;
	case ALLEGRO_KEYMOD_ACCENT1:
		keysDown[KEYMOD_ACCENT1] = true;
		keysTap[KEYMOD_ACCENT1] = true;
		break;
	case ALLEGRO_KEYMOD_ACCENT2:
		keysDown[KEYMOD_ACCENT2] = true;
		keysTap[KEYMOD_ACCENT2] = true;
		break;
	case ALLEGRO_KEYMOD_ACCENT3:
		keysDown[KEYMOD_ACCENT3] = true;
		keysTap[KEYMOD_ACCENT3] = true;
		break;
	case ALLEGRO_KEYMOD_ACCENT4:
		keysDown[KEYMOD_ACCENT4] = true;
		keysTap[KEYMOD_ACCENT4] = true;
		break;
	}
}
void KeyInput::handleKeysUp(int keycode){
	switch (keycode){
	case ALLEGRO_KEY_A:
		keysDown[KEY_A] = false;
		keysTap[KEY_A] = false;
		break;
	case ALLEGRO_KEY_B:
		keysDown[KEY_B] = false;
		keysTap[KEY_B] = false;
		break;
	case ALLEGRO_KEY_C:
		keysDown[KEY_C] = false;
		keysTap[KEY_C] = false;
		break;
	case ALLEGRO_KEY_D:
		keysDown[KEY_D] = false;
		keysTap[KEY_D] = false;
		break;
	case ALLEGRO_KEY_E:
		keysDown[KEY_E] = false;
		keysTap[KEY_E] = false;
		break;
	case ALLEGRO_KEY_F:
		keysDown[KEY_F] = false;
		keysTap[KEY_F] = false;
		break;
	case ALLEGRO_KEY_G:
		keysDown[KEY_G] = false;
		keysTap[KEY_G] = false;
		break;
	case ALLEGRO_KEY_H:
		keysDown[KEY_H] = false;
		keysTap[KEY_H] = false;
		break;
	case ALLEGRO_KEY_I:
		keysDown[KEY_I] = false;
		keysTap[KEY_I] = false;
		break;
	case ALLEGRO_KEY_J:
		keysDown[KEY_J] = false;
		keysTap[KEY_J] = false;
		break;
	case ALLEGRO_KEY_K:
		keysDown[KEY_K] = false;
		keysTap[KEY_K] = false;
		break;
	case ALLEGRO_KEY_L:
		keysDown[KEY_L] = false;
		keysTap[KEY_L] = false;
		break;
	case ALLEGRO_KEY_M:
		keysDown[KEY_M] = false;
		keysTap[KEY_M] = false;
		break;
	case ALLEGRO_KEY_N:
		keysDown[KEY_N] = false;
		keysTap[KEY_N] = false;
		break;
	case ALLEGRO_KEY_O:
		keysDown[KEY_O] = false;
		keysTap[KEY_O] = false;
		break;
	case ALLEGRO_KEY_P:
		keysDown[KEY_P] = false;
		keysTap[KEY_P] = false;
		break;
	case ALLEGRO_KEY_Q:
		keysDown[KEY_Q] = false;
		keysTap[KEY_Q] = false;
		break;
	case ALLEGRO_KEY_R:
		keysDown[KEY_R] = false;
		keysTap[KEY_R] = false;
		break;
	case ALLEGRO_KEY_S:
		keysDown[KEY_S] = false;
		keysTap[KEY_S] = false;
		break;
	case ALLEGRO_KEY_T:
		keysDown[KEY_T] = false;
		keysTap[KEY_T] = false;
		break;
	case ALLEGRO_KEY_U:
		keysDown[KEY_U] = false;
		keysTap[KEY_U] = false;
		break;
	case ALLEGRO_KEY_V:
		keysDown[KEY_V] = false;
		keysTap[KEY_V] = false;
		break;
	case ALLEGRO_KEY_W:
		keysDown[KEY_W] = false;
		keysTap[KEY_W] = false;
		break;
	case ALLEGRO_KEY_X:
		keysDown[KEY_X] = false;
		keysTap[KEY_X] = false;
		break;
	case ALLEGRO_KEY_Y:
		keysDown[KEY_Y] = false;
		keysTap[KEY_Y] = false;
		break;
	case ALLEGRO_KEY_Z:
		keysDown[KEY_Z] = false;
		keysTap[KEY_Z] = false;
		break;

	case ALLEGRO_KEY_0:
		keysDown[KEY_0] = false;
		keysTap[KEY_0] = false;
		break;
	case ALLEGRO_KEY_1:
		keysDown[KEY_1] = false;
		keysTap[KEY_1] = false;
		break;
	case ALLEGRO_KEY_2:
		keysDown[KEY_2] = false;
		keysTap[KEY_2] = false;
		break;
	case ALLEGRO_KEY_3:
		keysDown[KEY_3] = false;
		keysTap[KEY_3] = false;
		break;
	case ALLEGRO_KEY_4:
		keysDown[KEY_4] = false;
		keysTap[KEY_4] = false;
		break;
	case ALLEGRO_KEY_5:
		keysDown[KEY_5] = false;
		keysTap[KEY_5] = false;
		break;
	case ALLEGRO_KEY_6:
		keysDown[KEY_6] = false;
		keysTap[KEY_6] = false;
		break;
	case ALLEGRO_KEY_7:
		keysDown[KEY_7] = false;
		keysTap[KEY_7] = false;
		break;
	case ALLEGRO_KEY_8:
		keysDown[KEY_8] = false;
		keysTap[KEY_8] = false;
		break;
	case ALLEGRO_KEY_9:
		keysDown[KEY_9] = false;
		keysTap[KEY_9] = false;
		break;

	case ALLEGRO_KEY_PAD_0:
		keysDown[KEY_PAD_0] = false;
		keysTap[KEY_PAD_0] = false;
		break;
	case ALLEGRO_KEY_PAD_1:
		keysDown[KEY_PAD_1] = false;
		keysTap[KEY_PAD_1] = false;
		break;
	case ALLEGRO_KEY_PAD_2:
		keysDown[KEY_PAD_2] = false;
		keysTap[KEY_PAD_2] = false;
		break;
	case ALLEGRO_KEY_PAD_3:
		keysDown[KEY_PAD_3] = false;
		keysTap[KEY_PAD_3] = false;
		break;
	case ALLEGRO_KEY_PAD_4:
		keysDown[KEY_PAD_4] = false;
		keysTap[KEY_PAD_4] = false;
		break;
	case ALLEGRO_KEY_PAD_5:
		keysDown[KEY_PAD_5] = false;
		keysTap[KEY_PAD_5] = false;
		break;
	case ALLEGRO_KEY_PAD_6:
		keysDown[KEY_PAD_6] = false;
		keysTap[KEY_PAD_6] = false;
		break;
	case ALLEGRO_KEY_PAD_7:
		keysDown[KEY_PAD_7] = false;
		keysTap[KEY_PAD_7] = false;
		break;
	case ALLEGRO_KEY_PAD_8:
		keysDown[KEY_PAD_8] = false;
		keysTap[KEY_PAD_8] = false;
		break;
	case ALLEGRO_KEY_PAD_9:
		keysDown[KEY_PAD_9] = false;
		keysTap[KEY_PAD_9] = false;
		break;

	case ALLEGRO_KEY_F1:
		keysDown[KEY_F1] = false;
		keysTap[KEY_F1] = false;
		break;
	case ALLEGRO_KEY_F2:
		keysDown[KEY_F2] = false;
		keysTap[KEY_F2] = false;
		break;
	case ALLEGRO_KEY_F3:
		keysDown[KEY_F3] = false;
		keysTap[KEY_F3] = false;
		break;
	case ALLEGRO_KEY_F4:
		keysDown[KEY_F4] = false;
		keysTap[KEY_F4] = false;
		break;
	case ALLEGRO_KEY_F5:
		keysDown[KEY_F5] = false;
		keysTap[KEY_F5] = false;
		break;
	case ALLEGRO_KEY_F6:
		keysDown[KEY_F6] = false;
		keysTap[KEY_F6] = false;
		break;
	case ALLEGRO_KEY_F7:
		keysDown[KEY_F7] = false;
		keysTap[KEY_F7] = false;
		break;
	case ALLEGRO_KEY_F8:
		keysDown[KEY_F8] = false;
		keysTap[KEY_F8] = false;
		break;
	case ALLEGRO_KEY_F9:
		keysDown[KEY_F9] = false;
		keysTap[KEY_F9] = false;
		break;
	case ALLEGRO_KEY_F10:
		keysDown[KEY_F10] = false;
		keysTap[KEY_F10] = false;
		break;
	case ALLEGRO_KEY_F11:
		keysDown[KEY_F11] = false;
		keysTap[KEY_F11] = false;
		break;
	case ALLEGRO_KEY_F12:
		keysDown[KEY_F12] = false;
		keysTap[KEY_F12] = false;
		break;

	case ALLEGRO_KEY_ESCAPE:
		keysDown[KEY_ESCAPE] = false;
		keysTap[KEY_ESCAPE] = false;
		break;
	case ALLEGRO_KEY_TILDE:
		keysDown[KEY_TILDE] = false;
		keysTap[KEY_TILDE] = false;
		break;
	case ALLEGRO_KEY_MINUS:
		keysDown[KEY_MINUS] = false;
		keysTap[KEY_MINUS] = false;
		break;
	case ALLEGRO_KEY_EQUALS:
		keysDown[KEY_EQUALS] = false;
		keysTap[KEY_EQUALS] = false;
		break;
	case ALLEGRO_KEY_BACKSPACE:
		keysDown[KEY_BACKSPACE] = false;
		keysTap[KEY_BACKSPACE] = false;
		break;
	case ALLEGRO_KEY_TAB:
		keysDown[KEY_TAB] = false;
		keysTap[KEY_TAB] = false;
		break;
	case ALLEGRO_KEY_OPENBRACE:
		keysDown[KEY_OPENBRACE] = false;
		keysTap[KEY_OPENBRACE] = false;
		break;
	case ALLEGRO_KEY_CLOSEBRACE:
		keysDown[KEY_CLOSEBRACE] = false;
		keysTap[KEY_CLOSEBRACE] = false;
		break;
	case ALLEGRO_KEY_ENTER:
		keysDown[KEY_ENTER] = false;
		keysTap[KEY_ENTER] = false;
		break;
	case ALLEGRO_KEY_SEMICOLON:
		keysDown[KEY_SEMICOLON] = false;
		keysTap[KEY_SEMICOLON] = false;
		break;
	case ALLEGRO_KEY_QUOTE:
		keysDown[KEY_QUOTE] = false;
		keysTap[KEY_QUOTE] = false;
		break;
	case ALLEGRO_KEY_BACKSLASH:
		keysDown[KEY_BACKSLASH] = false;
		keysTap[KEY_BACKSLASH] = false;
		break;
	case ALLEGRO_KEY_BACKSLASH2: /* DirectInput calls this DIK_OEM_102: "< > | on UK/Germany keyboards" */
		keysDown[KEY_BACKSLASH2] = false;
		keysTap[KEY_BACKSLASH2] = false;
		break;
	case ALLEGRO_KEY_COMMA:
		keysDown[KEY_COMMA] = false;
		keysTap[KEY_COMMA] = false;
		break;
	case ALLEGRO_KEY_FULLSTOP:
		keysDown[KEY_FULLSTOP] = false;
		keysTap[KEY_FULLSTOP] = false;
		break;
	case ALLEGRO_KEY_SLASH:
		keysDown[KEY_SLASH] = false;
		keysTap[KEY_SLASH] = false;
		break;
	case ALLEGRO_KEY_SPACE:
		keysDown[KEY_SPACE] = false;
		keysTap[KEY_SPACE] = false;
		break;

	case ALLEGRO_KEY_INSERT:
		keysDown[KEY_INSERT] = false;
		keysTap[KEY_INSERT] = false;
		break;
	case ALLEGRO_KEY_DELETE:
		keysDown[KEY_DELETE] = false;
		keysTap[KEY_DELETE] = false;
		break;
	case ALLEGRO_KEY_HOME:
		keysDown[KEY_HOME] = false;
		keysTap[KEY_HOME] = false;
		break;
	case ALLEGRO_KEY_END:
		keysDown[KEY_END] = false;
		keysTap[KEY_END] = false;
		break;
	case ALLEGRO_KEY_PGUP:
		keysDown[KEY_PGUP] = false;
		keysTap[KEY_PGUP] = false;
		break;
	case ALLEGRO_KEY_PGDN:
		keysDown[KEY_PGDN] = false;
		keysTap[KEY_PGDN] = false;
		break;
	case ALLEGRO_KEY_LEFT:
		keysDown[KEY_LEFT] = false;
		keysTap[KEY_LEFT] = false;
		break;
	case ALLEGRO_KEY_RIGHT:
		keysDown[KEY_RIGHT] = false;
		keysTap[KEY_RIGHT] = false;
		break;
	case ALLEGRO_KEY_UP:
		keysDown[KEY_UP] = false;
		keysTap[KEY_UP] = false;
		break;
	case ALLEGRO_KEY_DOWN:
		keysDown[KEY_DOWN] = false;
		keysTap[KEY_DOWN] = false;
		break;

	case ALLEGRO_KEY_PAD_SLASH:
		keysDown[KEY_PAD_SLASH] = false;
		keysTap[KEY_PAD_SLASH] = false;
		break;
	case ALLEGRO_KEY_PAD_ASTERISK:
		keysDown[KEY_PAD_ASTERISK] = false;
		keysTap[KEY_PAD_ASTERISK] = false;
		break;
	case ALLEGRO_KEY_PAD_MINUS:
		keysDown[KEY_PAD_MINUS] = false;
		keysTap[KEY_PAD_MINUS] = false;
		break;
	case ALLEGRO_KEY_PAD_PLUS:
		keysDown[KEY_PAD_PLUS] = false;
		keysTap[KEY_PAD_PLUS] = false;
		break;
	case ALLEGRO_KEY_PAD_DELETE:
		keysDown[KEY_PAD_DELETE] = false;
		keysTap[KEY_PAD_DELETE] = false;
		break;
	case ALLEGRO_KEY_PAD_ENTER:
		keysDown[KEY_PAD_ENTER] = false;
		keysTap[KEY_PAD_ENTER] = false;
		break;

	case ALLEGRO_KEY_PRINTSCREEN:
		keysDown[KEY_PRINTSCREEN] = false;
		keysTap[KEY_PRINTSCREEN] = false;
		break;
	case ALLEGRO_KEY_PAUSE:
		keysDown[KEY_PAUSE] = false;
		keysTap[KEY_PAUSE] = false;
		break;

	case ALLEGRO_KEY_ABNT_C1:
		keysDown[KEY_ABNT_C1] = false;
		keysTap[KEY_ABNT_C1] = false;
		break;
	case ALLEGRO_KEY_YEN:
		keysDown[KEY_YEN] = false;
		keysTap[KEY_YEN] = false;
		break;
	case ALLEGRO_KEY_KANA:
		keysDown[KEY_KANA] = false;
		keysTap[KEY_KANA] = false;
		break;
	case ALLEGRO_KEY_CONVERT:
		keysDown[KEY_CONVERT] = false;
		keysTap[KEY_CONVERT] = false;
		break;
	case ALLEGRO_KEY_NOCONVERT:
		keysDown[KEY_NOCONVERT] = false;
		keysTap[KEY_NOCONVERT] = false;
		break;
	case ALLEGRO_KEY_AT:
		keysDown[KEY_AT] = false;
		keysTap[KEY_AT] = false;
		break;
	case ALLEGRO_KEY_CIRCUMFLEX:
		keysDown[KEY_CIRCUMFLEX] = false;
		keysTap[KEY_CIRCUMFLEX] = false;
		break;
	case ALLEGRO_KEY_COLON2:
		keysDown[KEY_COLON2] = false;
		keysTap[KEY_COLON2] = false;
		break;
	case ALLEGRO_KEY_KANJI:
		keysDown[KEY_KANJI] = false;
		keysTap[KEY_KANJI] = false;
		break;

	case ALLEGRO_KEY_PAD_EQUALS:	/* MacOS X */
		keysDown[KEY_PAD_EQUALS] = false;
		keysTap[KEY_PAD_EQUALS] = false;
		break;
	case ALLEGRO_KEY_BACKQUOTE:	/* MacOS X */
		keysDown[KEY_BACKQUOTE] = false;
		keysTap[KEY_BACKQUOTE] = false;
		break;
	case ALLEGRO_KEY_SEMICOLON2:	/* MacOS X -- TODO: ask lillo what this should be */
		keysDown[KEY_SEMICOLON2] = false;
		keysTap[KEY_SEMICOLON2] = false;
		break;
	case ALLEGRO_KEY_COMMAND:	/* MacOS X */
		keysDown[KEY_COMMAND] = false;
		keysTap[KEY_COMMAND] = false;
		break;

	//case ALLEGRO_KEY_BACK:       /* Android back key */
	//	keysDown[KEY_BACK] = false;
	//	keysTap[KEY_BACK] = false;
	//	break;
	//case ALLEGRO_KEY_VOLUME_UP:
	//	keysDown[KEY_VOLUME_UP] = false;
	//	keysTap[KEY_VOLUME_UP] = false;
	//	break;
	//case ALLEGRO_KEY_VOLUME_DOWN:
	//	keysDown[KEY_VOLUME_DOWN] = false;
	//	keysTap[KEY_VOLUME_DOWN] = false;
	//	break;

	default:
		keysDown[KEY_UNKNOWN] = false;
		keysTap[KEY_UNKNOWN] = false;
		break;

		/* All codes up to before ALLEGRO_KEY_MODIFIERS can be freely
		* assignedas additional unknown keys, like various multimedia
		* and application keys keyboards may have.
		*/

	case ALLEGRO_KEY_LSHIFT:
		keysDown[KEY_LSHIFT] = false;
		keysTap[KEY_LSHIFT] = false;
		break;
	case ALLEGRO_KEY_RSHIFT:
		keysDown[KEY_RSHIFT] = false;
		keysTap[KEY_RSHIFT] = false;
		break;
	case ALLEGRO_KEY_LCTRL:
		keysDown[KEY_LCTRL] = false;
		keysTap[KEY_LCTRL] = false;
		break;
	case ALLEGRO_KEY_RCTRL:
		keysDown[KEY_RCTRL] = false;
		keysTap[KEY_RCTRL] = false;
		break;
	case ALLEGRO_KEY_ALT:
		keysDown[KEY_ALT] = false;
		keysTap[KEY_ALT] = false;
		break;
	case ALLEGRO_KEY_ALTGR:
		keysDown[KEY_ALTGR] = false;
		keysTap[KEY_ALTGR] = false;
		break;
	case ALLEGRO_KEY_LWIN:
		keysDown[KEY_LWIN] = false;
		keysTap[KEY_LWIN] = false;
		break;
	case ALLEGRO_KEY_RWIN:
		keysDown[KEY_RWIN] = false;
		keysTap[KEY_RWIN] = false;
		break;
	case ALLEGRO_KEY_MENU:
		keysDown[KEY_MENU] = false;
		keysTap[KEY_MENU] = false;
		break;
	case ALLEGRO_KEY_SCROLLLOCK:
		keysDown[KEY_SCROLLLOCK] = false;
		keysTap[KEY_SCROLLLOCK] = false;
		break;
	case ALLEGRO_KEY_NUMLOCK:
		keysDown[KEY_NUMLOCK] = false;
		keysTap[KEY_NUMLOCK] = false;
		break;
	case ALLEGRO_KEY_CAPSLOCK:
		keysDown[KEY_CAPSLOCK] = false;
		keysTap[KEY_CAPSLOCK] = false;
		break;

		/*
		case ALLEGRO_KEYMOD_SHIFT:
		keysDown[KEYMOD_SHIFT] = false;
		keysTap[KEYMOD_SHIFT] = false;
		break;
		case ALLEGRO_KEYMOD_CTRL:
		keysDown[KEYMOD_CTRL] = false;
		keysTap[KEYMOD_CTRL] = false;
		break;
		case ALLEGRO_KEYMOD_ALT:
		keysDown[KEYMOD_ALT] = false;
		keysTap[KEYMOD_ALT = false;
		break;
		case ALLEGRO_KEYMOD_LWIN:
		keysDown[KEYMOD_LWIN] = false;
		keysTap[KEYMOD_LWIN] = false;
		break;
		case ALLEGRO_KEYMOD_RWIN:
		keysDown[KEYMOD_RWIN] = false;
		keysTap[KEYMOD_RWIN] = false;
		break;
		case ALLEGRO_KEYMOD_MENU:
		keysDown[KEYMOD_MENU] = false;
		keysTap[KEYMOD_MENU] = false;
		break;
		case ALLEGRO_KEYMOD_ALTGR:
		keysDown[KEYMOD_ALTGR] = false;
		keysTap[KEYMOD_ALTGR] = false;
		break;
		*/
	case ALLEGRO_KEYMOD_COMMAND:
		keysDown[KEYMOD_COMMAND] = false;
		keysTap[KEYMOD_COMMAND] = false;
		break;
	case ALLEGRO_KEYMOD_SCROLLLOCK:
		keysDown[KEYMOD_SCROLLLOCK] = false;
		keysTap[KEYMOD_SCROLLLOCK] = false;
		break;
	case ALLEGRO_KEYMOD_NUMLOCK:
		keysDown[KEYMOD_NUMLOCK] = false;
		keysTap[KEYMOD_NUMLOCK] = false;
		break;
	case ALLEGRO_KEYMOD_CAPSLOCK:
		keysDown[KEYMOD_CAPSLOCK] = false;
		keysTap[KEYMOD_CAPSLOCK] = false;
		break;
	case ALLEGRO_KEYMOD_INALTSEQ:
		keysDown[KEYMOD_INALTSEQ] = false;
		keysTap[KEYMOD_INALTSEQ] = false;
		break;
	case ALLEGRO_KEYMOD_ACCENT1:
		keysDown[KEYMOD_ACCENT1] = false;
		keysTap[KEYMOD_ACCENT1] = false;
		break;
	case ALLEGRO_KEYMOD_ACCENT2:
		keysDown[KEYMOD_ACCENT2] = false;
		keysTap[KEYMOD_ACCENT2] = false;
		break;
	case ALLEGRO_KEYMOD_ACCENT3:
		keysDown[KEYMOD_ACCENT3] = false;
		keysTap[KEYMOD_ACCENT3] = false;
		break;
	case ALLEGRO_KEYMOD_ACCENT4:
		keysDown[KEYMOD_ACCENT4] = false;
		keysTap[KEYMOD_ACCENT4] = false;
		break;
	}
}
void KeyInput::resetTapped(){
	for (int i = 0; i<sizeof(keysTap) / sizeof(bool); i++){
		keysTap[i] = 0;
	}
}
void KeyInput::resetDowned(){
	for (int i = 0; i<sizeof(keysDown) / sizeof(bool); i++){
		keysDown[i] = 0;
	}
}