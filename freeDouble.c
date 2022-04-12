#include "shell.h"

/**
 * _free_double - Function that only free's if the token is not NULL.
 * @token: Token made by strtok.
 *
 * Return: 0
 */
int _free_double(char **token)
{
	if (token != NULL)
	{
		free(token[0]);
		token[0] = NULL;
		free(token);
		token = NULL;
	}
	return (0);
}
