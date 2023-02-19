// Code from https://cgi.cse.unsw.edu.au/~cs1521/23T1/tut/02/questions
// Prints a right - angled triangle of asterisks, 10 rows high.

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}