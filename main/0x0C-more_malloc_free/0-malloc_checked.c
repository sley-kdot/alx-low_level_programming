#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - function that allocates memory using malloc.
* @b: input digit
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *prt;

	prt = malloc(b);

	if (prt == NULL)
		exit(98);

	return (prt);
}
