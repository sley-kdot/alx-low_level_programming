#include "main.h"

/**
 * _print_rev_recursion - function that returns the length of a string
 * @s: input
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
