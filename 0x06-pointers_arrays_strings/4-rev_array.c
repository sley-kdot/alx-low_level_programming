#include <stdio.h>
#include "main.h"
/**
* reverse_array - reverses the content of an array of integers
* @a: input
* @n: input
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;

	char store;

	for (i = 0; i < (n / 2); i++)
	{
		store = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = store;
	}
}
