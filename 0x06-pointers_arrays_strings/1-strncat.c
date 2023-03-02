#include "main.h"

/**
 * *_strncat - functions that concatenates two strings
 * @dest: first character input
 * @src: second character input
 * @n: third input digit
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *nm = dest;

	while (*nm != '\0')
	{
		nm++;
	}

	while (*src != '\0' && n-- > 0)
	{
		*nm = *src++;
	}
	*nm = '\0';

	return (dest);
}
