// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _P12,
    _P34,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────────────┐
     * │Layout toggle│
     * └─────────────┘
     *     🮣───🮢              🮣───🮢    🮣───🮢
     *     │ ↑ │              │Esc│    │ W │
     * 🮣───┘ ▲ └───🮢🮣───🮢🮣───🮢🮡───🮠🮣───┘ ▲ └───🮢🮣───🮢🮣───🮢
     * │ ← ◀ 𜱵 ▶ → ││ . ││ / │     │ A ◀ 𜱵 ▶ D ││ ` ││ 1 │
     * 🮡───┐ ▼ ┌───🮠🮡───🮠🮡───🮠     🮡───┐ ▼ ┌───🮠🮡───🮠🮡───🮠
     *     │ ↓ │                       │ S │
     *     🮡───🮠                       🮡───🮠
     * └────── Player 1 ─────┘     └────── Player 2 ─────┘
     */
    [_P12] = LAYOUT(
        KC_UP, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DOT, KC_SLASH,
        KC_ESCAPE,
        KC_W, KC_A, KC_S, KC_D, KC_GRAVE, KC_1,
        PDF(_P34)
    ),
    /*
     * ┌─────────────┐
     * │Layout toggle│
     * └─────────────┘
     *     🮣───🮢              🮣───🮢    🮣───🮢
     *     │ I │              │Esc│    │KP8│
     * 🮣───┘ ▲ └───🮢🮣───🮢🮣───🮢🮡───🮠🮣───┘ ▲ └───🮢🮣───🮢🮣───🮢
     * │ J ◀ 𜱵 ▶ L ││ G ││ H │     │KP4◀ 𜱵 ▶KP6││KP1││KP2│
     * 🮡───┐ ▼ ┌───🮠🮡───🮠🮡───🮠     🮡───┐ ▼ ┌───🮠🮡───🮠🮡───🮠
     *     │ K │                       │KP5│
     *     🮡───🮠                       🮡───🮠
     * └────── Player 3 ─────┘     └────── Player 4 ─────┘
     */
    [_P34] = LAYOUT(
        KC_I, KC_J, KC_K, KC_L, KC_G, KC_H,
        KC_ESCAPE,
        KC_KP_8, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_1, KC_KP_2,
        PDF(_P12)
    )
};


void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}




/*
* Rejected UNICODE art
*
* 🭑🬭🭆   🭈🭆🬹🭑🬽 ┘   └ 𜰵 𜰶
* 🭨█🭪 𜱵 █🭪 🭨█   ╳
* 🭜🬂🭧   🭣🭧🬎🭜🭘 ┐   ┌ 𜰹 𜰺
*
*/
