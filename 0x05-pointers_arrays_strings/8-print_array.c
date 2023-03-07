#include "main.h"
#include <stdio.h>
/**
 * print_array - function thay prints n elements of an array of integer
 * @a: first input char
 * @n: second inpu digit
 */

void print_array(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
