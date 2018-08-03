#include "ymdk_np21.h"
#include "action_layer.h"

#define _NP 0
#define _BL  1

enum custom_keycodes {
  NP = SAFE_RANGE,
  BL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------.
 * |   0  |   1  |   4  |   7  | NUM  | ESC  |
 * |------+------+------+------+------+------|
 * |   .  |   2  |   5  |   8  |   /  | TAB  |---,
 * |------+------+------+------+------+------|USB|
 * |  DOT |   3  |   6  |   9  |   *  | BS   |---'
 * |------+------+------+------+------+------|
 * | Enter| Enter|   +  |   +  |   -  | FN   |
 * `-----------------------------------------'
 */
[_NP] = KEYMAP( \
  KC_F17,     KC_F13,     KC_AUDIO_MUTE,       KC_MEDIA_PLAY_PAUSE,     KC_KP_MINUS,    BL_BRTG, \
  KC_F18,     KC_F14,     KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK,     KC_KP_SLASH,    BL_DEC,  \
  KC_F19,     KC_F15,     KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,         KC_KP_ASTERISK, BL_INC,  \
  KC_F20,     KC_F21,     KC_F22,              KC_F23,                  KC_F24,         TG(_BL)  \
),
/* Qwerty
 * ,---------------------------------------------.
 * | BL_BRTG |        |         |        |   |   |
 * |---------+--------+---------+--------+---+---|
 * |         | BL_OFF | BL_TOGG | BL_ON  |   |   |---,
 * |---------+--------+---------+--------+---+---|USB|
 * |         |        |         |        |   |   |---'
 * |---------+--------+---------+--------+---+---|
 * | BL_DEC  | BL_DEC | BL_INC  | BL_INC |   |   |
 * `---------------------------------------------'
 */
[_BL] = KEYMAP( \
  KC_KP_0,     KC_1,         KC_6,       KC_7,       KC_TAB,      TERM_ON  , \
  KC_KP_COMMA, KC_2,         KC_5,       KC_8,       KC_SLASH,    TERM_OFF , \
  KC_KP_DOT,   KC_3,         KC_4,       KC_9,       KC_ASTERISK, _______  , \
  KC_KP_ENTER, KC_KP_ENTER,  KC_KP_PLUS, KC_KP_PLUS, KC_KP_PLUS,  _______    \
)
};
