// BLF/Lumintop FW3A config options for Anduril
// for downgraded 1+FET driver
// Copyright (C) 2018-2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "dognodding/fw3a-1-fet-singleaux/hwdef.h"


// this light uses single aux LED channel
#define USE_INDICATOR_LED

// the aux LEDs are front-facing, so turn them off while main LEDs are on
#ifdef USE_INDICATOR_LED_WHILE_RAMPING
#undef USE_INDICATOR_LED_WHILE_RAMPING
#endif

// default aux LED to high
#define INDICATOR_LED_DEFAULT_MODE ((3<<2) + 2)

#define RAMP_SIZE 150

// ../../bin/level_calc.py 1 65 7135 1 0.8 150
// ... mixed with this:
// ../../bin/level_calc.py 2 150 7135 4 0.33 150 FET 1 10 1500
#define PWM1_LEVELS 1,1,2,2,3,3,4,4,5,6,7,8,9,10,12,13,14,15,17,19,20,22,24,26,29,31,34,36,39,42,45,48,51,55,59,62,66,70,75,79,84,89,93,99,104,110,115,121,127,134,140,147,154,161,168,176,184,192,200,209,217,226,236,245,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,5,7,8,9,11,12,14,15,17,19,20,22,24,25,27,29,31,33,35,37,39,41,43,45,48,50,52,55,57,59,62,64,67,70,72,75,78,81,84,87,90,93,96,99,102,105,109,112,115,119,122,126,129,133,137,141,144,148,152,156,160,165,169,173,177,182,186,191,195,200,205,209,214,219,224,229,234,239,244,250,255

#define MAX_1x7135 65
#define DEFAULT_LEVEL 65
#define HALFSPEED_LEVEL 15
#define QUARTERSPEED_LEVEL 6

#define RAMP_SMOOTH_FLOOR 1
#define RAMP_SMOOTH_CEIL  120
// 10, 28, 46, [65], 83, 101, 120
#define RAMP_DISCRETE_FLOOR 10
#define RAMP_DISCRETE_CEIL  RAMP_SMOOTH_CEIL
#define RAMP_DISCRETE_STEPS 7

// safe limit ~20% power
#define SIMPLE_UI_FLOOR  RAMP_DISCRETE_FLOOR
#define SIMPLE_UI_CEIL   120
#define SIMPLE_UI_STEPS  5

// stop panicking at ~30% power or ~1200 lm
#define THERM_FASTER_LEVEL 144

// don't blink during ramp
#undef BLINK_AT_RAMP_MIDDLE

// enable extra features
#define USE_SMOOTH_STEPS

// can't reset the normal way because power is connected before the button
#define USE_SOFT_FACTORY_RESET


// Turn off features to make space

// Simple UI
//#undef USE_SIMPLE_UI

//Sunset timer
//#undef USE_SUNSET_TIMER

// Beacon and SOS modes
//#undef USE_BEACON_MODE
//#undef USE_SOS_MODE

// Strobe modes
//#undef USE_BIKE_FLASHER_MODE
//#undef USE_PARTY_STROBE_MODE
//#undef USE_TACTICAL_STROBE_MODE
//#undef USE_POLICE_STROBE_MODE
//#undef USE_LIGHTNING_MODE
//#undef USE_CANDLE_MODE

// Channel config for strobe modes
//#undef USE_CHANNEL_PER_STROBE

// Momentary mode
//#undef USE_MOMENTARY_MODE

// Tactical mode
#undef USE_TACTICAL_MODE

// Manual and hybrid memory
//#undef USE_MANUAL_MEMORY
//#undef USE_MANUAL_MEMORY_TIMER

// Ramp config options
//#undef USE_RAMP_SPEED_CONFIG
//#undef USE_RAMP_AFTER_MOON_CONFIG

// 2C style turbo config
//#undef USE_2C_STYLE_CONFIG
