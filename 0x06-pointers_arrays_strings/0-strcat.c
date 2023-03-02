#include "main.h"

/**
 * *_strcat - functions that concatenates two strings
 * @dest: first character input
 * @src: second character input
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *n = dest;

	while (*n != '\0')
	{
		n++;
	}

	while (*src != '\0')
	{
		*n = *src;
		n++;
		src++;
	}
	*n = '\0';

	return (dest);
}
