#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    float a = 0b00000000000000000000000000000000; // 2^-127
    float b = 0b10000000000000000000000000000000; // -2^-127
    float c = 0b00111111110000000000000000000000; // 1.5
    float f = 0b01000000001100000000000000000000; // 2.75

    printf("%lf\n", a);
    printf("%lf\n", b);
    printf("%lf\n", c);
    printf("%lf\n", f);


    return EXIT_SUCCESS;
}