#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: single input character
 */

void rev_string(char *s)
{
	int count, i;

	count = strlen(s);

	for (i = (count - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
