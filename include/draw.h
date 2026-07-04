#pragma once

#include <stdint.h>
#include <stddef.h>

#include "gba.h"

typedef struct {
    int16_t x;
    int16_t y;
} point_t;

typedef struct {
    point_t start;
    point_t end;
} line_t;

typedef struct {
    const line_t *lines;
    size_t count;
} shape_t;

void draw_pixel(point_t point, rgb555_t color);
void draw_line(line_t line, rgb555_t color);
void draw_shape(shape_t shape, point_t origin, rgb555_t color);

line_t swap_line(line_t line);
point_t add_points(point_t first, point_t second);
line_t translate_line(line_t line, point_t offset);
void draw_shape(shape_t shape, point_t offset, rgb555_t color);
