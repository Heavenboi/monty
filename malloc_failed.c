#include "monty.h"

void malloc_failed(void)
{
	dprintf(2,"Error: malloc failed\n");
	/*free_arguments();*/
	exit(EXIT_FAILURE);
}
