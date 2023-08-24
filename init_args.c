#include "monty.h"

/**
 * init_args - Initialize the arguments structure.
 *
 * This function allocates memory for the arguments structure,
 * initializes its members, and handles memory allocation failure.
 * It sets the stream and line members to NULL.
 */

void init_args(void)
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		malloc_failed();

	arguments ->instruction = malloc(sizeof(instruction_t));
	if (arguments -> instruction == NULL)
		malloc_failed();

	arguments->stream = NULL;
	arguments->line = NULL;
	arguments -> tokens_memory = 0;
	arguments -> line_num = 0;
}
