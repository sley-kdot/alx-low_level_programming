#include "main.h"
#include <string.h>

/**
 * *_strchr - function that locates a character string
 * @s: first input character (pointer)
 * @c: second input character (pointer)
 * Return: a point to the first char c in the string s, or NULL if the char
 * +is not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
