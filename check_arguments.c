i#include "monty.h"

/**
 * check_arguments- checkzs the number of arguments put by the user
 * @argc: argument counts
 *
 */

void check_arguments(int argc)
{
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

}
