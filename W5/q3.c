#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    // first convert them to binary
    // Hint: each number in hex, represents four bits in binary

    uint16_t a = 0x5555;
    //       a = 0101 0101 0101 0101
    uint16_t b = 0xAAAA;
    //       b = 1010 1010 1010 1010
    uint16_t c = 0x0001;
    //       c = 0000 0000 0000 0001

    // a     = 0101 0101 0101 0101
    // b     = 1010 1010 1010 1010
    // a | b = 1111 1111 1111 1111
    printf("0x%X\n", a | b); // 0xFFFF

    // a     = 0101 0101 0101 0101
    // b     = 1010 1010 1010 1010
    // a & b = 0000 0000 0000 0000
    printf("0x%X\n", a & b); // 0x0

    // a     = 0101 0101 0101 0101
    // b     = 1010 1010 1010 1010
    // a ^ b = 1111 1111 1111 1111 = 0xFFFF
    printf("0x%X\n", a ^ b); // 0xFFFF

    // a     = 0101 0101 0101 0101
    // ~b    = 0101 0101 0101 0101
    // a & b = 0101 0101 0101 0101 = 0x5555
    printf("0x%X\n", a & ~b); //

    // c      = 0000 0000 0000 0001
    // c << 6 = 0000 0000 0100 0000 = 0x40
    printf("0x%X\n", c << 6); //

    // a      = 0101 0101 0101 0101
    // a >> 4 = 0000 0101 0101 0101 = 0x0555
    printf("0x%X\n", a >> 4); //

    // b            = 1010 1010 1010 1010
    // b << 1       = 0101 0101 0101 0100
    // a            = 0101 0101 0101 0101
    // a & (b << 1) = 0101 0101 0101 0100 = 0x5554
    printf("0x%X\n", a & (b << 1));

    // b            = 1010 1010 1010 1010
    // c            = 0000 0000 0000 0001
    // b | c        = 1010 1010 1010 1011 = 0xAAAB
    printf("0x%X\n", b | c);

    return EXIT_SUCCESS;
}