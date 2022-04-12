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
	int i, flag;

	for (i = 0; i < _strlen(string); i++)
	{
		if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
			;
		else
		{
			flag = 1;
			break;
		}
	}
	return (flag);
}
