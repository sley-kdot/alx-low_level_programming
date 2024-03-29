#include "main.h"
/**
 * set_bit - func. sets the value of the bit to 1 at a given index
 * @n: pointer to the number to be represented in binary
 * @index: index of the value to set
 * Return: 1 if it works || -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n |= (1 << index);

	return (1);
}
