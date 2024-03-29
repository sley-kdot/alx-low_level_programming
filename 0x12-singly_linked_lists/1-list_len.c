#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* list_len -  returns the number of elements in a linked list_t list.
* @h: pointer to the list
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
