// Copyright 2023 Ignacy Radlinski (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define	SPLIT_HAND_PIN_LOW_IS_LEFT


#ifdef DIP_SWITCH_ENABLE
    #define DIP_SWITCH_PINS { GP2 }
    #define DIP_SWITCH_PINS_RIGHT { GP2 }
#endif

