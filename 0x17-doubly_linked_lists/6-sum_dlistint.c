#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: pointer of the linked list
 * Return: sum of data n in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
