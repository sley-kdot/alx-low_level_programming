#include "main.h"

/**
 * print_square - function that prints a square
 * @size: single digit input
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
