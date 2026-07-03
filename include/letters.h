#include <stdint.h>

#include "gba.h"

#define LETTER_X_SKIP 30
#define LETTER_Y_SKIP 60
#define BASE_X_SKIP 5
#define BASE_Y_SKIP 5

int16_t get_x_offset(int16_t* x_idx);
int16_t get_y_offset(int16_t* y_idx);

void draw_D(int16_t x_offset, int16_t y_offset, rgb555_t color);
void draw_E(int16_t x_offset, int16_t y_offset, rgb555_t color);
void draw_H(int16_t x_offset, int16_t y_offset, rgb555_t color);
void draw_L(int16_t x_offset, int16_t y_offset, rgb555_t color);
void draw_O(int16_t x_offset, int16_t y_offset, rgb555_t color);
void draw_R(int16_t x_offset, int16_t y_offset, rgb555_t color);
void draw_W(int16_t x_offset, int16_t y_offset, rgb555_t color);
