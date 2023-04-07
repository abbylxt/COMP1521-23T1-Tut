#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define READING   0x01 // 0001
#define WRITING   0x02 // 0010
#define AS_BYTES  0x04 // 0100
#define AS_BLOCKS 0x08 // 1000
#define LOCKED    0x10 // 1010

int main(void) {
    unsigned char device = 0; // 0000 0000

    // Set to reading
    device = READING // 0001

    // Set to writing
    device = device | WRITING
    // 0001
    // 0010
    // 0011

    // Set to as_bytes
    device = device | AS_BYTES
    // Set to as_blocks
    device = device | AS_BLOCKS
    // Set to Locked


    return EXIT_SUCCESS
}