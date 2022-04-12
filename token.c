#include "shell.h"

/**
 * _tokenizer - Function that runs strtok through a string.
 * @string: String being passed.
 * @delim: The delimiter character(s) that we are giving strtok.
 *
 * Return: The tokens made.
 */
char **_tokenizer(char *string, char *delim)
{
	char **tokens;
	char *store;
	int i = 0;

	store = malloc(sizeof(char) * strlen(string) + 1);
	if (store == NULL)
	{
		return (NULL);
	}
	store = strcpy(store, string);
	tokens = malloc(sizeof(tokens));
	if (tokens == NULL)
	{
		return (NULL);
	}
	tokens[i] = strtok(store, delim);
	while (tokens[i] != NULL)
	{
		i++;
		tokens = realloc(tokens, (i + 1) * sizeof(tokens));
		if (tokens == NULL)
		{
			_free_double(tokens);
			return (NULL);
		}
		tokens[i] = strtok(NULL, delim);
	}
	return (tokens);
}
