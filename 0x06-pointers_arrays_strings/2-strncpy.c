#include "main.h"
#include <string.h>
/**
 * *_strncpy - functions that copies a string
 * @dest: first character input
 * @src: second character input
 * @n: third input digit
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
