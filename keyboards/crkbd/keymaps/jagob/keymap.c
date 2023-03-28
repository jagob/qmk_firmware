/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// compile with
// qmk compile -kb crkbd -km jagob

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "keymap_danish.h" // quantum/keymap_extras/

// Layer names
enum layer_names {
    _COLEMAK_DH,
    _QWERTY,
    _NUMBER,
    _SYMBOL,
    _CONFIG,
};

// Layer names shortcuts
#define _CMK _COLEMAK_DH
#define _QWY _QWERTY
#define _NUM _NUMBER
#define _SYM _SYMBOL
#define _CFG _CONFIG

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK_DH] = LAYOUT_split_3x6_3(
LCTL_T(KC_TAB), KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,           KC_J,    KC_L,    KC_U,    KC_Y,    DK_QUOT, RCTL_T(KC_DEL),
LCTL_T(KC_ESC), KC_A,    KC_R,    KC_S,    KC_T,    KC_G,           KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    RCTL_T(KC_BSPC),
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,           KC_K,    KC_H,    DK_COMM, DK_DOT,  DK_MINS, RSFT_T(KC_ENT),
    //|--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------|
                 KC_LALT, LT(_NUM, KC_BSPC), LCTL_T(KC_SPC),        LSFT_T(KC_ENT), LT(_SYM, KC_TAB), LGUI_T(KC_ESC)
  ),
  [_QWERTY] = LAYOUT_split_3x6_3(
LCTL_T(KC_TAB), KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    RCTL_T(KC_DEL),
LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,           KC_H,    KC_J,    KC_K,    KC_L,    DK_QUOT, RCTL_T(KC_BSPC),
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,           KC_N,    KC_M,    DK_COMM, KC_DOT,  DK_MINS, RSFT_T(KC_ENT),
    //|--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------|
                 KC_LALT, LT(_NUM, KC_BSPC), LCTL_T(KC_SPC),        LSFT_T(KC_ENT), LT(_SYM, KC_TAB), LGUI_T(KC_ESC)
  ),
/*
 * Base Layer: Colemak-DH
 *
 * ,-------------------------------------------.  ,-------------------------------------------.
 * | Escape |   Q  |   W  |   F  |   P  |   B  |  |   J  |   L  |   U  |   Y  |   ;  |BackSpc |
 * |--------+------+------+------+------+------|  |------+------+------+------+------+--------|
 * |Ctrl/Tab|   A  |   R  |  S   |   T  |   G  |  |   M  |   N  |   E  |   I  |   O  |  ' "   |
 * |--------+------+------+------+------+------.  ,-------------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   D  |   V  |  |   K  |   H  | ,  < | . >  | /  ? |SftEnter|
 * `----------------------+------+------+------|  |------+------+------+------+------+--------'
 *                        | Super| Lower| Space|  | Space| Raise| Fn   |
 *                        | Raise|      |  Alt |  |      |      |      |
 *                        `--------------------'  `--------------------'
 */
  [_NUMBER] = LAYOUT_split_3x6_3(
LCTL_T(KC_TAB), KC_1,    KC_2,    KC_3,    KC_4,    KC_5,           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    RCTL_T(KC_DEL),
LCTL_T(KC_ESC), KC_0,    DK_EQL,  DK_ASTR, DK_SLSH, DK_AT,          KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, RCTL_T(KC_BSPC),
       KC_LSFT, XXXXXXX, XXXXXXX, DK_MINS, DK_PLUS, DK_CIRC,        KC_1,    KC_0,    DK_COMM, KC_DOT,  DK_MINS, RSFT_T(KC_ENT),
    //|--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------|
                                  XXXXXXX, KC_TRNS, XXXXXXX,        LSFT_T(KC_ENT), LT(_CFG, KC_TAB), LALT_T(KC_ESC)
  ),

  [_SYMBOL] = LAYOUT_split_3x6_3(
LCTL_T(KC_TAB), DK_EXLM, DK_DQUO, DK_HASH, DK_DLR,  DK_PERC,        DK_AMPR, DK_LPRN, DK_RPRN, DK_LCBR, DK_RCBR, RCTL_T(KC_DEL),
LCTL_T(KC_ESC), DK_QUES, DK_EQL,  DK_ASTR, DK_SLSH, DK_AT,          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, DK_QUOT, RCTL_T(KC_BSPC),
       KC_LSFT, DK_BSLS, DK_TILD, DK_MINS, DK_PLUS, DK_CIRC,        DK_PIPE, DK_LBRC, DK_RBRC, DK_LABK, DK_RABK, RSFT_T(KC_ENT),
    //|--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------|
          LALT_T(KC_DEL), LT(_CFG, KC_BSPC), LCTL_T(KC_SPC),        XXXXXXX, KC_TRNS, XXXXXXX
  ),
//  DK_DIAE, DK_ACUT,  
  [_CONFIG] = LAYOUT_split_3x6_3(
       QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  DK_ARNG,
LCTL_T(KC_ESC), KC_F11,  KC_F12,  DK_GRV,  KC_BTN1, KC_BTN2,        KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, DK_AE,   DK_OSTR,
       KC_LSFT, DT_PRNT, DT_DOWN, DT_UP,   KC_COPY, KC_PSTE,        KC_HOME, KC_PGDN, KC_PGUP, KC_END,  DF(_CMK),DF(_QWY),
    //|--------+--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------+--------|
                                  XXXXXXX, KC_TRNS, XXXXXXX,        XXXXXXX, KC_TRNS, XXXXXXX 
  )
};

// combos, manually update combo_count in config.h
const uint16_t PROGMEM dk_char_ae[] = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM dk_char_oe[] = {KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM dk_char_ao[] = {KC_A, KC_O, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(dk_char_ae, DK_AE),
    COMBO(dk_char_oe, DK_OSTR),
    COMBO(dk_char_ao, DK_ARNG),
};

// overrides https://docs.qmk.fm/#/feature_key_overrides
const key_override_t quote_override = ko_make_basic(MOD_MASK_SHIFT, DK_QUOT, DK_DQUO);
const key_override_t **key_overrides = (const key_override_t *[]){
    &quote_override,
    NULL // Null terminate the array of overrides!
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

bool oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWY:
            oled_write_ln_P(PSTR("Qwerty"), false);
            break;
        // TODO: colemak not displayed
        case _CMK:
            oled_write_ln_P(PSTR("Colemak-DH"), false);
            break;
        case _NUM:
            oled_write_ln_P(PSTR("Number"), false);
            break;
        case _SYM:
            oled_write_ln_P(PSTR("Symbol"), false);
            break;
        case _CFG:
            oled_write_ln_P(PSTR("Config"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    return false;
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        // oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}
#endif // OLED_ENABLE
