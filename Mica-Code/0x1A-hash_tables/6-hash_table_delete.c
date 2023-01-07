#include "hash_tables.h"

/**
 * hash_table_delete - frees/deletes a hash table
 * @ht: pointer to hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	free_table(ht);
}
