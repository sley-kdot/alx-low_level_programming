#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 48; j < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{

					putchar(i);
					putchar(j);
					if (i < 56)
					{
						putchar(',');
						putchar(' ');
					}		
		}
	}
	putchar('\n');
	return (0);
}
