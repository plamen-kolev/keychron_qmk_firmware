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
    MAC_BASE,
    LAYER_NUMBERS,
    WIN_BASE,
    LAYER_ONE,
    LAYER_TWO,
    LAYER_THREE,
    BASE_COLEMAK_DH,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [WIN_BASE] = LAYOUT_ansi_84(
          KC_ESCAPE,     KC_Q,     KC_W,     KC_E,               KC_R,               KC_T,          KC_NO,    KC_NO,    KC_Y,               KC_U,               KC_I,                    KC_O,     KC_P,          KC_NO,    KC_NO,    RGB_TOG,
          KC_NO,         KC_A,     KC_S,     MT(MOD_LCTL, KC_D), MT(MOD_LALT, KC_F), KC_G,          KC_NO,    KC_NO,    KC_H,               MT(MOD_RALT, KC_J), MT(MOD_RCTL, KC_K),      KC_L,     KC_SEMICOLON,  KC_BSPC,  KC_PGUP,
          KC_NO,         KC_Z,     KC_X,     KC_C,               KC_V,               LT(LAYER_NUMBERS, KC_B),          KC_NO,    KC_NO,    KC_N,               KC_M,               KC_COMMA,                KC_DOT,   KC_SLASH,         KC_NO,    KC_NO,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              LT(LAYER_ONE, KC_SPACE),    KC_LEFT_SHIFT, KC_NO,    KC_NO,    LT(LAYER_TWO, KC_ENTER),    KC_BACKSPACE,       KC_NO,                   KC_NO,    KC_NO,         KC_HOME,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,                   KC_NO,    KC_NO,         KC_3,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,KC_NO,   KC_NO,    KC_NO,    DF(MAC_BASE)
     ),

     [MAC_BASE] = LAYOUT_ansi_84(
          KC_ESCAPE,     KC_Q,                    KC_W,                    KC_E,               KC_R,                         KC_T,                         KC_NO,    KC_NO,    KC_Y,                         KC_U,               KC_I,                    KC_O,     KC_P,               KC_NO,    KC_NO,    RGB_TOG,
          KC_NO,         KC_A,                    MT(MOD_LCTL, KC_S),  MT(MOD_LALT, KC_D),  MT(MOD_LGUI, KC_F),            KC_G,                         KC_NO,    KC_NO,    KC_H,                         MT(MOD_RGUI, KC_J), MT(MOD_RALT, KC_K),      MT(MOD_RCTL, KC_L),     KC_SEMICOLON,       KC_BSPC,  KC_PGUP,
          KC_NO,         KC_Z,                    KC_X,                    KC_C,               KC_V,                         LT(LAYER_NUMBERS, KC_B),     KC_NO,    KC_NO,    KC_N,                         KC_M,               KC_COMMA,                KC_DOT,   KC_SLASH,           KC_NO,    KC_NO,
          KC_NO,         KC_NO,                   KC_NO,                   KC_NO,              LT(LAYER_ONE, KC_SPACE),     KC_LEFT_SHIFT,                KC_NO,    KC_NO,    LT(LAYER_TWO, KC_ENTER),     KC_BACKSPACE,       KC_NO,                   KC_NO,    KC_NO,              KC_HOME,
          KC_NO,         KC_NO,                   KC_NO,                   KC_NO,              KC_NO,                        KC_NO,                        KC_NO,    KC_NO,    KC_NO,                        KC_NO,              KC_NO,                   KC_NO,    KC_NO,              KC_1,
          KC_NO,         KC_NO,                   KC_NO,                   KC_NO,              KC_NO,                        KC_NO,                        KC_NO,    KC_NO,    KC_NO,                        DF(WIN_BASE)
     ),

     [BASE_COLEMAK_DH] = LAYOUT_ansi_84(
          KC_ESCAPE,     KC_Q,     KC_W,     KC_F,               KC_P,               KC_B,          KC_NO,    KC_NO,    KC_J,               KC_L,               KC_U,                    KC_Y,     KC_SEMICOLON,  KC_NO,    KC_NO,    RGB_TOG,
          KC_NO,         KC_A,     KC_R,     MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_T), KC_G,          KC_NO,    KC_NO,    KC_M,               MT(MOD_RALT, KC_N), MT(MOD_RCTL, KC_E),      KC_I,     KC_O,          KC_BSPC,  KC_PGUP,
          KC_NO,         KC_Z,     KC_X,     KC_C,               KC_D,               KC_V,          KC_NO,    KC_NO,    KC_K,               KC_H,               KC_COMMA,                KC_DOT,   KC_SLASH,      KC_NO,    KC_NO,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              LT(LAYER_ONE, KC_SPACE),    KC_LEFT_SHIFT, KC_NO,    KC_NO,    LT(LAYER_TWO, KC_ENTER),    KC_BACKSPACE,       KC_NO,                   KC_NO,    KC_NO,         KC_HOME,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,                   KC_NO,    KC_NO,         KC_NO,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,KC_NO,   KC_NO,    KC_NO,    KC_NO
     ),

     [LAYER_ONE] = LAYOUT_ansi_84(
          KC_ESCAPE,  QK_GRAVE_ESCAPE, KC_HOME,        KC_UP,    KC_END,   KC_PAGE_UP,    KC_NO,    KC_NO,    KC_TRNS,  KC_BTN1,  KC_MS_U,  KC_LEFT_BRACKET,  KC_RIGHT_BRACKET,    KC_NO,    KC_NO,  RGB_TOG,
          KC_NO,  KC_TAB,          KC_LEFT,            KC_DOWN,  KC_RIGHT, KC_PAGE_DOWN,  KC_NO,    KC_NO,    KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_QUOTE,    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_BTN2,    KC_NO,    KC_9,    KC_0,    TO(LAYER_THREE),    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_4
     ),

     [LAYER_NUMBERS] = LAYOUT_ansi_84(
          KC_ESCAPE,  KC_1, KC_2,        KC_3,    KC_4,   KC_5,    KC_NO,    KC_NO,    KC_TRNS,  KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_NO,    KC_NO,    KC_NO,  RGB_TOG,
          KC_NO,  KC_6,          KC_7,            KC_8,  KC_9, KC_0,  KC_NO,    KC_NO,    KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,    KC_NO,    KC_NO,
          KC_NO,  KC_MINUS,           KC_EQUAL,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    TO(LAYER_THREE),    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_LEFT_SHIFT,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_2
     ),

     [LAYER_TWO] = LAYOUT_ansi_84(
          KC_NO,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_1,     KC_2,    KC_3,   KC_4,   KC_5,   KC_NO,  KC_NO,   KC_NO,
          KC_NO,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_6,     KC_7,     KC_8,     KC_9,  KC_0,   KC_NO,            KC_NO,
          KC_NO,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_Y,     KC_U,     KC_MINUS, KC_EQUAL,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
          KC_NO,         KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
          KC_NO,         KC_LGUI,  KC_LALT,  KC_SPC,   KC_RALT,  KC_RALT,KC_RCTL, KC_LEFT,  KC_DOWN,  KC_5
     ),

     [LAYER_THREE] = LAYOUT_ansi_84(
          TO(WIN_BASE),     KC_C,     KC_TRNS,     KC_TRNS,               KC_TRNS,               KC_TRNS,          KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS,               KC_TRNS,                    KC_TRNS,     KC_TRNS,          KC_TRNS,    KC_TRNS,    RGB_TOG,
          KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS, KC_TRNS,      KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,
          KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_TRNS,               KC_TRNS,               KC_TRNS,          KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS,               KC_TRNS,                KC_TRNS,   KC_TRNS,         KC_TRNS,    KC_TRNS,
          KC_TRNS,         KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,    KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,                   KC_TRNS,    KC_TRNS,         KC_TRNS,
          KC_TRNS,         KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,              KC_TRNS,         KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,              KC_TRNS,                   KC_TRNS,    KC_TRNS,         KC_TRNS,
          KC_NO,         KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,              KC_TRNS,KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_6
     ),
};

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
     // rgblight_disable();
     // set_single_persistent_default_layer(WIN_BASE);
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}
