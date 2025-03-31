#include "hash_tables.h"
/**
 * create_node - Creates a new hash node.
 * @key: The key of the new node.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to update.
 * @key: The key of the element.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, **arr, *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	arr = ht->array;
	temp = arr[idx];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	node = create_node(key, value);

	if (node == NULL)
		return (0);

	if (arr[idx] != NULL)
	{
		node->next = arr[idx];
		arr[idx] = node;
	}
	else
		arr[idx] = node;

	return (1);
}

