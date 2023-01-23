# MCU name
MCU = STM32F072

# Build Options
#   comment out to disable the options.
BOOTLOADER = stm32-dfu
DFU_SUFFIX_ARGS = -v FFFF -p FFFF



BOOTMAGIC_ENABLE = yes	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = yes	# Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
SLEEP_LED_ENABLE = no  # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes	    # USB Nkey Rollover
CUSTOM_MATRIX = no # Custom matrix file
BACKLIGHT_ENABLE = no # This is broken on 072 for some reason
RGBLIGHT_ENABLE = yes
WS2812_DRIVER = bitbang
VIA_ENABLE = yes
LAYOUTS = 60_tsangan_hhkb 60_ansi_tsangan


# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
LTO_ENABLE = yes
