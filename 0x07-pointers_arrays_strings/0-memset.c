#include "main.h"
#include <string.h>

/**
 * *_memset - function that fills memory with a constant byte
 * @s: first input character
 * @b: second input character
 * @n: third input digit
 * Return: a point to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(*s, b, n));
}
