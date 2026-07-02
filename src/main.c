#include <stdint.h>

#include "gba.h"
#include "letters.h"

void main(void) {
    REG_DISPCNT = MODE_3 | BG2_ENABLE;

    draw_H(5, 5, RGB_GREEN);
    draw_E(35, 5, RGB_GREEN);
    draw_L(65, 5, RGB_GREEN);
    draw_L(95, 5, RGB_GREEN);
    draw_O(125, 5, RGB_GREEN);

    draw_W(5, 60, RGB_BLUE);
    draw_O(35, 60, RGB_BLUE);
    draw_R(65, 60, RGB_BLUE);
    draw_L(95, 60, RGB_BLUE);
    draw_D(125, 60, RGB_BLUE);

    while (1) {}
}
