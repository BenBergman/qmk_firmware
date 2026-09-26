#include "quantum.h"
#include "winnitron.h"

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }

    // Set indicator(s) for P1/2 vs P3/4 mode
    if (IS_LAYER_ON_STATE(default_layer_state, _P12)) {
        rgb_matrix_set_color(7, 10, 4, 0);
    } else if (IS_LAYER_ON_STATE(default_layer_state, _P34)) {
        rgb_matrix_set_color(7, 4, 10, 0);
    } else {
        rgb_matrix_set_color(7, 0, 0, 0);
    }

    return true;
}
