#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: pointer to the key in hash_node_t
 * @value: pointer to the value in hash_node_t
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *v_dup;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));

	node->key = strdup(key);
	v_dup = strdup(value);

	if (node->key == NULL)
	{
		free(node);
		free(v_dup);
		return (0);
	}
	node->value = v_dup;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
