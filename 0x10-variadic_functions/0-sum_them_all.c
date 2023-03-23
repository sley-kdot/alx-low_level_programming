#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all -  returns the sum of all its parameters.
* @n: number of arguments
*
* Return: sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list sum_args;

	va_start(sum_args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		result += va_arg(sum_args, int);

	va_end(sum_args);
	return (result);
}
