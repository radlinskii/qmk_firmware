/* Copyright 2023 splitkb.com <support@splitkb.com>
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

#pragma once

#define RGB_MATRIX_SLEEP
#define RGB_MATRIX_KEYPRESSES

#define ENABLE_RGB_MATRIX_SOLID_COLOR
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR

// #define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 10 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #define RGB_MATRIX_LED_PROCESS_LIMIT 2 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#define RGB_MATRIX_LED_FLUSH_LIMIT 40 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define RGB_MATRIX_DEFAULT_ON true // Sets the default enabled state, if none has been set
#define RGB_MATRIX_DEFAULT_HUE 240 // Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 120 // Sets the default saturation value, if none has been set
#define RGB_MATRIX_DEFAULT_VAL 128 // Sets the default brightness value, if none has been set
#define RGB_MATRIX_HUE_STEP 8 // The value by which to increment the hue per adjustment action
#define RGB_MATRIX_SAT_STEP 16 // The value by which to increment the saturation per adjustment action

#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 5
#define TRI_LAYER_ADJUST_LAYER 6

#define TAPPING_TERM 180

#define MOUSEKEY_MAX_SPEED 10
