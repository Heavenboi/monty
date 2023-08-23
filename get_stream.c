#include "monty.h"

void get_stream_fail(char *filename)
{
	dprintf(2,"Error: Can't open file %s\n", filename);
	/*check_arguments();*/
	exit(EXIT_FAILURE);
}

void get_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		get_stream_fail(filename);

	arguments -> stream = fdopen(fd, "r");
	if (arguments -> stream == NULL)
	{
		close(fd);
		get_stream_fail(filename);
	}
}
