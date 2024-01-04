// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ A │ B │ C │ D │
     * ├───┼───┼───┼───┤
     * │ E │ F │ G │ H │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x3(
	LCTL(KC_F7),   LCTL(KC_F8),    LCTL(KC_F9),
	LCTL(KC_F10),  LCTL(KC_F11),   LCTL(KC_F12)
    )
};
