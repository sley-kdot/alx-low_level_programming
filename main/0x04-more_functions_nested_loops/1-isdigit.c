#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit
 * @c: Single digit input
 * Return: 1 if c is a digit,otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
