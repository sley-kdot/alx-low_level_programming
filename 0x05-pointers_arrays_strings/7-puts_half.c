#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line.
* @str: input string
*
* Return: void
*/
void puts_half(char *str)
{
	int i = 0, n, len = 0;

	while (str[i])
		len++;

	n = (len - 1) / 2 + 1;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
