#ifndef KEYBOARDS_CHIBIOS_TEST_CHIBIOS_TEST_H_
#define KEYBOARDS_CHIBIOS_TEST_CHIBIOS_TEST_H_

#include "quantum.h"

#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, \
    K2D, K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, \
    K3D, K40, K41,                 K42,          K45, K49, K4A, K4B, K4C \
) { \
    { KC_NO, KC_NO, K4A, KC_NO, K3B, KC_NO, K3A, KC_NO }, \
    { KC_NO, KC_NO, K4C, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, K4B, KC_NO, K42, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, K2C, KC_NO, K1D, K0D, KC_NO }, \
    { KC_NO, K3C, KC_NO, KC_NO, K41, K45, KC_NO, KC_NO }, \
    { K0A, K0B, K39, KC_NO, K2B, K2A, K1B, K1A }, \
    { K08, K0C, KC_NO, K37, KC_NO, K28, K1C, K18 }, \
    { K09, KC_NO, KC_NO, K38, KC_NO, K29, KC_NO, K19 },	\
    { K07, K06, K35, K36, K26, K27, K16, K17 },	\
    { K04, K05, K34, K33, K25, K24, K15, K14 }, \
    { K03, K3D, KC_NO, K32, KC_NO, K23, KC_NO, K13 }, \
    { K02, KC_NO, K2D, K31, KC_NO, K22, K20, K12 }, \
    { K01, KC_NO, KC_NO, K30, K00, K21, K10, K11 }, \
    { KC_NO , K3D , KC_NO , K49 , KC_NO , K40 , KC_NO , KC_NO } \
}

#endif /* KEYBOARDS_CHIBIOS_TEST_CHIBIOS_TEST_H_ */

