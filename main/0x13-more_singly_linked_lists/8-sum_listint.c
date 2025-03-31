#include "lists.h"
/**
* sum_listint - function that returns the sum of all the data (n) of a
* listint_t linked list.
* @head: the pointer to the head od the list.
*
* Return: sum of all the elements in the list.
*/
int sum_listint(listint_t *head)
{
	listint_t *item;
	int sum_list = 0;

	if (head == NULL)
		return (0);

	item = head;

	while (item)
	{
		sum_list += item->n;
		item = item->next;
	}

	return (sum_list);
}
