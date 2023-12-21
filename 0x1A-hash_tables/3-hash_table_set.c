#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *fnew;
	char *fvalue_copy;
	unsigned long int index, f;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	fvalue_copy = strdup(value);
	if (fvalue_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (f = index; ht->array[f]; f++)
	{
		if (strcmp(ht->array[f]->key, key) == 0)
		{
			free(ht->array[f]->value);
			ht->array[f]->value = fvalue_copy;
			return (1);
		}
	}

	fnew = malloc(sizeof(hash_node_t));
	if (fnew == NULL)
	{
		free(fvalue_copy);
		return (0);
	}
	fnew->key = strdup(key);
	if (fnew->key == NULL)
	{
		free(fnew);
		return (0);
	}
	fnew->value = fvalue_copy;
	fnew->next = ht->array[index];
	ht->array[index] = fnew;

	return (1);
}
