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

	while (count <= 50)
	{
		if (count == 50)
			printf("%lu \n", fibonacci);
		else
			printf("%lu, ", fibonacci);

		first = second;
		second = fibonacci;

		fibonacci = first + second;
		count++;
	}
	return (0);
}
