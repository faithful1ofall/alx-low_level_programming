#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *fht;
	unsigned long int f;

	fht = malloc(sizeof(hash_table_t));
	if (fht == NULL)
		return (NULL);

	fht->size = size;
	fht->array = malloc(sizeof(hash_node_t *) * size);
	if (fht->array == NULL)
		return (NULL);
	for (f = 0; f < size; f++)
		fht->array[f] = NULL;

	return (fht);
}
