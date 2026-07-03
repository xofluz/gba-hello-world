#include "letters.h"
#include "draw.h"

int16_t get_x_offset(int16_t* x_idx) {
    return (*x_idx)++ * LETTER_X_SKIP + BASE_X_SKIP;
}
int16_t get_y_offset(int16_t* y_idx) {
    return *y_idx * LETTER_Y_SKIP + BASE_Y_SKIP;
}

void draw_D(int16_t x_offset, int16_t y_offset, rgb555_t color) {
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(0 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 50 + y_offset),
        point(10 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(10 + x_offset, 50 + y_offset),
        point(20 + x_offset, 40 + y_offset),
        color
    );
    draw_line(
        point(20 + x_offset, 40 + y_offset),
        point(20 + x_offset, 10 + y_offset),
        color
    );
    draw_line(
        point(20 + x_offset, 10 + y_offset),
        point(10 + x_offset, 0 + y_offset),
        color
    );
    draw_line(
        point(10 + x_offset, 0 + y_offset),
        point(0 + x_offset, 0 + y_offset),
        color
    );
}

void draw_E(int16_t x_offset, int16_t y_offset, rgb555_t color) {
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(0 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(20 + x_offset, 0 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 25 + y_offset),
        point(20 + x_offset, 25 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 50 + y_offset),
        point(20 + x_offset, 50 + y_offset),
        color
    );
}

void draw_H(int16_t x_offset, int16_t y_offset, rgb555_t color) {
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(0 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 25 + y_offset),
        point(20 + x_offset, 25 + y_offset),
        color
    );
    draw_line(
        point(20 + x_offset, 0 + y_offset),
        point(20 + x_offset, 50 + y_offset),
        color
    );
}

void draw_L(int16_t x_offset, int16_t y_offset, rgb555_t color) {
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(0 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 50 + y_offset),
        point(20 + x_offset, 50 + y_offset),
        color
    );
}

void draw_O(int16_t x_offset, int16_t y_offset, rgb555_t color) {
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(0 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(20 + x_offset, 0 + y_offset),
        point(20 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 50 + y_offset),
        point(20 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(20 + x_offset, 0 + y_offset),
        color
    );
}

void draw_R(int16_t x_offset, int16_t y_offset, rgb555_t color) {
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(0 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(20 + x_offset, 0 + y_offset),
        color
    );
    draw_line(
        point(20 + x_offset, 0 + y_offset),
        point(20 + x_offset, 25 + y_offset),
        color
    );
    draw_line(
        point(20 + x_offset, 25 + y_offset),
        point(0 + x_offset, 25 + y_offset),
        color
    );
    draw_line(
        point(10 + x_offset, 25 + y_offset),
        point(20 + x_offset, 50 + y_offset),
        color
    );
}

void draw_W(int16_t x_offset, int16_t y_offset, rgb555_t color) {
    draw_line(
        point(0 + x_offset, 0 + y_offset),
        point(5 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(5 + x_offset, 50 + y_offset),
        point(10 + x_offset, 0 + y_offset),
        color
    );
    draw_line(
        point(10 + x_offset, 0 + y_offset),
        point(15 + x_offset, 50 + y_offset),
        color
    );
    draw_line(
        point(15 + x_offset, 50 + y_offset),
        point(20 + x_offset, 0 + y_offset),
        color
    );
}
