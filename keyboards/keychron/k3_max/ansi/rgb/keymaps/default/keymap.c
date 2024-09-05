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

#define QUERTY 0
#define MAC_QUERTY 1

#define COLEMAK_DH 2
#define MAC_COLEMAK_DH 3

#define NAVIGATION 4
#define NUMPAD_LEFT 5
#define NUMPAD_RIGHT 6
#define EXPERIMENTAL 7

// enum layers {
//     BASE,
//     MAC_QUERTY,
//     LAYER_NUMBERS_LEFT,
//     LAYER_NAVIGATION,
//     LAYER_NUMBERS_RIGHT,
//     LAYER_THREE,
//     COLEMAK_DH,
//     MAC_COLEMAK_DH
// };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [QUERTY] = LAYOUT_ansi_84(
          KC_ESCAPE,     KC_Q,     KC_W,     KC_E,               KC_R,                    KC_T,                    KC_NO,    KC_NO,    KC_Y,                    KC_U,                         KC_I,               KC_O,     KC_P,          KC_NO,    KC_NO,    RGB_TOG,
          KC_NO,         KC_A,     KC_S,     MT(MOD_LCTL, KC_D), MT(MOD_LALT, KC_F),      KC_G,                    KC_NO,    KC_NO,    KC_H,                    MT(MOD_RALT, KC_J),           MT(MOD_RCTL, KC_K), KC_L,     KC_SEMICOLON,  KC_BSPC,  KC_PGUP,
          KC_NO,         LT(NUMPAD_LEFT, KC_Z),     KC_X,     KC_C,               LT(NUMPAD_LEFT, KC_V),                    KC_B, KC_NO,    KC_NO,    KC_N,                      KC_M,                         KC_COMMA,           KC_DOT,   KC_SLASH,      KC_NO,    KC_NO,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              LT(NAVIGATION, KC_SPACE), KC_LEFT_SHIFT,           KC_NO,    KC_NO,   KC_BACKSPACE,            LT(NUMPAD_RIGHT, KC_ENTER),   KC_NO,              KC_NO,    KC_NO,         KC_HOME,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,                   KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,                   KC_NO,                        KC_NO,              KC_NO,    KC_0,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,              KC_NO,                   KC_NO,         KC_NO,    KC_NO,    KC_NO,    TO(MAC_QUERTY)
     ),
     [MAC_QUERTY] = LAYOUT_ansi_84(
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  KC_TRNS,                 KC_TRNS,                 KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,    RGB_TOG,
          KC_TRNS,       KC_TRNS,  MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_D),      MT(MOD_LGUI, KC_F),           KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  MT(MOD_RGUI, KC_J),      MT(MOD_RALT, KC_K),      MT(MOD_RCTL, KC_L), KC_TRNS,  KC_TRNS,  KC_TRNS,
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  KC_TRNS,                 KC_TRNS,                 KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  KC_TRNS,                 KC_TRNS,                 KC_TRNS,            KC_TRNS,  KC_TRNS,
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  KC_TRNS,                 KC_TRNS,                 KC_TRNS,            KC_TRNS,  KC_1,
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  DF(QUERTY)
     ),

     // colmak-dh
     [COLEMAK_DH] = LAYOUT_ansi_84(
          KC_ESCAPE,     KC_Q,                    KC_W,               KC_F,                   KC_P,                               KC_B,                         KC_NO,              KC_NO,         KC_J,                              KC_L,                         KC_U,                         KC_Y,                    KC_SEMICOLON,  KC_NO,    KC_NO,         RGB_TOG,
          KC_NO,         KC_A,                    MT(MOD_LSFT, KC_R), MT(MOD_LCTL, KC_S),     MT(MOD_LALT, KC_T),                 KC_G,                         KC_NO,              KC_NO,         KC_M,                              MT(MOD_RALT, KC_N),           MT(MOD_RCTL, KC_E),           MT(MOD_RSFT, KC_I),      KC_O,          KC_NO,    KC_NO,
          KC_NO,         LT(NUMPAD_LEFT, KC_Z),   KC_X,               KC_C,                   KC_D,                               KC_V,                         KC_NO,              KC_NO,         KC_K,                              KC_H,                         KC_COMMA,                     KC_DOT,                  KC_SLASH,      KC_NO,    KC_NO,
          KC_NO,         KC_NO,                   KC_NO,              KC_NO,                  LT(NAVIGATION, KC_SPACE),           LT(NUMPAD_LEFT, KC_TAB),      KC_NO,              KC_NO,         KC_BACKSPACE,                      LT(NUMPAD_RIGHT,  KC_ENTER),  KC_NO,                        KC_NO,                   KC_NO,         KC_NO,
          KC_NO,         KC_NO,                   KC_NO,              KC_NO,                  KC_NO,                              KC_NO,                        KC_NO,              KC_NO,         KC_NO,                             KC_NO,                        KC_NO,                        KC_NO,                   KC_NO,         KC_2,
          KC_NO,         KC_NO,                   KC_NO,              KC_NO,                  KC_NO,                              KC_NO,                        KC_NO,              KC_NO,         KC_NO,                             TG(MAC_COLEMAK_DH)
     ),

     // mac colemak-dh
     [MAC_COLEMAK_DH] = LAYOUT_ansi_84(
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  KC_TRNS,                 KC_TRNS,                 KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,    RGB_TOG,
          KC_TRNS,       KC_TRNS,  MT(MOD_LCTL, KC_R), MT(MOD_LALT, KC_S),      MT(MOD_LGUI, KC_T),           KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  MT(MOD_RGUI, KC_N),      MT(MOD_RALT, KC_E),      MT(MOD_RCTL, KC_I), KC_TRNS,  KC_TRNS,  KC_TRNS,
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      LT(NUMPAD_RIGHT, KC_V),  KC_TRNS,    KC_TRNS,    KC_TRNS,                  KC_TRNS,                 KC_TRNS,                 KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  KC_TRNS,                 KC_TRNS,                 KC_TRNS,            KC_TRNS,  KC_TRNS,
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  KC_TRNS,                 KC_TRNS,                 KC_TRNS,            KC_TRNS,  KC_3,
          KC_TRNS,       KC_TRNS,  KC_TRNS,            KC_TRNS,                 KC_TRNS,                      KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,                  TO(COLEMAK_DH)
     ),

     // navigation
     [NAVIGATION] = LAYOUT_ansi_84(
          KC_ESCAPE,  QK_GRAVE_ESCAPE, KC_HOME,        KC_UP,    KC_END,   KC_PAGE_UP,    KC_NO,    KC_NO,    KC_TRNS,  KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_NO,    KC_NO,    KC_NO,  RGB_TOG,
          KC_NO,  KC_TAB,          KC_LEFT,            KC_DOWN,  KC_RIGHT, KC_PAGE_DOWN,  KC_NO,    KC_NO,    KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_BTN2,    KC_NO,    KC_9,    KC_0,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_4,
          KC_NO,  KC_NO,           KC_NO,              KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO
     ),

     // numpad right
     [NUMPAD_RIGHT] = LAYOUT_ansi_84(
          KC_NO,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_1,     KC_2,    KC_3,   KC_4,   KC_5,   KC_NO,  KC_NO,   RGB_TOG,
          KC_NO,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_6,     KC_7,     KC_8,     KC_9,  KC_0,   KC_NO,            KC_NO,
          KC_NO,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_Y,     KC_U,     KC_MINUS, KC_EQUAL,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
          KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
          KC_NO,         KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_6,
          KC_NO,         KC_LGUI,  KC_LALT,  KC_SPC,   KC_RALT,  KC_RALT,KC_RCTL, KC_LEFT,  KC_DOWN,  KC_TRNS
     ),

     [NUMPAD_LEFT] = LAYOUT_ansi_84(
          KC_ESCAPE,     KC_NO,         KC_1,     KC_2,     KC_3,     KC_LEFT_CURLY_BRACE,          KC_NO,    KC_NO,    KC_RIGHT_CURLY_BRACE,         KC_EXLM,       KC_AT,    KC_HASH,            KC_NO,    KC_NO,    KC_NO,  RGB_TOG,
          KC_NO,         KC_NO,         KC_4,     KC_5,     KC_6,     KC_LEFT_BRACKET,              KC_NO,    KC_NO,    KC_RIGHT_BRACKET,             KC_DLR,        KC_PERC,  KC_CIRC,            KC_NO,    KC_NO,    KC_NO,
          KC_NO,         KC_NO,         KC_7,     KC_8,     KC_9,     KC_LEFT_PAREN,                KC_NO,    KC_NO,    KC_RIGHT_PAREN,               KC_AMPR,       KC_ASTR,  KC_UNDERSCORE,      KC_NO,    KC_NO,    KC_NO,
          KC_NO,         KC_NO,         KC_NO,    KC_NO,    KC_0,     KC_NO,                        KC_NO,    KC_NO,    KC_MINS,                      KC_EQL,        KC_NO,    KC_NO,              KC_NO,    KC_NO,
          KC_NO,         KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,                        KC_NO,    KC_NO,    KC_NO,                        KC_NO,         KC_NO,    KC_NO,              KC_NO,    KC_5,
          KC_NO,         KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,                        KC_NO,    KC_NO,    KC_NO,                        KC_NO
     ),
     [EXPERIMENTAL] = LAYOUT_ansi_84(
          TO(QUERTY),     DF(COLEMAK_DH),     KC_TRNS,     KC_TRNS,               KC_TRNS,               KC_TRNS,          KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS,               KC_TRNS,                    KC_TRNS,     KC_TRNS,          KC_TRNS,    KC_TRNS,    RGB_TOG,
          KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS, KC_TRNS,      KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,
          KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_TRNS,               KC_TRNS,               KC_TRNS,          KC_TRNS,    KC_TRNS,    KC_TRNS,               KC_TRNS,               KC_TRNS,                KC_TRNS,   KC_TRNS,         KC_TRNS,    KC_TRNS,
          KC_TRNS,         KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,    KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,                   KC_TRNS,    KC_TRNS,         KC_TRNS,
          KC_TRNS,         KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,              KC_TRNS,         KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,              KC_TRNS,                   KC_TRNS,    KC_TRNS,         KC_7,
          KC_NO,         KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,              KC_TRNS,KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
     ),
};

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
     // rgblight_disable();
     // set_single_persistent_default_layer(0);
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}
