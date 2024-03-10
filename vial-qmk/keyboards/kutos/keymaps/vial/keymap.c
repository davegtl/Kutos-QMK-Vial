// Copyright 2024 David Törnvall (@davegtl)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#include "sendstring_swedish.h"

#define ____ KC_TRNS

#ifdef AUTO_SHIFT_ENABLE

void keyboard_post_init_user(void) {
	autoshift_disable();
}
#endif

//Layer names
enum {
    QWERTY = 0,
    NUMB = 1,
    MOVE = 2,
    FUNC = 3,
    PAD = 4,
    CONF = 5
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     /*

      * -------------------------            -------------------------
      * │0,0│0,1│0,2│0,3│0,4│0,5│            │5,5│5,4│5,3│5,2│5,1│5,0│
      * ----+---+---+---+---+---+            ----+---+---+---+---+---+
      * │1,0│1,1│1,2│1,3│1,4│1,5│-----  -----│6,5│6,4│6,3│6,2│6,1│6,0│
      * ----+---+---+---+---+---+│3,5│  │7,5│----+---+---+---+---+---+
      * │2,0│2,1│2,2│2,3│2,4│2,5│-----  -----│7,5│7,4│7,3│7,2│7,1│7,0│
      * -------------------------│3,4│  │7,4│-------------------------
      *            e│3,1│3,2│3,3│-----  -----│7,3│7,2│7,1│e
      *             -------------            -------------
      */

    [QWERTY] = LAYOUT(
		KC_TAB,     SE_Q,       SE_W,       SE_E,       SE_R,       SE_T,                                   SE_Y,       SE_U,       SE_I,       SE_O,       SE_P,       SE_ARNG,
		KC_LSFT,    SE_A,       SE_S,       SE_D,       SE_F,       SE_G,                                   SE_H,       SE_J,       SE_K,       SE_L,       SE_ODIA,    SE_ADIA,
		KC_LCTL,    SE_Z,       SE_X,       SE_C,       SE_V,       SE_B,       KC_DEL,     KC_BSPC,        SE_N,       SE_M,       SE_COMM,    SE_DOT,     SE_MINS,    KC_BSPC,
                                        KC_MPLY,    LT(2,KC_LGUI),  MO(1),      KC_SPC,     KC_ENT,         TG(4),      MO(5),      KC_MUTE
	),

    [NUMB] = LAYOUT(
		KC_TAB,     SE_Q,       SE_W,       SE_E,       SE_R,       SE_T,                                   SE_Y,       SE_U,       SE_I,       SE_O,       SE_P,       SE_ARNG,
		KC_LSFT,    SE_A,       SE_S,       SE_D,       SE_F,       SE_G,                                   SE_H,       SE_J,       SE_K,       SE_L,       SE_ODIA,    SE_ADIA,
		KC_LCTL,    SE_Z,       SE_X,       SE_C,       SE_V,       SE_B,       KC_DEL,     KC_BSPC,        SE_N,       SE_M,       SE_COMM,    SE_DOT,     SE_MINS,    KC_BSPC,
                                        KC_MPLY,    LT(2,KC_LGUI),  MO(1),      KC_SPC,     KC_ENT,         TG(4),      MO(5),      KC_MUTE
	),

    [MOVE] = LAYOUT(
		KC_TAB,     SE_Q,       SE_W,       SE_E,       SE_R,       SE_T,                                   SE_Y,       SE_U,       SE_I,       SE_O,       SE_P,       SE_ARNG,
		KC_LSFT,    SE_A,       SE_S,       SE_D,       SE_F,       SE_G,                                   SE_H,       SE_J,       SE_K,       SE_L,       SE_ODIA,    SE_ADIA,
		KC_LCTL,    SE_Z,       SE_X,       SE_C,       SE_V,       SE_B,       KC_DEL,     KC_BSPC,        SE_N,       SE_M,       SE_COMM,    SE_DOT,     SE_MINS,    KC_BSPC,
                                        KC_MPLY,    LT(2,KC_LGUI),  MO(1),      KC_SPC,     KC_ENT,         TG(4),      MO(5),      KC_MUTE
	),

    [FUNC] = LAYOUT(
		KC_TAB,     SE_Q,       SE_W,       SE_E,       SE_R,       SE_T,                                   SE_Y,       SE_U,       SE_I,       SE_O,       SE_P,       SE_ARNG,
		KC_LSFT,    SE_A,       SE_S,       SE_D,       SE_F,       SE_G,                                   SE_H,       SE_J,       SE_K,       SE_L,       SE_ODIA,    SE_ADIA,
		KC_LCTL,    SE_Z,       SE_X,       SE_C,       SE_V,       SE_B,       KC_DEL,     KC_BSPC,        SE_N,       SE_M,       SE_COMM,    SE_DOT,     SE_MINS,    KC_BSPC,
                                        KC_MPLY,    LT(2,KC_LGUI),  MO(1),      KC_SPC,     KC_ENT,         TG(4),      MO(5),      KC_MUTE
	),

    [PAD] = LAYOUT(
		KC_TAB,     SE_Q,       SE_W,       SE_E,       SE_R,       SE_T,                                   SE_Y,       SE_U,       SE_I,       SE_O,       SE_P,       SE_ARNG,
		KC_LSFT,    SE_A,       SE_S,       SE_D,       SE_F,       SE_G,                                   SE_H,       SE_J,       SE_K,       SE_L,       SE_ODIA,    SE_ADIA,
		KC_LCTL,    SE_Z,       SE_X,       SE_C,       SE_V,       SE_B,       KC_DEL,     KC_BSPC,        SE_N,       SE_M,       SE_COMM,    SE_DOT,     SE_MINS,    KC_BSPC,
                                        KC_MPLY,    LT(2,KC_LGUI),  MO(1),      KC_SPC,     KC_ENT,         TG(4),      MO(5),      KC_MUTE
	),

    [CONF] = LAYOUT(
		KC_TAB,     SE_Q,       SE_W,       SE_E,       SE_R,       SE_T,                                   SE_Y,       SE_U,       SE_I,       SE_O,       SE_P,       SE_ARNG,
		KC_LSFT,    SE_A,       SE_S,       SE_D,       SE_F,       SE_G,                                   SE_H,       SE_J,       SE_K,       SE_L,       SE_ODIA,    SE_ADIA,
		KC_LCTL,    SE_Z,       SE_X,       SE_C,       SE_V,       SE_B,       KC_DEL,     KC_BSPC,        SE_N,       SE_M,       SE_COMM,    SE_DOT,     SE_MINS,    KC_BSPC,
                                        KC_MPLY,    LT(2,KC_LGUI),  MO(1),      KC_SPC,     KC_ENT,         TG(4),      MO(5),      KC_MUTE
	),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [QWERTY] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [NUMB] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MOVE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [FUNC] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [PAD] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [CONF] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }

};
#endif
