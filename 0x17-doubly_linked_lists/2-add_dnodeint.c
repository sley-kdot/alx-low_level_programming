#include "lists.h"

/**
 * add_dnodeint - funct that adds a new node at the beginning of a dlistint_t
 * list
 * @head: head of the list
 * @n: value to be added into the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
