#include "hash_tables.h"
/**
 * hash_table_create -  function that creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **arr;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	arr = calloc(sizeof(new_table->array), size);
	if (arr == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = arr;

	return (new_table);
}
