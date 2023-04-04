#include "lists.h"
/**
* insert_nodeint_at_index -  inserts a new node at a given position.
* @head: pointer to the head of a list.
* @idx: index of the list where the node should be added. starts at 0.
* @n: digit data to be added the to the list
*
* Return: address of the new node || NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *item, *temp;
	unsigned int i;

	temp = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
	}

	if (*head == NULL && idx != 0)
		return (NULL);

	item = malloc(sizeof(listint_t));

	if (item == NULL)
		return (NULL);

	item->n = n;

	if (idx == 0)
	{
		item->next = *head;
		*head = item;
	}
	else
	{
		item->next = temp->next;
		temp->next = item;
	}
	return (item);
}
