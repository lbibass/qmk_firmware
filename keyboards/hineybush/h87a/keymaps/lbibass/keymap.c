/* Copyright 2020 Josh Hinnebusch

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

enum my_keycodes {
  num1 = SAFE_RANGE,
  num2,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_all(
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,     KC_F11,     KC_F12,                  KC_PSCR, LCG_SWP, KC_PAUS,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,    KC_EQL,     KC_BSLS,   num1,      KC_INS,  KC_HOME, KC_PGUP,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,    KC_RBRC,    KC_BSPC,                 KC_DEL,  KC_END,  KC_PGDN,
    LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,    KC_NUHS,    LT(1,KC_ENTER),
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,    KC_RSFT,    KC_RWIN,                          KC_UP,
    KC_LGUI, KC_LGUI, KC_LALT,                   KC_SPC,                                      KC_RALT,  KC_RALT,      KC_RGUI,      KC_RCTL,               KC_LEFT, KC_DOWN, KC_RGHT),

  [1] = LAYOUT_all(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MRWD, KC_MPLY,          KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU,                        KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_VOLU,
    KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_DEL,                           KC_MPLY, KC_MNXT, KC_VOLD,
    KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_RIGHT, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN,  KC_TRNS, KC_TRNS,                                 KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                  KC_TRNS,                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS),

  [2] = LAYOUT_all(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_VOLU,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_MPLY, KC_MNXT, KC_VOLD,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  [3] = LAYOUT_all(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_PMNS, KC_PPLS, KC_TRNS, num2,                   KC_TRNS, KC_TRNS, KC_VOLU,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,  KC_TRNS,  KC_TRNS, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                         KC_MPLY, KC_MNXT, KC_VOLD,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_P0, KC_TRNS,  KC_PDOT, KC_PSLS, KC_TRNS, KC_TRNS,                              KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                                         KC_TRNS, KC_TRNS, KC_TRNS),

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case num1:
            if (record->event.pressed) {
                layer_on(3);
                togglePin(E6);

            } else {
                // Do something else when release
            }
            return false;  // Skip all further processing of this key

            return true;   // Let QMK send the enter press/release events
        default:
            return true;  // Process all other keycodes normally
        case num2:
            if (record->event.pressed) {
                layer_clear();
                layer_on(0);
                togglePin(E6);
            } else {
                // Do something else when release
            }
            return false;  // Skip all further processing of this key

            return true;  // Let QMK send the enter press/release events

            return true;  // Process all other keycodes normally
    }
}
