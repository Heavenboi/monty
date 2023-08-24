#include "monty.h"

void tokenization(void)
{
	int i = 0;
	char *delims = " \n", token = NULL, *linecpy = NULL;
	
	linecpy = malloc(sizeof(char) * (strlen(arguments -> line) + 1));
	strcpy(linecpy, arguments -> line);
	arguments -> tokens_memory = 0;
	token = strtok(linecpy, delims);
	
	while (token)
	{
		arguments -> tokens_memory += 1;
		token = strtok(NULL, delims);
	}
	
	arguments -> tokens_read = malloc(sizeof(char *) * (arguments -> tokens_memory + 1));
	strcpy(linecpy, arguments -> line);
	token = strtok(linecpy, delims);
	
	while (token)
	{
		arguments -> tokens_read[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (arguments -> tokens_read[i] == NULL)
			malloc_failed();
		strcpy(arguments -> tokens_read[i], token);
		token = strtok(NULL, delims);
		i++;
	}
	arguments -> tokens_read[i]= NULL;
	free(linecpy);
}

