// Copyright 2020 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {LAYOUT_ortho_1x1(KC_D)};

void matrix_init_user(void) {
    #ifdef BACKLIGHT_ENABLE
        backlight_enable();
        backlight_level(3);
    #endif
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }

    return false;
}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("Hello World!"), false);

    return false;
}
#endif
