#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the hashfunction
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *h_table_p;

	h_table_p = malloc(sizeof(hash_table_t));
	if (h_table_p == NULL)
		return (NULL);

	h_table_p->array = malloc(sizeof(hash_node_t *) * size);

	if (h_table_p->array == NULL)
		return (NULL);
	h_table_p->size = size;

	for (i = 0; i < size; i++)
	{
		h_table_p->array[i] = NULL;
	}
	return (h_table_p);
}
