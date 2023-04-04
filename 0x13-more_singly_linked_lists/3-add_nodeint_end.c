#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: head of the list
* @n: input digit to be added to the end of the list
*
* Return: address of the new element || NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *item, temp;

	/* allocate memory space for the node */
	item = malloc(sizeof(listint_t));

	if (item == NULL)
		return (NULL);

	/* assigning values to the node */
	item->n = n;
	item->next = NULL;
	temp = *head;
 
	if (*head == NULL)
	{
		*head = item;
		return (item);
	}
	
	/* traverse throught the list to get the address of the last node */
	while (temp->next)
		temp = temp->next;

	temp->next = item;

	return (item);
}
