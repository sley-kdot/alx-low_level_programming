#include "lists.h"

/**
 * add_dnodeint_end - funct that adds a new node at the end of a dlistint_t
 * list.
 * @head: head of the list
 * @n: vaulue to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;

	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = *head;
	}
	return (new);
}
