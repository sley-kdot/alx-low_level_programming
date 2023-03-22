#include "function_pointers.h"
/**
* int_index - searches for an integer
* array: name of array
* @size: size of array
* @cmp: function pointer
*
* Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		while (i < size)
		{
			if (cmp(array[i] != 0)
			{
				return (i);
			}
		}

	}
	return (-1);
}
