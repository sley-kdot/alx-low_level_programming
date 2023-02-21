#include "main.h"
/**
 * print_to_98 - Functions that print all natural num from n to 98
 * @n: single digit input
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
