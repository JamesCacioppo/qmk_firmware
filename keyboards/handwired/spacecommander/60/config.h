// Copyright 2020 James Cacioppo <james.m.cacioppo@gmail.com>
#include "config_common.h"
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xE7B7
#define DEVICE_VER      0x0001
#define MANUFACTURER    JamesCacioppo
#define PRODUCT         SpaceCommander60

#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { C7, F1, B6, F0, B2, F4, F5, B0, D1, D3, D2, D5, B7, B5, D0 }
#define UNUSED_PINS

// COL2ROW means the black mark on diode faces rows
#define DIODE_DIRECTION COL2ROW

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION