#include "monty.h"

void freeing_token_memo(void)
{
	int i = 0;

	if (arguments->tokens_read == NULL)
		return;

	while (arguments->tokens_read[i])
	{
		free(arguments->tokens_read[i]);
		i++;
	}
	free(arguments->tokens_read);
	arguments->tokens_read = NULL;
}
