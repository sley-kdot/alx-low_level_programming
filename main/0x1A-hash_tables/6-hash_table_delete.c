#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 *
 * Return: No return value (void).
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *t_next;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;

	while (idx < ht->size)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			t_next = temp->next;
			free(temp->value);
			free(temp->key);
			free(temp);
			temp = t_next;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}

