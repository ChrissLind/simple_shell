#include "shell.h"

/**
 * _dirmatch - Matches directory.
 * @path: The path.
 * @input: Input.
 *
 * Return: 0
 */
char *_dirmatch(char *path, char *input)
{
	char **dir;
	char *command, *temp, storage[300], slash[77] = "/";
	int i;

	dir = _tokenizer(path, ":");

	temp = _strcat(slash, input);

	struct stat info;

	for (i = 0; dir[i] != NULL; i++)
	{
		_strcpy(storage, dir[i]);
		command = _strcat(storage, temp);

		if (stat(command, &info) == 0)
		{
			_free_double(dir);
			return (command);
		}
	}
	_free_double(dir);
	return (input);
}
