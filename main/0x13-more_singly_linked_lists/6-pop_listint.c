#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list.
* @head: a pointer to the head of the list.
*
* Return: head node data.
*/
int pop_listint(listint_t **head)
{
	listint_t *item;
	int data;

	if (*head == NULL)
		return (0);

	item = *head;
	data = item->n;
	*head = item->next;
	free(item);

	return (data);
}
