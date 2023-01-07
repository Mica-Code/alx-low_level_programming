# ifndef HASH_TABLES_H
# define HASH_TABLES_H

/* Libraries */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* 0-hash_table_create.c */
void free_linked_list(hash_node_t *list_head);
void free_table(hash_table_t *table);
hash_table_t *hash_table_create(unsigned long int size);
void free_node(hash_node_t *node);

/* 1-djb2.c */
unsigned long int hash_djb2(const unsigned char *str);
/* 2-key_index.c hashing function*/
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* 3-hash_table_set.c */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void collision_h(hash_table_t *ht, unsigned long int index, hash_node_t *node);
hash_node_t *add_node_to_chain(hash_node_t *head, hash_node_t *node);
hash_node_t *create_node(const char *key, const char *value);

char *hash_table_get(const hash_table_t *ht, const char *key);

void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
# endif /* HASH_TABLES_H */
