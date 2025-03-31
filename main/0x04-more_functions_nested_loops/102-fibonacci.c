#include <stdio.h>>

int main(void)
{
	int i, next, first = 1, second = 2, count = 3;

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%d \n", next);
		}
		else
		{
			print("%d, ", next);
		}
		first = second;
		second = next;

		next = first + second;
		count++;
	}
	return (0);
}
