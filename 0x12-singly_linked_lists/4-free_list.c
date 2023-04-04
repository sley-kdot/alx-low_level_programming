#include "lists.h"
/**
* free_list - frees a list_t list.
* @head: a pointer to the head of the list
*
* Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (h)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}
}
