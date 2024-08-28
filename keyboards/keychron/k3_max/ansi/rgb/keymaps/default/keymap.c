/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    // DEFAULT_QWERTY,
    DEFAULT_COLEMAK_DH,
    LAYER_ONE,
    LAYER_TWO,
    GAMING,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// [DEFAULT_QWERTY] = LAYOUT_ansi_84(
//      KC_ESCAPE,     KC_Q,     KC_W,     KC_E,               KC_R,               KC_T,          KC_NO,    KC_NO,    KC_Y,               KC_U,               KC_I,                    KC_O,     KC_P,          KC_NO,    KC_NO,    RGB_TOG,
//      KC_NO,         KC_A,     KC_S,     MT(MOD_LCTL, KC_D), MT(MOD_LALT, KC_F), KC_G,          KC_NO,    KC_NO,    KC_H,               MT(MOD_RALT, KC_J), MT(MOD_RCTL, KC_K),      KC_L,     KC_SEMICOLON,  KC_BSPC,  KC_PGUP,
//      KC_NO,         KC_Z,     KC_X,     KC_C,               KC_V,               KC_B,          KC_NO,    KC_NO,    KC_N,               KC_M,               KC_COMMA,                KC_DOT,   KC_NO,         KC_NO,    KC_NO,
//      KC_NO,         KC_NO,    KC_NO,    KC_NO,              LT(1, KC_SPACE),    KC_LEFT_SHIFT, KC_NO,    KC_NO,    LT(2, KC_ENTER),    KC_BACKSPACE,       KC_NO,                   KC_NO,    KC_NO,         KC_HOME,
//      KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,                   KC_NO,    KC_NO,         KC_NO,
//      KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,KC_NO,   KC_NO,    KC_NO,    KC_NO),

[DEFAULT_COLEMAK_DH] = LAYOUT_ansi_84(
     KC_ESCAPE,     KC_Q,     KC_W,     KC_F,               KC_P,               KC_B,          KC_NO,    KC_NO,    KC_J,               KC_L,               KC_U,                    KC_Y,     KC_SEMICOLON,  KC_NO,    KC_NO,    RGB_TOG,
     KC_NO,         KC_A,     KC_R,     MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_T), KC_G,          KC_NO,    KC_NO,    KC_M,               MT(MOD_RALT, KC_N), MT(MOD_RCTL, KC_E),      KC_I,     KC_O,          KC_BSPC,  KC_PGUP,
     KC_NO,         KC_Z,     KC_X,     KC_C,               KC_D,               KC_V,          KC_NO,    KC_NO,    KC_K,               KC_H,               KC_COMMA,                KC_DOT,   KC_SLASH,      KC_NO,    KC_NO,
     KC_NO,         KC_NO,    KC_NO,    KC_NO,              LT(1, KC_SPACE),    KC_LEFT_SHIFT, KC_NO,    KC_NO,    LT(2, KC_ENTER),    KC_BACKSPACE,       KC_NO,                   KC_NO,    KC_NO,         KC_HOME,
     KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,                   KC_NO,    KC_NO,         KC_NO,
     KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,KC_NO,   KC_NO,    KC_NO,    KC_NO),


[LAYER_ONE] = LAYOUT_ansi_84(
     KC_ESCAPE,  QK_GRAVE_ESCAPE, KC_HOME,       KC_UP,    KC_END,   KC_PAGE_UP,    KC_NO,    KC_NO,    KC_TRNS,  KC_BTN1,  KC_MS_U,  KC_BTN2,   KC_NO,   KC_NO,  KC_NO,  RGB_TOG,
     KC_NO,  KC_TAB,          KC_LEFT,       KC_DOWN,  KC_RIGHT, KC_PAGE_DOWN,  KC_NO,    KC_NO,    KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,  KC_NO,            KC_NO,
     KC_NO,  KC_NO,           KC_NO,         KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,            KC_NO,
     KC_NO,  KC_NO,           KC_NO,         KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,            KC_NO,            KC_NO,
     KC_NO,  KC_NO,           KC_NO,         KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,  KC_NO,  KC_NO,
     KC_NO,  KC_NO,           KC_NO,         KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO),

[LAYER_TWO] = LAYOUT_ansi_84(
     KC_ESCAPE,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_1,     KC_2,    KC_3,   KC_4,   KC_5,   KC_NO,  KC_NO,   KC_NO,
     KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_6,     KC_7,     KC_8,     KC_9,  KC_0,   KC_NO,            KC_NO,
     KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_Y,     KC_U,     KC_MINUS, KC_EQUAL,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_NO,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
     KC_NO,    KC_LGUI,  KC_LALT,  KC_SPC,   KC_RALT,  KC_RALT,KC_RCTL, KC_LEFT,  KC_DOWN,  KC_RGHT),

[GAMING] = LAYOUT_ansi_84(
     _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  RGB_TOG,
     _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
     _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______)
};

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}
