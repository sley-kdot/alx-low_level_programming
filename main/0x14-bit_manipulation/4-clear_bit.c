#include "main.h"

/**
 * clear_bit - func. sets the value of a bit to 0 at a given index
 * @n: a pointer to the binary values
 * @index: index of the values to be cleared
 * Return: 1 if it works || -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
