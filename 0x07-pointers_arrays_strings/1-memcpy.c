#include "main.h"
#include <string.h>

/**
 * *_memcpy - fucntion that copies memeory area
 * @dest: first input character (pointer)
 * @src: second input character (pointer)
 * @n: third input digit
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
