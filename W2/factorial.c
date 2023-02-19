// Code from https://cgi.cse.unsw.edu.au/~cs1521/23T1/tut/02/questions
// Simple factorial calculator - without error checking

#include <stdio.h>

int main(void) {
    int n;
    printf("n  = ");
    scanf("%d", &n);

    int fac = 1;
    for (int i = 1; i <= n; i++) {
        fac *= i;
    }

    printf("n! = %d\n", fac);
    return 0;
}