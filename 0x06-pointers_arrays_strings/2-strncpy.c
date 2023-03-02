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
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
