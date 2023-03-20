// Copyright 2022 Ignacy Radlinski
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef ENCODER_ENABLE
    #define ENCODERS_PAD_A { GP9 }
    #define ENCODERS_PAD_B { GP8 }
    #define ENCODER_RESOLUTION 4
#endif

#ifdef POINTING_DEVICE_ENABLE
    #define ANALOG_JOYSTICK_X_AXIS_PIN GP27
    #define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
    #define ANALOG_JOYSTICK_SPEED_MAX 5
    #define ANALOG_JOYSTICK_CLICK_PIN GP16
    #define POINTING_DEVICE_INVERT_Y
#endif

#ifdef OLED_ENABLE
    #define I2C1_SCL_PIN        GP15
    #define I2C1_SDA_PIN        GP14
#endif
