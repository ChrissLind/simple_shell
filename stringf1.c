#include <shell.h>

int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);

/**
 * _strlen - Function that returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
	int length = 0;

	if (!s)
		return (length);
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (i);
}

/**
 * *_strcpy - Function that prints a string and copies it.
 * @src: String being printed.
 * @dest: Destination for string to be printed.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i >= '\0'; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
	}
	return (dest);
}

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *destTemp;
	const char *srcTemp;

	destTemp = dest;
	srcTemp = src;

	while (*destTemp != '\0')
		destTemp++;

	while (*srcTemp != '\0')
		*destTemp++ = *srcTemp++;
	*destTemp = '\0';
	return (dest);
}

/**
 * *_strncat - Function that concatenates two strings.
 * @src: Source.
 * @dest: Destination.
 * @n: n bytes to copy from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = _strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
