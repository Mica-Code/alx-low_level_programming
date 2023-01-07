#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * If there is collision, adds it to indexed linked list
 * @ht: pointer to hash table
 * @key: used to get the index with the hash function
 * @value: value to be added alongside the key to hash table
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;


	/* get index */
	index = key_index((unsigned char *) key, ht->size);
	if (!ht || !key || *key == '\0')
		return (0);

	/* create node to add */
	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	/* check if index is occupied */
	current_node = ht->array[index];

	if (current_node == NULL) /* index is empty, key non-existent */
	{
		/* add to table */
		ht->array[index] = new_node;
		return (1);
	}
	else
		collision_h(ht, index, new_node);
	return (1);
}

/**
 * collision_h - uses chaining method to handle collisions
 * in the hash table
 * @ht: pointer to hash table
 * @index: index of array that holds the linked list; recipient of new node
 * @node: new node to be added to linked list
 * Return: nothing
 */
void collision_h(hash_table_t *ht, unsigned long int index, hash_node_t *node)
{
	hash_node_t *head;

	head = ht->array[index];

	ht->array[index] = add_node_to_chain(head, node);
}
/**
 * add_node_to_chain - adds node beginning of linked list
 * @head: pointer to head of linked list
 * @node: new node to be added
 * Return: pointer to head of linked list
 */
hash_node_t *add_node_to_chain(hash_node_t *head, hash_node_t *node)
{
	hash_node_t *list_head, *temp;

	if (!head)
	{
		list_head = create_node(node->key, node->value);
		head = list_head;
		return (head);
	}

	else
	{
		temp = head;
		while (temp)
		{
			if (strcmp(temp->key, node->key) == 0)
			{
				break;
			}
			temp = temp->next;
		}
		if (temp == NULL)
		{
			node->next = head;
			head = node;
		}
		else
		{
			free(temp->value);
			temp->value = strdup(node->value);
			free_node(node);
		}
	}

	return (head);
}

/**
 * create_node - creates new node for array or linked list
 * @key: key of node
 * @value: value of node
 * Return: new node created
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;


	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free_node(new_node);
		return (NULL);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free_node(new_node);
		return (NULL);
	}
	if (value == NULL)
		new_node->value = "";
	else
		new_node->value = strdup(value);

	new_node->next = NULL;

	return (new_node);
}
