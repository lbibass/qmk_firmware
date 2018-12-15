#pragma once

#define ONESHOT_TAP_TOGGLE  3
#define TAPPING_TERM 200
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// EEPROM usage

// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 32
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x08
#define EEPROM_VERSION_ADDR 34

// Backlight config starts after EEPROM version
#define RGB_BACKLIGHT_CONFIG_EEPROM_ADDR 35
// Dynamic keymap starts after backlight config (35+31)
#define DYNAMIC_KEYMAP_EEPROM_ADDR 66
// Dynamic macro starts after dynamic keymaps (66+(4*5*14*2)) = (66+560)
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 626
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 398
#define DYNAMIC_KEYMAP_MACRO_COUNT 16
