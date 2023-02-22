#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: single digit input
 * Return: num (success)
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit - (-1 * digit);
	}

	_putchar(digit + '0');
	return (digit);
}
