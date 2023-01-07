#include "hash_tables.h"
/**
 * key_index - uses djb2 algorithm for creating index for a key
 * @key: key string to be used for hashing
 * @size: size of the array
 * Return: index to array to store key/value pair in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);

	index = hash % size;

	return (index);
}
