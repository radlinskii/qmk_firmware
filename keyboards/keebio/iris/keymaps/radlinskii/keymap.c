#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _NUM_SYM 1
#define _NAV 2
#define _MISC 3
#define _DANGER 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, LALT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G,            KC_H,RSFT_T(KC_J),RGUI_T(KC_K),RCTL_T(KC_L),RALT_T(KC_SCLN),KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_DEL,          KC_ESC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, TT(_NUM_SYM), KC_ENT,               KC_SPC, TT(_NAV),KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

    [_NUM_SYM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,LALT_T(KC_1),LCTL_T(KC_2),LGUI_T(KC_3),LSFT_T(KC_4),KC_5,               KC_6,RSFT_T(KC_7),RGUI_T(KC_8),RCTL_T(KC_9),RALT_T(KC_0),KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______,          _______, KC_LBRC, KC_RBRC, KC_GRV,  KC_EQL, KC_MINS, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                   _______,TO(_QWERTY),_______,               _______, TO(_NAV), _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

    [_NAV] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_WBAK, KC_WFWD, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BTN2,          _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, TO(_QWERTY), KC_BTN1,              _______, TO(_MISC), _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_MISC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                           _______, _______, _______, RGB_MOD, _______, TO(_DANGER),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, KC_MPRV, KC_MNXT, KC_VOLU, KC_BRIU, _______,                            _______,  _______, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS, KC_MSTP, KC_MPLY, KC_VOLD,  KC_BRID, _______, _______,          _______, _______, _______,  RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, TO(_QWERTY), _______,               _______, TO(_NUM_SYM), _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_DANGER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       RESET, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, TO(_QWERTY), _______,              _______, TO(_QWERTY), _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

const rgblight_segment_t PROGMEM QWERTY_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, 117, 255, 255},
    {6, 6, 107, 255, 255},
    {12, 6, 97, 255, 255},
    {18, 6, 90, 255, 255},
    {24, 1, 85, 255, 255},
    {25, 1, 169, 255, 255}, // TT(_NUM_SYM)
    {26, 2, 85, 255, 255},

    {34, 6, 117, 255, 255},
    {40, 6, 107, 255, 255},
    {46, 6, 97, 255, 255},
    {52, 6, 90, 255, 255},
    {58, 1, 85, 255, 255},
    {59, 1, 201, 255, 255}, // TT(_NAV)
    {60, 2, 85, 255, 255}
);

const rgblight_segment_t PROGMEM NUM_SYM_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, 201, 255, 255},
    {6, 6, 191, 255, 255},
    {12, 6, 181, 255, 255},
    {18, 6, 171, 255, 255},
    {24, 1, 169, 255, 255},
    {25, 1, 85, 255, 255}, // TO(_QWERTY)
    {26, 2, 169, 255, 255},

    {34, 6, 201, 255, 255},
    {40, 6, 191, 255, 255},
    {46, 6, 181, 255, 255},
    {52, 6, 171, 255, 255},
    {58, 1, 169, 255, 255},
    {59, 1, 201, 255, 255}, // TO(_NAV)
    {60, 2, 169, 255, 255}
);

const rgblight_segment_t PROGMEM NAV_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, 248, 255, 255},
    {6, 6, 240, 255, 255},
    {12, 6, 225, 255, 255},
    {18, 6, 210, 255, 255},
    {24, 1, 201, 255, 255},
    {25, 1, 85, 255, 255}, // TO(_QWERTY)
    {26, 2, 201, 255, 255},

    {34, 6, 248, 255, 255},
    {40, 6, 240, 255, 255},
    {46, 6, 225, 255, 255},
    {52, 6, 210, 255, 255},
    {58, 1, 201, 255, 255},
    {59, 1, 43, 255, 255}, // TO(_MISC)
    {60, 2, 201, 255, 255}
);

const rgblight_segment_t PROGMEM MISC_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, 11, 255, 255},
    {6, 6, 19, 255, 255},
    {12, 6, 27, 255, 255},
    {18, 6, 35, 255, 255},
    {24, 1, 43, 255, 255},
    {25, 1, 85, 255, 255}, // TO(_QWERTY)
    {26, 2, 43, 255, 255},

    {34, 6, 11, 255, 255},
    {40, 5, 19, 255, 255},
    {45, 1, 0, 255, 255}, // TO(_DANGER)
    {46, 6, 27, 255, 255},
    {52, 6, 35, 255, 255},
    {58, 1, 43, 255, 255},
    {59, 1, 169, 255, 255}, // TO(_NUM_SYM)
    {60, 2, 43, 255, 255}
);

const rgblight_segment_t PROGMEM DANGER_Layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, 0, 0, 255},  // RESET
    {1, 61, 0, 255, 255}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    QWERTY_Layer,
    NUM_SYM_Layer,
    NAV_Layer,
    MISC_Layer,
    DANGER_Layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(_QWERTY, layer_state_cmp(state, _QWERTY));

    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(_NUM_SYM, layer_state_cmp(state, _NUM_SYM));
    rgblight_set_layer_state(_NAV, layer_state_cmp(state, _NAV));
    rgblight_set_layer_state(_MISC, layer_state_cmp(state, _MISC));
    rgblight_set_layer_state(_DANGER, layer_state_cmp(state, _DANGER));

    return state;
}
