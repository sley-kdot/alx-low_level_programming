#include "main.h"
#include <string.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: first input character (pointer)
 * @accept: second input character (pointer)
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
