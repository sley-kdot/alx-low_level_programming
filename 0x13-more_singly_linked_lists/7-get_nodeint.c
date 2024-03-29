#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: a pointer to the head of the list
* @index: nth number of the list
*
* Return: nth node || NULL if node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}

	return (head);
}
