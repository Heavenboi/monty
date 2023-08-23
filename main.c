#include "monty.h"
#include <stdio.h>

int main(int argc, char  *argv[])
{
	/**
	 * declaring the argv so it doesnt go unused
	 */
	(void)argv;

/**
 * checking if the user has put 2 arguments
 */
	check_arguments(argc);
	
	return (0);
}
