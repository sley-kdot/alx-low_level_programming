#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Functions that print all natural num from n to 98
 * @n: single digit input
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
					printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
	
}
