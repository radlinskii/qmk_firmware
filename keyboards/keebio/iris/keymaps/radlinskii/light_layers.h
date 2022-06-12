// Copyright 2022 Ignacy Radliński (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*

LED index mapping:

          (31)              (32)              (33)                                    (67)              (66)              (65)
┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
│0       │1       │2       │3       │4       │5       │                          │39      │38      │37      │36      │35      │34      │
├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
│11      │10      │9       │8       │7       │6       │                          │40      │41      │42      │43      │44      │45      │
├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
│12      │13      │14      │15      │16      │17      │                          │51      │50      │49      │48      │47      │46      │
├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
│23      │22      │21      │20      │19      │18      │27      │        │61      │52      │53      │54      │55      │56      │57      │
└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                               │24      │25      │26      │                 │60      │59      │58      │
                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
          (30)              (29)              (28)                                    (62)              (63)              (64)

*/

const rgblight_segment_t PROGMEM QWERTY_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // left side
    {0, 6, 127, 255, 255},
    {6, 6, 115, 255, 255},
    {12, 6, 97, 255, 255},
    {18, 6, 90, 255, 255},
    {24, 1, 85, 255, 255},
    {25, 1, 169, 255, 255}, // TT(_NUM_SYM)
    {26, 2, 85, 255, 255},
    {28, 3, 85, 255, 255}, // underglow
    {31, 3, 127, 255, 255}, // underglow
    // right side
    {34, 6, 127, 255, 255},
    {40, 6, 115, 255, 255},
    {46, 6, 97, 255, 255},
    {52, 6, 90, 255, 255},
    {58, 1, 85, 255, 255},
    {59, 1, 201, 255, 255}, // TT(_NAV)
    {60, 2, 85, 255, 255},
    {62, 3, 85, 255, 255}, // underglow
    {65, 3, 127, 255, 255} // underglow
);

const rgblight_segment_t PROGMEM COLEMAK_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // left side
    {0, 6, 85, 0, 255},
    {6, 6, 85, 70, 255},
    {12, 6, 85, 150, 255},
    {18, 6, 85, 240, 255},
    {24, 1, 85, 255, 255},
    {25, 1, 169, 255, 255}, // TT(_NUM_SYM)
    {26, 2, 85, 255, 255},
    {28, 3, 85, 255, 255}, // underglow
    {31, 3, 85, 0, 255}, // underglow
    // right side
    {34, 6, 85, 0, 255},
    {40, 6, 85, 70, 255},
    {46, 6, 85, 150, 255},
    {52, 6, 85, 240, 255},
    {58, 1, 85, 255, 255},
    {59, 1, 201, 255, 255}, // TT(_NAV)
    {60, 2, 85, 255, 255},
    {62, 3, 85, 255, 255}, // underglow
    {65, 3, 85, 0, 255} // underglow
);

const rgblight_segment_t PROGMEM NUM_SYM_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // left side
    {0, 6, 201, 255, 255},
    {6, 6, 191, 255, 255},
    {12, 6, 181, 255, 255},
    {18, 6, 171, 255, 255},
    {24, 1, 169, 255, 255},
    {25, 1, 85, 255, 255}, // TO(DEFAULT)
    {26, 2, 169, 255, 255},
    {28, 3, 169, 255, 255}, // underglow
    {31, 3, 201, 255, 255}, // underglow
    // right side
    {34, 6, 201, 255, 255},
    {40, 6, 191, 255, 255},
    {46, 6, 181, 255, 255},
    {52, 6, 171, 255, 255},
    {58, 1, 169, 255, 255},
    {59, 1, 201, 255, 255}, // TO(_NAV)
    {60, 2, 169, 255, 255},
    {62, 3, 169, 255, 255}, // underglow
    {65, 3, 201, 255, 255} // underglow
);

const rgblight_segment_t PROGMEM NAV_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // left side
    {0, 6, 248, 255, 255},
    {6, 6, 240, 255, 255},
    {12, 6, 225, 255, 255},
    {18, 6, 210, 255, 255},
    {24, 1, 201, 255, 255},
    {25, 1, 85, 255, 255}, // TO(DEFAULT)
    {26, 2, 201, 255, 255},
    {28, 3, 201, 255, 255}, // underglow
    {31, 3, 248, 255, 255}, // underglow
    // right side
    {34, 6, 248, 255, 255},
    {40, 6, 240, 255, 255},
    {46, 6, 225, 255, 255},
    {52, 6, 210, 255, 255},
    {58, 1, 201, 255, 255},
    {59, 1, 43, 255, 255}, // TO(_MOUSE)
    {60, 2, 201, 255, 255},
    {62, 3, 201, 255, 255}, // underglow
    {65, 3, 248, 255, 255} // underglow
);

const rgblight_segment_t PROGMEM MOUSE_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // left side
    {0, 6, 4, 255, 255},
    {6, 6, 10, 255, 255},
    {12, 6, 25, 255, 255},
    {18, 6, 40, 255, 255},
    {24, 1, 43, 255, 255},
    {25, 1, 85, 255, 255}, // TO(DEFAULT)
    {26, 2, 43, 255, 255},
    {28, 3, 43, 255, 255}, // underglow
    {31, 3, 4, 255, 255}, // underglow
    // right side
    {34, 6, 4, 255, 255},
    {40, 6, 10, 255, 255},
    {46, 1, 0, 255, 255}, // TO(_MISC_MEDIA)
    {47, 5, 25, 255, 255},
    {52, 6, 40, 255, 255},
    {58, 1, 43, 255, 255},
    {59, 1, 201, 255, 255}, // TO(_NAV)
    {60, 2, 43, 255, 255},
    {62, 3, 43, 255, 255}, // underglow
    {65, 3, 4, 255, 255} // underglow
);

const rgblight_segment_t PROGMEM MISC_MEDIA_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // both sides
    {0, 1, 0, 255, 255}, // RESET
    {1, 4, 0, 0, 0},
    {5, 1, 127, 255, 255}, // set QWERTY as default
    {6, 2, 0, 0, 0},
    {8, 1, 160, 150, 150}, // MUTE
    {9, 3, 0, 0, 0},
    {12, 1, 201, 255, 255}, // CAPS
    {13, 1, 120, 255, 255}, // PLAY
    {14, 1, 0, 255, 255}, // NEXT
    {15, 1, 160, 255, 255}, // VOLUME_UP
    {16, 1, 43, 255, 255}, // BRIGHTNESS_UP
    {17, 2, 0, 0, 0},
    {19, 1, 43, 200, 200}, // BRIGHTNESS_DOWN
    {20, 1, 160, 220, 200}, // VOLUME_DOWN
    {21, 1, 0, 220, 200}, // PREV
    {22, 1, 120, 220, 200}, // STOP
    {23, 2, 0, 0, 0},
    {25, 1, 85, 255, 255}, // TO(DEFAULT)
    {26, 2, 0, 0, 0},
    {28, 6, 0, 255, 255}, // underglow
    {34, 5, 0, 0, 0},
    {39, 1, 85, 0, 255}, // set COLEMAK as default
    {40, 19, 0, 0, 0},
    {59, 1, 85, 255, 255}, // TO(DEFAULT)
    {60, 2, 0, 0, 0},
    {62, 6, 0, 255, 255} // underglow
);

const rgblight_segment_t* const PROGMEM MY_LIGHT_LAYERS[] = RGBLIGHT_LAYERS_LIST(
    QWERTY_LIGHT_LAYER,
    COLEMAK_LIGHT_LAYER,
    NUM_SYM_LIGHT_LAYER,
    NAV_LIGHT_LAYER,
    MOUSE_LIGHT_LAYER,
    MISC_MEDIA_LIGHT_LAYER
);
