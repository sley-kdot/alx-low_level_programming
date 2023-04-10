#include "main.h"
/**
* get_endianness - checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	char *c;
	int num = 1;

	c = (char *)(&num);

	if (*c == 1)
		return (0);

	return (1);
}
