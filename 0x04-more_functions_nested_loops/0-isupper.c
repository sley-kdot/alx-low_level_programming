#include "main.h"
#include <ctype.h>
/**
 * _isupper - functions that checks for upper character
 * @c: single digit input
 * Return: 1 if c is uppercase,otherwise 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
