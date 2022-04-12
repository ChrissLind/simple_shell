#include "shell.h"
#define unused __attribute__((unused))

/**
 * main - Function for getting the command prompt and waiting for command.
 * @argc: Argument.
 * @argv: Arugment array.
 * @envp: Environment variable.
 *
 * Return: 0
 */
int main(unused int argc, unused char *argv[], char *envp[])
{
	char **command, *lineptr = NULL, *path = NULL, *string = NULL;
	size_t n;

	while (1)
	{
		if (isatty(0))
		{
			write(1, "$ ", 2);
		}
		if (getline(&lineptr, &n, stdin) == -1)
		{
			free(lineptr);
			break;
		}
		if (_verifier(lineptr, envp) == 0)
		{
			free(lineptr);
			lineptr = NULL;
			continue;
		}
		if (_strcmp(lineptr, "exit\n") == 0)
		{
			free(lineptr);
			exit(0);
		}
		else
		{
			path = _getpath(envp, "PATH");
			command = _tokenizer(lineptr, " \n");
			string = _dirmatch(path, command[0]);
			free(path);
			path = NULL;
			free(lineptr);
			lineptr = NULL;
			_exec(string, command, envp);
		}
	}
	return (0);
}
