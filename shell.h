#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <signal.h>
#include <fcntl.h>
#include <string.h>

/* String Functions */
int _strcmp(const char *s1, const char *s2);
char *_strcpy(char *dest, const char *src);
int _strlen(const char *s);
char *_strcat(char *dest, const char *src);

/* Main Functions */
char **_tokenizer(char *string, char *delim);
char *_getpath(char *envp[], char *name);
char *_dirmatch(char *path, char *input);
int _printenv(char *envp[]);
int _free_double(char **token);
int _exec(char *string, char **command, char **envp);
int _putchar(char c);
int _verifier(char *string);

#endif
