// Prints the square of a number
// Code from https://cgi.cse.unsw.edu.au/~cs1521/23T1/tut/02/questions

#include <stdio.h>

int main(void) {
    int x, y;

    printf("Enter a number: ");
    scanf("%d", &x);

    y = x * x;

    printf("%d\n", y);

    return 0;
}