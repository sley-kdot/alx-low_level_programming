#include "lists.h"
/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: head of the list.
* @str: string to be added to the end of the list.
*
* Return: address of the new element || NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *item, *temp;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	item = malloc(sizeof(list_t));

	if (item == NULL)
		return (NULL);

	item->str = strdup(str);
	item->len = str_len;
	item->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = item;
		return (item);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = item;

	return (item);
}
