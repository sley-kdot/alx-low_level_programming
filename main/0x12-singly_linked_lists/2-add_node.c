#include "lists.h"
/**
* add_node -  adds a new node at the beginning of a listint_t list.
* @head: head of the list
* @str: string to be added to list
*
* Return: address of new element || NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *item;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	item = malloc(sizeof(list_t));

	if (item == NULL)
		return (NULL);

	item->str = strdup(str);
	item->len = str_len;
	item->next = *head;
	*head = item;

	return (*head);
}
