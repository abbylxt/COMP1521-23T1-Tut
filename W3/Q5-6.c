// A simple program that will read and print 5 numbers into an array

#define N_SIZE 5

#include <stdio.h>

int main(void) {
    int i;
    int numbers[N_SIZE] = {0};

    i = 0;

scan_loop:
    if (i >= N_SIZE) goto scan_loop_end;

    scanf("%d", &numbers[i]);
    i++;

    goto scan_loop;

scan_loop_end:

    i = 0;
    while (i < N_SIZE) {
        printf("%d\n", numbers[i]);
        i++;
    }

    return 0;
}