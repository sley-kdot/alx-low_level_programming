#include "main.h"

/**
 * *_strncat - functions that copies a string
 * @dest: first character input
 * @src: second character input
 * @n: third input digit
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[co];
		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}
