#include "lists.h"

/**
 * insert_nodeint_at_index - pointer to function
 * @head: input pointer, points to the beginning of the list
 * @idx: int position to place the node
 * @n: input to node
 * Return: an address to the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *idx_node, *new_node;
	unsigned int i = 0;

	if (head == NULL && *head == NULL)
		return (NULL);

	idx_node = *head ;
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->next = idx_node;
		new_node->n = n;
		*head = new_node;
		return (idx_node);
	}
	while (idx_node)
	{
		if (i + 1 == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->next = idx_node;

			new_node->n = n;
			idx_node = new_node;
			return (idx_node);
		}
		idx_node = idx_node->next;
		i++;
	}
	return (NULL);
}



