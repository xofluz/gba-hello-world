#include "letters.h"

void draw_D(uint16_t x_offset, uint16_t y_offset, rgb555_t color) {
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

void draw_E(uint16_t x_offset, uint16_t y_offset, rgb555_t color) {
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

void draw_H(uint16_t x_offset, uint16_t y_offset, rgb555_t color) {
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

void draw_L(uint16_t x_offset, uint16_t y_offset, rgb555_t color) {
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

void draw_O(uint16_t x_offset, uint16_t y_offset, rgb555_t color) {
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

void draw_R(uint16_t x_offset, uint16_t y_offset, rgb555_t color) {
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

void draw_W(uint16_t x_offset, uint16_t y_offset, rgb555_t color) {
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
