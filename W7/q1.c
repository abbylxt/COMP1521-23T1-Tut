
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    int num1 = 30000; 
    int num2 = 30000;
    int16_t result = num1 + num2;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", result);

    return EXIT_SUCCESS;
}