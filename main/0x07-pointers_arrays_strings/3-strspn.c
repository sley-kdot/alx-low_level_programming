#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length  of  a prefix substring
 * @s: first input character (pointer)
 * @accept: second input character (pointer)
 * Return: Return the number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
