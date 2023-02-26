// Code from https://cgi.cse.unsw.edu.au/~cs1521/23T1/tut/02/questions

// Squares a number, unless its square is too big for a 32-bit integer.
// If it is too big, prints an error message instead.

#include <stdio.h>

#define SQUARE_MAX 46340

int main(void) {
    int x, y;

    printf("Enter a number: ");
    scanf("%d", &x);

    // Note we don't use else as it is a keyword
    if (x <= SQUARE_MAX) goto else_if;
        
    printf("square too big for 32 bits\n");

    goto endif;

else_if:
    y = x * x;
    printf("%d\n", y);
    
endif:
    return 0;
}