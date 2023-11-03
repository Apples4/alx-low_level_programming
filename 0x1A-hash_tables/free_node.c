#include "hash_tables.h"

/**
 * free_node - function to free the node
 * @node : input key to struct
 * Return: nothing
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
