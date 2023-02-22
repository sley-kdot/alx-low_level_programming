#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: single digit input
 * Return: 1 print '+' if n > 0, 0 print '0' if n == 0, -1 print '-' if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
