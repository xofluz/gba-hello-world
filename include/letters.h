#pragma once

#include <stdint.h>

#include "draw.h"
#include "gba.h"

#define LETTER_X_SKIP 30
#define LETTER_Y_SKIP 60
#define BASE_X_SKIP 5
#define BASE_Y_SKIP 5

extern const shape_t letters[26];

void write_string(char string[], rgb555_t color);
void write_newline();
void reset_cursor();
