TARGET := main
SOURCES := main.cpp LCD5110_Basic/LCD5110_Basic.cpp LCD5110_Basic/DefaultFonts.c
# BOARD := micro
BOARD := nano
# BOARD := uno
CPPFLAGS += '-I./LCD5110_Basic'
include arduino.mk
