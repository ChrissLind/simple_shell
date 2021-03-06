#include "shell.h"

/**
 * _printenv - Prints the environment.
 * @envp: Environment variable.
 *
 * Return: 0
 */
int _printenv(char *envp[])
{
	int i, n;

	for (i = 0; envp[i] != NULL; i++)
	{
		n = _strlen(envp[i]);
		write(1, envp[i], n);
		_putchar('\n');
	}
	return (0);
}
