#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        fflush(stderr);
        exit(EXIT_FAILURE);
    }
    else
    {
        const char *filename = argv[1];
        FILE *file = fopen(filename, "r");
        if (file == NULL)
        {
            fprintf(stderr, "Error: Can't open file %s: %s\n", filename, strerror(errno));
            exit(EXIT_FAILURE);
        }

        fclose(file);
    }
    return 0;
}