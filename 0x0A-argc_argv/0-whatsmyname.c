#include <stdio.h>

/**
* main - entry point
* Description: prints its name, followed by newline.
* @argc: argument counter
* @argv: argument vector
* Return: Always 0 (success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
