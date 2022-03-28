#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_pinball(
        KC_LEFT_CTRL,
        KC_LEFT_SHIFT,
        KC_1,
        LT(1, KC_3),
        KC_ESCAPE,
        KC_ENTER,
        KC_RIGHT_SHIFT,
        KC_RIGHT_CTRL
    ),
    [1] = LAYOUT_pinball(
        RGB_SPI,
        RGB_SPD,
        RGB_MODE_FORWARD,
        _______,
        RGB_HUI,
        XXXXXXX,
        KC_AUDIO_VOL_DOWN,
        KC_AUDIO_VOL_UP
    )
};
