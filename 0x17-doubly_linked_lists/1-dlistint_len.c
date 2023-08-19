#include "lists"

/**
 * dlistint_len - funct that returns the number of elements in dlistint_t list
 * @h: head of the list
 * Return: lengtg of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
