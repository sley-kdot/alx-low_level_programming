#include <stdio.h>

/**
* main - entry point
* Description: prints all arguments it recieves.
* @argc: argument counter
* @argv: argument vector
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
