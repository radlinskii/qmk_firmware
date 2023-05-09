// Copyright 2023 radlinskii (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layer_names {
    _HOME,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[_HOME] = LAYOUT(KC_X, KC_D)};
