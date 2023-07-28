#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: input character
 * Return: elements of a string
 */
size_t list_len(const list_t *h)
{
	const list_t *pointer;
	size_t node = 0;

	pointer = h;
	while (pointer != NULL)
	{
		pointer = pointer->next;
		node++;
	}
	return (node);
}
