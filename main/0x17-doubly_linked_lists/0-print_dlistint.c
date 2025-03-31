#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: head to dlistint_t list
 * Return: lenght of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	int data = 0;

	while (h != NULL)
	{
		data = h->n;
		h = h->next;
		printf("%d\n", data);
		i++;
	}
	return (i);
}
