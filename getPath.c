#include "shell.h"

char *_getpath(char *envp[], char *name)
{
	char **buffer, *path;
	int i;
	int status;

	for (i = 0; envp[i] != NULL; i++)
	{
		buffer = _tokenizer(envp[i], "=");
		if (_strcmp(buffer[0], name) == 0)
		{
			path = malloc(sizeof(char) * _strlen(buffer[1]) + 1);
			_strcpy(path, buffer[1]);
			_free_double(buffer);
			return (path);
		}
	_free_double(buffer);
	}
	return (NULL);
}
