#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: head of the list
* @n: input digit to be added to the list
*
* Return: address of the new element || NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *item;

	item = malloc(sizeof(listint_t));

	if (item == NULL)
		return (NULL);

	item->n = n;
	item->next = *head;
	*head = item;

	return (*head);
}
