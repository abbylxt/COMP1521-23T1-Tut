
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    // 10
    int dec = 10; 
    // hex counting: 0 1 2 ... 9 A B C D E F
    int hex = 0xA; // A = 1
    // oct counting: 0 1 2 ... 8
    int oct = 012; //  010 = 8 
                   //+ 002 = 2
                   //= 012 = 10
    int binary = 0b1010; // 2 (not portable) (not recommend to use in your code)
                         //0b1000 = 8
                         //0b0000 = 0
                         //0b0010 = 2
                         //0b0000 = 0
                         //0b1010 = 10
    // 127
    // int dec = 127; 
    // // hex counting: 0 1 2 ... 9 A B C D E F
    // int hex = 0x7F; // 0x70 = 7 * 16^1  = 112
    //                 // 0x0F = 15 * 16^0 = 15
    //                 // 0x7F = 7 * 16^1 + 15 * 16^0 = 112 + 15
    // // oct counting: 0 1 2 ... 8
    // int oct = 0177; //  0100 = 1 * 8 ^ 2 = 64 
    //                 //  0070 = 7 * 8 ^ 1 = 56
    //                 //  0007 = 7 * 8 ^ 0 = 7
    // int binary = 0b01111111; // 2 (not portable) (not recommend to use in your code)
    //                      //0b1000 = 1 * 2^3 = 8
    //                      //0b0100 = 1 * 2^2 = 4
    //                      //0b0010 = 1 * 2^1 = 2
    //                      //0b0001 = 1 * 2^0 = 1
    //                      // total = 15 = 0xF


    printf("%d\n", dec);
    printf("%d\n", hex);
    printf("%d\n", oct);
    printf("%d\n", binary);
    printf("0x%03X, 0%o\n", hex, oct);

    return EXIT_SUCCESS;
}