#include "main.h"

/**
 * print_most_numbers - Functions that prints the numbers, from 0 to 9,
 * but do not print 2 and 4
 */

void print_most_numbers(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;

		if (num == 50 || num == 52)
		{

			num++
		}
	}
}
