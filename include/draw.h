#pragma once

#include <stdint.h>

#include "gba.h"

typedef struct {
    int16_t x;
    int16_t y;
} point_t;

point_t point(int16_t x, int16_t y);
void draw_pixel(point_t point, rgb555_t color);
void draw_line(point_t start, point_t end, rgb555_t color);
