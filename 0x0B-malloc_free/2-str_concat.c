#include "main.h"
#include <stdlib.h>
/**
* *str_concat - function that concatenates two strings.
* @s1: first input
* @s2: second input
* Return: a pointer
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *strout;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = (char *)malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
		free(strout);
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
	{
		strout[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		strout[k + l] = s2[l];
	}
	return (strout);
}
