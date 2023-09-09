#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: Prints the entire hash table, including all key/value pairs.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp, **arr;
	unsigned long int idx = 0;
	int tag = 0;

	if (ht == NULL)
		return;
	putchar('{');
	arr = ht->array;

	while (idx < ht->size)
	{
		temp = arr[idx];
		if (tag == 1 && temp != NULL)
			printf(", ");

		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (temp != NULL)
				printf(", ");
			tag = 1;
		}
		idx++;
	}
	putchar('}');
	putchar('\n');
}

