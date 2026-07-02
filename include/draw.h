#pragma once

#include <stdint.h>

typedef uint16_t color_t;
typedef struct {
    int16_t x;
    int16_t y;
} point_t;

point_t point(int16_t, int16_t);
void draw_pixel(point_t, color_t);
void draw_line(point_t, point_t, color_t);
