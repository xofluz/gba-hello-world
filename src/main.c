#include <stdint.h>

#include "gba.h"
#include "letters.h"

void main(void) {
    REG_DISPCNT = MODE_3 | BG2_ENABLE;

    int16_t x_idx = 0;
    int16_t y_idx = 0;

    draw_H(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_GREEN);
    draw_E(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_GREEN);
    draw_L(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_GREEN);
    draw_L(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_GREEN);
    draw_O(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_GREEN);

    x_idx = 0;
    y_idx++;

    draw_W(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_BLUE);
    draw_O(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_BLUE);
    draw_R(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_BLUE);
    draw_L(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_BLUE);
    draw_D(get_x_offset(&x_idx), get_y_offset(&y_idx), RGB_BLUE);

    while (1) {}
}
