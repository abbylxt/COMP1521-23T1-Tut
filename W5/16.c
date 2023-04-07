#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    int mask = 0x01;
    int value = 12;
    char string[5];
    for (int index = 3; index >= 0; index--) {
        int temp = value & mask;
        if (temp == 1) {
            string[index] = '1';
        } else {
            string[index] = '0';
        }
        value = value >> 1;
    }

    return EXIT_SUCCESS;
}