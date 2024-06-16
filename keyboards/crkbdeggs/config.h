// Copyright 2024 Peter de Guzman (@petridish-dg)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#ifndef BOOTMAGIC_ROW
#    define BOOTMAGIC_ROW 0
#endif
#ifndef BOOTMAGIC_COLUMN
#    define BOOTMAGIC_COLUMN 1
#endif

#ifndef BOOTMAGIC_ROW_RIGHT
#    define BOOTMAGIC_ROW_RIGHT 4
#endif
#ifndef BOOTMAGIC_COLUMN_RIGHT
#    define BOOTMAGIC_COLUMN_RIGHT 1
#endif

#define USE_SERIAL_PD2

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
