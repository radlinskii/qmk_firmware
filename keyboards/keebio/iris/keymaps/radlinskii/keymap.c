// Copyright 2023 Ignacy Radliński (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "layer_names.h"
#include "light_layers.h"
#include "keycodes.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX, XXXXXXX,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       TD(Q_ES), LALT_KA, LCTL_KR, LGUI_KS, LSFT_KT,    KC_G,                               KC_M, RSFT_KN, RGUI_KE, RCTL_KI, RALT_KO, KC_SCLN,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V, XXXXXXX,          XXXXXXX,    KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       KC_BSPC,  MO_NAV,  MS_ENT,                    KC_SPC,  MO_SYM, NUM_TAB
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_QWERTY] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX, XXXXXXX,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       TD(Q_ES), LALT_KA, LCTL_KS, LGUI_KD, LSFT_KF,    KC_G,                               KC_H, RSFT_KJ, RGUI_KK, RCTL_KL, RA_SCLN,    KC_P,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, XXXXXXX,          XXXXXXX,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       KC_BSPC,  MO_NAV,  MS_ENT,                    KC_SPC,  MO_SYM, NUM_TAB
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_SYM] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_PIPE, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_EXLM, KC_LALT, KC_LCTL, LGU_GRV,  LSF_QT,  KC_DQT,                            KC_UNDS, RSF_MIN, RGU_EQL, KC_RCTL, KC_RALT, KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______, KC_LABK, KC_LPRN, KC_LCBR, KC_LBRC,KC_TILDE, _______,          _______, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_RABK, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                        KC_DEL, _______, _______,                   _______, _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_NAV] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______,                            _______, KC_PGDN,   KC_UP, KC_PGUP, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, _______,                            KC_HOME, KC_LEFT, KC_DOWN,KC_RIGHT,  KC_END, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______, _______,          _______, _______, GUI_DWN, _______,  GUI_UP, _______, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______, _______, _______,                   _______, _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_NUM] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______,    KC_6,    KC_5,    KC_4, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______,  KC_DOT,    KC_3,    KC_2,    KC_1,    KC_0,                            _______, KC_RSFT, KC_RGUI, KC_RCTL, KC_RALT, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______, KC_COMM,    KC_9,    KC_8,    KC_7, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______, _______, _______,                   QK_BOOT, _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_MOUSE] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______,                            _______, KC_WH_U, KC_MS_U, KC_WH_D, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, _______,                            KC_WH_R, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_L, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       QK_BOOT, _______, _______,                   KC_BTN1, KC_BTN3, KC_BTN2
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [_MEDIA_FN] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______,   KC_F6,   KC_F5,   KC_F4,K_QWERTY,                          K_COLEMAK, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_CAPS,  KC_F11,   KC_F3,   KC_F2,   KC_F1,  KC_F10,                            _______, KC_BRIU, KC_VOLU, KC_MNXT, KC_MPLY, KC_CAPP,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,  KC_F12,   KC_F9,   KC_F8,   KC_F7, _______, _______,          _______, _______, KC_BRID, KC_VOLD, KC_MPRV, KC_MUTE, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______, _______, _______,                   _______, _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    )
};
// clang-format on

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(Q_ES):
            return TAPPING_TERM + 150;
        default:
            return TAPPING_TERM;
    }
}

// switching default layer between COLEMAK and QWERTY

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case K_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
                layer_move(_COLEMAK);
            }
            return false;
        case K_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
                layer_move(_QWERTY);
            }
            return false;
    }
    return true;
}

//  RGB light layers

void keyboard_post_init_user(void) {
    rgblight_layers = MY_LIGHT_LAYERS;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(_COLEMAK, layer_state_cmp(state, _COLEMAK));
    rgblight_set_layer_state(_QWERTY, layer_state_cmp(state, _QWERTY));

    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(_SYM, layer_state_cmp(state, _SYM));
    rgblight_set_layer_state(_NAV, layer_state_cmp(state, _NAV));
    rgblight_set_layer_state(_NUM, layer_state_cmp(state, _NUM));
    rgblight_set_layer_state(_MOUSE, layer_state_cmp(state, _MOUSE));
    rgblight_set_layer_state(_MEDIA_FN, layer_state_cmp(state, _MEDIA_FN));

    return update_tri_layer_state(state, _SYM, _NAV, _MEDIA_FN);
}
