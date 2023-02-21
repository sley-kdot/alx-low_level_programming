#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit num
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
