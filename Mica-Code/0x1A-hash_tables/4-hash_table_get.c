#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of key from hash table
 * @ht: pointer to hash table
 * @key: key parameter
 * Return: value of key, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((unsigned char *) key, ht->size);
	if (index > ht->size)
		return (NULL);

	node = ht->array[index];
	if (!node)
		return (NULL);

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
