#include "main.h"
#include <stdlib.h>

/**
* *array_range - function that creates an array of integers.
* @min: input
* @max: input
* Return: pointer
*/

int *array_range(int min, int max)
{
	int *point, size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	point = malloc(sizeof(*point) * size);

	if (point == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		point[i + min] = min;

	return (point);
}
