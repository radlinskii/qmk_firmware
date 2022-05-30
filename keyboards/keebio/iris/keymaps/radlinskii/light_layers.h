#pragma once

const rgblight_segment_t PROGMEM QWERTY_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // left side
    {0, 6, 117, 255, 255},
    {6, 6, 107, 255, 255},
    {12, 6, 97, 255, 255},
    {18, 6, 90, 255, 255},
    {24, 1, 85, 255, 255},
    {25, 1, 169, 255, 255}, // TT(_NUM_SYM)
    {26, 2, 85, 255, 255},
    {28, 3, 85, 255, 255}, // underglow
    {31, 3, 117, 255, 255}, // underglow
    // right side
    {34, 6, 117, 255, 255},
    {40, 6, 107, 255, 255},
    {46, 6, 97, 255, 255},
    {52, 6, 90, 255, 255},
    {58, 1, 85, 255, 255},
    {59, 1, 201, 255, 255}, // TT(_NAV)
    {60, 2, 85, 255, 255},
    {62, 3, 85, 255, 255}, // underglow
    {65, 3, 117, 255, 255} // underglow
);

const rgblight_segment_t PROGMEM NUM_SYM_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // left side
    {0, 6, 201, 255, 255},
    {6, 6, 191, 255, 255},
    {12, 6, 181, 255, 255},
    {18, 6, 171, 255, 255},
    {24, 1, 169, 255, 255},
    {25, 1, 85, 255, 255}, // TO(_QWERTY)
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
    {25, 1, 85, 255, 255}, // TO(_QWERTY)
    {26, 2, 201, 255, 255},
    {28, 3, 201, 255, 255}, // underglow
    {31, 3, 248, 255, 255}, // underglow
    // right side
    {34, 6, 248, 255, 255},
    {40, 6, 240, 255, 255},
    {46, 6, 225, 255, 255},
    {52, 6, 210, 255, 255},
    {58, 1, 201, 255, 255},
    {59, 1, 43, 255, 255}, // TO(_MOUSE_MEDIA)
    {60, 2, 201, 255, 255},
    {62, 3, 201, 255, 255}, // underglow
    {65, 3, 248, 255, 255} // underglow
);

const rgblight_segment_t PROGMEM MOUSE_MEDIA_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // left side
    {0, 6, 11, 255, 255},
    {6, 6, 19, 255, 255},
    {12, 6, 27, 255, 255},
    {18, 6, 35, 255, 255},
    {24, 1, 43, 255, 255},
    {25, 1, 85, 255, 255}, // TO(_QWERTY)
    {26, 2, 43, 255, 255},
    {28, 3, 43, 255, 255}, // underglow
    {31, 3, 11, 255, 255}, // underglow
    // right side
    {34, 6, 11, 255, 255},
    {40, 5, 19, 255, 255},
    {45, 1, 0, 255, 255}, // TO(_DANGER)
    {46, 6, 27, 255, 255},
    {52, 6, 35, 255, 255},
    {58, 1, 43, 255, 255},
    {59, 1, 169, 255, 255}, // TO(_NUM_SYM)
    {60, 2, 43, 255, 255},
    {62, 3, 43, 255, 255}, // underglow
    {65, 3, 11, 255, 255} // underglow
);

const rgblight_segment_t PROGMEM DANGER_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // both sides
    {0, 1, 0, 0, 255},  // RESET
    {1, 24, 0, 255, 255},
    {25, 1, 85, 255, 255}, // TO(_QWERTY)
    {26, 33, 0, 255, 255}, // including left side underglow
    {59, 1, 85, 255, 255}, // TO(_QWERTY)
    {60, 8, 0, 255, 255} // including right side underglow
);

const rgblight_segment_t* const PROGMEM MY_LIGHT_LAYERS[] = RGBLIGHT_LAYERS_LIST(
    QWERTY_LIGHT_LAYER,
    NUM_SYM_LIGHT_LAYER,
    NAV_LIGHT_LAYER,
    MOUSE_MEDIA_LIGHT_LAYER,
    DANGER_LIGHT_LAYER
);
