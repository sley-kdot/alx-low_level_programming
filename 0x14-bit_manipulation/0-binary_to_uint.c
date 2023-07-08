#include "main.h"

/**
 * binary_to_uint - function that converts binary number to an unsigned int
 * @b: a pointer to a string og binary values
 * Return: the converted number || 0 if otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (; b[i]; i++)
	{
		if ((b[i] < '0') || (b[i] > '1'))
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
