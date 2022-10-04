#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define MAX_ROWLENGTH 1024

int main (int argc, char *argv[]) {

    FILE *inputFile;

    // Code taken from inputfile.c
    if (argc == 1) {
        inputFile = stdin;
    }
    else if (argc == 2) {
        if ((inputFile = fopen(argv[1], "r")) == NULL) {
            perror(argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    else {
        fprintf(stderr, "This program takes 0-1 arguments \n");
        fprintf(stderr, "usage: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fclose(inputFile);
    .
}