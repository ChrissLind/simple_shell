#include "shell.h"

/**
 * _free_double - Function that only free's if the token is not NULL.
 * @token: Token made by strtok.
 *
 * Return: 0
 */
int _free_double(char **token)
{
	int i;

	if (token != NULL)
	{
		i = 0;
		while (token[i] != NULL)
		{
			i++;
		}
		free(token[i + 1]);
		token[i + 1] = NULL;
		free(token);
		token = NULL;
	}
	return (0);
}
