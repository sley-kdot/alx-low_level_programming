#include "main.h"

/**
 * get_endianness - func. checks the endianness
 * Return: 0 if bing endian, 1 if little endian
 */

int get_endianness(void)
{
	char *c;
	int num = 1;

	c = (char *)(&num);

	if (*c)
		return (1);
	else
		return (0);
}
