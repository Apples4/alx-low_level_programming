#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: pointer to the hashtable
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *next_node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			next_node = temp->next;
			free_node(temp);
			temp = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
