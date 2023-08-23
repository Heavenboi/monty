#include "monty.h"

/**
 * malloc_failed - Handle malloc failure.
 *
 * This function is called when a memory allocation using malloc fails.
 * It prints an error message and terminates the program with EXIT_FAILURE.
 * It can be used to gracefully handle memory allocation errors.
 */

void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
	/*free_arguments();*/
	exit(EXIT_FAILURE);
}
