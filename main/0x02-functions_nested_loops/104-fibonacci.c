#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 98 Fibonacci numbers starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 3;

	long int first = 1, second = 2;
	long int fibonacci = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 98)
	{
		if (count == 98)
			printf("%lu", fibonacci);
		else
			printf("%lu, ", fibonacci);

		first = second;
		second = fibonacci;

		fibonacci = first + second;
		count++;
	}
	putchar('\n');
	return (0);
}
