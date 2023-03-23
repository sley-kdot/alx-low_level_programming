#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all -  prints anything.
* @format: list of types of arguments passed to the function
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	int n = 0;
	char *str;
	va_list list_args;

	va_start(list_args, format);
	while (format != NULL && format[n])
	{
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(list_args, int));
			break;
		case 'i':
			printf("%d", va_arg(list_args, int));
			break;
		case 'f':
			printf("%f", va_arg(list_args, double));
			break;
		case 's':
			str = va_arg(list_args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if ((format[n] == 'c' || format[n] == 'i' || format[n] == 'f' ||
			format[n] == 's') && format[(n + 1)] != '\0')
		printf(", ");
		n++;
	}
	va_end(list_args);
	printf("\n");
}
