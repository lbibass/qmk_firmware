/*
Copyright 2011,2012,2013 Jun Wako <wakojun@gmail.com>

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

#include "quantum.h"
/*         ,-----------------------------------------------.
 *         |F13|F14|F15|F16|F17|F18|F19|F20|F21|F22|F23|F24|
 * ,---.   |-----------------------------------------------|     ,-----------.     ,-----------.
 * |Esc|   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|     |PrS|ScL|Pau|     |VDn|VUp|Mut|
 * `---'   `-----------------------------------------------'     `-----------'     `-----------'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =||Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| ^a|Entr|               |  4|  5|  6|KP,|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RO|Shift |     |Up |     |  1|  2|  3|Ent|
 * |-----------------------------------------------------------| ,-----------. |---------------|
 * |Ctl|Gui|Alt||     Space      |||Alt|Gui|App|Ctl| |Lef|Dow|Rig| |  #|  0|  .|KP=|
 * `-----------------------------------------------------------' `-----------' `---------------'
 *
 * PS/2 scan codes
 * http://download.microsoft.com/download/1/6/1/161ba512-40e2-4cc9-843a-923143f3456c/translate.pdf
 *         ,-----------------------------------------------.
 *         | 08| 10| 18| 20| 28| 30| 38| 40| 48| 50| 57| 5F|
 * ,---.   |-----------------------------------------------|     ,-----------.     ,-----------.
 * | 76|   | 05| 06| 04| 0C| 03| 0B| 83| 0A| 01| 09| 78| 07|     | FC| 7E| FE|     | A1| B2| A3|
 * `---'   `-----------------------------------------------'     `-----------'     `-----------'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * | 0E| 16| 1E| 26| 25| 2E| 36| 3D| 3E| 46| 45| 4E| 55| 6A| 66| | F0| EC| FD| | 77| CA| 7C| 7B|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * | 0D  | 15| 1D| 24| 2D| 2C| 35| 3C| 43| 44| 4D| 54| 5B|  5D | | F1| E9| FA| | 6C| 75| 7D| 79|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * | 58   | 1C| 1B| 23| 2B| 34| 33| 3B| 42| 4B| 4C| 52| ^a| 5A |               | 6B| 73| 74| 6D|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * | 12 | 61| 1A| 22| 21| 2A| 32| 31| 3A| 41| 49| 4A| 51|  59  |     | F5|     | 69| 72| 7A| DA|
 * |-----------------------------------------------------------| ,-----------. |---------------|
 * | 14| 9F| 11| 67 |     29         | 64 | 13 | 91| A7| AF| 94| | EB| F2| F4| | 68|70 | 71| 63|
 * `-----------------------------------------------------------' `-----------' `---------------'
 * ^a ISO hash key uses identical scancode 5D to US backslash.
 * 51, 63, 68, 6D: hidden keys in IBM model M
 */
/* All keys */
#define LAYOUT_all( \
        K08,K10,K18,K20,K28,K30,K38,K40,K48,K50,K57,K5F,\
    K76,K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,         KFC,K7E,KFE,      KA1,KB2,KA3, \
    K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K6A,K66, KF0,KEC,KFD,  K77,KCA,K7C,K7B, \
    K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,    K5D, KF1,KE9,KFA,  K6C,K75,K7D,K79, \
    K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,        K5A,               K6B,K73,K74,K6D, \
    K12,K61,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,    K51,K59,     KF5,      K69,K72,K7A,KDA, \
    K14,K9F,K11,K67,    K29,            K64,K13,K91,KA7,KAF,K94, KEB,KF2,KF4,  K68,K70,K71,K63 \
) { \
    { KC_NO,  K01,    KC_NO,  K03,    K04,    K05,    K06,    K07     }, \
    { K08,    K09,    K0A,    K0B,    K0C,    K0D,    K0E,    KC_NO   }, \
    { K10,    K11,    K12,    K13,    K14,    K15,    K16,    KC_NO   }, \
    { K18,    KC_NO,  K1A,    K1B,    K1C,    K1D,    K1E,    KC_NO   }, \
    { K20,    K21,    K22,    K23,    K24,    K25,    K26,    KC_NO   }, \
    { K28,    K29,    K2A,    K2B,    K2C,    K2D,    K2E,    KC_NO   }, \
    { K30,    K31,    K32,    K33,    K34,    K35,    K36,    KC_NO   }, \
    { K38,    KC_NO,  K3A,    K3B,    K3C,    K3D,    K3E,    KC_NO   }, \
    { K40,    K41,    K42,    K43,    K44,    K45,    K46,    KC_NO   }, \
    { K48,    K49,    K4A,    K4B,    K4C,    K4D,    K4E,    KC_NO   }, \
    { K50,    K51,    K52,    KC_NO,  K54,    K55,    KC_NO,  K57     }, \
    { K58,    K59,    K5A,    K5B,    KC_NO,  K5D,    KC_NO,  K5F     }, \
    { KC_NO,  K61,    KC_NO,  K63,    K64,    KC_NO,  K66,    K67     }, \
    { K68,    K69,    K6A,    K6B,    K6C,    K6D,    KC_NO,  KC_NO   }, \
    { K70,    K71,    K72,    K73,    K74,    K75,    K76,    K77     }, \
    { K78,    K79,    K7A,    K7B,    K7C,    K7D,    K7E,    KC_NO   }, \
    { KC_NO,  KC_NO,  KC_NO,  K83,    KC_NO,  KC_NO,  KC_NO,  KC_NO   }, \
    { KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO   }, \
    { KC_NO,    K91,    KC_NO,  KC_NO,  K94,    KC_NO,    KC_NO,  KC_NO   }, \
    { KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K9F     }, \
    { KC_NO,    KA1,    KC_NO,  KA3,    KC_NO,  KC_NO,  KC_NO,  KA7     }, \
    { KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KAF     }, \
    { KC_NO,    KC_NO,  KB2,    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO     }, \
    { KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO     }, \
    { KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO   }, \
    { KC_NO,    KC_NO,  KCA,    KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO   }, \
    { KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO   }, \
    { KC_NO,  KC_NO,  KDA,    KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO   }, \
    { KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO   }, \
    { KC_NO,  KE9,    KC_NO,  KEB,    KEC,    KC_NO,  KC_NO,  KC_NO   }, \
    { KF0,    KF1,    KF2,    KC_NO,  KF4,    KF5,    KC_NO,  KC_NO   }, \
    { KC_NO,  KC_NO,  KFA,    KC_NO,  KFC,    KFD,    KFE,    KC_NO   }, \
}

/* US layout */
#define LAYOUT_fullsize_ansi( \
    K76,K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,     KFC,K7E,KFE,                   \
    K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K66, KF0,KEC,KFD,  K77,KCA,K7C,K7B, \
    K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,K5D, KF1,KE9,KFA,  K6C,K75,K7D,     \
    K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,    K5A,               K6B,K73,K74,K79, \
    K12,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,        K59,     KF5,      K69,K72,K7A,     \
    K14,K9F,K11,        K29,                K91,KA7,KAF,K94, KEB,KF2,KF4,  K70,    K71,KDA  \
) LAYOUT_all(\
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
    K76,    K05,    K06,    K04,    K0C,    K03,    K0B,    K83,    K0A,    K01,    K09,    K78,    K07,                     KFC, K7E, KFE,    KC_NO, KC_NO, KC_NO,  \
    K0E,    K16,    K1E,    K26,    K25,    K2E,    K36,    K3D,    K3E,    K46,    K45,    K4E,    K55,    KC_NO,  K66,     KF0, KEC, KFD,    K77, KCA, K7C, K7B,  \
    K0D,    K15,    K1D,    K24,    K2D,    K2C,    K35,    K3C,    K43,    K44,    K4D,    K54,    K5B,            K5D,     KF1, KE9, KFA,    K6C, K75, K7D, K79,  \
    K58,    K1C,    K1B,    K23,    K2B,    K34,    K33,    K3B,    K42,    K4B,    K4C,    K52,                    K5A,     K6B, K73,    K74, KC_NO,  \
    K12,    KC_NO,  K1A,    K22,    K21,    K2A,    K32,    K31,    K3A,    K41,    K49,    K4A,    KC_NO,          K59,          KF5,         K69, K72, K7A, KDA,  \
    K14,    K9F,    K11,    KC_NO,          K29,                            KC_NO,  KC_NO,  K91,    KA7,    KAF,    K94,     KEB, KF2, KF4,    KC_NO, K70, K71, KC_NO \
)





