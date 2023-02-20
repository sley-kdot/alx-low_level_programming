#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - Entry point
 * Description: Program that will assign numbers to varible n
 * each time it is executed.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n >= 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
