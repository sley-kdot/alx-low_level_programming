#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head: a pointer of the head of the list
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
