// Copyright 2023 radlinskii (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define ENCODERS_PAD_A \
    {}
#define ENCODERS_PAD_B \
    {}
#define ENCODER_RESOLUTIONS \
    {}
#define ENCODERS_PAD_A_RIGHT \
    { GP14 }
#define ENCODERS_PAD_B_RIGHT \
    { GP15 }
#define ENCODER_RESOLUTIONS_RIGHT \
    { 4 }
