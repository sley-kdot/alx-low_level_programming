#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: The hash table to search.
 * @key: The key to look up.
 *
 * Return: The value associated with the given key, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp, **arr;
	unsigned long int idx;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || key[0] == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	arr = ht->array;
	temp = arr[idx];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
