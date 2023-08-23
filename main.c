#include "monty.h"

arg_t *arguments = NULL;

int main(int argc, char  *argv[])
{
	size_t n = 0;
/**
 * checking if the user has put 2 arguments
 */
	check_arguments(argc);
	init_args();
	get_stream(argv[1]);

	while (getline(&arguments -> line, &n, arguments -> stream) != -1)
	{
		printf("%s", arguments -> line);
	}


/*check if file is accessible*/
	
	/*int result = file_accessible(argv[1]);
	if(result != 0)
	{
		return EXIT_FAILURE;
	}*/

	return (0);
}
