#include "lists.h"

/**
 * listint_len: a function that counts the number of element
 * @h: a input header file
 * Return: Int is returned
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i = 0;
	

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
