#include "main.h"
#include <string.h>

/**
 * *_strstr - function that locates  a substring
 * @haystack: first input char (pointer)
 * @needle: second input char (pointer)
 * Return: a pointer to the beginning of the located substring, or NULL
 * + if the substringis not found
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
