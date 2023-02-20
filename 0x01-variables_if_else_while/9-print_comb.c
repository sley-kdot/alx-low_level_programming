#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit num
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i; j < 10; j++)
	{
		putchar(i)
