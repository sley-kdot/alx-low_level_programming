#include <stdio.h>

/**
* main - entry point
* Description: prints the number of arguments passed into it.
* @argc: argument counter
* @argv: argument vector

* Return: Always 0 (success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
