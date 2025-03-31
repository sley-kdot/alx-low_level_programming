#include "main.h"
#include "unistd.h"
/**
 * _putchar - entry point
 * @c: input
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
