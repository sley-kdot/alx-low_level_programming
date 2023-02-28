#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: charac input
 */

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
