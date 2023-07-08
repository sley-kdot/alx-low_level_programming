#include "main.h"

/**
 * print_binary - funt. that prints the binary representation of a number
 * @n: number to be represented as binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int tempVar;

	if (n > 1)
	{
		tempVar = (n >> 1);
		print_binary(tempVar);
	}
	_putchar((n & 1) + '0');
}
