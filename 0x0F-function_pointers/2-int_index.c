#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: name of array
* @size: size of array
* @cmp: function pointer
*
* Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
