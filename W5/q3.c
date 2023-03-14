#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    // first convert them to binary
    // Hint: each number in hex, represents four bits in binary

    uint16_t a = 0x5555
    uint16_t b = 0xAAAA
    uint16_t c = 0x0001;

    // a     =
    // b     =
    // a & b =
    printf("%d\n", a | b); //
    printf("%d\n", a & b); //
    printf("%d\n", a ^ b); //
    printf("%d\n", a & ~b); //
    printf("%d\n", c << 6); //
    printf("%d\n", a >> 4); //
    printf("%d\n", a & (b << 1));
    printf("%d\n", );



    return EXIT_SUCCESS;
}