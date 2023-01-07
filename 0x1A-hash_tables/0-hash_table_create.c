#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the table to be created
 * Return: pointer to new table on success, else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int idx;


	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	new_table->array = calloc(new_table->size, sizeof(hash_node_t *));
	if (!(new_table->array))
	{
		free_table(new_table);
		return (NULL);
	}
	for (idx = 0; idx < new_table->size; idx++)
	{
		new_table->array[idx] = NULL; /* set each head to NULL */
	}

	return (new_table);
}

/**
 * free_linked_list - frees the linked list in each array
 * @list_head: pointer to head of linked list
 * Return: nothing
 */
void free_linked_list(hash_node_t *list_head)
{
	hash_node_t *temp;

	while (list_head)
	{
		temp = list_head;
		list_head = list_head->next;
		free_node(temp);
	}
	free(list_head);
}

/**
 * free_table - frees a hash table
 * @table: pointer to table
 * Return: nothing
 */
void free_table(hash_table_t *table)
{
	unsigned long int idx;

	for (idx = 0; idx < table->size; idx++)
	{
		free_linked_list(table->array[idx]);
	}

	free(table->array);
	free(table);
}
/**
 * free_node - frees a node
 * @node: node to be freed
 * Return: nothing
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
