#include "shell.h"

/**
 * _exec - Runs the exec command.
 * @string: The string being passed.
 * @command: The command being entered.
 * @envp: Environment.
 *
 * Return: 0
 */
int _exec(char *string, char **command, char **envp)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve(string, command, envp))
		{
			_free_double(command);
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	if (pid > 0)
	{
		_free_double(command);
		wait(&status);
	}
	return (0);
}
