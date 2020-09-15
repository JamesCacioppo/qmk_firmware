// Copyright 2020 James Cacioppo <james.m.cacioppo@gmail.com>
#include "config_common.h"
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xE7B7
#define DEVICE_VER      0x0001
#define MANUFACTURER    JamesCacioppo
#define PRODUCT         SpaceCommander60

#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4 }
#define MATRIX_COL_PINS { B5, B6, B7, C0, C1, C2, C3, C4, C5, C6, C7, D0, D1, D2, D3 }
#define UNUSED_PINS

// COL2ROW means the black mark on diode faces rows
#define DIODE_DIRECTION COL2ROW

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION