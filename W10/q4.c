#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// Write a C program that creates a thread that infinitely prints some message provided 
// by main (eg. "Hello\n"), while the main (default) thread infinitely prints a different 
// message (eg. "there!\n").

void *thread_hello(void *message) {
    char *string = message;

    while (1) {
        sleep(1);
        printf("%s\n", string);
    }

    return NULL;
} 

int main(void) {
    char *message = "Hello\n";

    pthread_t thread;
    pthread_create(&thread, NULL, thread_hello, message);

    while (1) {
        sleep(1);
        printf("there\n");
    }

    return 0;
}