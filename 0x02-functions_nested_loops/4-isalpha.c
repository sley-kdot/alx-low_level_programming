#include "main.h"
/**
 * _isalpha - function that checks for lower or uppercase character
 * @c: single letter input
 * Return: 1 if int c is lower or uppercase , 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
