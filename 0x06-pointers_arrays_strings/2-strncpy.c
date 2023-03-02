#include "main.h"

/**
 * *_strncpy - functions that copies a string
 * @dest: first character input
 * @src: second character input
 * @n: third input digit
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i++] = '\0';
		}
	}

	return (dest);
}
