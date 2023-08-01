#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data in a linked list
 * @head: pointer pointing to the linked list
 * Return: int, sum of int elements in a list
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = head;
		while (temp)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}

