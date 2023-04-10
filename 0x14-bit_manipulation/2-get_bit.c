#include "main.h"
/**
* get_bit - returns the value of a bit at a given index.
* @n: number to be represented in binary
* @index: index of the binary value to be returned
*
* Return: index || -1 if otherwise
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
