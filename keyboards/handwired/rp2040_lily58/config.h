// Copyright 2024 jan (@jan02-03)
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

/* Serial communication settings */
#define USE_SERIAL
#define SOFT_SERIAL_PIN GP1

// #define SERIAL_USART_TX_PINS GP0     // The GPIO pin that is used split communication.

#define SPLIT_HAND_PIN GP10
#define	SPLIT_HAND_PIN_LOW_IS_LEFT
