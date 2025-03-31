#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_strings - prints strings, followed by a new line.
* @separator: tring to be printed between the strings
* @n: number of strings passed to function
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list print_str;

	va_start(print_str, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print_str, char*);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (separator && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(print_str);
	printf("\n");
}
