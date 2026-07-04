#include "letters.h"
#include "draw.h"
#include "gba.h"
#include <stdint.h>

static const line_t D_lines[] = {
    { .start = {0, 0}, .end = {0, 50} },
    { .start = {0, 50}, .end = {10, 50} },
    { .start = {10, 50}, .end = {20, 40} },
    { .start = {20, 40}, .end = {20, 10} },
    { .start = {20, 10}, .end = {10, 0} },
    { .start = {10, 0}, .end = {0, 0} },
};
static const line_t E_lines[] = {
    { .start = {0, 0}, .end = {0, 50} },
    { .start = {0, 0}, .end = {20, 0} },
    { .start = {0, 25}, .end = {20, 25} },
    { .start = {0, 50}, .end = {20, 50} },
};
static const line_t H_lines[] = {
    { .start = {0, 0}, .end = {0, 50} },
    { .start = {0, 25}, .end = {20, 25} },
    { .start = {20, 0}, .end = {20, 50} },
};
static const line_t L_lines[] = {
    { .start = {0, 0}, .end = {0, 50} },
    { .start = {0, 50}, .end = {20, 50} },
};
static const line_t O_lines[] = {
    { .start = {0, 0}, .end = {0, 50} },
    { .start = {20, 0}, .end = {20, 50} },
    { .start = {0, 50}, .end = {20, 50} },
    { .start = {0, 0}, .end = {20, 0} },
};
static const line_t R_lines[] = {
    { .start = {0, 0}, .end = {0, 50} },
    { .start = {0, 0}, .end = {20, 0} },
    { .start = {20, 0}, .end = {20, 25} },
    { .start = {20, 25}, .end = {0, 25} },
    { .start = {10, 25}, .end = {20, 50} },
};
static const line_t W_lines[] = {
    { .start = {0, 0}, .end = {5, 50} },
    { .start = {5, 50}, .end = {10, 0} },
    { .start = {10, 0}, .end = {15, 50} },
    { .start = {15, 50}, .end = {20, 0} },
};

#define LETTER(arr) { arr, sizeof(arr) / sizeof(arr[0]) }
const shape_t letters[26] = {
    [3]  = LETTER(D_lines),
    [4]  = LETTER(E_lines),
    [7]  = LETTER(H_lines),
    [11] = LETTER(L_lines),
    [14] = LETTER(O_lines),
    [17] = LETTER(R_lines),
    [22] = LETTER(W_lines),
};

static uint8_t letter_col = 0;
static uint8_t letter_row = 0;

void write_string(char string[], rgb555_t color) {
    for (size_t i = 0; string[i] != '\0'; i++) {
        char c = string[i];

        if (BASE_X_SKIP + letter_col * LETTER_X_SKIP >= LCD_WIDTH) {
            write_newline();
        }
        point_t offset = {
            BASE_X_SKIP + letter_col * LETTER_X_SKIP,
            BASE_Y_SKIP + letter_row * LETTER_Y_SKIP,
        };

        if (c >= 'a' && c <= 'z') {
            draw_shape(letters[c - 'a'], offset, color);
        } else if (c >= 'A' && c <= 'Z') {
            draw_shape(letters[c - 'A'], offset, color);
        }
        letter_col++;
    }
}

void write_newline() {
    letter_col = 0;
    letter_row++;
}

void reset_cursor() {
    letter_col = 0;
    letter_row = 0;
}
