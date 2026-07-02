#include <stdint.h>
#include "draw.h"
#include "gba.h"
#include "math.h"

point_t point(int16_t x, int16_t y) {
    point_t result = {.x=x, .y=y};
    return result;
}

void draw_pixel(point_t point, rgb555_t color) {
    VRAM_PAGE0[point.x + point.y * LCD_WIDTH] = color;
}

void draw_line_low(point_t start, point_t end, rgb555_t color) {
    uint16_t x0 = start.x;
    uint16_t x1 = end.x;
    uint16_t y0 = start.y;
    uint16_t y1 = end.y;

    int16_t dx = x1 - x0;
    int16_t dy = y1 - y0;
    int16_t yi = 1;
    if (dy < 0) {
        yi = -1;
        dy = -dy;
    }
    int16_t D = (2 * dy) - dx;
    uint16_t y = y0;

    for (uint16_t x = x0; x <= x1; x++) {
        draw_pixel(point(x, y), color);
        if (D > 0) {
            y = y + yi;
            D = D + (2 * (dy - dx));
        } else {
            D = D + 2*dy;
        }
    }
}

void draw_line_high(point_t start, point_t end, rgb555_t color) {
    uint16_t x0 = start.x;
    uint16_t x1 = end.x;
    uint16_t y0 = start.y;
    uint16_t y1 = end.y;

    int16_t dx = x1 - x0;
    int16_t dy = y1 - y0;
    int16_t xi = 1;
    if (dx < 0) {
        xi = -1;
        dx = -dx;
    }
    int16_t D = (2 * dx) - dy;
    uint16_t x = x0;

    for (uint16_t y = y0; y <= y1; y++) {
    draw_pixel(point(x, y), color);
        if (D > 0) {
            x = x + xi;
            D = D + (2 * (dx - dy));
        } else {
            D = D + 2*dx;
        }
    }
}

void draw_line(point_t start, point_t end, rgb555_t color) {
    uint16_t x0 = start.x;
    uint16_t x1 = end.x;
    uint16_t y0 = start.y;
    uint16_t y1 = end.y;

    if (abs(y1 - y0) < abs(x1 - x0)) {
        if (x0 > x1)
            draw_line_low(point(x1, y1), point(x0, y0), color);
        else
            draw_line_low(point(x0, y0), point(x1, y1), color);
    } else {
        if (y0 > y1)
            draw_line_high(point(x1, y1), point(x0, y0), color);
        else
            draw_line_high(point(x0, y0), point(x1, y1), color);
    }
}
