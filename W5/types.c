
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    // 10
    int dec = 10; 
    int hex = 0x10; // 16
    int oct = 010; // 8
    int binary = 0b10; // 2 (not portable) (not recommend to use in your code)

    printf("%d\n", dec);
    printf("%d\n", hex);
    printf("%d\n", oct);
    printf("%d\n", binary);

    return EXIT_SUCCESS;
}