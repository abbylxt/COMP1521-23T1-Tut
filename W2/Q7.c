// Code from https://cgi.cse.unsw.edu.au/~cs1521/23T1/tut/02/questions
// Print every third number from 24 to 42.
#include <stdio.h>

int main(void) {
    // Ver 0
    
    // This 'for' loop is effectively equivalent to a while loop.
    // i.e. it is a while loop with a counter built in.
    // for (int x = 24; x < 42; x += 3) {
    //     printf("%d\n", x);
    // }

    // Ver 1
    // int x = 24;

    // while (x < 42) {
    //     printf("%d\n", x);
    //     x += 3;
    // }

    // Ver 3
    int x = 24;

loop:
    if (x >= 42) goto end_loop;

    printf("%d", x);
    printf("\n");
    x = x + 3;
    goto loop;

end_loop:
    return 0;
}