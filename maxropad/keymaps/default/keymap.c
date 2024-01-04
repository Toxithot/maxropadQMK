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
	LALT(KC_F10),   RCTL(KC_PSCR),    LCTL(LSFT(KC_M)),
	RCTL(KC_SLSH),  LGUI(KC_D),   LCTL(LSFT(KC_D))
    )
};
