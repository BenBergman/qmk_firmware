#include "quantum.h"

led_config_t g_led_config = { {
    // Key Matrix to LED Index
    {7, 6, 5, 4, 3, 2, 1, 0}
}, {
    // LED Index to Physical Position
    {224, 32},
    {192, 32},
    {160, 32},
    {128, 32},
    {96, 32},
    {64, 32},
    {32, 32},
    {0, 32}
}, {
    // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4
} };
