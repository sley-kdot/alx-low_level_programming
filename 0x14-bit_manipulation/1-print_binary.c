#include "main.h"
/**
* print_binary - prints the binary representationof a number
* @n: number to be represented as binary
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int temp;

	if (n > 1)
	{
		temp = (n >> 1);
		print_binary(temp);
	}
	_putchar((n & 1) + '0');
}
