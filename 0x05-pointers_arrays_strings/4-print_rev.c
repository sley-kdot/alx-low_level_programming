#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: charac input
 */

void print_rev(char *s)
{
	int count, i, j;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = (count - 1); j >= 0; j--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
