#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *fhead = ht;
	hash_node_t *fnode, *ftmp;
	unsigned long int f;

	for (f = 0; f < ht->size; f++)
	{
		if (ht->array[f] != NULL)
		{
			fnode = ht->array[f];
			while (fnode != NULL)
			{
				ftmp = fnode->next;
				free(fnode->key);
				free(fnode->value);
				free(fnode);
				fnode = ftmp;
			}
		}
	}
	free(fhead->array);
	free(fhead);
}
