#include "main.h"
#include <stdlib.h>

/**
* *_strdup - function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter.
* @str: input char
* Return: char
*/

char *_strdup(char *str)
{
	char *prt;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	prt = (char *)malloc(sizeof(char) * (len + 1));

	if (prt == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		prt[i] = str[i];

	return (prt);
}
