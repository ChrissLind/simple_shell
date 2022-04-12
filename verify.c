#include "shell.h"

/**
 * _verifier - Function that checks for 
 *
 * @string: String being passed.
 *
 * Return: 0
 */
int _verifier(char *string)
{
	int i;

	for (i = 0; i < _strlen(string); i++)
	{
		if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
			;
		else
		{
			return (1);
		}
	}
	return (0);
}
