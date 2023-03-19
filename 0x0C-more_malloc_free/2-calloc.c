#include "main.h"
#include <stdlib.h>

/**
* *_calloc - function that allocates memory for an array, using malloc
* @nmemb: input
* @size: input
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int i, len;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	len = (nmemb * size);

	point = malloc(len);

	if (point == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		point[i] = 0;

	return (point);
}
