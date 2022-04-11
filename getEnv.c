#include "shell.h"

int _printenv(char *envp[])
{
	int i, n;

	for (i = 0; envp[i] != NULL; i++)
	{
		n = _strlen(envp[i]);
		write (1, envp[i], n);
		_putchar('\n');
	}
	return (0);
}
