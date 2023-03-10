#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 50 Fibonacci numbers starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 3;

	long int first = 1, second = 2;
	long int fibonacci = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 50)
	{
		if (count == 50)
			printf("%lu \n", fibonacci);
		else
			printf("%lu, \n", fibonacci);

		first = second;
		second = fibonacci;

		fibonacci = first + second;
		count++;
	}
	putchar('\n');
	return (0);
}
