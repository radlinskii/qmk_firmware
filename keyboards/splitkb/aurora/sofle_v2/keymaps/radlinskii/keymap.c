#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_COPY_CUT,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for CMD+C, twice for CMD+X
    [TD_COPY_CUT] = ACTION_TAP_DANCE_DOUBLE(G(KC_C), G(KC_X)),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,          KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                                             KC_6,         KC_7,          KC_8,         KC_9,         KC_0,            KC_EQL,
        KC_GRV,          KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                             KC_Y,         KC_U,          KC_I,         KC_O,         KC_P,            KC_MINS,
        TD(TD_COPY_CUT), LALT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), RALT_T(KC_G),                                     RALT_T(KC_H), RSFT_T(KC_J),  RGUI_T(KC_K), RCTL_T(KC_L), LALT_T(KC_SCLN), KC_QUOT,
        G(KC_V),         KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_MUTE,                C(G(KC_Q)), KC_N,         KC_M,          KC_COMM,      KC_DOT,       KC_SLSH,         KC_BSLS,
                                       XXXXXXX,      XXXXXXX,      KC_BSPC,      TL_LOWR,      LT(3, KC_ENT),          KC_SPC,     TL_UPPR,      LT(4, KC_TAB), XXXXXXX,      XXXXXXX
    ),
    [1] = LAYOUT(
        KC_ESC,          KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                                             KC_6,         KC_7,          KC_8,         KC_9,         KC_0,         KC_EQL,
        KC_GRV,          KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                                             KC_J,         KC_L,          KC_U,         KC_Y,         KC_SCLN,      KC_MINS,
        TD(TD_COPY_CUT), LALT_T(KC_A), LCTL_T(KC_R), LGUI_T(KC_S), LSFT_T(KC_T), RALT_T(KC_G),                                     RALT_T(KC_M), RSFT_T(KC_N),  RGUI_T(KC_E), RCTL_T(KC_I), LALT_T(KC_O), KC_QUOT,
        G(KC_V),         KC_Z,         KC_X,         KC_C,         KC_D,         KC_V,         KC_MUTE,                C(G(KC_Q)), KC_K,         KC_H,          KC_COMM,      KC_DOT,       KC_SLSH,      KC_BSLS,
                                       XXXXXXX,      XXXXXXX,      KC_BSPC,      TL_LOWR,      LT(3, KC_ENT),          KC_SPC,     TL_UPPR,      LT(4, KC_TAB), XXXXXXX,      XXXXXXX
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                _______, _______, _______, _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, KC_PGUP, KC_UP,   KC_PGDN, _______, _______,
        _______, KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, KC_RALT,                                KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,              _______, XXXXXXX,G(KC_UP), XXXXXXX,G(KC_DOWN),XXXXXXX,_______,
                          _______, _______, _______, _______, _______,              KC_ESC,  _______, KC_DEL,  _______, _______
    ),
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                _______, _______, _______, _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, MS_WHLD, MS_UP,   MS_WHLU, _______, _______,
        _______, KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, KC_RALT,                                MS_WHLR, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLL, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,              _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                          _______, _______, _______, _______, _______,              MS_BTN1, MS_BTN3, MS_BTN2, _______, _______
    ),
    [4] = LAYOUT(
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, XXXXXXX, KC_6,    KC_5,    KC_4,    XXXXXXX,                                XXXXXXX, _______, _______, _______, _______, _______,
        _______, XXXXXXX, KC_3,    KC_2,    KC_1,    KC_0,                                   KC_RALT, KC_RSFT, KC_RGUI, KC_RCTL, KC_LALT, _______,
        _______, XXXXXXX, KC_9,    KC_8,    KC_7,    XXXXXXX, _______,              _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                          _______, _______, _______, _______, _______,              _______, _______, _______, _______, _______
    ),
    [5] = LAYOUT(
        _______, _______, _______, _______,        _______,         _______,                         _______, _______,         _______,        _______, _______, _______,
        _______, KC_EXLM, KC_AT,   KC_HASH,        KC_DLR,          KC_PERC,                         KC_CIRC, KC_AMPR,         KC_ASTR,        KC_PIPE, KC_BSLS, _______,
        _______, KC_LALT, KC_LCTL, LGUI_T(KC_GRV), LSFT_T(KC_QUOT), KC_DQUO,                         KC_UNDS, RSFT_T(KC_MINS), RGUI_T(KC_EQL), KC_RCTL, KC_LALT, _______,
        _______, KC_LABK, KC_LPRN, KC_LCBR,        KC_LBRC,         KC_TILD, _______,       _______, KC_PLUS, KC_RBRC,         KC_RCBR,        KC_RPRN, KC_RABK, _______,
                          _______, _______,        _______,         _______, _______,       _______, _______, _______,         _______,        _______
    ),
    [6] = LAYOUT(
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, KC_CAPS, KC_F6,   KC_F5,   KC_F4,   EE_CLR,                                   RM_HUEU, RM_HUED, RM_SATU, RM_SATD, RM_VALU, RM_VALD,
        _______, KC_F11,  KC_F3,   KC_F2,   KC_F1,   KC_F10,                                   TO(1),   KC_BRIU, KC_VOLU, KC_MNXT, KC_MPLY, RM_TOGG,
        _______, KC_F12,  KC_F9,   KC_F8,   KC_F7,   QK_BOOT, _______,                _______, TO(0),   KC_BRID, KC_VOLD, KC_MPRV, KC_MUTE, RM_NEXT,
                          _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______
    )
};
// clang-format on

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    // 0 is left-half encoder,
    // 1 is right-half encoder
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_BRIU);
        } else {
            tap_code(KC_BRID);
        }
    }
    return false;
}
#endif

// turn off the power indicator led
void keyboard_pre_init_user(void) {
    gpio_set_pin_output(24);
    gpio_write_pin_high(24);
}
