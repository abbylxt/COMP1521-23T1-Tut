#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void search_file(FILE *file, char *needle) {
    char line[8192];

    while (fgets(line, 8192, file) != NULL) {
        if (strstr(line, needle) != NULL) {
            fputs(line, stdout);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        fprintf(stderr, "Usage: %s <pattern> <file>...\n", argv[0]);
        exit(1);
    }
    if (argc == 2) {
        search_file(stdin, argv[1]);
    }
    if (argc > 2) {
        // argv[0] = progran
        // argv[1] = needle
        // argv[2+] = filenames
        for (int i = 2; i < argc; i++) {
            errno = 0;
            FILE *input = fopen(helloworld, "w");
            if (input == NULL) {
                fprintf(stderr, "Error file openning unsuccessful, errno = %d", errno);
                exit(2);
            }
            search_file(input, argv[1]);
            fclose(input);
        }
    }
}