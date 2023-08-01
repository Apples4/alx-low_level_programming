#include "lists.h"

/**
 * print_listint: function that  prints all the elements in linked list
 * @h: input pointer that point to the beginning of the node
 * Return: int sum of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}



