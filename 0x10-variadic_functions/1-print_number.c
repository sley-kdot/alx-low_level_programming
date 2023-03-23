#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers, followed by a new line.
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list print_args;

	va_start(print_args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(print_args, int);
		printf("%d", result);

		if (separator && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(print_args);
	printf("\n");
}
