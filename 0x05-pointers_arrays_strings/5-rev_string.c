#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: single input character
 */

void rev_string(char *s)
{
	int len = 0, i;
	char store;
	
	len = strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		store = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = store;
	}
	printf("%s", s);
	_putchar('\n');
}
