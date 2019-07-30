#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* 0: defuault */
  LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_NO,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
   MT(MOD_LGUI, KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, LT(1, KC_ENTER),
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(3),
    KC_LCTL, MO(1), KC_LALT,                   KC_SPC,  KC_SPC,  KC_SPC,                    KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
  ),
  /* 1: winkeyless */
  LAYOUT(
    KC_ESC,  KC_BRID,    KC_BRIU,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_MRWD,    KC_MPLY,    KC_MFFD,    KC_MUTE,    KC_VOLD, KC_VOLU,  KC_DEL, KC_NO,
    KC_CAPS,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_UP, KC_RBRC, KC_BSLS,
    KC_TRNS, KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_LEFT, KC_RIGHT, KC_BSLS, LT(1, KC_ENTER),
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_DOWN, KC_RSFT, MO(3),
    KC_LCTL, MO(1), KC_LALT,                   KC_SPC,  KC_SPC,  KC_SPC,                    KC_RALT, KC_RGUI, KC_APP,  MO(3)
  ),
  /* 2: hhkb */
  LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(3),
    KC_NO,   KC_LGUI, KC_LALT,                   KC_SPC,  KC_SPC,  KC_SPC,                    KC_NO,   KC_RALT, KC_RGUI,  KC_NO
  ),
  /* 3: fn */
  LAYOUT(
    KC_TILDE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
    KC_CAPS, _______, _______,   _______, RESET, _______, _______, _______, _______, _______, _______, KC_UP,   _______, KC_DEL,
    _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______, _______, _______, KC_LEFT, KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, HPT_TOG,HPT_DWLI,HPT_DWLD, _______, _______, KC_DOWN, _______, _______,
    _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______
  ),

};
