#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a index
 * @h: pointer for the linked list
 * @idx: posisiton new node should be
 * @n: data for the struct for the new_node
 * Return: pointer of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		add_dnodeint_end(h, n);

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp->next->prev = new_node;

	return (new_node);
}
