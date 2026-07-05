#include <stdint.h>

#include "gba.h"
#include "letters.h"

void main(void) {
    REG_DISPCNT = MODE_3 | BG2_ENABLE;

    write_string("hello", RGB_GREEN);
    write_newline();
    write_string("world", RGB_BLUE);

    while (1) {}
}
