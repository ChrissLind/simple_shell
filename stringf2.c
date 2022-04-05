#include "shell.h"

char *_strchr(char *s, char c);
int _strspn(char *s, char *accept);
int _strcmp(char *s1, char *s2);

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first character being searched.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + index);
	}

	return (NULL);
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s.
 */
int _strspn(char *s, char *accept)
{
	int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
		}
		s++;
	}
	return (bytes);
}

/**
 * _strcmp - Compares two string.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: The difference of the strings or 0 if they match in length.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
		return (*s1 - *s2);

	return (0);
}
