#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit num
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + ' ');
		putchar(',');
	}
	
	putchar('\n');

	return (0);
}
