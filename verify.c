#include "shell.h"

/**
 * _verifier - Function that checks for certian characters.
 *
 * @string: String being passed.
 * @envp: Environment variable.
 * Return: 0
 */
int _verifier(char *string, char **envp)
{
	int i;

	if (_strcmp(string, "env\n") == 0)
	{
		_printenv(envp);
		return (0);
	}
	else
	{
		for (i = 0; i < _strlen(string); i++)
		{
			if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
				;
			else
			{
				return (1);
			}
		}
	}
	return (0);
}
