#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsignedlong)sizeof(a));
	printf("Size of a int: %lu bytes(s)\n", (unsignedlong)sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n", (unsignedlong)sizeof(c));
	printf("Size of a long long int: %lu bytes(s)\n", (unsignedlong)sizeof(d));
	printf("Size of a float: %lu bytes(s)\n", (unsignedlong)sizeof(f));
	return (0);
}
