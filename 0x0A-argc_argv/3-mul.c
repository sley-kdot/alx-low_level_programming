#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* Description: multiples two numbers.
* @argc: argument counter
* @argv: argument vector
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
