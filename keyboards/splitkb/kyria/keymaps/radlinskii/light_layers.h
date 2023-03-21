// Copyright 2022 Ignacy Radliński (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

// clang-format off

const rgblight_segment_t PROGMEM COLEMAK_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 19, 100, 255, 255}
);

const rgblight_segment_t PROGMEM QWERTY_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 19, 100, 0, 255}
);

const rgblight_segment_t PROGMEM NUM_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 19, 140, 255, 255}
);

const rgblight_segment_t PROGMEM SYM_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 19, 180, 255, 255}
);

const rgblight_segment_t PROGMEM NAV_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 19, 201, 255, 255}
);

const rgblight_segment_t PROGMEM MOUSE_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 19, 43, 255, 255}
);

const rgblight_segment_t PROGMEM MEDIA_FN_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 19, 0, 255, 255}
);

const rgblight_segment_t* const PROGMEM MY_LIGHT_LAYERS[] = RGBLIGHT_LAYERS_LIST(
    COLEMAK_LIGHT_LAYER,
    QWERTY_LIGHT_LAYER,
    NUM_LIGHT_LAYER,
    SYM_LIGHT_LAYER,
    NAV_LIGHT_LAYER,
    MOUSE_LIGHT_LAYER,
    MEDIA_FN_LIGHT_LAYER
);
