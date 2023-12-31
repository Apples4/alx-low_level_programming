#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: pointer for hash_node_t of key
 * @size: size of the array
 * Return: hashcode or index of the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
