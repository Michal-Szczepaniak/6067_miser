/*
Copyright 2021 Michał Szczepaniak

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x6067
#define PRODUCT_ID   0x2137
#define DEVICE_VER   0x0001
#define MANUFACTURER QMK

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B12, B13, B14, B15, A8 }
#define MATRIX_COL_PINS { B3, B4, B5, B6, B7, B8, A3, B1, A7, B0, A6, A4, A5, B10, A15 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define AUDIO_INIT_DELAY
#define AUDIO_PIN A2
#define AUDIO_PWM_DRIVER PWMD2
#define AUDIO_PWM_CHANNEL 3
#define AUDIO_PWM_PAL_MODE 1
#define AUDIO_STATE_TIMER  GPTD1

#define AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_RANDOMNESS 1.5f

#ifdef USER_SONG_LIST
#define STARTUP_SONG SONG(BARKA)
#else
#define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
