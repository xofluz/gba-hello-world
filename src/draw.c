#include <stdint.h>
#include "draw.h"
#include "gba.h"

void draw_pixel(point_t point, rgb555_t color) {
    if (point.x < 0 || point.x >= LCD_WIDTH || point.y < 0 || point.y >= LCD_HEIGHT) {
        return;
    }
    VRAM_PAGE0[point.x + point.y * LCD_WIDTH] = color;
}

void draw_line_low(line_t line, rgb555_t color) {
    point_t start = line.start;
    point_t end = line.end;
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
        point_t point = {x, y};
        draw_pixel(point, color);
        if (D > 0) {
            y = y + yi;
            D = D + (2 * (dy - dx));
        } else {
            D = D + 2*dy;
        }
    }
}

void draw_line_high(line_t line, rgb555_t color) {
    point_t start = line.start;
    point_t end = line.end;
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
        point_t point = {x, y};
        draw_pixel(point, color);
        if (D > 0) {
            x = x + xi;
            D = D + (2 * (dx - dy));
        } else {
            D = D + 2*dx;
        }
    }
}

void draw_line(line_t line, rgb555_t color) {
    point_t start = line.start;
    point_t end = line.end;
    uint16_t x0 = start.x;
    uint16_t x1 = end.x;
    uint16_t y0 = start.y;
    uint16_t y1 = end.y;

    if (__builtin_abs(y1 - y0) < __builtin_abs(x1 - x0)) {
        if (x0 > x1) {
            draw_line_low(swap_line(line), color);
        }
        else {
            draw_line_low(line, color);
        }
    } else {
        if (y0 > y1)
            draw_line_high(swap_line(line), color);
        else
            draw_line_high(line, color);
    }
}

line_t swap_line(line_t line) {
    line_t result = {
        .start = line.end,
        .end = line.start,
    };
    return result;
}

point_t add_points(point_t first, point_t second) {
    point_t sum = { first.x + second.x, first.y + second.y };
    return sum;
}

line_t translate_line(line_t line, point_t offset) {
    line_t translated_line = {
        .start = add_points(line.start, offset),
        .end   = add_points(line.end, offset),
    };
    return translated_line;
}

void draw_shape(shape_t shape, point_t offset, rgb555_t color) {
    for (size_t i = 0; i < shape.count; i++) {
        line_t translated_line = translate_line(shape.lines[i], offset);
        draw_line(translated_line, color);
    }
}
