#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;
	alpha = 'a';

	while (alpha <= 'z')
	{
		purchar(alpha);
		alpha++;
	}

	return 0;
}
