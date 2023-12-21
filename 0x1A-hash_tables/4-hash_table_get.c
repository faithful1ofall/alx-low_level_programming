#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *fnode;
	unsigned long int findex;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	findex = key_index((const unsigned char *)key, ht->size);
	if (findex >= ht->size)
		return (NULL);

	fnode = ht->array[findex];
	while (fnode && strcmp(fnode->key, key) != 0)
		fnode = fnode->next;

	return ((fnode == NULL) ? NULL : fnode->value);
}
