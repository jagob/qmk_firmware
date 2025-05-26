/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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
#include "keymap_danish.h" // quantum/keymap_extras/

enum charybdis_keymap_layers {
    _COLEMAK_DH,
    _COLEMAK_DH_GAMING,
    _QWERTY,
    _QWERTY_GAMING,
    _NUMBER,
    _NAVIGATION,
    _ADJUST,
    _MOUSE,
};

// Layer names shortcuts
#define _CMK _COLEMAK_DH
#define _CGA _COLEMAK_DH_GAMING
#define _QWY _QWERTY
#define _QGA _QWERTY_GAMING
#define _NUM _NUMBER
#define _SYM _SYMBOL
#define _NAV _NAVIGATION
#define _CFG _CONFIG
#define _ADJ _ADJUST
#define _MUS _MOUSE

// Miryoku
#define GUI_A    LGUI_T(KC_A)
#define ALT_R    LALT_T(KC_R)
#define LSFT_S   LSFT_T(KC_S)
#define LCTL_Ti  LCTL_T(KC_T)

#define LCTL_N   LCTL_T(KC_N)
#define LSFT_E   LSFT_T(KC_E)
#define ALT_I    LALT_T(KC_I)
#define GUI_O    LGUI_T(KC_O)

// xmonad alt,gui on numbers layer
#define GUI_0    LGUI_T(KC_0)
#define ALT_EQL  LALT_T(DK_EQL)

#define ALT_END  LALT_T(KC_END)
/* #define GUI_0    LGUI_T(KC_0) */
#define ALT_G    LALT_T(KC_G)

#define MUS_Z    LT(_MUS, KC_Z)
#define MUS_DOT  LT(_MUS, KC_DOT)
#define MUS_SLSH LT(_MUS, KC_SLSH)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK_DH] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS,
LCTL_T(KC_TAB),    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,   DK_QUOT, DRG_TOG,
LALT_T(KC_ESC),    GUI_A,   ALT_R,   LSFT_S,  LCTL_Ti, KC_G,    KC_M,    LCTL_N,  LSFT_E,  ALT_I,  GUI_O,   LGUI_T(DK_QUOT),
       KC_LSFT,    MUS_Z,   KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, MUS_DOT,MUS_SLSH,DRGSCRL,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                  LT(_NUM, KC_BSPC), LCTL_T(KC_SPC), KC_LALT,    LSFT_T(KC_ENT), LT(_NAV, KC_TAB),
                                            KC_BSPC, KC_LGUI,    KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [_COLEMAK_DH_GAMING] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS,
LCTL_T(KC_TAB),    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,   DK_QUOT, DRG_TOG,
LALT_T(KC_ESC),    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    LCTL_N,  LSFT_E,  ALT_I,  GUI_O,   LGUI_T(DK_QUOT),
       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, MUS_DOT,MUS_SLSH,DRGSCRL,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                  LT(_NUM, KC_BSPC), LCTL_T(KC_SPC), KC_LALT,    LSFT_T(KC_ENT), LT(_NAV, KC_TAB),
                                    LSFT_T(KC_BSPC), KC_LGUI,    KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [_QWERTY] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,
LCTL_T(KC_TAB),    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, RCTL_T(KC_DEL),
LALT_T(KC_ESC),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, LGUI_T(DK_QUOT),
       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, RSFT_T(DRG_TOG),
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                  LT(_NUM, KC_BSPC), LCTL_T(KC_SPC), KC_LALT,    LSFT_T(KC_ENT), LT(_NAV, KC_TAB),
                                           KC_BSPC, KC_LGUI,    KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [_QWERTY_GAMING] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_ESC,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,
LCTL_T(KC_TAB),    KC_T,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, RCTL_T(KC_DEL),
LALT_T(KC_ESC),    ALT_G,   KC_A,    KC_S,    KC_D,    KC_F,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, LGUI_T(DK_QUOT),
       KC_LSFT,    KC_B,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, RSFT_T(DRG_TOG),
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                  LT(_NUM, KC_BSPC), LCTL_T(KC_SPC), KC_LALT,    LSFT_T(KC_ENT), LT(_NAV, KC_TAB),
                                           KC_BSPC, KC_LGUI,    KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [_NUMBER] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
LCTL_T(KC_TAB), KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    RCTL_T(KC_DEL),
LALT_T(KC_ESC), GUI_0,   ALT_EQL, DK_ASTR, DK_SLSH, DK_AT,      KC_HOME, KC_0,    KC_1,    ALT_END, GUI_0,   LGUI_T(DK_QUOT),
       KC_LSFT, KC_MINS, KC_EQL,  DK_MINS, DK_PLUS, DK_CIRC,    KC_PGDN, KC_PGUP, DK_COMM, DK_DOT,  DK_MINS, RSFT_T(KC_ENT),
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                           KC_TRNS, LCTL_T(KC_SPC), KC_LALT,    LSFT_T(KC_ENT), LT(_ADJ, KC_TAB),
                                           KC_BSPC, KC_LGUI,    KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [_NAVIGATION] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
LCTL_T(KC_TAB), DK_EXLM, DK_DQUO, DK_HASH, DK_DLR,  DK_PERC,    DK_AMPR, DK_LPRN, DK_RPRN, DK_LCBR, DK_RCBR, RCTL_T(KC_DEL),
LALT_T(KC_ESC), DK_QUES, DK_EQL,  DK_ASTR, DK_SLSH, DK_AT,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, DK_QUOT, LGUI_T(DK_QUOT),
       KC_LSFT, DK_BSLS, DK_TILD, DK_MINS, DK_PLUS, DK_CIRC,    DK_PIPE, DK_LBRC, DK_RBRC, DK_LABK, DK_RABK, RSFT_T(KC_ENT),
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                  LT(_ADJ, KC_BSPC), LCTL_T(KC_SPC), KC_LALT,    LSFT_T(KC_ENT), KC_TRNS,
                                           KC_BSPC, KC_LGUI,    KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [_ADJUST] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
     QK_BOOT,   DF(_CGA),DF(_QGA),KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
     QK_REBOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  DK_ARNG,
LALT_T(KC_ESC), KC_F11,  KC_F12,  DK_GRV,  KC_BTN1, KC_BTN2,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, DK_AE,   DK_OSTR,
       KC_LSFT, DT_PRNT, DT_DOWN, DT_UP,   KC_COPY, KC_PSTE,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  DF(_CMK), DF(_QWY),
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                           KC_TRNS, LCTL_T(KC_SPC), KC_LALT,    LSFT_T(KC_ENT), KC_TRNS,
                                           KC_BSPC, KC_LGUI,    KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_MOUSE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
      _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______,    _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, KC_BTN1, KC_BTN2,    DRG_TOG, KC_BTN1, KC_BTN3, KC_BTN2, _______, _______,
      _______, KC_TRNS, _______, _______, KC_WH_D, KC_WH_U,    DRGSCRL, KC_WH_D, KC_WH_U, KC_TRNS, KC_TRNS, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                  LT(_NUM, KC_BSPC), LCTL_T(KC_SPC), KC_LALT,    LSFT_T(KC_ENT), LT(_NAV, KC_TAB),
                                            KC_BSPC, KC_LGUI,    KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
      '*'    , '*'    ,  '*'   , '*'    , '*'    , '*'    ,    '*'    , '*'    , '*'    , '*'    , '*'    , '*'    ,
      '*'    , '*'    ,  '*'   , '*'    , '*'    , '*'    ,    '*'    , '*'    , '*'    , '*'    , '*'    , '*'    ,
      'L'    , 'L'    ,  'L'   , 'L'    , 'L'    , 'L'    ,    'R'    , 'R'    , 'R'    , 'R'    , 'R'    , 'R'    ,
      '*'    , '*'    ,  '*'   , '*'    , '*'    , '*'    ,    '*'    , '*'    , '*'    , '*'    , '*'    , '*'    ,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                 '*'    , '*'    ,  '*'   ,    '*'    , '*'    ,
                                          '*'    ,  '*'   ,    '*'
  //                            ╰───────────────────────────╯ ╰──────────────────╯
    );

// combos, manually update combo_count in config.h
/* const uint16_t PROGMEM home[] = {KC_N, KC_E, COMBO_END}; */
/* const uint16_t PROGMEM end1[] = {KC_E, KC_I, COMBO_END}; */
/* const uint16_t PROGMEM end2[] = {KC_I, KC_O, COMBO_END}; */
const uint16_t PROGMEM home[] = {KC_DOWN, KC_UP,   COMBO_END};
const uint16_t PROGMEM end1[] = {KC_UP,   KC_RGHT, COMBO_END};
const uint16_t PROGMEM end2[] = {KC_RGHT, DK_QUOT, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(home, KC_HOME),
    COMBO(end1, KC_END),
    COMBO(end2, KC_END),
};

bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                      uint16_t other_keycode, keyrecord_t* other_record) {
  // Exceptionally allow some one-handed chords for hotkeys.
  switch (tap_hold_keycode) {
      case LT(_NUM, KC_BSPC):
      case LCTL_T(KC_SPC):
      case LSFT_T(KC_ENT):
      case LT(_NAV, KC_TAB):

      case LALT_T(KC_ESC):

      case MUS_Z:
      case MUS_DOT:
      case MUS_SLSH:

      case ALT_G:
        return true;
    break;
  }

  /* // Also allow same-hand holds when the other key is in the rows below the */
  /* // alphas. I need the `% (MATRIX_ROWS / 2)` because my keyboard is split. */
  /* // if (other_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { */
  /* //   return true; */
  /* // } */

  /* if (other_record->event.key.row == 4 || other_record->event.key.row == 9) { */
  /*   return true; */
  /* } */

  // Otherwise defer to the opposite hands rule.
  return get_chordal_hold_default(tap_hold_record, other_record);
}

// https://docs.qmk.fm/#/feature_pointing_device?id=drag-scroll-or-mouse-scroll
enum custom_keycodes {
    DRAG_SCROLL = SAFE_RANGE,
};

bool set_scrolling = false;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (set_scrolling) {
        mouse_report.h = mouse_report.x;
        // mouse_report.v = mouse_report.y;
        mouse_report.v = -mouse_report.y;  // reverse drag direction. Not working :(
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == DRAG_SCROLL && record->event.pressed) {
        set_scrolling = !set_scrolling;
    }
    return true;
}

void pointing_device_init_user(void) {
    // set_auto_mouse_layer(<mouse_layer>); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_layer(_MOUSE); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work */
    // set_auto_mouse_enable(false);         // always required before the auto mouse feature will work */
}

// clang-format on
