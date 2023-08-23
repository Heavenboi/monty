#include "monty.h"

/**
 * get_stream_fail - Handles failure to open a file stream.
 *
 * Prints an error message and exits with failure status if a file stream
 * cannot be opened.
 *
 * @param filename: The name of the file that failed to open.
 */

void get_stream_fail(char *filename)
{
	dprintf(2, "Error: Can't open file %s\n", filename);
	/*check_arguments();*/
	exit(EXIT_FAILURE);
}

/**
 * get_stream - Opens a file stream for reading.
 *
 * Opens a file stream for reading based on the provided filename. If the
 * stream cannot be opened, it calls the get_stream_fail function.
 *
 * @param filename: The name of the file to be opened.
 */

void get_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		get_stream_fail(filename);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		get_stream_fail(filename);
	}
}
