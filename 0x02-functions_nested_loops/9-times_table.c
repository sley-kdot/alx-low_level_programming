#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		if ((k / 10) > 0)
		{
			_putchar((k / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
		_putchar((k % 10) + '0');

		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

