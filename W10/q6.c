// Write a C program that creates a thread which infinitely prints the message 
// "feed me input!\n" once per second (sleep), while the main (default) thread 
// continuously reads in lines of input, and prints those lines back out to stdout 
// with the prefix: "you entered: ".

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *thread_run(void *data) {
    while (1) {
        printf("feed me input!\n");
        sleep(1);
    }
}

int main(void) {
    pthread_t thread;
    pthread_create(&thread, NULL, thread_run, NULL);

    char line [2048];
    while (fgets(line, 2048, stdin)) {
        printf("you entered: %s\n", line);
    }

    pthread_cancel(thread);

    return 0;
}