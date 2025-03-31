#include "main.h"
#include <stdlib.h>

/**
* *create_array - function that creates an array of chars,
* and initializes it with a specific char.
* @size: input digit
* @c: input character
* Return: a pointer || NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *prt;
	unsigned int i;

	if (size == 0)
		return (NULL);

	prt = (char *)malloc(size * sizeof(char));

	if (prt == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		prt[i] = c;

	return (prt);
}
