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
	int mul, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	if (argc != 3)
	{		
		printf("Error\n");
		return (1);
	}	
	printf("%d\n", mul);
	return (0);
}
