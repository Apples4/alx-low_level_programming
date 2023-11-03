#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves a value associated with a key
 * @ht: pointer to the struct table
 * @key: input to get the hashcode
 * Return: value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			break;
		temp = temp->next;
	}
	return (temp->value);
}
