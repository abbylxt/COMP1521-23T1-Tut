#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t six_middle_bits(uint32_t u) {
    uint32_t middle_six = u >> 13;
    middle_six = middle_six & 0x3F;
    return middle_six;
}

int main(void) {
    uint32_t num = 10000; // 0b00000000010011100010000

    printf("%d\n", num);
    printf("%d\n", six_middle_bits(num));

    return EXIT_SUCCESS;
}
