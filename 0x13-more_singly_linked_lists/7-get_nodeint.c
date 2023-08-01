#include "lists.h"

/**
 * listint_t - a function that returns the nth node in a linked list
 * @head: pointer pointing to the linked list
 * @index: input nth node
 * Return: An address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	unsigned int i = 0;

	nth_node = head;

	if (nth_node == NULL)
	{
		return (NULL);
	}
	nth_node = head;
	while (i < index)
	{
		nth_node = nth_node->next;
		i++;
	}
	return (nth_node);
}
