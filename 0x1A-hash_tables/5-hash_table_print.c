#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *fnode;
	unsigned long int f;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (f = 0; f < ht->size; f++)
	{
		if (ht->array[f] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			fnode = ht->array[f];
			while (fnode != NULL)
			{
				printf("'%s': '%s'", fnode->key, fnode->value);
				fnode = fnode->next;
				if (fnode != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
