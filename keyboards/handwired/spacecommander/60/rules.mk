# Copyright 2020 James Cacioppo <james.m.cacioppo@gmail.com>
MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
BOOTLOADER = atmel-dfu
NKRO_ENABLED = yes
EXTRAKEY_ENABLE = yes