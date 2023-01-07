#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table in order
 * @ht: pointer to hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx;
	char *separation = "";

	if (ht == NULL)
		return;

	putchar('{');
	printf("%s", separation);

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];

		while (node)
		{
			printf("%s%s': '%s'", separation, node->key,
					node->value);
			separation = ", ";

			node = node->next;
		}
	}

	putchar('}');
	printf("\n");
}
