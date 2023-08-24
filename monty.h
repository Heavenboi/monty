#ifndef MONTY_H
#define MONTY_H

#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void check_arguments(int argc);
void get_stream_fail(char *filename);
void get_stream(char *filename);
void init_args(void); /* Initialize arguments structure */
void malloc_failed(void);
FILE *fdopen(int fd, const char *mode);
void token(void);
/* void file_accessible(char *filename) */

/**
 * struct stack_s - Stack structure
 * @n: Integer value stored in the node
 * @next: Pointer to the next element in the stack
 */
struct stack_s
{
    int n;
    struct stack_s *next;
};

/**
 * struct instruction_s - Function pointers for Monty bytecode instructions
 * @opcode: The operation code
 * @f: Function pointer to the corresponding function
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(struct stack_s **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_check - Arguments structure
 * @stream: File stream
 * @line: Line buffer
 */
typedef struct arg_check
{
    FILE *stream;
    char *line;
    unsigned int line_num;
    int tokens_memory;
    char **tokens;
    instruction_t *instruction;
    int n_token;
} arg_t;

extern arg_t *arguments;

#endif /* MONTY_H */

