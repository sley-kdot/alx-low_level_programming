#include "main.h"
/**
 * print_alphabet_x10 - functions that prints the alphabet x10 in lowercase
 */
void print_alphabet_x10(void)
{
	int count;
	char i;

	count = 1;
	while (count <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		count++;
		_putchar('\n');
	}
}
