#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: single digit input
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; j <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
